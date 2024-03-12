from migen import *
from litex.gen import *
from litex.soc.interconnect.csr import *

# Goals:
# - understand own to use external modules
# - understand seven segment display and create simple digit controller
# - understand how to multiplex displays
# - use python capabilities to create visual simulations

class Tick(LiteXModule):
    def __init__(self, sys_clk_freq, period):
        # Module's interface
        self.enable = Signal(reset=1) # input
        self.ce     = Signal()        # output

        # # #

        counter_preload = int(period*sys_clk_freq - 1)
        counter = Signal(max=int(period*sys_clk_freq - 1))

        # Combinatorial assignements
        self.comb += self.ce.eq(counter == 0)

        # Synchronous assignments
        self.sync += [
            If(~self.enable | self.ce,
                counter.eq(counter_preload)
            ).Else(
                counter.eq(counter - 1)
            )
        ]

# SevenSegment -------------------------------------------------------------------------------------

class SevenSegment(LiteXModule):
    def __init__(self):
        # Module's interface
        self.value   = value = Signal(4)         # input
        self.abcdefg = abcdefg = Signal(8)     # output
        # # #
        # Value to abcd segments dictionary.
        # Here we create a table to translate each of the 16 possible input
        # values to abdcefg segments control.
        #cases = {
         # 0x0: self.abcdefg.eq(0b00000011),
         # 0x1: self.abcdefg.eq(0b10011111),
         # 0x2: self.abcdefg.eq(0b00100101),
         # 0x3: self.abcdefg.eq(0b00001101),
          #0x4: self.abcdefg.eq(0b10011001),
          #0x5: self.abcdefg.eq(0b01001001),
          #0x6: self.abcdefg.eq(0b01000001),
          #0x7: self.abcdefg.eq(0b00011111),
          #0x8: self.abcdefg.eq(0b00000001),
          #0x9: self.abcdefg.eq(0b00001001),
          #0xa: self.abcdefg.eq(0b00010001),
          #0xb: self.abcdefg.eq(0b11000001),
          #0xc: self.abcdefg.eq(0b01100011),
          #0xd: self.abcdefg.eq(0b10000101),
          #0xe: self.abcdefg.eq(0b01100001),
          #0xf: self.abcdefg.eq(0b01110001)
        #}

        cases = {
          0x0: self.abcdefg.eq(0b11000000),
          0x1: self.abcdefg.eq(0b11111001),
          0x2: self.abcdefg.eq(0b10100100),
          0x3: self.abcdefg.eq(0b10110000),
          0x4: self.abcdefg.eq(0b10011001),
          0x5: self.abcdefg.eq(0b10010010),
          0x6: self.abcdefg.eq(0b10000010),
          0x7: self.abcdefg.eq(0b11111000),
          0x8: self.abcdefg.eq(0b10000000),
          0x9: self.abcdefg.eq(0b10010000),
          0xa: self.abcdefg.eq(0b10001000),
          0xb: self.abcdefg.eq(0b10000011),
          0xc: self.abcdefg.eq(0b11000110),
          0xd: self.abcdefg.eq(0b10100001),
          0xe: self.abcdefg.eq(0b10000110),
          0xf: self.abcdefg.eq(0b10001110)
        }
        

        # Combinatorial assignement
        self.comb += Case(value, cases)
        #pgfedcba

# SevenSegmentDisplay ------------------------------------------------------------------------------

class SevenSegmentDisplay(LiteXModule):
    def __init__(self, sys_clk_freq, pads_cs, pads_seg, cs_period=0.001):
        self._out0 = CSRStorage(4, description="display 0")
        self._out1 = CSRStorage(4, description="display 1")
        self._out2 = CSRStorage(4, description="display 2")
        self._out3 = CSRStorage(4, description="display 3")
        self._out4 = CSRStorage(4, description="display 4")
        self._out5 = CSRStorage(4, description="display 5")
        self._out6 = CSRStorage(4, description="display 6")
        self._out7 = CSRStorage(4, description="display 7")
        # Module's interface
        #self.values = Array(Signal(5) for i in range(8))  # input

        self.cs =  Signal(8)     # output
        #self.abcdefg = pads_seg # output

        #self.pads_cs = pads_cs
        #self.pads_seg = pads_seg

        # # #

        # Create our seven segment controller
        seven_segment = SevenSegment()
        self.submodules += seven_segment
        self.comb += pads_seg.eq(seven_segment.abcdefg)

        # Create a tick every cs_period
        self.submodules.tick = Tick(sys_clk_freq, cs_period)

        # Rotate cs 6 bits signals to alternate seven segments

        cs = Signal(8, reset=0b11111110)
        # Synchronous assigment
        self.sync += [
            If(self.tick.ce,     # At the next tick:
                cs[1].eq(cs[0]), # bit1 takes bit0 value
                cs[2].eq(cs[1]), # bit2 takes bit1 value
                cs[3].eq(cs[2]), # bit3 takes bit2 value
                cs[4].eq(cs[3]), # bit4 takes bit3 value
                cs[5].eq(cs[4]), # bit5 takes bit4 value
                cs[6].eq(cs[5]),  # bit0 takes bit5 value
                cs[7].eq(cs[6]), # bit5 takes bit4 value
                cs[0].eq(cs[7])  # bit0 takes bit5 value
            )
        ]
        # Combinatorial assigment
        self.comb += self.cs.eq(cs)
        self.comb += pads_cs.eq(self.cs)

        # cs to value selection.
        # Here we create a table to translate each of the 8 cs possible values
        # to input value selection.
        cases = {
            0b11111110 : seven_segment.value.eq(self._out0.storage),
            0b11111101 : seven_segment.value.eq(self._out1.storage),
            0b11111011 : seven_segment.value.eq(self._out2.storage),
            0b11110111 : seven_segment.value.eq(self._out3.storage),
            0b11101111 : seven_segment.value.eq(self._out4.storage),
            0b11011111 : seven_segment.value.eq(self._out5.storage),
            0b10111111 : seven_segment.value.eq(self._out6.storage),
            0b01111111 : seven_segment.value.eq(self._out7.storage)
        }
        # Combinatorial assigment
        self.comb += Case(cs, cases)