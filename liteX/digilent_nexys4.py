#!/usr/bin/env python3

#
# This file is part of LiteX-Boards.
#
# Copyright (c) 2021 Michael T. Mayers <michael@tweakoz.com>
# SPDX-License-Identifier: BSD-2-Clause

import math

from migen import *

from display import *

from litex.gen import *

from litex.build.io import CRG

from litex_boards.platforms import digilent_nexys4

from litex.soc.cores.clock import *
from litex.soc.integration.soc_core import *
from litex.soc.integration.soc import SoCRegion
from litex.soc.integration.builder import *
from litex.soc.cores.led import LedChaser
from litex.soc.interconnect import wishbone
from litex.soc.cores.gpio import GPIOIn

from litex.soc.integration.soc import colorer
from litex.soc.cores.video import VideoVGAPHY
from liteeth.phy.rmii import LiteEthPHYRMII
#from litex.soc.cores.usb import usb_fifo
from litex.soc.interconnect.csr import *
##FOR OUR TEST MANAGER
from litex.soc.interconnect.csr_eventmanager import *
#####

# CRG ----------------------------------------------------------------------------------------------

class _CRG(LiteXModule):
    def __init__(self, platform, sys_clk_freq):
        self.rst          = Signal()
        self.cd_sys       = ClockDomain()
        self.cd_sys2x     = ClockDomain()
        self.cd_sys2x_dqs = ClockDomain()
        self.cd_idelay    = ClockDomain()
        self.cd_eth       = ClockDomain()
        self.cd_vga       = ClockDomain()
        # # #

        self.pll = pll = S7MMCM(speedgrade=-1)
        self.comb += pll.reset.eq(~platform.request("cpu_reset") | self.rst)
        pll.register_clkin(platform.request("clk100"), 100e6)
        pll.create_clkout(self.cd_sys,       sys_clk_freq)
        pll.create_clkout(self.cd_sys2x,     2*sys_clk_freq)
        pll.create_clkout(self.cd_sys2x_dqs, 2*sys_clk_freq, phase=90)
        pll.create_clkout(self.cd_idelay,    200e6)
        pll.create_clkout(self.cd_eth,       50e6)
        pll.create_clkout(self.cd_vga,       40e6)
        platform.add_false_path_constraints(self.cd_sys.clk, pll.clkin) # Ignore sys_clk to pll.clkin path created by SoC's rst.

        self.idelayctrl = S7IDELAYCTRL(self.cd_idelay)

# CellularRAM (https://media.digikey.com/PDF/Data%20Sheets/Micron%20Technology%20Inc%20PDFs/MT45W8MW16BGX.pdf)

class CellularRAM(LiteXModule):
    def __init__(self, soc, platform):

        sys_clk_freq = soc.sys_clk_freq

        addr_width = 23
        data_width = 16

        delay_for_70ns = (70e-9) / (1.0/sys_clk_freq)
        delay_for_70ns = int(math.ceil(delay_for_70ns))+1

        #print("sys_clk_freq<%g> delay_for_70ns<%g>\n"%(sys_clk_freq,delay_for_70ns))

        self.bus = wishbone.Interface(data_width=data_width,adr_width=addr_width)

        self.delaycounter = Signal(5)

        cellram = platform.request("cellularram")
        addr = cellram.addr
        data = cellram.data
        wen = cellram.wen
        oen = cellram.oen
        cen = cellram.cen
        clk = cellram.clk
        cre = cellram.cre
        adv = cellram.adv # address valid (low)
        lb = cellram.lb
        ub = cellram.ub
        ########################
        tristate_data = TSTriple(data_width)
        self.specials += tristate_data.get_tristate(data)
        ########################
        i_rst = ResetSignal("sys")
        fsm = FSM(reset_state="RESET")
        fsm = ResetInserter()(fsm)
        self.fsm = fsm
        self.sync += fsm.reset.eq(i_rst)
        ########################
        fsm.act("RESET",
            NextState("INIT"))
        ########################
        fsm.act("INIT",
            NextValue(self.delaycounter,0),
            NextValue(self.bus.ack,0),
            NextValue(cen,1),
            NextValue(adv,1),
            NextValue(lb,1),
            NextValue(ub,1),
            NextValue(clk,0),
            NextValue(cre,0),
            NextValue(tristate_data.oe,0),
            NextState("IDLE"))
        ########################
        fsm.act("IDLE",
            If(self.bus.stb & self.bus.cyc,

                NextValue(lb,~self.bus.sel[0]), 
                NextValue(ub,~self.bus.sel[1]),

                NextValue(self.delaycounter,0),
                NextValue(cen,0),
                NextValue(adv,0),
                NextValue(addr,self.bus.adr[:addr_width]),
                If(self.bus.we,
                    NextValue(wen,0),
                    NextValue(oen,1),
                    NextValue(tristate_data.oe,1),
                    NextValue(tristate_data.o,self.bus.dat_w[:data_width]),
                    NextState("WRITE")
                ).Else(
                    NextValue(wen,1),
                    NextValue(oen,0),
                    NextValue(tristate_data.oe,0),
                    NextState("READ")
                )
            )
        )
        ########################
        fsm.act("WRITE",
            NextValue(self.delaycounter,self.delaycounter+1),
            If(self.delaycounter==delay_for_70ns,
                NextValue(self.bus.ack,1),
                NextState("INIT"))
        )
        ########################
        fsm.act("READ",
            NextValue(self.delaycounter,self.delaycounter+1),
            NextValue(self.bus.dat_r,tristate_data.i[:data_width]),
            If(self.delaycounter==delay_for_70ns,
                NextValue(self.bus.ack,1),
                NextState("INIT"))
        )
        ########################

def addCellularRAM(soc, platform, name, origin):
    size = 16*1024*1024
    ram_bus = wishbone.Interface(data_width=soc.bus.data_width)
    ram     = CellularRAM(soc,platform)
    soc.bus.add_slave(name, ram.bus, SoCRegion(origin=origin, size=size, mode="rw"))
    soc.check_if_exists(name)
    soc.logger.info("CELLULARRAM {} {} {}.".format(
        colorer(name),
        colorer("added", color="green"),
        soc.bus.regions[name]))
    setattr(soc.submodules, name, ram)

class Switches(LiteXModule):
    def __init__(self, pads):
        self.pads = pads
        self.n = len(pads)
        print(len(pads),"---------------------------------\n\n")
        #self._out = CSRStorage(len(pads), description="Switches Control registers")
        self._state_low = CSRStatus(len(pads)//2, description="Switches Status registers low bits")
        self._state_high = CSRStatus(len(pads)//2, description="Switches Status registers high bits")
        self.comb += [
            self._state_low.status.eq(pads[:self.n//2]),
            self._state_high.status.eq(pads[self.n//2:self.n])
        ]

class Button(GPIOIn):
    def __init__(self, pads, with_irq=True):
        self.pads = pads
        self.with_irq = with_irq
        super().__init__(self.pads, self.with_irq)

class Adder(LiteXModule):
    def __init__(self, width=32):
        self.bus = bus = wishbone.Interface(adr_width=3) #was 2

        # # Instantiate the Verilog adder module
        # self.specials += Instance("adder",
        #     i_clk = ClockSignal(),
        #     i_rst = ResetSignal(),
        #     i_wb_cyc = bus.cyc,
        #     i_wb_stb = bus.stb,
        #     i_wb_we  = bus.we,
        #     i_wb_adr = bus.adr,
        #     i_wb_dat_i = bus.dat_w,
        #     o_wb_ack   = bus.ack,
        #     o_wb_dat_o = bus.dat_r
        # )

        # Instantiate the Verilog adder module
        self.specials += Instance("adder",
            i_rst_i = ResetSignal(),
            i_clk_i = ClockSignal(),
            i_adr_i = bus.adr,
            i_dat_i = bus.dat_w,
            o_dat_o = bus.dat_r,
            i_sel_i = bus.sel,
            i_we_i  = bus.we,
            i_stb_i = bus.stb,
            o_ack_o = bus.ack,
            o_err_o = bus.err,
            i_cyc_i = bus.cyc
        )


def addAdder(soc, platform, name, origin):
    size = 5*4
    #adder_bus = wishbone.Interface(data_width=soc.bus.data_width)
    adder     = Adder()
    soc.bus.add_slave(name, adder.bus, SoCRegion(origin=origin, size=size, mode="rw"))
    soc.check_if_exists(name)
    soc.logger.info("ADDER {} {} {}.".format(
        colorer(name),
        colorer("added", color="green"),
        soc.bus.regions[name]))
    setattr(soc.submodules, name, adder)


        
# BaseSoC ------------------------------------------------------------------------------------------

class BaseSoC(SoCCore):
    def __init__(self, sys_clk_freq=75e6,
        with_led_chaser        = True,
        with_ethernet          = False,
        with_etherbone         = False,
        with_video_terminal    = False,
        #with_uart              = False,
        #with_usb               = False,
        with_video_framebuffer = False,
        **kwargs):
        platform = digilent_nexys4.Platform()
        platform.add_source("/home/casper/thesis_work/liteX/verilog_src/adder_v2.v")
        #platform.add_sources(path="/home/casper/thesis_work/liteX/verilog_src")
        #platform.add_source("adder.v") #maybe move it to the adder class

        # INTERRUPTS
        self.interrupt_map = {
            "button" : 3,
           # "my_uart" : 4,
        }
        self.interrupt_map.update(SoCCore.interrupt_map)


        # CRG --------------------------------------------------------------------------------------
        self.crg = _CRG(platform, sys_clk_freq)

        # USB --------------------------------------------------------------------------------------
        #if with_usb:
        #    self.usb = usb_fifo.USB_FIFO(platform.request("usb"), sys_clk_freq)
        #    self.add_wb_master(self.usb.debug_bridge.wishbone)

        # SoCCore ----------------------------------_-----------------------------------------------
        SoCCore.__init__(self, platform, sys_clk_freq, ident="LiteX SoC on Nexys4", **kwargs)

        # Cellular RAM -------------------------------------------------------------------------------
        addCellularRAM(self,platform,"main_ram", 0x40000000)
        # Adder
        addAdder(self,platform,"adder", 0x50000000)
        # UART -------------------------------------------------------------------------------------
        from litex.soc.cores.uart import UARTPHY
        from litex.soc.cores.uart import UART
        my_uart_pads = self.platform.request("my_uart_pads")
        my_uart_phy = UARTPHY(my_uart_pads, clk_freq=sys_clk_freq, baudrate=115200)
        my_uart = UART(my_uart_phy, tx_fifo_depth=16, rx_fifo_depth=16)
   

        #uart_instance = self.add_uart(name="my_uart")

        #uart = UARTCrossover(tx_fifo_depth=1, rx_fifo_depth=16, rx_fifo_rx_we=True)
        self.add_module(name="my_uart_phy",module=my_uart_phy)       
        self.add_module(name="my_uart",module=my_uart)
        self.irq.add("my_uart", use_loc_if_exists=True)

        # Ethernet / Etherbone ---------------------------------------------------------------------
        if with_ethernet or with_etherbone:
            self.ethphy = LiteEthPHYRMII(
                clock_pads = self.platform.request("eth_clocks"),
                pads       = self.platform.request("eth"))
            if with_ethernet:
                self.add_ethernet(phy=self.ethphy)
            if with_etherbone:
                self.add_etherbone(phy=self.ethphy)

        # Video ------------------------------------------------------------------------------------
        if with_video_terminal or with_video_framebuffer:
            self.videophy = VideoVGAPHY(platform.request("vga"), clock_domain="vga")
            if with_video_terminal:
                self.add_video_terminal(phy=self.videophy, timings="800x600@60Hz", clock_domain="vga")
            if with_video_framebuffer:
                self.add_video_framebuffer(phy=self.videophy, timings="800x600@60Hz", clock_domain="vga")

        # Leds -------------------------------------------------------------------------------------
        if with_led_chaser:
            self.leds = LedChaser(
                pads         = platform.request_all("user_led"),
                sys_clk_freq = sys_clk_freq)

        #7-seg -------------------------------------------------------------------------------------
        self.seg = SevenSegmentDisplay(
                sys_clk_freq = sys_clk_freq,
                pads_cs = platform.request_all("segled_an"),
                pads_seg = platform.request_all("segled_")
               # pads_seg = platform.request([
               #     "segled_ca","segled_cb","segled_cc","segled_cd","segled_ce","segled_cf","segled_cg","segled_dp"
               #     ])
                )
        # Switches ---------------------------------------------------------------------------------
        self.switches = Switches(
            pads =  platform.request_all("user_sw")
            )
          
        # Buttons ---------------------------------------------------------------------------------
        self.button = Button(
            pads =  platform.request("user_btn", 4),
            with_irq = True
            )
        # self.irq.add("Button_irq", use_loc_if_exists=True)
            # Add more button and switch pins as needed
        

# Build --------------------------------------------------------------------------------------------

def main():
    from litex.build.parser import LiteXArgumentParser
    parser = LiteXArgumentParser(platform=digilent_nexys4.Platform, description="LiteX SoC on Nexys4.")
    parser.add_target_argument("--sys-clk-freq", default=75e6, type=float, help="System clock frequency.")
    ethopts = parser.target_group.add_mutually_exclusive_group()
    ethopts.add_argument("--with-ethernet",         action="store_true", help="Enable Ethernet support.")
    ethopts.add_argument("--with-etherbone",        action="store_true", help="Enable Etherbone support.")
    sdopts = parser.target_group.add_mutually_exclusive_group()
    sdopts.add_argument("--with-spi-sdcard",        action="store_true", help="Enable SPI-mode SDCard support.")
    sdopts.add_argument("--with-sdcard",            action="store_true", help="Enable SDCard support.")
    viopts = parser.target_group.add_mutually_exclusive_group()
    viopts.add_argument("--with-video-terminal",    action="store_true", help="Enable Video Terminal (VGA).")
    viopts.add_argument("--with-video-framebuffer", action="store_true", help="Enable Video Framebuffer (VGA).")
    uarts = parser.target_group.add_mutually_exclusive_group()
    uarts.add_argument("--with-uart",         action="store_true", help="Enable UART crossover support.")
    args = parser.parse_args()

    soc = BaseSoC(
        sys_clk_freq           = args.sys_clk_freq,
        with_ethernet          = args.with_ethernet,
        with_etherbone         = args.with_etherbone,
        with_video_terminal    = args.with_video_terminal,
        #with_uart              = args.with_uart,
        with_video_framebuffer = args.with_video_framebuffer,
        **parser.soc_argdict
    )
    if args.with_spi_sdcard:
        soc.add_spi_sdcard()
    if args.with_sdcard:
        soc.add_sdcard()
    builder = Builder(soc, **parser.builder_argdict)
    if args.build:
        builder.build(**parser.toolchain_argdict)

    if args.load:
        prog = soc.platform.create_programmer()
        prog.load_bitstream(builder.get_bitstream_filename(mode="sram"))

if __name__ == "__main__":
    main()
