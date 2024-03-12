// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


//======================

void Vsim::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vsim::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vsim::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vsim::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
        vlTOPp->traceInitSub1(userp, tracep);
        vlTOPp->traceInitSub2(userp, tracep);
        vlTOPp->traceInitSub3(userp, tracep);
        vlTOPp->traceInitSub4(userp, tracep);
        vlTOPp->traceInitSub5(userp, tracep);
        vlTOPp->traceInitSub6(userp, tracep);
    }
}

void Vsim::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+929,"serial_sink_data", false,-1, 7,0);
        tracep->declBit(c+930,"serial_sink_ready", false,-1);
        tracep->declBit(c+931,"serial_sink_valid", false,-1);
        tracep->declBus(c+932,"serial_source_data", false,-1, 7,0);
        tracep->declBit(c+933,"serial_source_ready", false,-1);
        tracep->declBit(c+934,"serial_source_valid", false,-1);
        tracep->declBit(c+935,"sim_trace", false,-1);
        tracep->declBit(c+936,"sys_clk", false,-1);
        tracep->declBus(c+929,"sim serial_sink_data", false,-1, 7,0);
        tracep->declBit(c+2,"sim serial_sink_ready", false,-1);
        tracep->declBit(c+931,"sim serial_sink_valid", false,-1);
        tracep->declBus(c+3,"sim serial_source_data", false,-1, 7,0);
        tracep->declBit(c+933,"sim serial_source_ready", false,-1);
        tracep->declBit(c+4,"sim serial_source_valid", false,-1);
        tracep->declBit(c+988,"sim sim_trace", false,-1);
        tracep->declBit(c+936,"sim sys_clk", false,-1);
        tracep->declBus(c+5,"sim array_muxed0", false,-1, 29,0);
        tracep->declBus(c+6,"sim array_muxed1", false,-1, 31,0);
        tracep->declBus(c+7,"sim array_muxed2", false,-1, 3,0);
        tracep->declBit(c+8,"sim array_muxed3", false,-1);
        tracep->declBit(c+9,"sim array_muxed4", false,-1);
        tracep->declBit(c+10,"sim array_muxed5", false,-1);
        tracep->declBus(c+11,"sim array_muxed6", false,-1, 2,0);
        tracep->declBus(c+1,"sim array_muxed7", false,-1, 1,0);
        tracep->declBit(c+12,"sim bus_error", false,-1);
        tracep->declBus(c+13,"sim bus_errors", false,-1, 31,0);
        tracep->declBit(c+14,"sim bus_errors_re", false,-1);
        tracep->declBus(c+13,"sim bus_errors_status", false,-1, 31,0);
        tracep->declBit(c+15,"sim bus_errors_we", false,-1);
        tracep->declBus(c+16,"sim count", false,-1, 19,0);
        tracep->declBit(c+17,"sim cpu_rst", false,-1);
        tracep->declBus(c+18,"sim csr_bankarray_adr", false,-1, 5,0);
        tracep->declBus(c+19,"sim csr_bankarray_csrbank0_bus_errors_r", false,-1, 31,0);
        tracep->declBit(c+20,"sim csr_bankarray_csrbank0_bus_errors_re", false,-1);
        tracep->declBus(c+13,"sim csr_bankarray_csrbank0_bus_errors_w", false,-1, 31,0);
        tracep->declBit(c+15,"sim csr_bankarray_csrbank0_bus_errors_we", false,-1);
        tracep->declBus(c+21,"sim csr_bankarray_csrbank0_reset0_r", false,-1, 1,0);
        tracep->declBit(c+22,"sim csr_bankarray_csrbank0_reset0_re", false,-1);
        tracep->declBus(c+23,"sim csr_bankarray_csrbank0_reset0_w", false,-1, 1,0);
        tracep->declBit(c+24,"sim csr_bankarray_csrbank0_reset0_we", false,-1);
        tracep->declBus(c+19,"sim csr_bankarray_csrbank0_scratch0_r", false,-1, 31,0);
        tracep->declBit(c+25,"sim csr_bankarray_csrbank0_scratch0_re", false,-1);
        tracep->declBus(c+26,"sim csr_bankarray_csrbank0_scratch0_w", false,-1, 31,0);
        tracep->declBit(c+27,"sim csr_bankarray_csrbank0_scratch0_we", false,-1);
        tracep->declBit(c+28,"sim csr_bankarray_csrbank0_sel", false,-1);
        tracep->declBit(c+29,"sim csr_bankarray_csrbank1_en0_r", false,-1);
        tracep->declBit(c+30,"sim csr_bankarray_csrbank1_en0_re", false,-1);
        tracep->declBit(c+31,"sim csr_bankarray_csrbank1_en0_w", false,-1);
        tracep->declBit(c+32,"sim csr_bankarray_csrbank1_en0_we", false,-1);
        tracep->declBit(c+29,"sim csr_bankarray_csrbank1_ev_enable0_r", false,-1);
        tracep->declBit(c+33,"sim csr_bankarray_csrbank1_ev_enable0_re", false,-1);
        tracep->declBit(c+34,"sim csr_bankarray_csrbank1_ev_enable0_w", false,-1);
        tracep->declBit(c+35,"sim csr_bankarray_csrbank1_ev_enable0_we", false,-1);
        tracep->declBit(c+29,"sim csr_bankarray_csrbank1_ev_pending_r", false,-1);
        tracep->declBit(c+36,"sim csr_bankarray_csrbank1_ev_pending_re", false,-1);
        tracep->declBit(c+37,"sim csr_bankarray_csrbank1_ev_pending_w", false,-1);
        tracep->declBit(c+38,"sim csr_bankarray_csrbank1_ev_pending_we", false,-1);
        tracep->declBit(c+29,"sim csr_bankarray_csrbank1_ev_status_r", false,-1);
        tracep->declBit(c+39,"sim csr_bankarray_csrbank1_ev_status_re", false,-1);
        tracep->declBit(c+40,"sim csr_bankarray_csrbank1_ev_status_w", false,-1);
        tracep->declBit(c+41,"sim csr_bankarray_csrbank1_ev_status_we", false,-1);
        tracep->declBus(c+19,"sim csr_bankarray_csrbank1_load0_r", false,-1, 31,0);
        tracep->declBit(c+42,"sim csr_bankarray_csrbank1_load0_re", false,-1);
        tracep->declBus(c+43,"sim csr_bankarray_csrbank1_load0_w", false,-1, 31,0);
        tracep->declBit(c+44,"sim csr_bankarray_csrbank1_load0_we", false,-1);
        tracep->declBus(c+19,"sim csr_bankarray_csrbank1_reload0_r", false,-1, 31,0);
        tracep->declBit(c+45,"sim csr_bankarray_csrbank1_reload0_re", false,-1);
        tracep->declBus(c+46,"sim csr_bankarray_csrbank1_reload0_w", false,-1, 31,0);
        tracep->declBit(c+47,"sim csr_bankarray_csrbank1_reload0_we", false,-1);
        tracep->declBit(c+48,"sim csr_bankarray_csrbank1_sel", false,-1);
        tracep->declBit(c+29,"sim csr_bankarray_csrbank1_update_value0_r", false,-1);
        tracep->declBit(c+49,"sim csr_bankarray_csrbank1_update_value0_re", false,-1);
        tracep->declBit(c+50,"sim csr_bankarray_csrbank1_update_value0_w", false,-1);
        tracep->declBit(c+51,"sim csr_bankarray_csrbank1_update_value0_we", false,-1);
        tracep->declBus(c+19,"sim csr_bankarray_csrbank1_value_r", false,-1, 31,0);
        tracep->declBit(c+52,"sim csr_bankarray_csrbank1_value_re", false,-1);
        tracep->declBus(c+53,"sim csr_bankarray_csrbank1_value_w", false,-1, 31,0);
        tracep->declBit(c+54,"sim csr_bankarray_csrbank1_value_we", false,-1);
        tracep->declBus(c+21,"sim csr_bankarray_csrbank2_ev_enable0_r", false,-1, 1,0);
        tracep->declBit(c+55,"sim csr_bankarray_csrbank2_ev_enable0_re", false,-1);
        tracep->declBus(c+56,"sim csr_bankarray_csrbank2_ev_enable0_w", false,-1, 1,0);
        tracep->declBit(c+57,"sim csr_bankarray_csrbank2_ev_enable0_we", false,-1);
        tracep->declBus(c+21,"sim csr_bankarray_csrbank2_ev_pending_r", false,-1, 1,0);
        tracep->declBit(c+58,"sim csr_bankarray_csrbank2_ev_pending_re", false,-1);
        tracep->declBus(c+59,"sim csr_bankarray_csrbank2_ev_pending_w", false,-1, 1,0);
        tracep->declBit(c+60,"sim csr_bankarray_csrbank2_ev_pending_we", false,-1);
        tracep->declBus(c+21,"sim csr_bankarray_csrbank2_ev_status_r", false,-1, 1,0);
        tracep->declBit(c+61,"sim csr_bankarray_csrbank2_ev_status_re", false,-1);
        tracep->declBus(c+62,"sim csr_bankarray_csrbank2_ev_status_w", false,-1, 1,0);
        tracep->declBit(c+63,"sim csr_bankarray_csrbank2_ev_status_we", false,-1);
        tracep->declBit(c+29,"sim csr_bankarray_csrbank2_rxempty_r", false,-1);
        tracep->declBit(c+64,"sim csr_bankarray_csrbank2_rxempty_re", false,-1);
        tracep->declBit(c+65,"sim csr_bankarray_csrbank2_rxempty_w", false,-1);
        tracep->declBit(c+66,"sim csr_bankarray_csrbank2_rxempty_we", false,-1);
        tracep->declBit(c+29,"sim csr_bankarray_csrbank2_rxfull_r", false,-1);
        tracep->declBit(c+67,"sim csr_bankarray_csrbank2_rxfull_re", false,-1);
        tracep->declBit(c+68,"sim csr_bankarray_csrbank2_rxfull_w", false,-1);
        tracep->declBit(c+69,"sim csr_bankarray_csrbank2_rxfull_we", false,-1);
        tracep->declBit(c+70,"sim csr_bankarray_csrbank2_sel", false,-1);
        tracep->declBit(c+29,"sim csr_bankarray_csrbank2_txempty_r", false,-1);
        tracep->declBit(c+71,"sim csr_bankarray_csrbank2_txempty_re", false,-1);
        tracep->declBit(c+72,"sim csr_bankarray_csrbank2_txempty_w", false,-1);
        tracep->declBit(c+73,"sim csr_bankarray_csrbank2_txempty_we", false,-1);
        tracep->declBit(c+29,"sim csr_bankarray_csrbank2_txfull_r", false,-1);
        tracep->declBit(c+74,"sim csr_bankarray_csrbank2_txfull_re", false,-1);
        tracep->declBit(c+75,"sim csr_bankarray_csrbank2_txfull_w", false,-1);
        tracep->declBit(c+76,"sim csr_bankarray_csrbank2_txfull_we", false,-1);
        tracep->declBus(c+77,"sim csr_bankarray_dat_r", false,-1, 7,0);
        tracep->declBus(c+78,"sim csr_bankarray_interface0_bank_bus_adr", false,-1, 13,0);
        tracep->declBus(c+79,"sim csr_bankarray_interface0_bank_bus_dat_r", false,-1, 31,0);
        tracep->declBus(c+19,"sim csr_bankarray_interface0_bank_bus_dat_w", false,-1, 31,0);
        tracep->declBit(c+80,"sim csr_bankarray_interface0_bank_bus_we", false,-1);
        tracep->declBus(c+78,"sim csr_bankarray_interface1_bank_bus_adr", false,-1, 13,0);
        tracep->declBus(c+81,"sim csr_bankarray_interface1_bank_bus_dat_r", false,-1, 31,0);
        tracep->declBus(c+19,"sim csr_bankarray_interface1_bank_bus_dat_w", false,-1, 31,0);
        tracep->declBit(c+80,"sim csr_bankarray_interface1_bank_bus_we", false,-1);
        tracep->declBus(c+78,"sim csr_bankarray_interface2_bank_bus_adr", false,-1, 13,0);
        tracep->declBus(c+82,"sim csr_bankarray_interface2_bank_bus_dat_r", false,-1, 31,0);
        tracep->declBus(c+19,"sim csr_bankarray_interface2_bank_bus_dat_w", false,-1, 31,0);
        tracep->declBit(c+80,"sim csr_bankarray_interface2_bank_bus_we", false,-1);
        tracep->declBit(c+83,"sim csr_bankarray_sel", false,-1);
        tracep->declBit(c+84,"sim csr_bankarray_sel_r", false,-1);
        tracep->declBus(c+78,"sim csr_bankarray_sram_bus_adr", false,-1, 13,0);
        tracep->declBus(c+85,"sim csr_bankarray_sram_bus_dat_r", false,-1, 31,0);
        tracep->declBus(c+19,"sim csr_bankarray_sram_bus_dat_w", false,-1, 31,0);
        tracep->declBit(c+80,"sim csr_bankarray_sram_bus_we", false,-1);
        tracep->declBus(c+78,"sim csr_interconnect_adr", false,-1, 13,0);
        tracep->declBus(c+86,"sim csr_interconnect_dat_r", false,-1, 31,0);
        tracep->declBus(c+19,"sim csr_interconnect_dat_w", false,-1, 31,0);
        tracep->declBit(c+80,"sim csr_interconnect_we", false,-1);
        tracep->declBit(c+87,"sim dbus_dbus_ack", false,-1);
        tracep->declBus(c+88,"sim dbus_dbus_adr", false,-1, 29,0);
        tracep->declBus(c+989,"sim dbus_dbus_bte", false,-1, 1,0);
        tracep->declBus(c+89,"sim dbus_dbus_cti", false,-1, 2,0);
        tracep->declBit(c+90,"sim dbus_dbus_cyc", false,-1);
        tracep->declBus(c+91,"sim dbus_dbus_dat_r", false,-1, 31,0);
        tracep->declBus(c+92,"sim dbus_dbus_dat_w", false,-1, 31,0);
        tracep->declBit(c+990,"sim dbus_dbus_err", false,-1);
        tracep->declBus(c+93,"sim dbus_dbus_sel", false,-1, 3,0);
        tracep->declBit(c+90,"sim dbus_dbus_stb", false,-1);
        tracep->declBit(c+94,"sim dbus_dbus_we", false,-1);
        tracep->declBit(c+95,"sim done", false,-1);
        tracep->declBit(c+12,"sim error", false,-1);
        tracep->declBit(c+96,"sim grant", false,-1);
        tracep->declBit(c+97,"sim ibus_ibus_ack", false,-1);
        tracep->declBus(c+98,"sim ibus_ibus_adr", false,-1, 29,0);
        tracep->declBus(c+989,"sim ibus_ibus_bte", false,-1, 1,0);
        tracep->declBus(c+99,"sim ibus_ibus_cti", false,-1, 2,0);
        tracep->declBit(c+100,"sim ibus_ibus_cyc", false,-1);
        tracep->declBus(c+91,"sim ibus_ibus_dat_r", false,-1, 31,0);
        tracep->declBus(c+991,"sim ibus_ibus_dat_w", false,-1, 31,0);
        tracep->declBit(c+990,"sim ibus_ibus_err", false,-1);
        tracep->declBus(c+992,"sim ibus_ibus_sel", false,-1, 3,0);
        tracep->declBit(c+101,"sim ibus_ibus_stb", false,-1);
        tracep->declBit(c+990,"sim ibus_ibus_we", false,-1);
        tracep->declBit(c+102,"sim int_rst", false,-1);
        tracep->declBit(c+103,"sim interface0_ack", false,-1);
        tracep->declBus(c+5,"sim interface0_adr", false,-1, 29,0);
        tracep->declBus(c+1,"sim interface0_bte", false,-1, 1,0);
        tracep->declBus(c+11,"sim interface0_cti", false,-1, 2,0);
        tracep->declBit(c+104,"sim interface0_cyc", false,-1);
        tracep->declBus(c+105,"sim interface0_dat_r", false,-1, 31,0);
        tracep->declBus(c+6,"sim interface0_dat_w", false,-1, 31,0);
        tracep->declBit(c+990,"sim interface0_err", false,-1);
        tracep->declBus(c+7,"sim interface0_sel", false,-1, 3,0);
        tracep->declBit(c+9,"sim interface0_stb", false,-1);
        tracep->declBit(c+10,"sim interface0_we", false,-1);
        tracep->declBus(c+78,"sim interface1_adr", false,-1, 13,0);
        tracep->declBus(c+86,"sim interface1_dat_r", false,-1, 31,0);
        tracep->declBus(c+19,"sim interface1_dat_w", false,-1, 31,0);
        tracep->declBit(c+80,"sim interface1_we", false,-1);
        tracep->declBus(c+106,"sim interrupt", false,-1, 31,0);
        tracep->declBit(c+107,"sim next_state", false,-1);
        tracep->declBit(c+936,"sim por_clk", false,-1);
        tracep->declBus(c+108,"sim ram_adr", false,-1, 10,0);
        tracep->declBit(c+990,"sim ram_adr_burst", false,-1);
        tracep->declBit(c+109,"sim ram_bus_ram_bus_ack", false,-1);
        tracep->declBus(c+5,"sim ram_bus_ram_bus_adr", false,-1, 29,0);
        tracep->declBus(c+1,"sim ram_bus_ram_bus_bte", false,-1, 1,0);
        tracep->declBus(c+11,"sim ram_bus_ram_bus_cti", false,-1, 2,0);
        tracep->declBit(c+110,"sim ram_bus_ram_bus_cyc", false,-1);
        tracep->declBus(c+111,"sim ram_bus_ram_bus_dat_r", false,-1, 31,0);
        tracep->declBus(c+6,"sim ram_bus_ram_bus_dat_w", false,-1, 31,0);
        tracep->declBit(c+990,"sim ram_bus_ram_bus_err", false,-1);
        tracep->declBus(c+7,"sim ram_bus_ram_bus_sel", false,-1, 3,0);
        tracep->declBit(c+9,"sim ram_bus_ram_bus_stb", false,-1);
        tracep->declBit(c+10,"sim ram_bus_ram_bus_we", false,-1);
        tracep->declBus(c+111,"sim ram_dat_r", false,-1, 31,0);
        tracep->declBus(c+6,"sim ram_dat_w", false,-1, 31,0);
        tracep->declBus(c+112,"sim ram_we", false,-1, 3,0);
        tracep->declBus(c+113,"sim request", false,-1, 1,0);
        tracep->declBit(c+114,"sim reset", false,-1);
        tracep->declBit(c+115,"sim reset_re", false,-1);
        tracep->declBus(c+23,"sim reset_storage", false,-1, 1,0);
        tracep->declBit(c+116,"sim scratch_re", false,-1);
        tracep->declBus(c+26,"sim scratch_storage", false,-1, 31,0);
        tracep->declBit(c+117,"sim shared_ack", false,-1);
        tracep->declBus(c+5,"sim shared_adr", false,-1, 29,0);
        tracep->declBus(c+1,"sim shared_bte", false,-1, 1,0);
        tracep->declBus(c+11,"sim shared_cti", false,-1, 2,0);
        tracep->declBit(c+8,"sim shared_cyc", false,-1);
        tracep->declBus(c+91,"sim shared_dat_r", false,-1, 31,0);
        tracep->declBus(c+6,"sim shared_dat_w", false,-1, 31,0);
        tracep->declBit(c+990,"sim shared_err", false,-1);
        tracep->declBus(c+7,"sim shared_sel", false,-1, 3,0);
        tracep->declBit(c+9,"sim shared_stb", false,-1);
        tracep->declBit(c+10,"sim shared_we", false,-1);
        tracep->declBus(c+118,"sim simsoc_adr", false,-1, 14,0);
        tracep->declBit(c+990,"sim simsoc_adr_burst", false,-1);
        tracep->declBus(c+119,"sim simsoc_dat_r", false,-1, 31,0);
        tracep->declBit(c+120,"sim simsoc_ram_bus_ack", false,-1);
        tracep->declBus(c+5,"sim simsoc_ram_bus_adr", false,-1, 29,0);
        tracep->declBus(c+1,"sim simsoc_ram_bus_bte", false,-1, 1,0);
        tracep->declBus(c+11,"sim simsoc_ram_bus_cti", false,-1, 2,0);
        tracep->declBit(c+121,"sim simsoc_ram_bus_cyc", false,-1);
        tracep->declBus(c+119,"sim simsoc_ram_bus_dat_r", false,-1, 31,0);
        tracep->declBus(c+6,"sim simsoc_ram_bus_dat_w", false,-1, 31,0);
        tracep->declBit(c+990,"sim simsoc_ram_bus_err", false,-1);
        tracep->declBus(c+7,"sim simsoc_ram_bus_sel", false,-1, 3,0);
        tracep->declBit(c+9,"sim simsoc_ram_bus_stb", false,-1);
        tracep->declBit(c+10,"sim simsoc_ram_bus_we", false,-1);
        tracep->declBit(c+122,"sim sink_first", false,-1);
        tracep->declBit(c+123,"sim sink_last", false,-1);
        tracep->declBus(c+3,"sim sink_payload_data", false,-1, 7,0);
        tracep->declBit(c+933,"sim sink_ready", false,-1);
        tracep->declBit(c+4,"sim sink_valid", false,-1);
        tracep->declBus(c+124,"sim slave_sel", false,-1, 3,0);
        tracep->declBus(c+125,"sim slave_sel_r", false,-1, 3,0);
        tracep->declBit(c+126,"sim soc_rst", false,-1);
        tracep->declBit(c+990,"sim source_first", false,-1);
        tracep->declBit(c+990,"sim source_last", false,-1);
        tracep->declBus(c+929,"sim source_payload_data", false,-1, 7,0);
        tracep->declBit(c+2,"sim source_ready", false,-1);
        tracep->declBit(c+931,"sim source_valid", false,-1);
        tracep->declBit(c+127,"sim state", false,-1);
        tracep->declBit(c+936,"sim sys_clk_1", false,-1);
        tracep->declBit(c+102,"sim sys_rst", false,-1);
        tracep->declBit(c+128,"sim timer_en_re", false,-1);
        tracep->declBit(c+31,"sim timer_en_storage", false,-1);
        tracep->declBit(c+129,"sim timer_enable_re", false,-1);
        tracep->declBit(c+34,"sim timer_enable_storage", false,-1);
        tracep->declBit(c+130,"sim timer_irq", false,-1);
        tracep->declBit(c+131,"sim timer_load_re", false,-1);
        tracep->declBus(c+43,"sim timer_load_storage", false,-1, 31,0);
        tracep->declBit(c+132,"sim timer_pending_r", false,-1);
        tracep->declBit(c+133,"sim timer_pending_re", false,-1);
        tracep->declBit(c+37,"sim timer_pending_status", false,-1);
        tracep->declBit(c+38,"sim timer_pending_we", false,-1);
        tracep->declBit(c+134,"sim timer_reload_re", false,-1);
        tracep->declBus(c+46,"sim timer_reload_storage", false,-1, 31,0);
        tracep->declBit(c+135,"sim timer_status_re", false,-1);
    }
}

void Vsim::traceInitSub1(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+40,"sim timer_status_status", false,-1);
        tracep->declBit(c+41,"sim timer_status_we", false,-1);
        tracep->declBit(c+136,"sim timer_update_value_re", false,-1);
        tracep->declBit(c+50,"sim timer_update_value_storage", false,-1);
        tracep->declBus(c+137,"sim timer_value", false,-1, 31,0);
        tracep->declBit(c+138,"sim timer_value_re", false,-1);
        tracep->declBus(c+53,"sim timer_value_status", false,-1, 31,0);
        tracep->declBit(c+54,"sim timer_value_we", false,-1);
        tracep->declBit(c+139,"sim timer_zero0", false,-1);
        tracep->declBit(c+140,"sim timer_zero1", false,-1);
        tracep->declBit(c+34,"sim timer_zero2", false,-1);
        tracep->declBit(c+141,"sim timer_zero_clear", false,-1);
        tracep->declBit(c+140,"sim timer_zero_pending", false,-1);
        tracep->declBit(c+139,"sim timer_zero_status", false,-1);
        tracep->declBit(c+139,"sim timer_zero_trigger", false,-1);
        tracep->declBit(c+142,"sim timer_zero_trigger_d", false,-1);
        tracep->declBit(c+143,"sim uart_enable_re", false,-1);
        tracep->declBus(c+56,"sim uart_enable_storage", false,-1, 1,0);
        tracep->declBit(c+144,"sim uart_irq", false,-1);
        tracep->declBus(c+145,"sim uart_pending_r", false,-1, 1,0);
        tracep->declBit(c+146,"sim uart_pending_re", false,-1);
        tracep->declBus(c+59,"sim uart_pending_status", false,-1, 1,0);
        tracep->declBit(c+60,"sim uart_pending_we", false,-1);
        tracep->declBit(c+147,"sim uart_rx0", false,-1);
        tracep->declBit(c+148,"sim uart_rx1", false,-1);
        tracep->declBit(c+149,"sim uart_rx2", false,-1);
        tracep->declBit(c+150,"sim uart_rx_clear", false,-1);
        tracep->declBus(c+151,"sim uart_rx_fifo_consume", false,-1, 3,0);
        tracep->declBit(c+152,"sim uart_rx_fifo_do_read", false,-1);
        tracep->declBit(c+990,"sim uart_rx_fifo_fifo_in_first", false,-1);
        tracep->declBit(c+990,"sim uart_rx_fifo_fifo_in_last", false,-1);
        tracep->declBus(c+929,"sim uart_rx_fifo_fifo_in_payload_data", false,-1, 7,0);
        tracep->declBit(c+153,"sim uart_rx_fifo_fifo_out_first", false,-1);
        tracep->declBit(c+154,"sim uart_rx_fifo_fifo_out_last", false,-1);
        tracep->declBus(c+155,"sim uart_rx_fifo_fifo_out_payload_data", false,-1, 7,0);
        tracep->declBus(c+156,"sim uart_rx_fifo_level0", false,-1, 4,0);
        tracep->declBus(c+157,"sim uart_rx_fifo_level1", false,-1, 4,0);
        tracep->declBus(c+158,"sim uart_rx_fifo_produce", false,-1, 3,0);
        tracep->declBus(c+151,"sim uart_rx_fifo_rdport_adr", false,-1, 3,0);
        tracep->declBus(c+159,"sim uart_rx_fifo_rdport_dat_r", false,-1, 9,0);
        tracep->declBit(c+152,"sim uart_rx_fifo_rdport_re", false,-1);
        tracep->declBit(c+150,"sim uart_rx_fifo_re", false,-1);
        tracep->declBit(c+147,"sim uart_rx_fifo_readable", false,-1);
        tracep->declBit(c+990,"sim uart_rx_fifo_replace", false,-1);
        tracep->declBit(c+990,"sim uart_rx_fifo_sink_first", false,-1);
        tracep->declBit(c+990,"sim uart_rx_fifo_sink_last", false,-1);
        tracep->declBus(c+929,"sim uart_rx_fifo_sink_payload_data", false,-1, 7,0);
        tracep->declBit(c+2,"sim uart_rx_fifo_sink_ready", false,-1);
        tracep->declBit(c+931,"sim uart_rx_fifo_sink_valid", false,-1);
        tracep->declBit(c+153,"sim uart_rx_fifo_source_first", false,-1);
        tracep->declBit(c+154,"sim uart_rx_fifo_source_last", false,-1);
        tracep->declBus(c+155,"sim uart_rx_fifo_source_payload_data", false,-1, 7,0);
        tracep->declBit(c+150,"sim uart_rx_fifo_source_ready", false,-1);
        tracep->declBit(c+147,"sim uart_rx_fifo_source_valid", false,-1);
        tracep->declBus(c+937,"sim uart_rx_fifo_syncfifo_din", false,-1, 9,0);
        tracep->declBus(c+159,"sim uart_rx_fifo_syncfifo_dout", false,-1, 9,0);
        tracep->declBit(c+160,"sim uart_rx_fifo_syncfifo_re", false,-1);
        tracep->declBit(c+161,"sim uart_rx_fifo_syncfifo_readable", false,-1);
        tracep->declBit(c+931,"sim uart_rx_fifo_syncfifo_we", false,-1);
        tracep->declBit(c+2,"sim uart_rx_fifo_syncfifo_writable", false,-1);
        tracep->declBus(c+162,"sim uart_rx_fifo_wrport_adr", false,-1, 3,0);
        tracep->declBus(c+163,"sim uart_rx_fifo_wrport_dat_r", false,-1, 9,0);
        tracep->declBus(c+937,"sim uart_rx_fifo_wrport_dat_w", false,-1, 9,0);
        tracep->declBit(c+938,"sim uart_rx_fifo_wrport_we", false,-1);
        tracep->declBit(c+148,"sim uart_rx_pending", false,-1);
        tracep->declBit(c+147,"sim uart_rx_status", false,-1);
        tracep->declBit(c+147,"sim uart_rx_trigger", false,-1);
        tracep->declBit(c+164,"sim uart_rx_trigger_d", false,-1);
        tracep->declBit(c+165,"sim uart_rxempty_re", false,-1);
        tracep->declBit(c+65,"sim uart_rxempty_status", false,-1);
        tracep->declBit(c+66,"sim uart_rxempty_we", false,-1);
        tracep->declBit(c+166,"sim uart_rxfull_re", false,-1);
        tracep->declBit(c+68,"sim uart_rxfull_status", false,-1);
        tracep->declBit(c+69,"sim uart_rxfull_we", false,-1);
        tracep->declBus(c+167,"sim uart_rxtx_r", false,-1, 7,0);
        tracep->declBit(c+168,"sim uart_rxtx_re", false,-1);
        tracep->declBus(c+155,"sim uart_rxtx_w", false,-1, 7,0);
        tracep->declBit(c+169,"sim uart_rxtx_we", false,-1);
        tracep->declBit(c+170,"sim uart_status_re", false,-1);
        tracep->declBus(c+62,"sim uart_status_status", false,-1, 1,0);
        tracep->declBit(c+63,"sim uart_status_we", false,-1);
        tracep->declBit(c+171,"sim uart_tx0", false,-1);
        tracep->declBit(c+172,"sim uart_tx1", false,-1);
        tracep->declBit(c+173,"sim uart_tx2", false,-1);
        tracep->declBit(c+174,"sim uart_tx_clear", false,-1);
        tracep->declBus(c+175,"sim uart_tx_fifo_consume", false,-1, 3,0);
        tracep->declBit(c+939,"sim uart_tx_fifo_do_read", false,-1);
        tracep->declBit(c+990,"sim uart_tx_fifo_fifo_in_first", false,-1);
        tracep->declBit(c+990,"sim uart_tx_fifo_fifo_in_last", false,-1);
        tracep->declBus(c+167,"sim uart_tx_fifo_fifo_in_payload_data", false,-1, 7,0);
        tracep->declBit(c+122,"sim uart_tx_fifo_fifo_out_first", false,-1);
        tracep->declBit(c+123,"sim uart_tx_fifo_fifo_out_last", false,-1);
        tracep->declBus(c+3,"sim uart_tx_fifo_fifo_out_payload_data", false,-1, 7,0);
        tracep->declBus(c+176,"sim uart_tx_fifo_level0", false,-1, 4,0);
        tracep->declBus(c+177,"sim uart_tx_fifo_level1", false,-1, 4,0);
        tracep->declBus(c+178,"sim uart_tx_fifo_produce", false,-1, 3,0);
        tracep->declBus(c+175,"sim uart_tx_fifo_rdport_adr", false,-1, 3,0);
        tracep->declBus(c+179,"sim uart_tx_fifo_rdport_dat_r", false,-1, 9,0);
        tracep->declBit(c+939,"sim uart_tx_fifo_rdport_re", false,-1);
        tracep->declBit(c+933,"sim uart_tx_fifo_re", false,-1);
        tracep->declBit(c+4,"sim uart_tx_fifo_readable", false,-1);
        tracep->declBit(c+990,"sim uart_tx_fifo_replace", false,-1);
        tracep->declBit(c+990,"sim uart_tx_fifo_sink_first", false,-1);
        tracep->declBit(c+990,"sim uart_tx_fifo_sink_last", false,-1);
        tracep->declBus(c+167,"sim uart_tx_fifo_sink_payload_data", false,-1, 7,0);
        tracep->declBit(c+171,"sim uart_tx_fifo_sink_ready", false,-1);
        tracep->declBit(c+168,"sim uart_tx_fifo_sink_valid", false,-1);
        tracep->declBit(c+122,"sim uart_tx_fifo_source_first", false,-1);
        tracep->declBit(c+123,"sim uart_tx_fifo_source_last", false,-1);
        tracep->declBus(c+3,"sim uart_tx_fifo_source_payload_data", false,-1, 7,0);
        tracep->declBit(c+933,"sim uart_tx_fifo_source_ready", false,-1);
        tracep->declBit(c+4,"sim uart_tx_fifo_source_valid", false,-1);
        tracep->declBus(c+180,"sim uart_tx_fifo_syncfifo_din", false,-1, 9,0);
        tracep->declBus(c+179,"sim uart_tx_fifo_syncfifo_dout", false,-1, 9,0);
        tracep->declBit(c+940,"sim uart_tx_fifo_syncfifo_re", false,-1);
        tracep->declBit(c+181,"sim uart_tx_fifo_syncfifo_readable", false,-1);
        tracep->declBit(c+168,"sim uart_tx_fifo_syncfifo_we", false,-1);
        tracep->declBit(c+171,"sim uart_tx_fifo_syncfifo_writable", false,-1);
        tracep->declBus(c+182,"sim uart_tx_fifo_wrport_adr", false,-1, 3,0);
        tracep->declBus(c+183,"sim uart_tx_fifo_wrport_dat_r", false,-1, 9,0);
        tracep->declBus(c+180,"sim uart_tx_fifo_wrport_dat_w", false,-1, 9,0);
        tracep->declBit(c+184,"sim uart_tx_fifo_wrport_we", false,-1);
        tracep->declBit(c+172,"sim uart_tx_pending", false,-1);
        tracep->declBit(c+171,"sim uart_tx_status", false,-1);
        tracep->declBit(c+171,"sim uart_tx_trigger", false,-1);
        tracep->declBit(c+185,"sim uart_tx_trigger_d", false,-1);
        tracep->declBit(c+186,"sim uart_txempty_re", false,-1);
        tracep->declBit(c+72,"sim uart_txempty_status", false,-1);
        tracep->declBit(c+73,"sim uart_txempty_we", false,-1);
        tracep->declBit(c+187,"sim uart_txfull_re", false,-1);
        tracep->declBit(c+75,"sim uart_txfull_status", false,-1);
        tracep->declBit(c+76,"sim uart_txfull_we", false,-1);
        tracep->declBit(c+990,"sim uart_uart_sink_first", false,-1);
        tracep->declBit(c+990,"sim uart_uart_sink_last", false,-1);
        tracep->declBus(c+929,"sim uart_uart_sink_payload_data", false,-1, 7,0);
        tracep->declBit(c+2,"sim uart_uart_sink_ready", false,-1);
        tracep->declBit(c+931,"sim uart_uart_sink_valid", false,-1);
        tracep->declBit(c+122,"sim uart_uart_source_first", false,-1);
        tracep->declBit(c+123,"sim uart_uart_source_last", false,-1);
        tracep->declBus(c+3,"sim uart_uart_source_payload_data", false,-1, 7,0);
        tracep->declBit(c+933,"sim uart_uart_source_ready", false,-1);
        tracep->declBit(c+4,"sim uart_uart_source_valid", false,-1);
        tracep->declBus(c+991,"sim vexriscv", false,-1, 31,0);
        tracep->declBit(c+188,"sim vexriscv_dbus_err", false,-1);
        tracep->declBit(c+189,"sim vexriscv_debug_bus_ack", false,-1);
        tracep->declBus(c+5,"sim vexriscv_debug_bus_adr", false,-1, 29,0);
        tracep->declBus(c+1,"sim vexriscv_debug_bus_bte", false,-1, 1,0);
        tracep->declBus(c+11,"sim vexriscv_debug_bus_cti", false,-1, 2,0);
        tracep->declBit(c+190,"sim vexriscv_debug_bus_cyc", false,-1);
        tracep->declBus(c+191,"sim vexriscv_debug_bus_dat_r", false,-1, 31,0);
        tracep->declBus(c+6,"sim vexriscv_debug_bus_dat_w", false,-1, 31,0);
        tracep->declBit(c+990,"sim vexriscv_debug_bus_err", false,-1);
        tracep->declBus(c+7,"sim vexriscv_debug_bus_sel", false,-1, 3,0);
        tracep->declBit(c+9,"sim vexriscv_debug_bus_stb", false,-1);
        tracep->declBit(c+10,"sim vexriscv_debug_bus_we", false,-1);
        tracep->declBit(c+192,"sim vexriscv_debug_reset", false,-1);
        tracep->declBus(c+193,"sim vexriscv_i_cmd_payload_address", false,-1, 7,0);
        tracep->declBus(c+194,"sim vexriscv_i_cmd_payload_data", false,-1, 31,0);
        tracep->declBit(c+195,"sim vexriscv_i_cmd_payload_wr", false,-1);
        tracep->declBit(c+196,"sim vexriscv_i_cmd_valid", false,-1);
        tracep->declBit(c+197,"sim vexriscv_ibus_err", false,-1);
        tracep->declBit(c+198,"sim vexriscv_o_cmd_ready", false,-1);
        tracep->declBit(c+199,"sim vexriscv_o_resetOut", false,-1);
        tracep->declBus(c+200,"sim vexriscv_o_rsp_data", false,-1, 31,0);
        tracep->declBit(c+201,"sim vexriscv_reset_debug_logic", false,-1);
        tracep->declBit(c+202,"sim vexriscv_transfer_complete", false,-1);
        tracep->declBit(c+203,"sim vexriscv_transfer_in_progress", false,-1);
        tracep->declBit(c+204,"sim vexriscv_transfer_wait_for_ack", false,-1);
        tracep->declBit(c+205,"sim wait_1", false,-1);
        tracep->declBus(c+119,"sim rom_dat0", false,-1, 31,0);
        tracep->declBus(c+206,"sim sram_adr0", false,-1, 10,0);
        tracep->declBus(c+207,"sim mem_adr0", false,-1, 5,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+208+i*1,"sim storage", true,(i+0), 9,0);}}
        tracep->declBus(c+183,"sim storage_dat0", false,-1, 9,0);
        tracep->declBus(c+179,"sim storage_dat1", false,-1, 9,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+224+i*1,"sim storage_1", true,(i+0), 9,0);}}
        tracep->declBus(c+163,"sim storage_1_dat0", false,-1, 9,0);
        tracep->declBus(c+159,"sim storage_1_dat1", false,-1, 9,0);
        tracep->declBus(c+991,"sim VexRiscv externalResetVector", false,-1, 31,0);
        tracep->declBit(c+990,"sim VexRiscv timerInterrupt", false,-1);
        tracep->declBit(c+990,"sim VexRiscv softwareInterrupt", false,-1);
        tracep->declBus(c+106,"sim VexRiscv externalInterruptArray", false,-1, 31,0);
        tracep->declBit(c+196,"sim VexRiscv debug_bus_cmd_valid", false,-1);
        tracep->declBit(c+198,"sim VexRiscv debug_bus_cmd_ready", false,-1);
        tracep->declBit(c+195,"sim VexRiscv debug_bus_cmd_payload_wr", false,-1);
        tracep->declBus(c+193,"sim VexRiscv debug_bus_cmd_payload_address", false,-1, 7,0);
        tracep->declBus(c+194,"sim VexRiscv debug_bus_cmd_payload_data", false,-1, 31,0);
        tracep->declBus(c+200,"sim VexRiscv debug_bus_rsp_data", false,-1, 31,0);
        tracep->declBit(c+199,"sim VexRiscv debug_resetOut", false,-1);
        tracep->declBit(c+100,"sim VexRiscv iBusWishbone_CYC", false,-1);
        tracep->declBit(c+101,"sim VexRiscv iBusWishbone_STB", false,-1);
        tracep->declBit(c+97,"sim VexRiscv iBusWishbone_ACK", false,-1);
        tracep->declBit(c+990,"sim VexRiscv iBusWishbone_WE", false,-1);
        tracep->declBus(c+98,"sim VexRiscv iBusWishbone_ADR", false,-1, 29,0);
        tracep->declBus(c+91,"sim VexRiscv iBusWishbone_DAT_MISO", false,-1, 31,0);
        tracep->declBus(c+991,"sim VexRiscv iBusWishbone_DAT_MOSI", false,-1, 31,0);
        tracep->declBus(c+992,"sim VexRiscv iBusWishbone_SEL", false,-1, 3,0);
        tracep->declBit(c+197,"sim VexRiscv iBusWishbone_ERR", false,-1);
        tracep->declBus(c+99,"sim VexRiscv iBusWishbone_CTI", false,-1, 2,0);
        tracep->declBus(c+989,"sim VexRiscv iBusWishbone_BTE", false,-1, 1,0);
        tracep->declBit(c+90,"sim VexRiscv dBusWishbone_CYC", false,-1);
        tracep->declBit(c+90,"sim VexRiscv dBusWishbone_STB", false,-1);
        tracep->declBit(c+87,"sim VexRiscv dBusWishbone_ACK", false,-1);
        tracep->declBit(c+94,"sim VexRiscv dBusWishbone_WE", false,-1);
        tracep->declBus(c+88,"sim VexRiscv dBusWishbone_ADR", false,-1, 29,0);
        tracep->declBus(c+91,"sim VexRiscv dBusWishbone_DAT_MISO", false,-1, 31,0);
        tracep->declBus(c+92,"sim VexRiscv dBusWishbone_DAT_MOSI", false,-1, 31,0);
        tracep->declBus(c+93,"sim VexRiscv dBusWishbone_SEL", false,-1, 3,0);
        tracep->declBit(c+188,"sim VexRiscv dBusWishbone_ERR", false,-1);
        tracep->declBus(c+89,"sim VexRiscv dBusWishbone_CTI", false,-1, 2,0);
        tracep->declBus(c+989,"sim VexRiscv dBusWishbone_BTE", false,-1, 1,0);
        tracep->declBit(c+936,"sim VexRiscv clk", false,-1);
        tracep->declBit(c+240,"sim VexRiscv reset", false,-1);
        tracep->declBit(c+241,"sim VexRiscv debugReset", false,-1);
        tracep->declBus(c+989,"sim VexRiscv ShiftCtrlEnum_DISABLE_1", false,-1, 1,0);
        tracep->declBus(c+993,"sim VexRiscv ShiftCtrlEnum_SLL_1", false,-1, 1,0);
        tracep->declBus(c+994,"sim VexRiscv ShiftCtrlEnum_SRL_1", false,-1, 1,0);
        tracep->declBus(c+995,"sim VexRiscv ShiftCtrlEnum_SRA_1", false,-1, 1,0);
        tracep->declBus(c+989,"sim VexRiscv EnvCtrlEnum_NONE", false,-1, 1,0);
        tracep->declBus(c+993,"sim VexRiscv EnvCtrlEnum_XRET", false,-1, 1,0);
        tracep->declBus(c+994,"sim VexRiscv EnvCtrlEnum_ECALL", false,-1, 1,0);
        tracep->declBus(c+989,"sim VexRiscv BranchCtrlEnum_INC", false,-1, 1,0);
        tracep->declBus(c+993,"sim VexRiscv BranchCtrlEnum_B", false,-1, 1,0);
        tracep->declBus(c+994,"sim VexRiscv BranchCtrlEnum_JAL", false,-1, 1,0);
        tracep->declBus(c+995,"sim VexRiscv BranchCtrlEnum_JALR", false,-1, 1,0);
        tracep->declBus(c+989,"sim VexRiscv AluBitwiseCtrlEnum_XOR_1", false,-1, 1,0);
        tracep->declBus(c+993,"sim VexRiscv AluBitwiseCtrlEnum_OR_1", false,-1, 1,0);
        tracep->declBus(c+994,"sim VexRiscv AluBitwiseCtrlEnum_AND_1", false,-1, 1,0);
        tracep->declBus(c+989,"sim VexRiscv Src2CtrlEnum_RS", false,-1, 1,0);
        tracep->declBus(c+993,"sim VexRiscv Src2CtrlEnum_IMI", false,-1, 1,0);
        tracep->declBus(c+994,"sim VexRiscv Src2CtrlEnum_IMS", false,-1, 1,0);
        tracep->declBus(c+995,"sim VexRiscv Src2CtrlEnum_PC", false,-1, 1,0);
        tracep->declBus(c+989,"sim VexRiscv AluCtrlEnum_ADD_SUB", false,-1, 1,0);
        tracep->declBus(c+993,"sim VexRiscv AluCtrlEnum_SLT_SLTU", false,-1, 1,0);
        tracep->declBus(c+994,"sim VexRiscv AluCtrlEnum_BITWISE", false,-1, 1,0);
        tracep->declBus(c+989,"sim VexRiscv Src1CtrlEnum_RS", false,-1, 1,0);
        tracep->declBus(c+993,"sim VexRiscv Src1CtrlEnum_IMU", false,-1, 1,0);
        tracep->declBus(c+994,"sim VexRiscv Src1CtrlEnum_PC_INCREMENT", false,-1, 1,0);
        tracep->declBus(c+995,"sim VexRiscv Src1CtrlEnum_URS1", false,-1, 1,0);
        tracep->declBit(c+242,"sim VexRiscv IBusCachedPlugin_cache_io_flush", false,-1);
        tracep->declBit(c+243,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_prefetch_isValid", false,-1);
        tracep->declBit(c+244,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_fetch_isValid", false,-1);
        tracep->declBit(c+245,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_fetch_isStuck", false,-1);
        tracep->declBit(c+996,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_fetch_isRemoved", false,-1);
        tracep->declBit(c+246,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_isValid", false,-1);
        tracep->declBit(c+245,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_isStuck", false,-1);
        tracep->declBit(c+247,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_isUser", false,-1);
        tracep->declBit(c+248,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_fill_valid", false,-1);
        tracep->declBit(c+249,"sim VexRiscv dataCache_1_io_cpu_execute_isValid", false,-1);
        tracep->declBus(c+250,"sim VexRiscv dataCache_1_io_cpu_execute_address", false,-1, 31,0);
        tracep->declBit(c+251,"sim VexRiscv dataCache_1_io_cpu_memory_isValid", false,-1);
    }
}

void Vsim::traceInitSub2(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+252,"sim VexRiscv dataCache_1_io_cpu_memory_address", false,-1, 31,0);
        tracep->declBit(c+253,"sim VexRiscv dataCache_1_io_cpu_memory_mmuRsp_isIoAccess", false,-1);
        tracep->declBit(c+254,"sim VexRiscv dataCache_1_io_cpu_writeBack_isValid", false,-1);
        tracep->declBit(c+247,"sim VexRiscv dataCache_1_io_cpu_writeBack_isUser", false,-1);
        tracep->declBus(c+255,"sim VexRiscv dataCache_1_io_cpu_writeBack_storeData", false,-1, 31,0);
        tracep->declBus(c+256,"sim VexRiscv dataCache_1_io_cpu_writeBack_address", false,-1, 31,0);
        tracep->declBit(c+997,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_SW", false,-1);
        tracep->declBit(c+998,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_SR", false,-1);
        tracep->declBit(c+999,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_SO", false,-1);
        tracep->declBit(c+1000,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_SI", false,-1);
        tracep->declBit(c+1001,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_PW", false,-1);
        tracep->declBit(c+1002,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_PR", false,-1);
        tracep->declBit(c+1003,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_PO", false,-1);
        tracep->declBit(c+1004,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_PI", false,-1);
        tracep->declBus(c+1005,"sim VexRiscv dataCache_1_io_cpu_writeBack_fence_FM", false,-1, 3,0);
        tracep->declBit(c+257,"sim VexRiscv dataCache_1_io_cpu_flush_valid", false,-1);
        tracep->declBit(c+258,"sim VexRiscv dataCache_1_io_cpu_flush_payload_singleLine", false,-1);
        tracep->declBus(c+259,"sim VexRiscv dataCache_1_io_cpu_flush_payload_lineId", false,-1, 6,0);
        tracep->declBit(c+260,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_prefetch_haltIt", false,-1);
        tracep->declBus(c+261,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_fetch_data", false,-1, 31,0);
        tracep->declBus(c+941,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_fetch_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+262,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_error", false,-1);
        tracep->declBit(c+263,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_mmuRefilling", false,-1);
        tracep->declBit(c+264,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_mmuException", false,-1);
        tracep->declBus(c+265,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_data", false,-1, 31,0);
        tracep->declBit(c+266,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_cacheMiss", false,-1);
        tracep->declBus(c+267,"sim VexRiscv IBusCachedPlugin_cache_io_cpu_decode_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+268,"sim VexRiscv IBusCachedPlugin_cache_io_mem_cmd_valid", false,-1);
        tracep->declBus(c+269,"sim VexRiscv IBusCachedPlugin_cache_io_mem_cmd_payload_address", false,-1, 31,0);
        tracep->declBus(c+1006,"sim VexRiscv IBusCachedPlugin_cache_io_mem_cmd_payload_size", false,-1, 2,0);
        tracep->declBit(c+270,"sim VexRiscv dataCache_1_io_cpu_execute_haltIt", false,-1);
        tracep->declBit(c+271,"sim VexRiscv dataCache_1_io_cpu_execute_refilling", false,-1);
        tracep->declBit(c+272,"sim VexRiscv dataCache_1_io_cpu_memory_isWrite", false,-1);
        tracep->declBit(c+273,"sim VexRiscv dataCache_1_io_cpu_writeBack_haltIt", false,-1);
        tracep->declBus(c+274,"sim VexRiscv dataCache_1_io_cpu_writeBack_data", false,-1, 31,0);
        tracep->declBit(c+275,"sim VexRiscv dataCache_1_io_cpu_writeBack_mmuException", false,-1);
        tracep->declBit(c+276,"sim VexRiscv dataCache_1_io_cpu_writeBack_unalignedAccess", false,-1);
        tracep->declBit(c+277,"sim VexRiscv dataCache_1_io_cpu_writeBack_accessError", false,-1);
        tracep->declBit(c+278,"sim VexRiscv dataCache_1_io_cpu_writeBack_isWrite", false,-1);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1_io_cpu_writeBack_keepMemRspData", false,-1);
        tracep->declBit(c+1007,"sim VexRiscv dataCache_1_io_cpu_writeBack_exclusiveOk", false,-1);
        tracep->declBit(c+279,"sim VexRiscv dataCache_1_io_cpu_flush_ready", false,-1);
        tracep->declBit(c+280,"sim VexRiscv dataCache_1_io_cpu_redo", false,-1);
        tracep->declBit(c+1008,"sim VexRiscv dataCache_1_io_cpu_writesPending", false,-1);
        tracep->declBit(c+281,"sim VexRiscv dataCache_1_io_mem_cmd_valid", false,-1);
        tracep->declBit(c+282,"sim VexRiscv dataCache_1_io_mem_cmd_payload_wr", false,-1);
        tracep->declBit(c+283,"sim VexRiscv dataCache_1_io_mem_cmd_payload_uncached", false,-1);
        tracep->declBus(c+284,"sim VexRiscv dataCache_1_io_mem_cmd_payload_address", false,-1, 31,0);
        tracep->declBus(c+255,"sim VexRiscv dataCache_1_io_mem_cmd_payload_data", false,-1, 31,0);
        tracep->declBus(c+285,"sim VexRiscv dataCache_1_io_mem_cmd_payload_mask", false,-1, 3,0);
        tracep->declBus(c+286,"sim VexRiscv dataCache_1_io_mem_cmd_payload_size", false,-1, 2,0);
        tracep->declBit(c+988,"sim VexRiscv dataCache_1_io_mem_cmd_payload_last", false,-1);
        tracep->declQuad(c+287,"sim VexRiscv memory_MUL_LOW", false,-1, 51,0);
        tracep->declQuad(c+289,"sim VexRiscv memory_MUL_HH", false,-1, 33,0);
        tracep->declQuad(c+291,"sim VexRiscv execute_MUL_HH", false,-1, 33,0);
        tracep->declQuad(c+293,"sim VexRiscv execute_MUL_HL", false,-1, 33,0);
        tracep->declQuad(c+295,"sim VexRiscv execute_MUL_LH", false,-1, 33,0);
        tracep->declBus(c+297,"sim VexRiscv execute_MUL_LL", false,-1, 31,0);
        tracep->declBus(c+298,"sim VexRiscv execute_BRANCH_CALC", false,-1, 31,0);
        tracep->declBit(c+299,"sim VexRiscv execute_BRANCH_DO", false,-1);
        tracep->declBus(c+300,"sim VexRiscv execute_SHIFT_RIGHT", false,-1, 31,0);
        tracep->declBus(c+301,"sim VexRiscv execute_REGFILE_WRITE_DATA", false,-1, 31,0);
        tracep->declBus(c+302,"sim VexRiscv memory_MEMORY_STORE_DATA_RF", false,-1, 31,0);
        tracep->declBus(c+303,"sim VexRiscv execute_MEMORY_STORE_DATA_RF", false,-1, 31,0);
        tracep->declBit(c+304,"sim VexRiscv decode_DO_EBREAK", false,-1);
        tracep->declBit(c+305,"sim VexRiscv decode_CSR_READ_OPCODE", false,-1);
        tracep->declBit(c+306,"sim VexRiscv decode_CSR_WRITE_OPCODE", false,-1);
        tracep->declBit(c+307,"sim VexRiscv decode_PREDICTION_HAD_BRANCHED2", false,-1);
        tracep->declBit(c+308,"sim VexRiscv decode_SRC2_FORCE_ZERO", false,-1);
        tracep->declBit(c+309,"sim VexRiscv decode_IS_RS2_SIGNED", false,-1);
        tracep->declBit(c+310,"sim VexRiscv decode_IS_RS1_SIGNED", false,-1);
        tracep->declBit(c+311,"sim VexRiscv decode_IS_DIV", false,-1);
        tracep->declBit(c+312,"sim VexRiscv memory_IS_MUL", false,-1);
        tracep->declBit(c+313,"sim VexRiscv execute_IS_MUL", false,-1);
        tracep->declBit(c+314,"sim VexRiscv decode_IS_MUL", false,-1);
        tracep->declBus(c+315,"sim VexRiscv decode_ENV_CTRL", false,-1, 1,0);
        tracep->declBit(c+316,"sim VexRiscv decode_IS_CSR", false,-1);
        tracep->declBus(c+317,"sim VexRiscv decode_SHIFT_CTRL", false,-1, 1,0);
        tracep->declBus(c+318,"sim VexRiscv decode_ALU_BITWISE_CTRL", false,-1, 1,0);
        tracep->declBit(c+319,"sim VexRiscv decode_SRC_LESS_UNSIGNED", false,-1);
        tracep->declBit(c+320,"sim VexRiscv decode_MEMORY_MANAGMENT", false,-1);
        tracep->declBit(c+321,"sim VexRiscv memory_MEMORY_WR", false,-1);
        tracep->declBit(c+322,"sim VexRiscv decode_MEMORY_WR", false,-1);
        tracep->declBit(c+323,"sim VexRiscv execute_BYPASSABLE_MEMORY_STAGE", false,-1);
        tracep->declBit(c+324,"sim VexRiscv decode_BYPASSABLE_MEMORY_STAGE", false,-1);
        tracep->declBit(c+325,"sim VexRiscv decode_BYPASSABLE_EXECUTE_STAGE", false,-1);
        tracep->declBus(c+326,"sim VexRiscv decode_SRC2_CTRL", false,-1, 1,0);
        tracep->declBus(c+327,"sim VexRiscv decode_ALU_CTRL", false,-1, 1,0);
        tracep->declBus(c+328,"sim VexRiscv decode_SRC1_CTRL", false,-1, 1,0);
        tracep->declBit(c+990,"sim VexRiscv decode_MEMORY_FORCE_CONSTISTENCY", false,-1);
        tracep->declBus(c+329,"sim VexRiscv writeBack_FORMAL_PC_NEXT", false,-1, 31,0);
        tracep->declBus(c+330,"sim VexRiscv memory_FORMAL_PC_NEXT", false,-1, 31,0);
        tracep->declBus(c+331,"sim VexRiscv execute_FORMAL_PC_NEXT", false,-1, 31,0);
        tracep->declBus(c+332,"sim VexRiscv decode_FORMAL_PC_NEXT", false,-1, 31,0);
        tracep->declBus(c+333,"sim VexRiscv memory_PC", false,-1, 31,0);
        tracep->declBit(c+334,"sim VexRiscv execute_DO_EBREAK", false,-1);
        tracep->declBit(c+335,"sim VexRiscv decode_IS_EBREAK", false,-1);
        tracep->declBit(c+336,"sim VexRiscv execute_IS_RS1_SIGNED", false,-1);
        tracep->declBit(c+337,"sim VexRiscv execute_IS_DIV", false,-1);
        tracep->declBit(c+338,"sim VexRiscv execute_IS_RS2_SIGNED", false,-1);
        tracep->declBit(c+339,"sim VexRiscv memory_IS_DIV", false,-1);
        tracep->declBit(c+340,"sim VexRiscv writeBack_IS_MUL", false,-1);
        tracep->declQuad(c+341,"sim VexRiscv writeBack_MUL_HH", false,-1, 33,0);
        tracep->declQuad(c+343,"sim VexRiscv writeBack_MUL_LOW", false,-1, 51,0);
        tracep->declQuad(c+345,"sim VexRiscv memory_MUL_HL", false,-1, 33,0);
        tracep->declQuad(c+347,"sim VexRiscv memory_MUL_LH", false,-1, 33,0);
        tracep->declBus(c+349,"sim VexRiscv memory_MUL_LL", false,-1, 31,0);
        tracep->declBit(c+350,"sim VexRiscv execute_CSR_READ_OPCODE", false,-1);
        tracep->declBit(c+351,"sim VexRiscv execute_CSR_WRITE_OPCODE", false,-1);
        tracep->declBit(c+352,"sim VexRiscv execute_IS_CSR", false,-1);
        tracep->declBus(c+353,"sim VexRiscv memory_ENV_CTRL", false,-1, 1,0);
        tracep->declBus(c+354,"sim VexRiscv execute_ENV_CTRL", false,-1, 1,0);
        tracep->declBus(c+355,"sim VexRiscv writeBack_ENV_CTRL", false,-1, 1,0);
        tracep->declBus(c+356,"sim VexRiscv memory_BRANCH_CALC", false,-1, 31,0);
        tracep->declBit(c+357,"sim VexRiscv memory_BRANCH_DO", false,-1);
        tracep->declBus(c+358,"sim VexRiscv execute_PC", false,-1, 31,0);
        tracep->declBit(c+359,"sim VexRiscv execute_PREDICTION_HAD_BRANCHED2", false,-1);
        tracep->declBit(c+360,"sim VexRiscv execute_BRANCH_COND_RESULT", false,-1);
        tracep->declBus(c+361,"sim VexRiscv execute_BRANCH_CTRL", false,-1, 1,0);
        tracep->declBit(c+362,"sim VexRiscv decode_RS2_USE", false,-1);
        tracep->declBit(c+363,"sim VexRiscv decode_RS1_USE", false,-1);
        tracep->declBit(c+364,"sim VexRiscv execute_REGFILE_WRITE_VALID", false,-1);
        tracep->declBit(c+365,"sim VexRiscv execute_BYPASSABLE_EXECUTE_STAGE", false,-1);
        tracep->declBit(c+366,"sim VexRiscv memory_REGFILE_WRITE_VALID", false,-1);
        tracep->declBus(c+367,"sim VexRiscv memory_INSTRUCTION", false,-1, 31,0);
        tracep->declBit(c+368,"sim VexRiscv memory_BYPASSABLE_MEMORY_STAGE", false,-1);
        tracep->declBit(c+369,"sim VexRiscv writeBack_REGFILE_WRITE_VALID", false,-1);
        tracep->declBus(c+370,"sim VexRiscv decode_RS2", false,-1, 31,0);
        tracep->declBus(c+371,"sim VexRiscv decode_RS1", false,-1, 31,0);
        tracep->declBus(c+372,"sim VexRiscv memory_SHIFT_RIGHT", false,-1, 31,0);
        tracep->declBus(c+373,"sim VexRiscv memory_SHIFT_CTRL", false,-1, 1,0);
        tracep->declBus(c+374,"sim VexRiscv execute_SHIFT_CTRL", false,-1, 1,0);
        tracep->declBit(c+375,"sim VexRiscv execute_SRC_LESS_UNSIGNED", false,-1);
        tracep->declBit(c+376,"sim VexRiscv execute_SRC2_FORCE_ZERO", false,-1);
        tracep->declBit(c+377,"sim VexRiscv execute_SRC_USE_SUB_LESS", false,-1);
        tracep->declBus(c+378,"sim VexRiscv execute_SRC2_CTRL", false,-1, 1,0);
        tracep->declBus(c+379,"sim VexRiscv execute_SRC1_CTRL", false,-1, 1,0);
        tracep->declBit(c+380,"sim VexRiscv decode_SRC_USE_SUB_LESS", false,-1);
        tracep->declBit(c+381,"sim VexRiscv decode_SRC_ADD_ZERO", false,-1);
        tracep->declBus(c+250,"sim VexRiscv execute_SRC_ADD_SUB", false,-1, 31,0);
        tracep->declBit(c+382,"sim VexRiscv execute_SRC_LESS", false,-1);
        tracep->declBus(c+383,"sim VexRiscv execute_ALU_CTRL", false,-1, 1,0);
        tracep->declBus(c+384,"sim VexRiscv execute_SRC2", false,-1, 31,0);
        tracep->declBus(c+385,"sim VexRiscv execute_SRC1", false,-1, 31,0);
        tracep->declBus(c+386,"sim VexRiscv execute_ALU_BITWISE_CTRL", false,-1, 1,0);
        tracep->declBus(c+387,"sim VexRiscv decode_INSTRUCTION_ANTICIPATED", false,-1, 31,0);
        tracep->declBit(c+388,"sim VexRiscv decode_REGFILE_WRITE_VALID", false,-1);
        tracep->declBit(c+389,"sim VexRiscv decode_LEGAL_INSTRUCTION", false,-1);
        tracep->declBit(c+390,"sim VexRiscv writeBack_MEMORY_WR", false,-1);
        tracep->declBus(c+255,"sim VexRiscv writeBack_MEMORY_STORE_DATA_RF", false,-1, 31,0);
        tracep->declBus(c+256,"sim VexRiscv writeBack_REGFILE_WRITE_DATA", false,-1, 31,0);
        tracep->declBit(c+391,"sim VexRiscv writeBack_MEMORY_ENABLE", false,-1);
        tracep->declBus(c+252,"sim VexRiscv memory_REGFILE_WRITE_DATA", false,-1, 31,0);
        tracep->declBit(c+392,"sim VexRiscv memory_MEMORY_ENABLE", false,-1);
        tracep->declBit(c+393,"sim VexRiscv execute_MEMORY_FORCE_CONSTISTENCY", false,-1);
        tracep->declBus(c+394,"sim VexRiscv execute_RS1", false,-1, 31,0);
        tracep->declBit(c+395,"sim VexRiscv execute_MEMORY_MANAGMENT", false,-1);
        tracep->declBus(c+396,"sim VexRiscv execute_RS2", false,-1, 31,0);
        tracep->declBit(c+397,"sim VexRiscv execute_MEMORY_WR", false,-1);
        tracep->declBus(c+250,"sim VexRiscv execute_SRC_ADD", false,-1, 31,0);
        tracep->declBit(c+398,"sim VexRiscv execute_MEMORY_ENABLE", false,-1);
        tracep->declBus(c+399,"sim VexRiscv execute_INSTRUCTION", false,-1, 31,0);
        tracep->declBit(c+400,"sim VexRiscv decode_MEMORY_ENABLE", false,-1);
        tracep->declBit(c+401,"sim VexRiscv decode_FLUSH_ALL", false,-1);
        tracep->declBit(c+402,"sim VexRiscv IBusCachedPlugin_rsp_issueDetected_4", false,-1);
        tracep->declBit(c+403,"sim VexRiscv IBusCachedPlugin_rsp_issueDetected_3", false,-1);
        tracep->declBit(c+404,"sim VexRiscv IBusCachedPlugin_rsp_issueDetected_2", false,-1);
        tracep->declBit(c+405,"sim VexRiscv IBusCachedPlugin_rsp_issueDetected_1", false,-1);
        tracep->declBus(c+406,"sim VexRiscv decode_BRANCH_CTRL", false,-1, 1,0);
        tracep->declBus(c+265,"sim VexRiscv decode_INSTRUCTION", false,-1, 31,0);
        tracep->declBus(c+407,"sim VexRiscv decode_PC", false,-1, 31,0);
        tracep->declBus(c+408,"sim VexRiscv writeBack_PC", false,-1, 31,0);
        tracep->declBus(c+409,"sim VexRiscv writeBack_INSTRUCTION", false,-1, 31,0);
        tracep->declBit(c+410,"sim VexRiscv decode_arbitration_haltItself", false,-1);
        tracep->declBit(c+411,"sim VexRiscv decode_arbitration_haltByOther", false,-1);
        tracep->declBit(c+412,"sim VexRiscv decode_arbitration_removeIt", false,-1);
        tracep->declBit(c+990,"sim VexRiscv decode_arbitration_flushIt", false,-1);
        tracep->declBit(c+413,"sim VexRiscv decode_arbitration_flushNext", false,-1);
        tracep->declBit(c+414,"sim VexRiscv decode_arbitration_isValid", false,-1);
        tracep->declBit(c+415,"sim VexRiscv decode_arbitration_isStuck", false,-1);
        tracep->declBit(c+416,"sim VexRiscv decode_arbitration_isStuckByOthers", false,-1);
        tracep->declBit(c+417,"sim VexRiscv decode_arbitration_isFlushed", false,-1);
        tracep->declBit(c+418,"sim VexRiscv decode_arbitration_isMoving", false,-1);
        tracep->declBit(c+419,"sim VexRiscv decode_arbitration_isFiring", false,-1);
        tracep->declBit(c+420,"sim VexRiscv execute_arbitration_haltItself", false,-1);
        tracep->declBit(c+421,"sim VexRiscv execute_arbitration_haltByOther", false,-1);
        tracep->declBit(c+422,"sim VexRiscv execute_arbitration_removeIt", false,-1);
        tracep->declBit(c+423,"sim VexRiscv execute_arbitration_flushIt", false,-1);
        tracep->declBit(c+424,"sim VexRiscv execute_arbitration_flushNext", false,-1);
        tracep->declBit(c+425,"sim VexRiscv execute_arbitration_isValid", false,-1);
        tracep->declBit(c+426,"sim VexRiscv execute_arbitration_isStuck", false,-1);
        tracep->declBit(c+427,"sim VexRiscv execute_arbitration_isStuckByOthers", false,-1);
        tracep->declBit(c+428,"sim VexRiscv execute_arbitration_isFlushed", false,-1);
        tracep->declBit(c+429,"sim VexRiscv execute_arbitration_isMoving", false,-1);
        tracep->declBit(c+430,"sim VexRiscv execute_arbitration_isFiring", false,-1);
        tracep->declBit(c+431,"sim VexRiscv memory_arbitration_haltItself", false,-1);
        tracep->declBit(c+990,"sim VexRiscv memory_arbitration_haltByOther", false,-1);
        tracep->declBit(c+432,"sim VexRiscv memory_arbitration_removeIt", false,-1);
        tracep->declBit(c+990,"sim VexRiscv memory_arbitration_flushIt", false,-1);
        tracep->declBit(c+433,"sim VexRiscv memory_arbitration_flushNext", false,-1);
        tracep->declBit(c+434,"sim VexRiscv memory_arbitration_isValid", false,-1);
        tracep->declBit(c+435,"sim VexRiscv memory_arbitration_isStuck", false,-1);
        tracep->declBit(c+436,"sim VexRiscv memory_arbitration_isStuckByOthers", false,-1);
        tracep->declBit(c+437,"sim VexRiscv memory_arbitration_isFlushed", false,-1);
        tracep->declBit(c+438,"sim VexRiscv memory_arbitration_isMoving", false,-1);
        tracep->declBit(c+439,"sim VexRiscv memory_arbitration_isFiring", false,-1);
        tracep->declBit(c+436,"sim VexRiscv writeBack_arbitration_haltItself", false,-1);
        tracep->declBit(c+990,"sim VexRiscv writeBack_arbitration_haltByOther", false,-1);
        tracep->declBit(c+440,"sim VexRiscv writeBack_arbitration_removeIt", false,-1);
        tracep->declBit(c+441,"sim VexRiscv writeBack_arbitration_flushIt", false,-1);
        tracep->declBit(c+442,"sim VexRiscv writeBack_arbitration_flushNext", false,-1);
        tracep->declBit(c+443,"sim VexRiscv writeBack_arbitration_isValid", false,-1);
        tracep->declBit(c+436,"sim VexRiscv writeBack_arbitration_isStuck", false,-1);
        tracep->declBit(c+990,"sim VexRiscv writeBack_arbitration_isStuckByOthers", false,-1);
        tracep->declBit(c+441,"sim VexRiscv writeBack_arbitration_isFlushed", false,-1);
        tracep->declBit(c+444,"sim VexRiscv writeBack_arbitration_isMoving", false,-1);
        tracep->declBit(c+445,"sim VexRiscv writeBack_arbitration_isFiring", false,-1);
        tracep->declBus(c+942,"sim VexRiscv lastStageInstruction", false,-1, 31,0);
        tracep->declBus(c+943,"sim VexRiscv lastStagePc", false,-1, 31,0);
        tracep->declBit(c+944,"sim VexRiscv lastStageIsValid", false,-1);
        tracep->declBit(c+945,"sim VexRiscv lastStageIsFiring", false,-1);
        tracep->declBit(c+446,"sim VexRiscv IBusCachedPlugin_fetcherHalt", false,-1);
        tracep->declBit(c+990,"sim VexRiscv IBusCachedPlugin_forceNoDecodeCond", false,-1);
        tracep->declBit(c+447,"sim VexRiscv IBusCachedPlugin_incomingInstruction", false,-1);
        tracep->declBit(c+448,"sim VexRiscv IBusCachedPlugin_predictionJumpInterface_valid", false,-1);
        tracep->declBus(c+449,"sim VexRiscv IBusCachedPlugin_predictionJumpInterface_payload", false,-1, 31,0);
        tracep->declBit(c+307,"sim VexRiscv IBusCachedPlugin_decodePrediction_cmd_hadBranch", false,-1);
        tracep->declBit(c+450,"sim VexRiscv IBusCachedPlugin_decodePrediction_rsp_wasWrong", false,-1);
        tracep->declBit(c+451,"sim VexRiscv IBusCachedPlugin_pcValids_0", false,-1);
        tracep->declBit(c+452,"sim VexRiscv IBusCachedPlugin_pcValids_1", false,-1);
        tracep->declBit(c+453,"sim VexRiscv IBusCachedPlugin_pcValids_2", false,-1);
        tracep->declBit(c+454,"sim VexRiscv IBusCachedPlugin_pcValids_3", false,-1);
        tracep->declBit(c+455,"sim VexRiscv IBusCachedPlugin_decodeExceptionPort_valid", false,-1);
        tracep->declBus(c+456,"sim VexRiscv IBusCachedPlugin_decodeExceptionPort_payload_code", false,-1, 3,0);
        tracep->declBus(c+457,"sim VexRiscv IBusCachedPlugin_decodeExceptionPort_payload_badAddr", false,-1, 31,0);
        tracep->declBit(c+244,"sim VexRiscv IBusCachedPlugin_mmuBus_cmd_0_isValid", false,-1);
        tracep->declBit(c+245,"sim VexRiscv IBusCachedPlugin_mmuBus_cmd_0_isStuck", false,-1);
        tracep->declBus(c+941,"sim VexRiscv IBusCachedPlugin_mmuBus_cmd_0_virtualAddress", false,-1, 31,0);
        tracep->declBit(c+990,"sim VexRiscv IBusCachedPlugin_mmuBus_cmd_0_bypassTranslation", false,-1);
        tracep->declBus(c+941,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+946,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_isIoAccess", false,-1);
        tracep->declBit(c+990,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_isPaging", false,-1);
        tracep->declBit(c+988,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_allowRead", false,-1);
        tracep->declBit(c+988,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_allowWrite", false,-1);
        tracep->declBit(c+988,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_allowExecute", false,-1);
        tracep->declBit(c+990,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_exception", false,-1);
        tracep->declBit(c+990,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_refilling", false,-1);
        tracep->declBit(c+1009,"sim VexRiscv IBusCachedPlugin_mmuBus_rsp_bypassTranslation", false,-1);
        tracep->declBit(c+458,"sim VexRiscv IBusCachedPlugin_mmuBus_end", false,-1);
        tracep->declBit(c+990,"sim VexRiscv IBusCachedPlugin_mmuBus_busy", false,-1);
        tracep->declBit(c+90,"sim VexRiscv dBus_cmd_valid", false,-1);
    }
}

void Vsim::traceInitSub3(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+459,"sim VexRiscv dBus_cmd_ready", false,-1);
        tracep->declBit(c+94,"sim VexRiscv dBus_cmd_payload_wr", false,-1);
        tracep->declBit(c+460,"sim VexRiscv dBus_cmd_payload_uncached", false,-1);
        tracep->declBus(c+461,"sim VexRiscv dBus_cmd_payload_address", false,-1, 31,0);
        tracep->declBus(c+92,"sim VexRiscv dBus_cmd_payload_data", false,-1, 31,0);
        tracep->declBus(c+462,"sim VexRiscv dBus_cmd_payload_mask", false,-1, 3,0);
        tracep->declBus(c+463,"sim VexRiscv dBus_cmd_payload_size", false,-1, 2,0);
        tracep->declBit(c+464,"sim VexRiscv dBus_cmd_payload_last", false,-1);
        tracep->declBit(c+465,"sim VexRiscv dBus_rsp_valid", false,-1);
        tracep->declBit(c+1010,"sim VexRiscv dBus_rsp_payload_last", false,-1);
        tracep->declBus(c+466,"sim VexRiscv dBus_rsp_payload_data", false,-1, 31,0);
        tracep->declBit(c+990,"sim VexRiscv dBus_rsp_payload_error", false,-1);
        tracep->declBit(c+251,"sim VexRiscv DBusCachedPlugin_mmuBus_cmd_0_isValid", false,-1);
        tracep->declBit(c+435,"sim VexRiscv DBusCachedPlugin_mmuBus_cmd_0_isStuck", false,-1);
        tracep->declBus(c+252,"sim VexRiscv DBusCachedPlugin_mmuBus_cmd_0_virtualAddress", false,-1, 31,0);
        tracep->declBit(c+990,"sim VexRiscv DBusCachedPlugin_mmuBus_cmd_0_bypassTranslation", false,-1);
        tracep->declBus(c+252,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+467,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_isIoAccess", false,-1);
        tracep->declBit(c+990,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_isPaging", false,-1);
        tracep->declBit(c+988,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_allowRead", false,-1);
        tracep->declBit(c+988,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_allowWrite", false,-1);
        tracep->declBit(c+988,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_allowExecute", false,-1);
        tracep->declBit(c+990,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_exception", false,-1);
        tracep->declBit(c+990,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_refilling", false,-1);
        tracep->declBit(c+1011,"sim VexRiscv DBusCachedPlugin_mmuBus_rsp_bypassTranslation", false,-1);
        tracep->declBit(c+468,"sim VexRiscv DBusCachedPlugin_mmuBus_end", false,-1);
        tracep->declBit(c+990,"sim VexRiscv DBusCachedPlugin_mmuBus_busy", false,-1);
        tracep->declBit(c+469,"sim VexRiscv DBusCachedPlugin_redoBranch_valid", false,-1);
        tracep->declBus(c+408,"sim VexRiscv DBusCachedPlugin_redoBranch_payload", false,-1, 31,0);
        tracep->declBit(c+470,"sim VexRiscv DBusCachedPlugin_exceptionBus_valid", false,-1);
        tracep->declBus(c+471,"sim VexRiscv DBusCachedPlugin_exceptionBus_payload_code", false,-1, 3,0);
        tracep->declBus(c+256,"sim VexRiscv DBusCachedPlugin_exceptionBus_payload_badAddr", false,-1, 31,0);
        tracep->declBit(c+472,"sim VexRiscv decodeExceptionPort_valid", false,-1);
        tracep->declBus(c+1012,"sim VexRiscv decodeExceptionPort_payload_code", false,-1, 3,0);
        tracep->declBus(c+265,"sim VexRiscv decodeExceptionPort_payload_badAddr", false,-1, 31,0);
        tracep->declBit(c+450,"sim VexRiscv BranchPlugin_jumpInterface_valid", false,-1);
        tracep->declBus(c+356,"sim VexRiscv BranchPlugin_jumpInterface_payload", false,-1, 31,0);
        tracep->declBit(c+473,"sim VexRiscv BranchPlugin_branchExceptionPort_valid", false,-1);
        tracep->declBus(c+1013,"sim VexRiscv BranchPlugin_branchExceptionPort_payload_code", false,-1, 3,0);
        tracep->declBus(c+356,"sim VexRiscv BranchPlugin_branchExceptionPort_payload_badAddr", false,-1, 31,0);
        tracep->declBit(c+474,"sim VexRiscv BranchPlugin_inDebugNoFetchFlag", false,-1);
        tracep->declBus(c+475,"sim VexRiscv CsrPlugin_csrMapping_readDataSignal", false,-1, 31,0);
        tracep->declBus(c+475,"sim VexRiscv CsrPlugin_csrMapping_readDataInit", false,-1, 31,0);
        tracep->declBus(c+476,"sim VexRiscv CsrPlugin_csrMapping_writeDataSignal", false,-1, 31,0);
        tracep->declBit(c+477,"sim VexRiscv CsrPlugin_csrMapping_allowCsrSignal", false,-1);
        tracep->declBit(c+478,"sim VexRiscv CsrPlugin_csrMapping_hazardFree", false,-1);
        tracep->declBit(c+990,"sim VexRiscv CsrPlugin_csrMapping_doForceFailCsr", false,-1);
        tracep->declBit(c+947,"sim VexRiscv CsrPlugin_inWfi", false,-1);
        tracep->declBit(c+479,"sim VexRiscv CsrPlugin_thirdPartyWake", false,-1);
        tracep->declBit(c+480,"sim VexRiscv CsrPlugin_jumpInterface_valid", false,-1);
        tracep->declBus(c+481,"sim VexRiscv CsrPlugin_jumpInterface_payload", false,-1, 31,0);
        tracep->declBit(c+482,"sim VexRiscv CsrPlugin_exceptionPendings_0", false,-1);
        tracep->declBit(c+483,"sim VexRiscv CsrPlugin_exceptionPendings_1", false,-1);
        tracep->declBit(c+484,"sim VexRiscv CsrPlugin_exceptionPendings_2", false,-1);
        tracep->declBit(c+485,"sim VexRiscv CsrPlugin_exceptionPendings_3", false,-1);
        tracep->declBit(c+486,"sim VexRiscv externalInterrupt", false,-1);
        tracep->declBit(c+480,"sim VexRiscv contextSwitching", false,-1);
        tracep->declBus(c+487,"sim VexRiscv CsrPlugin_privilege", false,-1, 1,0);
        tracep->declBit(c+488,"sim VexRiscv CsrPlugin_forceMachineWire", false,-1);
        tracep->declBit(c+489,"sim VexRiscv CsrPlugin_selfException_valid", false,-1);
        tracep->declBus(c+490,"sim VexRiscv CsrPlugin_selfException_payload_code", false,-1, 3,0);
        tracep->declBus(c+399,"sim VexRiscv CsrPlugin_selfException_payload_badAddr", false,-1, 31,0);
        tracep->declBit(c+491,"sim VexRiscv CsrPlugin_allowInterrupts", false,-1);
        tracep->declBit(c+492,"sim VexRiscv CsrPlugin_allowException", false,-1);
        tracep->declBit(c+493,"sim VexRiscv CsrPlugin_allowEbreakException", false,-1);
        tracep->declBit(c+990,"sim VexRiscv CsrPlugin_xretAwayFromMachine", false,-1);
        tracep->declBit(c+494,"sim VexRiscv DebugPlugin_injectionPort_valid", false,-1);
        tracep->declBit(c+495,"sim VexRiscv DebugPlugin_injectionPort_ready", false,-1);
        tracep->declBus(c+194,"sim VexRiscv DebugPlugin_injectionPort_payload", false,-1, 31,0);
        tracep->declBit(c+496,"sim VexRiscv IBusCachedPlugin_externalFlush", false,-1);
        tracep->declBit(c+497,"sim VexRiscv IBusCachedPlugin_jump_pcLoad_valid", false,-1);
        tracep->declBus(c+498,"sim VexRiscv IBusCachedPlugin_jump_pcLoad_payload", false,-1, 31,0);
        tracep->declBit(c+243,"sim VexRiscv IBusCachedPlugin_fetchPc_output_valid", false,-1);
        tracep->declBit(c+499,"sim VexRiscv IBusCachedPlugin_fetchPc_output_ready", false,-1);
        tracep->declBus(c+500,"sim VexRiscv IBusCachedPlugin_fetchPc_output_payload", false,-1, 31,0);
        tracep->declBus(c+941,"sim VexRiscv IBusCachedPlugin_fetchPc_pcReg", false,-1, 31,0);
        tracep->declBit(c+501,"sim VexRiscv IBusCachedPlugin_fetchPc_correction", false,-1);
        tracep->declBit(c+502,"sim VexRiscv IBusCachedPlugin_fetchPc_correctionReg", false,-1);
        tracep->declBit(c+503,"sim VexRiscv IBusCachedPlugin_fetchPc_output_fire", false,-1);
        tracep->declBit(c+504,"sim VexRiscv IBusCachedPlugin_fetchPc_corrected", false,-1);
        tracep->declBit(c+505,"sim VexRiscv IBusCachedPlugin_fetchPc_pcRegPropagate", false,-1);
        tracep->declBit(c+506,"sim VexRiscv IBusCachedPlugin_fetchPc_booted", false,-1);
        tracep->declBit(c+507,"sim VexRiscv IBusCachedPlugin_fetchPc_inc", false,-1);
        tracep->declBit(c+508,"sim VexRiscv when_Fetcher_l133", false,-1);
        tracep->declBit(c+509,"sim VexRiscv when_Fetcher_l133_1", false,-1);
        tracep->declBus(c+500,"sim VexRiscv IBusCachedPlugin_fetchPc_pc", false,-1, 31,0);
        tracep->declBit(c+510,"sim VexRiscv IBusCachedPlugin_fetchPc_redo_valid", false,-1);
        tracep->declBus(c+407,"sim VexRiscv IBusCachedPlugin_fetchPc_redo_payload", false,-1, 31,0);
        tracep->declBit(c+511,"sim VexRiscv IBusCachedPlugin_fetchPc_flushed", false,-1);
        tracep->declBit(c+512,"sim VexRiscv when_Fetcher_l160", false,-1);
        tracep->declBit(c+510,"sim VexRiscv IBusCachedPlugin_iBusRsp_redoFetch", false,-1);
        tracep->declBit(c+243,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_0_input_valid", false,-1);
        tracep->declBit(c+499,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_0_input_ready", false,-1);
        tracep->declBus(c+500,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_0_input_payload", false,-1, 31,0);
        tracep->declBit(c+513,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_0_output_valid", false,-1);
        tracep->declBit(c+514,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_0_output_ready", false,-1);
        tracep->declBus(c+500,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_0_output_payload", false,-1, 31,0);
        tracep->declBit(c+515,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_0_halt", false,-1);
        tracep->declBit(c+516,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_input_valid", false,-1);
        tracep->declBit(c+514,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_input_ready", false,-1);
        tracep->declBus(c+941,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_input_payload", false,-1, 31,0);
        tracep->declBit(c+516,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_output_valid", false,-1);
        tracep->declBit(c+514,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_output_ready", false,-1);
        tracep->declBus(c+941,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_output_payload", false,-1, 31,0);
        tracep->declBit(c+990,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_halt", false,-1);
        tracep->declBit(c+517,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_2_input_valid", false,-1);
        tracep->declBit(c+514,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_2_input_ready", false,-1);
        tracep->declBus(c+407,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_2_input_payload", false,-1, 31,0);
        tracep->declBit(c+518,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_2_output_valid", false,-1);
        tracep->declBit(c+519,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_2_output_ready", false,-1);
        tracep->declBus(c+407,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_2_output_payload", false,-1, 31,0);
        tracep->declBit(c+520,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_2_halt", false,-1);
        tracep->declBit(c+521,"sim VexRiscv IBusCachedPlugin_iBusRsp_flush", false,-1);
        tracep->declBit(c+517,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid", false,-1);
        tracep->declBit(c+514,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_ready", false,-1);
        tracep->declBus(c+407,"sim VexRiscv IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload", false,-1, 31,0);
        tracep->declBit(c+522,"sim VexRiscv IBusCachedPlugin_iBusRsp_readyForError", false,-1);
        tracep->declBit(c+518,"sim VexRiscv IBusCachedPlugin_iBusRsp_output_valid", false,-1);
        tracep->declBit(c+519,"sim VexRiscv IBusCachedPlugin_iBusRsp_output_ready", false,-1);
        tracep->declBus(c+407,"sim VexRiscv IBusCachedPlugin_iBusRsp_output_payload_pc", false,-1, 31,0);
        tracep->declBit(c+1014,"sim VexRiscv IBusCachedPlugin_iBusRsp_output_payload_rsp_error", false,-1);
        tracep->declBus(c+265,"sim VexRiscv IBusCachedPlugin_iBusRsp_output_payload_rsp_inst", false,-1, 31,0);
        tracep->declBit(c+1015,"sim VexRiscv IBusCachedPlugin_iBusRsp_output_payload_isRvc", false,-1);
        tracep->declBit(c+523,"sim VexRiscv when_Fetcher_l242", false,-1);
        tracep->declBit(c+524,"sim VexRiscv when_Fetcher_l322", false,-1);
        tracep->declBit(c+525,"sim VexRiscv IBusCachedPlugin_injector_nextPcCalc_valids_0", false,-1);
        tracep->declBit(c+514,"sim VexRiscv when_Fetcher_l331", false,-1);
        tracep->declBit(c+451,"sim VexRiscv IBusCachedPlugin_injector_nextPcCalc_valids_1", false,-1);
        tracep->declBit(c+514,"sim VexRiscv when_Fetcher_l331_1", false,-1);
        tracep->declBit(c+452,"sim VexRiscv IBusCachedPlugin_injector_nextPcCalc_valids_2", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Fetcher_l331_2", false,-1);
        tracep->declBit(c+453,"sim VexRiscv IBusCachedPlugin_injector_nextPcCalc_valids_3", false,-1);
        tracep->declBit(c+527,"sim VexRiscv when_Fetcher_l331_3", false,-1);
        tracep->declBit(c+454,"sim VexRiscv IBusCachedPlugin_injector_nextPcCalc_valids_4", false,-1);
        tracep->declBit(c+528,"sim VexRiscv when_Fetcher_l331_4", false,-1);
        tracep->declBit(c+268,"sim VexRiscv iBus_cmd_valid", false,-1);
        tracep->declBit(c+529,"sim VexRiscv iBus_cmd_ready", false,-1);
        tracep->declBus(c+269,"sim VexRiscv iBus_cmd_payload_address", false,-1, 31,0);
        tracep->declBus(c+1006,"sim VexRiscv iBus_cmd_payload_size", false,-1, 2,0);
        tracep->declBit(c+530,"sim VexRiscv iBus_rsp_valid", false,-1);
        tracep->declBus(c+531,"sim VexRiscv iBus_rsp_payload_data", false,-1, 31,0);
        tracep->declBit(c+990,"sim VexRiscv iBus_rsp_payload_error", false,-1);
        tracep->declBus(c+532,"sim VexRiscv IBusCachedPlugin_rspCounter", false,-1, 31,0);
        tracep->declBit(c+990,"sim VexRiscv IBusCachedPlugin_s0_tightlyCoupledHit", false,-1);
        tracep->declBit(c+533,"sim VexRiscv IBusCachedPlugin_s1_tightlyCoupledHit", false,-1);
        tracep->declBit(c+534,"sim VexRiscv IBusCachedPlugin_s2_tightlyCoupledHit", false,-1);
        tracep->declBit(c+990,"sim VexRiscv IBusCachedPlugin_rsp_iBusRspOutputHalt", false,-1);
        tracep->declBit(c+990,"sim VexRiscv IBusCachedPlugin_rsp_issueDetected", false,-1);
        tracep->declBit(c+535,"sim VexRiscv IBusCachedPlugin_rsp_redoFetch", false,-1);
        tracep->declBit(c+536,"sim VexRiscv when_IBusCachedPlugin_l245", false,-1);
        tracep->declBit(c+537,"sim VexRiscv when_IBusCachedPlugin_l250", false,-1);
        tracep->declBit(c+538,"sim VexRiscv when_IBusCachedPlugin_l256", false,-1);
        tracep->declBit(c+539,"sim VexRiscv when_IBusCachedPlugin_l262", false,-1);
        tracep->declBit(c+402,"sim VexRiscv when_IBusCachedPlugin_l273", false,-1);
        tracep->declBit(c+540,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_valid", false,-1);
        tracep->declBit(c+541,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_ready", false,-1);
        tracep->declBit(c+542,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_payload_wr", false,-1);
        tracep->declBit(c+543,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_payload_uncached", false,-1);
        tracep->declBus(c+544,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_payload_address", false,-1, 31,0);
        tracep->declBus(c+545,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_payload_data", false,-1, 31,0);
        tracep->declBus(c+546,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_payload_mask", false,-1, 3,0);
        tracep->declBus(c+547,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_payload_size", false,-1, 2,0);
        tracep->declBit(c+548,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_payload_last", false,-1);
        tracep->declBit(c+549,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_rValidN", false,-1);
        tracep->declBit(c+550,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_rData_wr", false,-1);
        tracep->declBit(c+551,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_rData_uncached", false,-1);
        tracep->declBus(c+552,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_rData_address", false,-1, 31,0);
        tracep->declBus(c+553,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_rData_data", false,-1, 31,0);
        tracep->declBus(c+554,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_rData_mask", false,-1, 3,0);
        tracep->declBus(c+555,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_rData_size", false,-1, 2,0);
        tracep->declBit(c+556,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_rData_last", false,-1);
        tracep->declBit(c+90,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_valid", false,-1);
        tracep->declBit(c+459,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_ready", false,-1);
        tracep->declBit(c+94,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_wr", false,-1);
        tracep->declBit(c+460,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_uncached", false,-1);
        tracep->declBus(c+461,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_address", false,-1, 31,0);
        tracep->declBus(c+92,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_data", false,-1, 31,0);
        tracep->declBus(c+462,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_mask", false,-1, 3,0);
        tracep->declBus(c+463,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_size", false,-1, 2,0);
        tracep->declBit(c+464,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_last", false,-1);
        tracep->declBit(c+90,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid", false,-1);
        tracep->declBit(c+94,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr", false,-1);
        tracep->declBit(c+460,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_uncached", false,-1);
        tracep->declBus(c+461,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address", false,-1, 31,0);
        tracep->declBus(c+92,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_data", false,-1, 31,0);
        tracep->declBus(c+462,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_mask", false,-1, 3,0);
        tracep->declBus(c+463,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size", false,-1, 2,0);
        tracep->declBit(c+464,"sim VexRiscv toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_last", false,-1);
        tracep->declBit(c+557,"sim VexRiscv when_Stream_l369", false,-1);
        tracep->declBus(c+558,"sim VexRiscv DBusCachedPlugin_rspCounter", false,-1, 31,0);
        tracep->declBit(c+990,"sim VexRiscv when_DBusCachedPlugin_l352", false,-1);
        tracep->declBus(c+559,"sim VexRiscv execute_DBusCachedPlugin_size", false,-1, 1,0);
        tracep->declBit(c+560,"sim VexRiscv toplevel_dataCache_1_io_cpu_flush_isStall", false,-1);
        tracep->declBit(c+561,"sim VexRiscv when_DBusCachedPlugin_l394", false,-1);
        tracep->declBit(c+562,"sim VexRiscv when_DBusCachedPlugin_l410", false,-1);
        tracep->declBit(c+563,"sim VexRiscv when_DBusCachedPlugin_l472", false,-1);
        tracep->declBit(c+564,"sim VexRiscv when_DBusCachedPlugin_l533", false,-1);
        tracep->declBit(c+565,"sim VexRiscv when_DBusCachedPlugin_l553", false,-1);
        tracep->declBus(c+274,"sim VexRiscv writeBack_DBusCachedPlugin_rspData", false,-1, 31,0);
        tracep->declBus(c+566,"sim VexRiscv writeBack_DBusCachedPlugin_rspSplits_0", false,-1, 7,0);
        tracep->declBus(c+567,"sim VexRiscv writeBack_DBusCachedPlugin_rspSplits_1", false,-1, 7,0);
        tracep->declBus(c+568,"sim VexRiscv writeBack_DBusCachedPlugin_rspSplits_2", false,-1, 7,0);
        tracep->declBus(c+569,"sim VexRiscv writeBack_DBusCachedPlugin_rspSplits_3", false,-1, 7,0);
        tracep->declBus(c+570,"sim VexRiscv writeBack_DBusCachedPlugin_rspShifted", false,-1, 31,0);
        tracep->declBus(c+570,"sim VexRiscv writeBack_DBusCachedPlugin_rspRf", false,-1, 31,0);
        tracep->declBus(c+571,"sim VexRiscv switch_Misc_l232", false,-1, 1,0);
        tracep->declBus(c+572,"sim VexRiscv writeBack_DBusCachedPlugin_rspFormated", false,-1, 31,0);
        tracep->declBit(c+573,"sim VexRiscv when_DBusCachedPlugin_l580", false,-1);
        tracep->declBit(c+574,"sim VexRiscv when_RegFilePlugin_l63", false,-1);
        tracep->declBus(c+575,"sim VexRiscv decode_RegFilePlugin_regFileReadAddress1", false,-1, 4,0);
        tracep->declBus(c+576,"sim VexRiscv decode_RegFilePlugin_regFileReadAddress2", false,-1, 4,0);
        tracep->declBus(c+577,"sim VexRiscv decode_RegFilePlugin_rs1Data", false,-1, 31,0);
        tracep->declBus(c+578,"sim VexRiscv decode_RegFilePlugin_rs2Data", false,-1, 31,0);
        tracep->declBit(c+948,"sim VexRiscv lastStageRegFileWrite_valid", false,-1);
        tracep->declBus(c+949,"sim VexRiscv lastStageRegFileWrite_payload_address", false,-1, 4,0);
        tracep->declBus(c+950,"sim VexRiscv lastStageRegFileWrite_payload_data", false,-1, 31,0);
        tracep->declBus(c+579,"sim VexRiscv execute_IntAluPlugin_bitwise", false,-1, 31,0);
        tracep->declBus(c+250,"sim VexRiscv execute_SrcPlugin_addSub", false,-1, 31,0);
        tracep->declBit(c+382,"sim VexRiscv execute_SrcPlugin_less", false,-1);
        tracep->declBus(c+580,"sim VexRiscv execute_FullBarrelShifterPlugin_amplitude", false,-1, 4,0);
        tracep->declBus(c+581,"sim VexRiscv execute_FullBarrelShifterPlugin_reversed", false,-1, 31,0);
        tracep->declBit(c+582,"sim VexRiscv HazardSimplePlugin_src0Hazard", false,-1);
        tracep->declBit(c+583,"sim VexRiscv HazardSimplePlugin_src1Hazard", false,-1);
        tracep->declBit(c+584,"sim VexRiscv HazardSimplePlugin_writeBackWrites_valid", false,-1);
        tracep->declBus(c+585,"sim VexRiscv HazardSimplePlugin_writeBackWrites_payload_address", false,-1, 4,0);
        tracep->declBus(c+586,"sim VexRiscv HazardSimplePlugin_writeBackWrites_payload_data", false,-1, 31,0);
        tracep->declBit(c+587,"sim VexRiscv HazardSimplePlugin_writeBackBuffer_valid", false,-1);
        tracep->declBus(c+588,"sim VexRiscv HazardSimplePlugin_writeBackBuffer_payload_address", false,-1, 4,0);
        tracep->declBus(c+589,"sim VexRiscv HazardSimplePlugin_writeBackBuffer_payload_data", false,-1, 31,0);
        tracep->declBit(c+590,"sim VexRiscv HazardSimplePlugin_addr0Match", false,-1);
        tracep->declBit(c+591,"sim VexRiscv HazardSimplePlugin_addr1Match", false,-1);
        tracep->declBit(c+988,"sim VexRiscv when_HazardSimplePlugin_l47", false,-1);
        tracep->declBit(c+592,"sim VexRiscv when_HazardSimplePlugin_l48", false,-1);
        tracep->declBit(c+593,"sim VexRiscv when_HazardSimplePlugin_l51", false,-1);
        tracep->declBit(c+594,"sim VexRiscv when_HazardSimplePlugin_l45", false,-1);
        tracep->declBit(c+595,"sim VexRiscv when_HazardSimplePlugin_l57", false,-1);
        tracep->declBit(c+990,"sim VexRiscv when_HazardSimplePlugin_l58", false,-1);
        tracep->declBit(c+596,"sim VexRiscv when_HazardSimplePlugin_l48_1", false,-1);
        tracep->declBit(c+597,"sim VexRiscv when_HazardSimplePlugin_l51_1", false,-1);
        tracep->declBit(c+598,"sim VexRiscv when_HazardSimplePlugin_l45_1", false,-1);
        tracep->declBit(c+599,"sim VexRiscv when_HazardSimplePlugin_l57_1", false,-1);
        tracep->declBit(c+600,"sim VexRiscv when_HazardSimplePlugin_l58_1", false,-1);
        tracep->declBit(c+601,"sim VexRiscv when_HazardSimplePlugin_l48_2", false,-1);
        tracep->declBit(c+602,"sim VexRiscv when_HazardSimplePlugin_l51_2", false,-1);
        tracep->declBit(c+603,"sim VexRiscv when_HazardSimplePlugin_l45_2", false,-1);
        tracep->declBit(c+604,"sim VexRiscv when_HazardSimplePlugin_l57_2", false,-1);
        tracep->declBit(c+605,"sim VexRiscv when_HazardSimplePlugin_l58_2", false,-1);
        tracep->declBit(c+606,"sim VexRiscv when_HazardSimplePlugin_l105", false,-1);
        tracep->declBit(c+607,"sim VexRiscv when_HazardSimplePlugin_l108", false,-1);
        tracep->declBit(c+608,"sim VexRiscv when_HazardSimplePlugin_l113", false,-1);
        tracep->declBit(c+609,"sim VexRiscv execute_BranchPlugin_eq", false,-1);
    }
}

void Vsim::traceInitSub4(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+610,"sim VexRiscv switch_Misc_l232_1", false,-1, 2,0);
        tracep->declBit(c+611,"sim VexRiscv execute_BranchPlugin_missAlignedTarget", false,-1);
        tracep->declBus(c+612,"sim VexRiscv execute_BranchPlugin_branch_src1", false,-1, 31,0);
        tracep->declBus(c+613,"sim VexRiscv execute_BranchPlugin_branch_src2", false,-1, 31,0);
        tracep->declBus(c+614,"sim VexRiscv execute_BranchPlugin_branchAdder", false,-1, 31,0);
        tracep->declBus(c+993,"sim VexRiscv CsrPlugin_misa_base", false,-1, 1,0);
        tracep->declBus(c+1016,"sim VexRiscv CsrPlugin_misa_extensions", false,-1, 25,0);
        tracep->declBus(c+1017,"sim VexRiscv CsrPlugin_mtvec_mode", false,-1, 1,0);
        tracep->declBus(c+615,"sim VexRiscv CsrPlugin_mtvec_base", false,-1, 29,0);
        tracep->declBus(c+616,"sim VexRiscv CsrPlugin_mepc", false,-1, 31,0);
        tracep->declBit(c+617,"sim VexRiscv CsrPlugin_mstatus_MIE", false,-1);
        tracep->declBit(c+618,"sim VexRiscv CsrPlugin_mstatus_MPIE", false,-1);
        tracep->declBus(c+619,"sim VexRiscv CsrPlugin_mstatus_MPP", false,-1, 1,0);
        tracep->declBit(c+620,"sim VexRiscv CsrPlugin_mip_MEIP", false,-1);
        tracep->declBit(c+621,"sim VexRiscv CsrPlugin_mip_MTIP", false,-1);
        tracep->declBit(c+622,"sim VexRiscv CsrPlugin_mip_MSIP", false,-1);
        tracep->declBit(c+623,"sim VexRiscv CsrPlugin_mie_MEIE", false,-1);
        tracep->declBit(c+624,"sim VexRiscv CsrPlugin_mie_MTIE", false,-1);
        tracep->declBit(c+625,"sim VexRiscv CsrPlugin_mie_MSIE", false,-1);
        tracep->declBit(c+626,"sim VexRiscv CsrPlugin_mcause_interrupt", false,-1);
        tracep->declBus(c+627,"sim VexRiscv CsrPlugin_mcause_exceptionCode", false,-1, 3,0);
        tracep->declBus(c+628,"sim VexRiscv CsrPlugin_mtval", false,-1, 31,0);
        tracep->declQuad(c+629,"sim VexRiscv CsrPlugin_mcycle", false,-1, 63,0);
        tracep->declQuad(c+631,"sim VexRiscv CsrPlugin_minstret", false,-1, 63,0);
        tracep->declBit(c+633,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionValids_decode", false,-1);
        tracep->declBit(c+634,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionValids_execute", false,-1);
        tracep->declBit(c+635,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionValids_memory", false,-1);
        tracep->declBit(c+636,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack", false,-1);
        tracep->declBit(c+482,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode", false,-1);
        tracep->declBit(c+483,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute", false,-1);
        tracep->declBit(c+484,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory", false,-1);
        tracep->declBit(c+485,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack", false,-1);
        tracep->declBus(c+637,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionContext_code", false,-1, 3,0);
        tracep->declBus(c+638,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr", false,-1, 31,0);
        tracep->declBus(c+995,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped", false,-1, 1,0);
        tracep->declBus(c+639,"sim VexRiscv CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilege", false,-1, 1,0);
        tracep->declBit(c+519,"sim VexRiscv when_CsrPlugin_l1259", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_CsrPlugin_l1259_1", false,-1);
        tracep->declBit(c+527,"sim VexRiscv when_CsrPlugin_l1259_2", false,-1);
        tracep->declBit(c+528,"sim VexRiscv when_CsrPlugin_l1259_3", false,-1);
        tracep->declBit(c+640,"sim VexRiscv when_CsrPlugin_l1272", false,-1);
        tracep->declBit(c+641,"sim VexRiscv CsrPlugin_interrupt_valid", false,-1);
        tracep->declBus(c+951,"sim VexRiscv CsrPlugin_interrupt_code", false,-1, 3,0);
        tracep->declBus(c+642,"sim VexRiscv CsrPlugin_interrupt_targetPrivilege", false,-1, 1,0);
        tracep->declBit(c+643,"sim VexRiscv when_CsrPlugin_l1296", false,-1);
        tracep->declBit(c+644,"sim VexRiscv when_CsrPlugin_l1302", false,-1);
        tracep->declBit(c+645,"sim VexRiscv when_CsrPlugin_l1302_1", false,-1);
        tracep->declBit(c+646,"sim VexRiscv when_CsrPlugin_l1302_2", false,-1);
        tracep->declBit(c+647,"sim VexRiscv CsrPlugin_exception", false,-1);
        tracep->declBit(c+990,"sim VexRiscv CsrPlugin_lastStageWasWfi", false,-1);
        tracep->declBit(c+648,"sim VexRiscv CsrPlugin_pipelineLiberator_pcValids_0", false,-1);
        tracep->declBit(c+649,"sim VexRiscv CsrPlugin_pipelineLiberator_pcValids_1", false,-1);
        tracep->declBit(c+650,"sim VexRiscv CsrPlugin_pipelineLiberator_pcValids_2", false,-1);
        tracep->declBit(c+651,"sim VexRiscv CsrPlugin_pipelineLiberator_active", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_CsrPlugin_l1335", false,-1);
        tracep->declBit(c+527,"sim VexRiscv when_CsrPlugin_l1335_1", false,-1);
        tracep->declBit(c+528,"sim VexRiscv when_CsrPlugin_l1335_2", false,-1);
        tracep->declBit(c+652,"sim VexRiscv when_CsrPlugin_l1340", false,-1);
        tracep->declBit(c+653,"sim VexRiscv CsrPlugin_pipelineLiberator_done", false,-1);
        tracep->declBit(c+654,"sim VexRiscv when_CsrPlugin_l1346", false,-1);
        tracep->declBit(c+952,"sim VexRiscv CsrPlugin_interruptJump", false,-1);
        tracep->declBit(c+953,"sim VexRiscv CsrPlugin_hadException", false,-1);
        tracep->declBus(c+655,"sim VexRiscv CsrPlugin_targetPrivilege", false,-1, 1,0);
        tracep->declBus(c+656,"sim VexRiscv CsrPlugin_trapCause", false,-1, 3,0);
        tracep->declBit(c+990,"sim VexRiscv CsrPlugin_trapCauseEbreakDebug", false,-1);
        tracep->declBus(c+657,"sim VexRiscv CsrPlugin_xtvec_mode", false,-1, 1,0);
        tracep->declBus(c+658,"sim VexRiscv CsrPlugin_xtvec_base", false,-1, 29,0);
        tracep->declBit(c+990,"sim VexRiscv CsrPlugin_trapEnterDebug", false,-1);
        tracep->declBit(c+659,"sim VexRiscv when_CsrPlugin_l1390", false,-1);
        tracep->declBit(c+988,"sim VexRiscv when_CsrPlugin_l1398", false,-1);
        tracep->declBit(c+660,"sim VexRiscv when_CsrPlugin_l1456", false,-1);
        tracep->declBus(c+661,"sim VexRiscv switch_CsrPlugin_l1460", false,-1, 1,0);
        tracep->declBit(c+662,"sim VexRiscv execute_CsrPlugin_wfiWake", false,-1);
        tracep->declBit(c+663,"sim VexRiscv when_CsrPlugin_l1527", false,-1);
        tracep->declBit(c+664,"sim VexRiscv execute_CsrPlugin_blockedBySideEffects", false,-1);
        tracep->declBit(c+665,"sim VexRiscv execute_CsrPlugin_illegalAccess", false,-1);
        tracep->declBit(c+666,"sim VexRiscv execute_CsrPlugin_illegalInstruction", false,-1);
        tracep->declBit(c+667,"sim VexRiscv when_CsrPlugin_l1547", false,-1);
        tracep->declBit(c+668,"sim VexRiscv when_CsrPlugin_l1548", false,-1);
        tracep->declBit(c+669,"sim VexRiscv when_CsrPlugin_l1555", false,-1);
        tracep->declBit(c+670,"sim VexRiscv execute_CsrPlugin_writeInstruction", false,-1);
        tracep->declBit(c+671,"sim VexRiscv execute_CsrPlugin_readInstruction", false,-1);
        tracep->declBit(c+672,"sim VexRiscv execute_CsrPlugin_writeEnable", false,-1);
        tracep->declBit(c+673,"sim VexRiscv execute_CsrPlugin_readEnable", false,-1);
        tracep->declBus(c+475,"sim VexRiscv execute_CsrPlugin_readToWriteData", false,-1, 31,0);
        tracep->declBit(c+674,"sim VexRiscv switch_Misc_l232_2", false,-1);
        tracep->declBit(c+675,"sim VexRiscv when_CsrPlugin_l1587", false,-1);
        tracep->declBit(c+675,"sim VexRiscv when_CsrPlugin_l1591", false,-1);
        tracep->declBus(c+676,"sim VexRiscv execute_CsrPlugin_csrAddress", false,-1, 11,0);
        tracep->declBit(c+677,"sim VexRiscv execute_MulPlugin_aSigned", false,-1);
        tracep->declBit(c+678,"sim VexRiscv execute_MulPlugin_bSigned", false,-1);
        tracep->declBus(c+394,"sim VexRiscv execute_MulPlugin_a", false,-1, 31,0);
        tracep->declBus(c+396,"sim VexRiscv execute_MulPlugin_b", false,-1, 31,0);
        tracep->declBus(c+559,"sim VexRiscv switch_MulPlugin_l87", false,-1, 1,0);
        tracep->declBus(c+679,"sim VexRiscv execute_MulPlugin_aULow", false,-1, 15,0);
        tracep->declBus(c+680,"sim VexRiscv execute_MulPlugin_bULow", false,-1, 15,0);
        tracep->declBus(c+681,"sim VexRiscv execute_MulPlugin_aSLow", false,-1, 16,0);
        tracep->declBus(c+682,"sim VexRiscv execute_MulPlugin_bSLow", false,-1, 16,0);
        tracep->declBus(c+683,"sim VexRiscv execute_MulPlugin_aHigh", false,-1, 16,0);
        tracep->declBus(c+684,"sim VexRiscv execute_MulPlugin_bHigh", false,-1, 16,0);
        tracep->declArray(c+685,"sim VexRiscv writeBack_MulPlugin_result", false,-1, 65,0);
        tracep->declBit(c+688,"sim VexRiscv when_MulPlugin_l147", false,-1);
        tracep->declBus(c+571,"sim VexRiscv switch_MulPlugin_l148", false,-1, 1,0);
        tracep->declQuad(c+689,"sim VexRiscv memory_DivPlugin_rs1", false,-1, 32,0);
        tracep->declBus(c+691,"sim VexRiscv memory_DivPlugin_rs2", false,-1, 31,0);
        tracep->declArray(c+692,"sim VexRiscv memory_DivPlugin_accumulator", false,-1, 64,0);
        tracep->declBit(c+988,"sim VexRiscv memory_DivPlugin_frontendOk", false,-1);
        tracep->declBit(c+695,"sim VexRiscv memory_DivPlugin_div_needRevert", false,-1);
        tracep->declBit(c+696,"sim VexRiscv memory_DivPlugin_div_counter_willIncrement", false,-1);
        tracep->declBit(c+697,"sim VexRiscv memory_DivPlugin_div_counter_willClear", false,-1);
        tracep->declBus(c+698,"sim VexRiscv memory_DivPlugin_div_counter_valueNext", false,-1, 5,0);
        tracep->declBus(c+699,"sim VexRiscv memory_DivPlugin_div_counter_value", false,-1, 5,0);
        tracep->declBit(c+700,"sim VexRiscv memory_DivPlugin_div_counter_willOverflowIfInc", false,-1);
        tracep->declBit(c+701,"sim VexRiscv memory_DivPlugin_div_counter_willOverflow", false,-1);
        tracep->declBit(c+702,"sim VexRiscv memory_DivPlugin_div_done", false,-1);
        tracep->declBit(c+703,"sim VexRiscv when_MulDivIterativePlugin_l126", false,-1);
        tracep->declBit(c+527,"sim VexRiscv when_MulDivIterativePlugin_l126_1", false,-1);
        tracep->declBus(c+704,"sim VexRiscv memory_DivPlugin_div_result", false,-1, 31,0);
        tracep->declBit(c+705,"sim VexRiscv when_MulDivIterativePlugin_l128", false,-1);
        tracep->declBit(c+706,"sim VexRiscv when_MulDivIterativePlugin_l129", false,-1);
        tracep->declBit(c+706,"sim VexRiscv when_MulDivIterativePlugin_l132", false,-1);
        tracep->declQuad(c+707,"sim VexRiscv memory_DivPlugin_div_stage_0_remainderShifted", false,-1, 32,0);
        tracep->declQuad(c+709,"sim VexRiscv memory_DivPlugin_div_stage_0_remainderMinusDenominator", false,-1, 32,0);
        tracep->declBus(c+711,"sim VexRiscv memory_DivPlugin_div_stage_0_outRemainder", false,-1, 31,0);
        tracep->declBus(c+712,"sim VexRiscv memory_DivPlugin_div_stage_0_outNumerator", false,-1, 31,0);
        tracep->declBit(c+703,"sim VexRiscv when_MulDivIterativePlugin_l151", false,-1);
        tracep->declBit(c+527,"sim VexRiscv when_MulDivIterativePlugin_l162", false,-1);
        tracep->declBus(c+713,"sim VexRiscv externalInterruptArray_regNext", false,-1, 31,0);
        tracep->declBit(c+714,"sim VexRiscv DebugPlugin_firstCycle", false,-1);
        tracep->declBit(c+715,"sim VexRiscv DebugPlugin_secondCycle", false,-1);
        tracep->declBit(c+716,"sim VexRiscv DebugPlugin_resetIt", false,-1);
        tracep->declBit(c+717,"sim VexRiscv DebugPlugin_haltIt", false,-1);
        tracep->declBit(c+718,"sim VexRiscv DebugPlugin_stepIt", false,-1);
        tracep->declBit(c+719,"sim VexRiscv DebugPlugin_isPipBusy", false,-1);
        tracep->declBit(c+720,"sim VexRiscv DebugPlugin_godmode", false,-1);
        tracep->declBit(c+721,"sim VexRiscv when_DebugPlugin_l238", false,-1);
        tracep->declBit(c+722,"sim VexRiscv DebugPlugin_haltedByBreak", false,-1);
        tracep->declBit(c+954,"sim VexRiscv DebugPlugin_debugUsed", false,-1);
        tracep->declBit(c+723,"sim VexRiscv DebugPlugin_disableEbreak", false,-1);
        tracep->declBit(c+724,"sim VexRiscv DebugPlugin_allowEBreak", false,-1);
        tracep->declBit(c+725,"sim VexRiscv DebugPlugin_hardwareBreakpoints_0_valid", false,-1);
        tracep->declBus(c+726,"sim VexRiscv DebugPlugin_hardwareBreakpoints_0_pc", false,-1, 30,0);
        tracep->declBit(c+727,"sim VexRiscv DebugPlugin_hardwareBreakpoints_1_valid", false,-1);
        tracep->declBus(c+728,"sim VexRiscv DebugPlugin_hardwareBreakpoints_1_pc", false,-1, 30,0);
        tracep->declBus(c+729,"sim VexRiscv DebugPlugin_busReadDataReg", false,-1, 31,0);
        tracep->declBit(c+730,"sim VexRiscv when_DebugPlugin_l257", false,-1);
        tracep->declBus(c+731,"sim VexRiscv switch_DebugPlugin_l280", false,-1, 5,0);
        tracep->declBit(c+732,"sim VexRiscv when_DebugPlugin_l284", false,-1);
        tracep->declBit(c+733,"sim VexRiscv when_DebugPlugin_l284_1", false,-1);
        tracep->declBit(c+734,"sim VexRiscv when_DebugPlugin_l285", false,-1);
        tracep->declBit(c+735,"sim VexRiscv when_DebugPlugin_l285_1", false,-1);
        tracep->declBit(c+735,"sim VexRiscv when_DebugPlugin_l286", false,-1);
        tracep->declBit(c+735,"sim VexRiscv when_DebugPlugin_l287", false,-1);
        tracep->declBit(c+736,"sim VexRiscv when_DebugPlugin_l288", false,-1);
        tracep->declBit(c+737,"sim VexRiscv when_DebugPlugin_l288_1", false,-1);
        tracep->declBit(c+738,"sim VexRiscv when_DebugPlugin_l308", false,-1);
        tracep->declBit(c+739,"sim VexRiscv when_DebugPlugin_l311", false,-1);
        tracep->declBit(c+740,"sim VexRiscv when_DebugPlugin_l324", false,-1);
        tracep->declBit(c+199,"sim VexRiscv DebugPlugin_resetIt_regNext", false,-1);
        tracep->declBit(c+741,"sim VexRiscv when_DebugPlugin_l344", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124", false,-1);
        tracep->declBus(c+358,"sim VexRiscv decode_to_execute_PC", false,-1, 31,0);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_1", false,-1);
        tracep->declBus(c+333,"sim VexRiscv execute_to_memory_PC", false,-1, 31,0);
        tracep->declBit(c+742,"sim VexRiscv when_Pipeline_l124_2", false,-1);
        tracep->declBus(c+408,"sim VexRiscv memory_to_writeBack_PC", false,-1, 31,0);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_3", false,-1);
        tracep->declBus(c+399,"sim VexRiscv decode_to_execute_INSTRUCTION", false,-1, 31,0);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_4", false,-1);
        tracep->declBus(c+367,"sim VexRiscv execute_to_memory_INSTRUCTION", false,-1, 31,0);
        tracep->declBit(c+528,"sim VexRiscv when_Pipeline_l124_5", false,-1);
        tracep->declBus(c+409,"sim VexRiscv memory_to_writeBack_INSTRUCTION", false,-1, 31,0);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_6", false,-1);
        tracep->declBus(c+331,"sim VexRiscv decode_to_execute_FORMAL_PC_NEXT", false,-1, 31,0);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_7", false,-1);
        tracep->declBus(c+330,"sim VexRiscv execute_to_memory_FORMAL_PC_NEXT", false,-1, 31,0);
        tracep->declBit(c+528,"sim VexRiscv when_Pipeline_l124_8", false,-1);
        tracep->declBus(c+329,"sim VexRiscv memory_to_writeBack_FORMAL_PC_NEXT", false,-1, 31,0);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_9", false,-1);
        tracep->declBit(c+393,"sim VexRiscv decode_to_execute_MEMORY_FORCE_CONSTISTENCY", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_10", false,-1);
        tracep->declBus(c+379,"sim VexRiscv decode_to_execute_SRC1_CTRL", false,-1, 1,0);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_11", false,-1);
        tracep->declBit(c+377,"sim VexRiscv decode_to_execute_SRC_USE_SUB_LESS", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_12", false,-1);
        tracep->declBit(c+398,"sim VexRiscv decode_to_execute_MEMORY_ENABLE", false,-1);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_13", false,-1);
        tracep->declBit(c+392,"sim VexRiscv execute_to_memory_MEMORY_ENABLE", false,-1);
        tracep->declBit(c+528,"sim VexRiscv when_Pipeline_l124_14", false,-1);
        tracep->declBit(c+391,"sim VexRiscv memory_to_writeBack_MEMORY_ENABLE", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_15", false,-1);
        tracep->declBus(c+383,"sim VexRiscv decode_to_execute_ALU_CTRL", false,-1, 1,0);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_16", false,-1);
        tracep->declBus(c+378,"sim VexRiscv decode_to_execute_SRC2_CTRL", false,-1, 1,0);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_17", false,-1);
        tracep->declBit(c+364,"sim VexRiscv decode_to_execute_REGFILE_WRITE_VALID", false,-1);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_18", false,-1);
        tracep->declBit(c+366,"sim VexRiscv execute_to_memory_REGFILE_WRITE_VALID", false,-1);
        tracep->declBit(c+528,"sim VexRiscv when_Pipeline_l124_19", false,-1);
        tracep->declBit(c+369,"sim VexRiscv memory_to_writeBack_REGFILE_WRITE_VALID", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_20", false,-1);
        tracep->declBit(c+365,"sim VexRiscv decode_to_execute_BYPASSABLE_EXECUTE_STAGE", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_21", false,-1);
        tracep->declBit(c+323,"sim VexRiscv decode_to_execute_BYPASSABLE_MEMORY_STAGE", false,-1);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_22", false,-1);
        tracep->declBit(c+368,"sim VexRiscv execute_to_memory_BYPASSABLE_MEMORY_STAGE", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_23", false,-1);
        tracep->declBit(c+397,"sim VexRiscv decode_to_execute_MEMORY_WR", false,-1);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_24", false,-1);
        tracep->declBit(c+321,"sim VexRiscv execute_to_memory_MEMORY_WR", false,-1);
        tracep->declBit(c+528,"sim VexRiscv when_Pipeline_l124_25", false,-1);
        tracep->declBit(c+390,"sim VexRiscv memory_to_writeBack_MEMORY_WR", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_26", false,-1);
        tracep->declBit(c+395,"sim VexRiscv decode_to_execute_MEMORY_MANAGMENT", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_27", false,-1);
        tracep->declBit(c+375,"sim VexRiscv decode_to_execute_SRC_LESS_UNSIGNED", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_28", false,-1);
        tracep->declBus(c+386,"sim VexRiscv decode_to_execute_ALU_BITWISE_CTRL", false,-1, 1,0);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_29", false,-1);
        tracep->declBus(c+374,"sim VexRiscv decode_to_execute_SHIFT_CTRL", false,-1, 1,0);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_30", false,-1);
        tracep->declBus(c+373,"sim VexRiscv execute_to_memory_SHIFT_CTRL", false,-1, 1,0);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_31", false,-1);
        tracep->declBus(c+361,"sim VexRiscv decode_to_execute_BRANCH_CTRL", false,-1, 1,0);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_32", false,-1);
        tracep->declBit(c+352,"sim VexRiscv decode_to_execute_IS_CSR", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_33", false,-1);
        tracep->declBus(c+354,"sim VexRiscv decode_to_execute_ENV_CTRL", false,-1, 1,0);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_34", false,-1);
        tracep->declBus(c+353,"sim VexRiscv execute_to_memory_ENV_CTRL", false,-1, 1,0);
        tracep->declBit(c+528,"sim VexRiscv when_Pipeline_l124_35", false,-1);
        tracep->declBus(c+355,"sim VexRiscv memory_to_writeBack_ENV_CTRL", false,-1, 1,0);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_36", false,-1);
        tracep->declBit(c+313,"sim VexRiscv decode_to_execute_IS_MUL", false,-1);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_37", false,-1);
        tracep->declBit(c+312,"sim VexRiscv execute_to_memory_IS_MUL", false,-1);
        tracep->declBit(c+528,"sim VexRiscv when_Pipeline_l124_38", false,-1);
        tracep->declBit(c+340,"sim VexRiscv memory_to_writeBack_IS_MUL", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_39", false,-1);
        tracep->declBit(c+337,"sim VexRiscv decode_to_execute_IS_DIV", false,-1);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_40", false,-1);
        tracep->declBit(c+339,"sim VexRiscv execute_to_memory_IS_DIV", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_41", false,-1);
        tracep->declBit(c+336,"sim VexRiscv decode_to_execute_IS_RS1_SIGNED", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_42", false,-1);
        tracep->declBit(c+338,"sim VexRiscv decode_to_execute_IS_RS2_SIGNED", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_43", false,-1);
        tracep->declBus(c+394,"sim VexRiscv decode_to_execute_RS1", false,-1, 31,0);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_44", false,-1);
        tracep->declBus(c+396,"sim VexRiscv decode_to_execute_RS2", false,-1, 31,0);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_45", false,-1);
    }
}

void Vsim::traceInitSub5(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+376,"sim VexRiscv decode_to_execute_SRC2_FORCE_ZERO", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_46", false,-1);
        tracep->declBit(c+359,"sim VexRiscv decode_to_execute_PREDICTION_HAD_BRANCHED2", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_47", false,-1);
        tracep->declBit(c+351,"sim VexRiscv decode_to_execute_CSR_WRITE_OPCODE", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_48", false,-1);
        tracep->declBit(c+350,"sim VexRiscv decode_to_execute_CSR_READ_OPCODE", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_Pipeline_l124_49", false,-1);
        tracep->declBit(c+334,"sim VexRiscv decode_to_execute_DO_EBREAK", false,-1);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_50", false,-1);
        tracep->declBus(c+302,"sim VexRiscv execute_to_memory_MEMORY_STORE_DATA_RF", false,-1, 31,0);
        tracep->declBit(c+528,"sim VexRiscv when_Pipeline_l124_51", false,-1);
        tracep->declBus(c+255,"sim VexRiscv memory_to_writeBack_MEMORY_STORE_DATA_RF", false,-1, 31,0);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_52", false,-1);
        tracep->declBus(c+252,"sim VexRiscv execute_to_memory_REGFILE_WRITE_DATA", false,-1, 31,0);
        tracep->declBit(c+528,"sim VexRiscv when_Pipeline_l124_53", false,-1);
        tracep->declBus(c+256,"sim VexRiscv memory_to_writeBack_REGFILE_WRITE_DATA", false,-1, 31,0);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_54", false,-1);
        tracep->declBus(c+372,"sim VexRiscv execute_to_memory_SHIFT_RIGHT", false,-1, 31,0);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_55", false,-1);
        tracep->declBit(c+357,"sim VexRiscv execute_to_memory_BRANCH_DO", false,-1);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_56", false,-1);
        tracep->declBus(c+356,"sim VexRiscv execute_to_memory_BRANCH_CALC", false,-1, 31,0);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_57", false,-1);
        tracep->declBus(c+349,"sim VexRiscv execute_to_memory_MUL_LL", false,-1, 31,0);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_58", false,-1);
        tracep->declQuad(c+347,"sim VexRiscv execute_to_memory_MUL_LH", false,-1, 33,0);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_59", false,-1);
        tracep->declQuad(c+345,"sim VexRiscv execute_to_memory_MUL_HL", false,-1, 33,0);
        tracep->declBit(c+527,"sim VexRiscv when_Pipeline_l124_60", false,-1);
        tracep->declQuad(c+289,"sim VexRiscv execute_to_memory_MUL_HH", false,-1, 33,0);
        tracep->declBit(c+528,"sim VexRiscv when_Pipeline_l124_61", false,-1);
        tracep->declQuad(c+341,"sim VexRiscv memory_to_writeBack_MUL_HH", false,-1, 33,0);
        tracep->declBit(c+528,"sim VexRiscv when_Pipeline_l124_62", false,-1);
        tracep->declQuad(c+343,"sim VexRiscv memory_to_writeBack_MUL_LOW", false,-1, 51,0);
        tracep->declBit(c+743,"sim VexRiscv when_Pipeline_l151", false,-1);
        tracep->declBit(c+418,"sim VexRiscv when_Pipeline_l154", false,-1);
        tracep->declBit(c+468,"sim VexRiscv when_Pipeline_l151_1", false,-1);
        tracep->declBit(c+429,"sim VexRiscv when_Pipeline_l154_1", false,-1);
        tracep->declBit(c+744,"sim VexRiscv when_Pipeline_l151_2", false,-1);
        tracep->declBit(c+438,"sim VexRiscv when_Pipeline_l154_2", false,-1);
        tracep->declBus(c+745,"sim VexRiscv IBusCachedPlugin_injector_port_state", false,-1, 2,0);
        tracep->declBit(c+519,"sim VexRiscv when_Fetcher_l391", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_CsrPlugin_l1669", false,-1);
        tracep->declBit(c+746,"sim VexRiscv execute_CsrPlugin_csr_3264", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_CsrPlugin_l1669_1", false,-1);
        tracep->declBit(c+747,"sim VexRiscv execute_CsrPlugin_csr_768", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_CsrPlugin_l1669_2", false,-1);
        tracep->declBit(c+748,"sim VexRiscv execute_CsrPlugin_csr_836", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_CsrPlugin_l1669_3", false,-1);
        tracep->declBit(c+749,"sim VexRiscv execute_CsrPlugin_csr_772", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_CsrPlugin_l1669_4", false,-1);
        tracep->declBit(c+750,"sim VexRiscv execute_CsrPlugin_csr_773", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_CsrPlugin_l1669_5", false,-1);
        tracep->declBit(c+751,"sim VexRiscv execute_CsrPlugin_csr_833", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_CsrPlugin_l1669_6", false,-1);
        tracep->declBit(c+752,"sim VexRiscv execute_CsrPlugin_csr_834", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_CsrPlugin_l1669_7", false,-1);
        tracep->declBit(c+753,"sim VexRiscv execute_CsrPlugin_csr_835", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_CsrPlugin_l1669_8", false,-1);
        tracep->declBit(c+754,"sim VexRiscv execute_CsrPlugin_csr_3008", false,-1);
        tracep->declBit(c+526,"sim VexRiscv when_CsrPlugin_l1669_9", false,-1);
        tracep->declBit(c+755,"sim VexRiscv execute_CsrPlugin_csr_4032", false,-1);
        tracep->declBus(c+756,"sim VexRiscv switch_CsrPlugin_l1031", false,-1, 1,0);
        tracep->declBit(c+757,"sim VexRiscv when_CsrPlugin_l1702", false,-1);
        tracep->declBit(c+758,"sim VexRiscv when_CsrPlugin_l1709", false,-1);
        tracep->declBit(c+759,"sim VexRiscv when_CsrPlugin_l1719", false,-1);
        tracep->declBit(c+760,"sim VexRiscv when_CsrPlugin_l1717", false,-1);
        tracep->declBit(c+761,"sim VexRiscv when_CsrPlugin_l1725", false,-1);
        tracep->declBit(c+762,"sim VexRiscv when_InstructionCache_l239", false,-1);
        tracep->declBus(c+531,"sim VexRiscv iBusWishbone_DAT_MISO_regNext", false,-1, 31,0);
        tracep->declBus(c+466,"sim VexRiscv dBusWishbone_DAT_MISO_regNext", false,-1, 31,0);
        tracep->declQuad(c+763,"sim VexRiscv decode_ENV_CTRL_string", false,-1, 39,0);
        tracep->declArray(c+765,"sim VexRiscv decode_SHIFT_CTRL_string", false,-1, 71,0);
        tracep->declQuad(c+768,"sim VexRiscv decode_ALU_BITWISE_CTRL_string", false,-1, 39,0);
        tracep->declBus(c+770,"sim VexRiscv decode_SRC2_CTRL_string", false,-1, 23,0);
        tracep->declQuad(c+771,"sim VexRiscv decode_ALU_CTRL_string", false,-1, 63,0);
        tracep->declArray(c+773,"sim VexRiscv decode_SRC1_CTRL_string", false,-1, 95,0);
        tracep->declQuad(c+776,"sim VexRiscv memory_ENV_CTRL_string", false,-1, 39,0);
        tracep->declQuad(c+778,"sim VexRiscv execute_ENV_CTRL_string", false,-1, 39,0);
        tracep->declQuad(c+780,"sim VexRiscv writeBack_ENV_CTRL_string", false,-1, 39,0);
        tracep->declBus(c+782,"sim VexRiscv execute_BRANCH_CTRL_string", false,-1, 31,0);
        tracep->declArray(c+783,"sim VexRiscv memory_SHIFT_CTRL_string", false,-1, 71,0);
        tracep->declArray(c+786,"sim VexRiscv execute_SHIFT_CTRL_string", false,-1, 71,0);
        tracep->declBus(c+789,"sim VexRiscv execute_SRC2_CTRL_string", false,-1, 23,0);
        tracep->declArray(c+790,"sim VexRiscv execute_SRC1_CTRL_string", false,-1, 95,0);
        tracep->declQuad(c+793,"sim VexRiscv execute_ALU_CTRL_string", false,-1, 63,0);
        tracep->declQuad(c+795,"sim VexRiscv execute_ALU_BITWISE_CTRL_string", false,-1, 39,0);
        tracep->declBus(c+797,"sim VexRiscv decode_BRANCH_CTRL_string", false,-1, 31,0);
        tracep->declArray(c+798,"sim VexRiscv decode_to_execute_SRC1_CTRL_string", false,-1, 95,0);
        tracep->declQuad(c+793,"sim VexRiscv decode_to_execute_ALU_CTRL_string", false,-1, 63,0);
        tracep->declBus(c+789,"sim VexRiscv decode_to_execute_SRC2_CTRL_string", false,-1, 23,0);
        tracep->declQuad(c+795,"sim VexRiscv decode_to_execute_ALU_BITWISE_CTRL_string", false,-1, 39,0);
        tracep->declArray(c+801,"sim VexRiscv decode_to_execute_SHIFT_CTRL_string", false,-1, 71,0);
        tracep->declArray(c+804,"sim VexRiscv execute_to_memory_SHIFT_CTRL_string", false,-1, 71,0);
        tracep->declBus(c+782,"sim VexRiscv decode_to_execute_BRANCH_CTRL_string", false,-1, 31,0);
        tracep->declQuad(c+778,"sim VexRiscv decode_to_execute_ENV_CTRL_string", false,-1, 39,0);
        tracep->declQuad(c+776,"sim VexRiscv execute_to_memory_ENV_CTRL_string", false,-1, 39,0);
        tracep->declQuad(c+780,"sim VexRiscv memory_to_writeBack_ENV_CTRL_string", false,-1, 39,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+955+i*1,"sim VexRiscv RegFilePlugin_regFile", true,(i+0), 31,0);}}
        tracep->declBit(c+242,"sim VexRiscv IBusCachedPlugin_cache io_flush", false,-1);
        tracep->declBit(c+243,"sim VexRiscv IBusCachedPlugin_cache io_cpu_prefetch_isValid", false,-1);
        tracep->declBit(c+260,"sim VexRiscv IBusCachedPlugin_cache io_cpu_prefetch_haltIt", false,-1);
        tracep->declBus(c+500,"sim VexRiscv IBusCachedPlugin_cache io_cpu_prefetch_pc", false,-1, 31,0);
        tracep->declBit(c+244,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_isValid", false,-1);
        tracep->declBit(c+245,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_isStuck", false,-1);
        tracep->declBit(c+996,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_isRemoved", false,-1);
        tracep->declBus(c+941,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_pc", false,-1, 31,0);
        tracep->declBus(c+261,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_data", false,-1, 31,0);
        tracep->declBus(c+941,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+946,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_isIoAccess", false,-1);
        tracep->declBit(c+990,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_isPaging", false,-1);
        tracep->declBit(c+988,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_allowRead", false,-1);
        tracep->declBit(c+988,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_allowWrite", false,-1);
        tracep->declBit(c+988,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_allowExecute", false,-1);
        tracep->declBit(c+990,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_exception", false,-1);
        tracep->declBit(c+990,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_refilling", false,-1);
        tracep->declBit(c+1009,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_mmuRsp_bypassTranslation", false,-1);
        tracep->declBus(c+941,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+246,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_isValid", false,-1);
        tracep->declBit(c+245,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_isStuck", false,-1);
        tracep->declBus(c+407,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_pc", false,-1, 31,0);
        tracep->declBus(c+267,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_physicalAddress", false,-1, 31,0);
        tracep->declBus(c+265,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_data", false,-1, 31,0);
        tracep->declBit(c+266,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_cacheMiss", false,-1);
        tracep->declBit(c+262,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_error", false,-1);
        tracep->declBit(c+263,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_mmuRefilling", false,-1);
        tracep->declBit(c+264,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_mmuException", false,-1);
        tracep->declBit(c+247,"sim VexRiscv IBusCachedPlugin_cache io_cpu_decode_isUser", false,-1);
        tracep->declBit(c+248,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fill_valid", false,-1);
        tracep->declBus(c+267,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fill_payload", false,-1, 31,0);
        tracep->declBit(c+268,"sim VexRiscv IBusCachedPlugin_cache io_mem_cmd_valid", false,-1);
        tracep->declBit(c+529,"sim VexRiscv IBusCachedPlugin_cache io_mem_cmd_ready", false,-1);
        tracep->declBus(c+269,"sim VexRiscv IBusCachedPlugin_cache io_mem_cmd_payload_address", false,-1, 31,0);
        tracep->declBus(c+1006,"sim VexRiscv IBusCachedPlugin_cache io_mem_cmd_payload_size", false,-1, 2,0);
        tracep->declBit(c+530,"sim VexRiscv IBusCachedPlugin_cache io_mem_rsp_valid", false,-1);
        tracep->declBus(c+531,"sim VexRiscv IBusCachedPlugin_cache io_mem_rsp_payload_data", false,-1, 31,0);
        tracep->declBit(c+990,"sim VexRiscv IBusCachedPlugin_cache io_mem_rsp_payload_error", false,-1);
        tracep->declBit(c+936,"sim VexRiscv IBusCachedPlugin_cache clk", false,-1);
        tracep->declBit(c+240,"sim VexRiscv IBusCachedPlugin_cache reset", false,-1);
        tracep->declBit(c+807,"sim VexRiscv IBusCachedPlugin_cache lineLoader_fire", false,-1);
        tracep->declBit(c+808,"sim VexRiscv IBusCachedPlugin_cache lineLoader_valid", false,-1);
        tracep->declBus(c+809,"sim VexRiscv IBusCachedPlugin_cache lineLoader_address", false,-1, 31,0);
        tracep->declBit(c+810,"sim VexRiscv IBusCachedPlugin_cache lineLoader_hadError", false,-1);
        tracep->declBit(c+811,"sim VexRiscv IBusCachedPlugin_cache lineLoader_flushPending", false,-1);
        tracep->declBus(c+812,"sim VexRiscv IBusCachedPlugin_cache lineLoader_flushCounter", false,-1, 7,0);
        tracep->declBit(c+813,"sim VexRiscv IBusCachedPlugin_cache when_InstructionCache_l338", false,-1);
        tracep->declBit(c+814,"sim VexRiscv IBusCachedPlugin_cache when_InstructionCache_l342", false,-1);
        tracep->declBit(c+815,"sim VexRiscv IBusCachedPlugin_cache when_InstructionCache_l351", false,-1);
        tracep->declBit(c+816,"sim VexRiscv IBusCachedPlugin_cache lineLoader_cmdSent", false,-1);
        tracep->declBit(c+529,"sim VexRiscv IBusCachedPlugin_cache io_mem_cmd_fire", false,-1);
        tracep->declBit(c+817,"sim VexRiscv IBusCachedPlugin_cache when_Utils_l560", false,-1);
        tracep->declBit(c+818,"sim VexRiscv IBusCachedPlugin_cache lineLoader_wayToAllocate_willIncrement", false,-1);
        tracep->declBit(c+990,"sim VexRiscv IBusCachedPlugin_cache lineLoader_wayToAllocate_willClear", false,-1);
        tracep->declBit(c+988,"sim VexRiscv IBusCachedPlugin_cache lineLoader_wayToAllocate_willOverflowIfInc", false,-1);
        tracep->declBit(c+818,"sim VexRiscv IBusCachedPlugin_cache lineLoader_wayToAllocate_willOverflow", false,-1);
        tracep->declBus(c+819,"sim VexRiscv IBusCachedPlugin_cache lineLoader_wordIndex", false,-1, 2,0);
        tracep->declBit(c+820,"sim VexRiscv IBusCachedPlugin_cache lineLoader_write_tag_0_valid", false,-1);
        tracep->declBus(c+821,"sim VexRiscv IBusCachedPlugin_cache lineLoader_write_tag_0_payload_address", false,-1, 6,0);
        tracep->declBit(c+822,"sim VexRiscv IBusCachedPlugin_cache lineLoader_write_tag_0_payload_data_valid", false,-1);
        tracep->declBit(c+810,"sim VexRiscv IBusCachedPlugin_cache lineLoader_write_tag_0_payload_data_error", false,-1);
        tracep->declBus(c+823,"sim VexRiscv IBusCachedPlugin_cache lineLoader_write_tag_0_payload_data_address", false,-1, 19,0);
        tracep->declBit(c+530,"sim VexRiscv IBusCachedPlugin_cache lineLoader_write_data_0_valid", false,-1);
        tracep->declBus(c+824,"sim VexRiscv IBusCachedPlugin_cache lineLoader_write_data_0_payload_address", false,-1, 9,0);
        tracep->declBus(c+531,"sim VexRiscv IBusCachedPlugin_cache lineLoader_write_data_0_payload_data", false,-1, 31,0);
        tracep->declBit(c+825,"sim VexRiscv IBusCachedPlugin_cache when_InstructionCache_l401", false,-1);
        tracep->declBus(c+261,"sim VexRiscv IBusCachedPlugin_cache fetchStage_read_banksValue_0_dataMem", false,-1, 31,0);
        tracep->declBus(c+261,"sim VexRiscv IBusCachedPlugin_cache fetchStage_read_banksValue_0_data", false,-1, 31,0);
        tracep->declBit(c+826,"sim VexRiscv IBusCachedPlugin_cache fetchStage_read_waysValues_0_tag_valid", false,-1);
        tracep->declBit(c+827,"sim VexRiscv IBusCachedPlugin_cache fetchStage_read_waysValues_0_tag_error", false,-1);
        tracep->declBus(c+828,"sim VexRiscv IBusCachedPlugin_cache fetchStage_read_waysValues_0_tag_address", false,-1, 19,0);
        tracep->declBit(c+987,"sim VexRiscv IBusCachedPlugin_cache fetchStage_hit_hits_0", false,-1);
        tracep->declBit(c+987,"sim VexRiscv IBusCachedPlugin_cache fetchStage_hit_valid", false,-1);
        tracep->declBit(c+827,"sim VexRiscv IBusCachedPlugin_cache fetchStage_hit_error", false,-1);
        tracep->declBus(c+261,"sim VexRiscv IBusCachedPlugin_cache fetchStage_hit_data", false,-1, 31,0);
        tracep->declBus(c+261,"sim VexRiscv IBusCachedPlugin_cache fetchStage_hit_word", false,-1, 31,0);
        tracep->declBit(c+514,"sim VexRiscv IBusCachedPlugin_cache when_InstructionCache_l435", false,-1);
        tracep->declBus(c+265,"sim VexRiscv IBusCachedPlugin_cache io_cpu_fetch_data_regNextWhen", false,-1, 31,0);
        tracep->declBit(c+514,"sim VexRiscv IBusCachedPlugin_cache when_InstructionCache_l459", false,-1);
        tracep->declBus(c+267,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+829,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_isIoAccess", false,-1);
        tracep->declBit(c+830,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_isPaging", false,-1);
        tracep->declBit(c+831,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_allowRead", false,-1);
        tracep->declBit(c+832,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_allowWrite", false,-1);
        tracep->declBit(c+833,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_allowExecute", false,-1);
        tracep->declBit(c+834,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_exception", false,-1);
        tracep->declBit(c+263,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_refilling", false,-1);
        tracep->declBit(c+835,"sim VexRiscv IBusCachedPlugin_cache decodeStage_mmuRsp_bypassTranslation", false,-1);
        tracep->declBit(c+514,"sim VexRiscv IBusCachedPlugin_cache when_InstructionCache_l459_1", false,-1);
        tracep->declBit(c+836,"sim VexRiscv IBusCachedPlugin_cache decodeStage_hit_valid", false,-1);
        tracep->declBit(c+514,"sim VexRiscv IBusCachedPlugin_cache when_InstructionCache_l459_2", false,-1);
        tracep->declBit(c+837,"sim VexRiscv IBusCachedPlugin_cache decodeStage_hit_error", false,-1);
        tracep->declBit(c+838,"sim VexRiscv IBusCachedPlugin_cache when_Fetcher_l411", false,-1);
        tracep->declBit(c+249,"sim VexRiscv dataCache_1 io_cpu_execute_isValid", false,-1);
        tracep->declBus(c+250,"sim VexRiscv dataCache_1 io_cpu_execute_address", false,-1, 31,0);
        tracep->declBit(c+270,"sim VexRiscv dataCache_1 io_cpu_execute_haltIt", false,-1);
        tracep->declBit(c+397,"sim VexRiscv dataCache_1 io_cpu_execute_args_wr", false,-1);
        tracep->declBus(c+559,"sim VexRiscv dataCache_1 io_cpu_execute_args_size", false,-1, 1,0);
        tracep->declBit(c+393,"sim VexRiscv dataCache_1 io_cpu_execute_args_totalyConsistent", false,-1);
        tracep->declBit(c+271,"sim VexRiscv dataCache_1 io_cpu_execute_refilling", false,-1);
        tracep->declBit(c+251,"sim VexRiscv dataCache_1 io_cpu_memory_isValid", false,-1);
        tracep->declBit(c+435,"sim VexRiscv dataCache_1 io_cpu_memory_isStuck", false,-1);
        tracep->declBit(c+272,"sim VexRiscv dataCache_1 io_cpu_memory_isWrite", false,-1);
        tracep->declBus(c+252,"sim VexRiscv dataCache_1 io_cpu_memory_address", false,-1, 31,0);
        tracep->declBus(c+252,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+253,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_isIoAccess", false,-1);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_isPaging", false,-1);
        tracep->declBit(c+988,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_allowRead", false,-1);
        tracep->declBit(c+988,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_allowWrite", false,-1);
        tracep->declBit(c+988,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_allowExecute", false,-1);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_exception", false,-1);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_refilling", false,-1);
        tracep->declBit(c+1011,"sim VexRiscv dataCache_1 io_cpu_memory_mmuRsp_bypassTranslation", false,-1);
        tracep->declBit(c+254,"sim VexRiscv dataCache_1 io_cpu_writeBack_isValid", false,-1);
        tracep->declBit(c+436,"sim VexRiscv dataCache_1 io_cpu_writeBack_isStuck", false,-1);
        tracep->declBit(c+445,"sim VexRiscv dataCache_1 io_cpu_writeBack_isFiring", false,-1);
        tracep->declBit(c+247,"sim VexRiscv dataCache_1 io_cpu_writeBack_isUser", false,-1);
        tracep->declBit(c+273,"sim VexRiscv dataCache_1 io_cpu_writeBack_haltIt", false,-1);
        tracep->declBit(c+278,"sim VexRiscv dataCache_1 io_cpu_writeBack_isWrite", false,-1);
        tracep->declBus(c+255,"sim VexRiscv dataCache_1 io_cpu_writeBack_storeData", false,-1, 31,0);
        tracep->declBus(c+274,"sim VexRiscv dataCache_1 io_cpu_writeBack_data", false,-1, 31,0);
        tracep->declBus(c+256,"sim VexRiscv dataCache_1 io_cpu_writeBack_address", false,-1, 31,0);
        tracep->declBit(c+275,"sim VexRiscv dataCache_1 io_cpu_writeBack_mmuException", false,-1);
        tracep->declBit(c+276,"sim VexRiscv dataCache_1 io_cpu_writeBack_unalignedAccess", false,-1);
        tracep->declBit(c+277,"sim VexRiscv dataCache_1 io_cpu_writeBack_accessError", false,-1);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 io_cpu_writeBack_keepMemRspData", false,-1);
        tracep->declBit(c+997,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_SW", false,-1);
        tracep->declBit(c+998,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_SR", false,-1);
        tracep->declBit(c+999,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_SO", false,-1);
        tracep->declBit(c+1000,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_SI", false,-1);
        tracep->declBit(c+1001,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_PW", false,-1);
        tracep->declBit(c+1002,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_PR", false,-1);
        tracep->declBit(c+1003,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_PO", false,-1);
        tracep->declBit(c+1004,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_PI", false,-1);
        tracep->declBus(c+1005,"sim VexRiscv dataCache_1 io_cpu_writeBack_fence_FM", false,-1, 3,0);
        tracep->declBit(c+1007,"sim VexRiscv dataCache_1 io_cpu_writeBack_exclusiveOk", false,-1);
        tracep->declBit(c+280,"sim VexRiscv dataCache_1 io_cpu_redo", false,-1);
        tracep->declBit(c+257,"sim VexRiscv dataCache_1 io_cpu_flush_valid", false,-1);
        tracep->declBit(c+279,"sim VexRiscv dataCache_1 io_cpu_flush_ready", false,-1);
        tracep->declBit(c+258,"sim VexRiscv dataCache_1 io_cpu_flush_payload_singleLine", false,-1);
        tracep->declBus(c+259,"sim VexRiscv dataCache_1 io_cpu_flush_payload_lineId", false,-1, 6,0);
        tracep->declBit(c+1008,"sim VexRiscv dataCache_1 io_cpu_writesPending", false,-1);
        tracep->declBit(c+281,"sim VexRiscv dataCache_1 io_mem_cmd_valid", false,-1);
        tracep->declBit(c+549,"sim VexRiscv dataCache_1 io_mem_cmd_ready", false,-1);
        tracep->declBit(c+282,"sim VexRiscv dataCache_1 io_mem_cmd_payload_wr", false,-1);
        tracep->declBit(c+283,"sim VexRiscv dataCache_1 io_mem_cmd_payload_uncached", false,-1);
        tracep->declBus(c+284,"sim VexRiscv dataCache_1 io_mem_cmd_payload_address", false,-1, 31,0);
        tracep->declBus(c+255,"sim VexRiscv dataCache_1 io_mem_cmd_payload_data", false,-1, 31,0);
        tracep->declBus(c+285,"sim VexRiscv dataCache_1 io_mem_cmd_payload_mask", false,-1, 3,0);
        tracep->declBus(c+286,"sim VexRiscv dataCache_1 io_mem_cmd_payload_size", false,-1, 2,0);
        tracep->declBit(c+988,"sim VexRiscv dataCache_1 io_mem_cmd_payload_last", false,-1);
    }
}

void Vsim::traceInitSub6(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+465,"sim VexRiscv dataCache_1 io_mem_rsp_valid", false,-1);
        tracep->declBit(c+1010,"sim VexRiscv dataCache_1 io_mem_rsp_payload_last", false,-1);
        tracep->declBus(c+466,"sim VexRiscv dataCache_1 io_mem_rsp_payload_data", false,-1, 31,0);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 io_mem_rsp_payload_error", false,-1);
        tracep->declBit(c+936,"sim VexRiscv dataCache_1 clk", false,-1);
        tracep->declBit(c+240,"sim VexRiscv dataCache_1 reset", false,-1);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 haltCpu", false,-1);
        tracep->declBit(c+839,"sim VexRiscv dataCache_1 tagsReadCmd_valid", false,-1);
        tracep->declBus(c+840,"sim VexRiscv dataCache_1 tagsReadCmd_payload", false,-1, 6,0);
        tracep->declBit(c+841,"sim VexRiscv dataCache_1 tagsWriteCmd_valid", false,-1);
        tracep->declBus(c+842,"sim VexRiscv dataCache_1 tagsWriteCmd_payload_way", false,-1, 0,0);
        tracep->declBus(c+843,"sim VexRiscv dataCache_1 tagsWriteCmd_payload_address", false,-1, 6,0);
        tracep->declBit(c+844,"sim VexRiscv dataCache_1 tagsWriteCmd_payload_data_valid", false,-1);
        tracep->declBit(c+845,"sim VexRiscv dataCache_1 tagsWriteCmd_payload_data_error", false,-1);
        tracep->declBus(c+846,"sim VexRiscv dataCache_1 tagsWriteCmd_payload_data_address", false,-1, 19,0);
        tracep->declBit(c+847,"sim VexRiscv dataCache_1 tagsWriteLastCmd_valid", false,-1);
        tracep->declBus(c+848,"sim VexRiscv dataCache_1 tagsWriteLastCmd_payload_way", false,-1, 0,0);
        tracep->declBus(c+849,"sim VexRiscv dataCache_1 tagsWriteLastCmd_payload_address", false,-1, 6,0);
        tracep->declBit(c+850,"sim VexRiscv dataCache_1 tagsWriteLastCmd_payload_data_valid", false,-1);
        tracep->declBit(c+851,"sim VexRiscv dataCache_1 tagsWriteLastCmd_payload_data_error", false,-1);
        tracep->declBus(c+852,"sim VexRiscv dataCache_1 tagsWriteLastCmd_payload_data_address", false,-1, 19,0);
        tracep->declBit(c+853,"sim VexRiscv dataCache_1 dataReadCmd_valid", false,-1);
        tracep->declBus(c+854,"sim VexRiscv dataCache_1 dataReadCmd_payload", false,-1, 9,0);
        tracep->declBit(c+855,"sim VexRiscv dataCache_1 dataWriteCmd_valid", false,-1);
        tracep->declBus(c+856,"sim VexRiscv dataCache_1 dataWriteCmd_payload_way", false,-1, 0,0);
        tracep->declBus(c+857,"sim VexRiscv dataCache_1 dataWriteCmd_payload_address", false,-1, 9,0);
        tracep->declBus(c+858,"sim VexRiscv dataCache_1 dataWriteCmd_payload_data", false,-1, 31,0);
        tracep->declBus(c+859,"sim VexRiscv dataCache_1 dataWriteCmd_payload_mask", false,-1, 3,0);
        tracep->declBit(c+860,"sim VexRiscv dataCache_1 ways_0_tagsReadRsp_valid", false,-1);
        tracep->declBit(c+861,"sim VexRiscv dataCache_1 ways_0_tagsReadRsp_error", false,-1);
        tracep->declBus(c+862,"sim VexRiscv dataCache_1 ways_0_tagsReadRsp_address", false,-1, 19,0);
        tracep->declBus(c+863,"sim VexRiscv dataCache_1 ways_0_dataReadRspMem", false,-1, 31,0);
        tracep->declBus(c+863,"sim VexRiscv dataCache_1 ways_0_dataReadRsp", false,-1, 31,0);
        tracep->declBit(c+864,"sim VexRiscv dataCache_1 when_DataCache_l645", false,-1);
        tracep->declBit(c+865,"sim VexRiscv dataCache_1 when_DataCache_l648", false,-1);
        tracep->declBit(c+866,"sim VexRiscv dataCache_1 when_DataCache_l667", false,-1);
        tracep->declBit(c+988,"sim VexRiscv dataCache_1 rspSync", false,-1);
        tracep->declBit(c+988,"sim VexRiscv dataCache_1 rspLast", false,-1);
        tracep->declBit(c+867,"sim VexRiscv dataCache_1 memCmdSent", false,-1);
        tracep->declBit(c+868,"sim VexRiscv dataCache_1 io_mem_cmd_fire", false,-1);
        tracep->declBit(c+528,"sim VexRiscv dataCache_1 when_DataCache_l689", false,-1);
        tracep->declBus(c+869,"sim VexRiscv dataCache_1 stage0_mask", false,-1, 3,0);
        tracep->declBus(c+870,"sim VexRiscv dataCache_1 stage0_dataColisions", false,-1, 0,0);
        tracep->declBus(c+990,"sim VexRiscv dataCache_1 stage0_wayInvalidate", false,-1, 0,0);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 stage0_isAmo", false,-1);
        tracep->declBit(c+527,"sim VexRiscv dataCache_1 when_DataCache_l776", false,-1);
        tracep->declBit(c+272,"sim VexRiscv dataCache_1 stageA_request_wr", false,-1);
        tracep->declBus(c+871,"sim VexRiscv dataCache_1 stageA_request_size", false,-1, 1,0);
        tracep->declBit(c+872,"sim VexRiscv dataCache_1 stageA_request_totalyConsistent", false,-1);
        tracep->declBit(c+527,"sim VexRiscv dataCache_1 when_DataCache_l776_1", false,-1);
        tracep->declBus(c+873,"sim VexRiscv dataCache_1 stageA_mask", false,-1, 3,0);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 stageA_isAmo", false,-1);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 stageA_isLrsc", false,-1);
        tracep->declBus(c+874,"sim VexRiscv dataCache_1 stageA_wayHits", false,-1, 0,0);
        tracep->declBit(c+527,"sim VexRiscv dataCache_1 when_DataCache_l776_2", false,-1);
        tracep->declBus(c+875,"sim VexRiscv dataCache_1 stageA_wayInvalidate", false,-1, 0,0);
        tracep->declBit(c+527,"sim VexRiscv dataCache_1 when_DataCache_l776_3", false,-1);
        tracep->declBus(c+876,"sim VexRiscv dataCache_1 stage0_dataColisions_regNextWhen", false,-1, 0,0);
        tracep->declBus(c+877,"sim VexRiscv dataCache_1 stageA_dataColisions", false,-1, 0,0);
        tracep->declBit(c+528,"sim VexRiscv dataCache_1 when_DataCache_l827", false,-1);
        tracep->declBit(c+278,"sim VexRiscv dataCache_1 stageB_request_wr", false,-1);
        tracep->declBus(c+878,"sim VexRiscv dataCache_1 stageB_request_size", false,-1, 1,0);
        tracep->declBit(c+879,"sim VexRiscv dataCache_1 stageB_request_totalyConsistent", false,-1);
        tracep->declBit(c+880,"sim VexRiscv dataCache_1 stageB_mmuRspFreeze", false,-1);
        tracep->declBit(c+881,"sim VexRiscv dataCache_1 when_DataCache_l829", false,-1);
        tracep->declBus(c+882,"sim VexRiscv dataCache_1 stageB_mmuRsp_physicalAddress", false,-1, 31,0);
        tracep->declBit(c+283,"sim VexRiscv dataCache_1 stageB_mmuRsp_isIoAccess", false,-1);
        tracep->declBit(c+883,"sim VexRiscv dataCache_1 stageB_mmuRsp_isPaging", false,-1);
        tracep->declBit(c+884,"sim VexRiscv dataCache_1 stageB_mmuRsp_allowRead", false,-1);
        tracep->declBit(c+885,"sim VexRiscv dataCache_1 stageB_mmuRsp_allowWrite", false,-1);
        tracep->declBit(c+886,"sim VexRiscv dataCache_1 stageB_mmuRsp_allowExecute", false,-1);
        tracep->declBit(c+887,"sim VexRiscv dataCache_1 stageB_mmuRsp_exception", false,-1);
        tracep->declBit(c+888,"sim VexRiscv dataCache_1 stageB_mmuRsp_refilling", false,-1);
        tracep->declBit(c+889,"sim VexRiscv dataCache_1 stageB_mmuRsp_bypassTranslation", false,-1);
        tracep->declBit(c+528,"sim VexRiscv dataCache_1 when_DataCache_l826", false,-1);
        tracep->declBit(c+890,"sim VexRiscv dataCache_1 stageB_tagsReadRsp_0_valid", false,-1);
        tracep->declBit(c+891,"sim VexRiscv dataCache_1 stageB_tagsReadRsp_0_error", false,-1);
        tracep->declBus(c+892,"sim VexRiscv dataCache_1 stageB_tagsReadRsp_0_address", false,-1, 19,0);
        tracep->declBit(c+528,"sim VexRiscv dataCache_1 when_DataCache_l826_1", false,-1);
        tracep->declBus(c+893,"sim VexRiscv dataCache_1 stageB_dataReadRsp_0", false,-1, 31,0);
        tracep->declBit(c+528,"sim VexRiscv dataCache_1 when_DataCache_l825", false,-1);
        tracep->declBus(c+894,"sim VexRiscv dataCache_1 stageB_wayInvalidate", false,-1, 0,0);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 stageB_consistancyHazard", false,-1);
        tracep->declBit(c+528,"sim VexRiscv dataCache_1 when_DataCache_l825_1", false,-1);
        tracep->declBus(c+895,"sim VexRiscv dataCache_1 stageB_dataColisions", false,-1, 0,0);
        tracep->declBit(c+528,"sim VexRiscv dataCache_1 when_DataCache_l825_2", false,-1);
        tracep->declBit(c+896,"sim VexRiscv dataCache_1 stageB_unaligned", false,-1);
        tracep->declBit(c+528,"sim VexRiscv dataCache_1 when_DataCache_l825_3", false,-1);
        tracep->declBus(c+897,"sim VexRiscv dataCache_1 stageB_waysHitsBeforeInvalidate", false,-1, 0,0);
        tracep->declBus(c+898,"sim VexRiscv dataCache_1 stageB_waysHits", false,-1, 0,0);
        tracep->declBit(c+899,"sim VexRiscv dataCache_1 stageB_waysHit", false,-1);
        tracep->declBus(c+893,"sim VexRiscv dataCache_1 stageB_dataMux", false,-1, 31,0);
        tracep->declBit(c+528,"sim VexRiscv dataCache_1 when_DataCache_l825_4", false,-1);
        tracep->declBus(c+285,"sim VexRiscv dataCache_1 stageB_mask", false,-1, 3,0);
        tracep->declBit(c+900,"sim VexRiscv dataCache_1 stageB_loaderValid", false,-1);
        tracep->declBus(c+466,"sim VexRiscv dataCache_1 stageB_ioMemRspMuxed", false,-1, 31,0);
        tracep->declBit(c+901,"sim VexRiscv dataCache_1 stageB_flusher_waitDone", false,-1);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 stageB_flusher_hold", false,-1);
        tracep->declBus(c+902,"sim VexRiscv dataCache_1 stageB_flusher_counter", false,-1, 7,0);
        tracep->declBit(c+903,"sim VexRiscv dataCache_1 when_DataCache_l855", false,-1);
        tracep->declBit(c+988,"sim VexRiscv dataCache_1 when_DataCache_l861", false,-1);
        tracep->declBit(c+904,"sim VexRiscv dataCache_1 when_DataCache_l863", false,-1);
        tracep->declBit(c+905,"sim VexRiscv dataCache_1 stageB_flusher_start", false,-1);
        tracep->declBit(c+904,"sim VexRiscv dataCache_1 when_DataCache_l877", false,-1);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 stageB_isAmo", false,-1);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 stageB_isAmoCached", false,-1);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 stageB_isExternalLsrc", false,-1);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 stageB_isExternalAmo", false,-1);
        tracep->declBus(c+255,"sim VexRiscv dataCache_1 stageB_requestDataBypass", false,-1, 31,0);
        tracep->declBit(c+906,"sim VexRiscv dataCache_1 stageB_cpuWriteToCache", false,-1);
        tracep->declBit(c+907,"sim VexRiscv dataCache_1 when_DataCache_l931", false,-1);
        tracep->declBit(c+908,"sim VexRiscv dataCache_1 stageB_badPermissions", false,-1);
        tracep->declBit(c+909,"sim VexRiscv dataCache_1 stageB_loadStoreFault", false,-1);
        tracep->declBit(c+283,"sim VexRiscv dataCache_1 stageB_bypassCache", false,-1);
        tracep->declBit(c+910,"sim VexRiscv dataCache_1 when_DataCache_l1000", false,-1);
        tracep->declBit(c+911,"sim VexRiscv dataCache_1 when_DataCache_l1009", false,-1);
        tracep->declBit(c+912,"sim VexRiscv dataCache_1 when_DataCache_l1014", false,-1);
        tracep->declBit(c+913,"sim VexRiscv dataCache_1 when_DataCache_l1025", false,-1);
        tracep->declBit(c+914,"sim VexRiscv dataCache_1 when_DataCache_l1037", false,-1);
        tracep->declBit(c+283,"sim VexRiscv dataCache_1 when_DataCache_l996", false,-1);
        tracep->declBit(c+915,"sim VexRiscv dataCache_1 when_DataCache_l1072", false,-1);
        tracep->declBit(c+888,"sim VexRiscv dataCache_1 when_DataCache_l1081", false,-1);
        tracep->declBit(c+271,"sim VexRiscv dataCache_1 loader_valid", false,-1);
        tracep->declBit(c+916,"sim VexRiscv dataCache_1 loader_counter_willIncrement", false,-1);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 loader_counter_willClear", false,-1);
        tracep->declBus(c+917,"sim VexRiscv dataCache_1 loader_counter_valueNext", false,-1, 2,0);
        tracep->declBus(c+918,"sim VexRiscv dataCache_1 loader_counter_value", false,-1, 2,0);
        tracep->declBit(c+919,"sim VexRiscv dataCache_1 loader_counter_willOverflowIfInc", false,-1);
        tracep->declBit(c+920,"sim VexRiscv dataCache_1 loader_counter_willOverflow", false,-1);
        tracep->declBus(c+921,"sim VexRiscv dataCache_1 loader_waysAllocator", false,-1, 0,0);
        tracep->declBit(c+922,"sim VexRiscv dataCache_1 loader_error", false,-1);
        tracep->declBit(c+990,"sim VexRiscv dataCache_1 loader_kill", false,-1);
        tracep->declBit(c+923,"sim VexRiscv dataCache_1 loader_killReg", false,-1);
        tracep->declBit(c+924,"sim VexRiscv dataCache_1 when_DataCache_l1097", false,-1);
        tracep->declBit(c+920,"sim VexRiscv dataCache_1 loader_done", false,-1);
        tracep->declBit(c+925,"sim VexRiscv dataCache_1 when_DataCache_l1125", false,-1);
        tracep->declBit(c+926,"sim VexRiscv dataCache_1 loader_valid_regNext", false,-1);
        tracep->declBit(c+927,"sim VexRiscv dataCache_1 when_DataCache_l1129", false,-1);
        tracep->declBit(c+928,"sim VexRiscv dataCache_1 when_DataCache_l1132", false,-1);
    }
}

void Vsim::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vsim::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
        vlTOPp->traceFullSub1(userp, tracep);
        vlTOPp->traceFullSub2(userp, tracep);
        vlTOPp->traceFullSub3(userp, tracep);
        vlTOPp->traceFullSub4(userp, tracep);
        vlTOPp->traceFullSub5(userp, tracep);
        vlTOPp->traceFullSub6(userp, tracep);
    }
}

void Vsim::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSymsp->TOP__sim.__PVT__array_muxed7),2);
        tracep->fullBit(oldp+2,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0))));
        tracep->fullCData(oldp+3,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_payload_data),8);
        tracep->fullBit(oldp+4,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable));
        tracep->fullIData(oldp+5,(vlSymsp->TOP__sim.__PVT__array_muxed0),30);
        tracep->fullIData(oldp+6,(vlSymsp->TOP__sim.__PVT__array_muxed1),32);
        tracep->fullCData(oldp+7,(vlSymsp->TOP__sim.__PVT__array_muxed2),4);
        tracep->fullBit(oldp+8,(vlSymsp->TOP__sim.__PVT__array_muxed3));
        tracep->fullBit(oldp+9,(vlSymsp->TOP__sim.__PVT__array_muxed4));
        tracep->fullBit(oldp+10,(vlSymsp->TOP__sim.__PVT__array_muxed5));
        tracep->fullCData(oldp+11,(vlSymsp->TOP__sim.__PVT__array_muxed6),3);
        tracep->fullBit(oldp+12,(vlSymsp->TOP__sim.__PVT__error));
        tracep->fullIData(oldp+13,(vlSymsp->TOP__sim.__PVT__bus_errors),32);
        tracep->fullBit(oldp+14,(vlSymsp->TOP__sim.__PVT__bus_errors_re));
        tracep->fullBit(oldp+15,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_bus_errors_we));
        tracep->fullIData(oldp+16,(vlSymsp->TOP__sim.__PVT__count),20);
        tracep->fullBit(oldp+17,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__reset_storage) 
                                        >> 1U))));
        tracep->fullCData(oldp+18,((0x3fU & (IData)(vlSymsp->TOP__sim.__PVT__interface1_adr))),6);
        tracep->fullIData(oldp+19,(vlSymsp->TOP__sim.__PVT__interface1_dat_w),32);
        tracep->fullBit(oldp+20,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_bus_errors_re));
        tracep->fullCData(oldp+21,((3U & vlSymsp->TOP__sim.__PVT__interface1_dat_w)),2);
        tracep->fullBit(oldp+22,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_reset0_re));
        tracep->fullCData(oldp+23,(vlSymsp->TOP__sim.__PVT__reset_storage),2);
        tracep->fullBit(oldp+24,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_reset0_we));
        tracep->fullBit(oldp+25,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_scratch0_re));
        tracep->fullIData(oldp+26,(vlSymsp->TOP__sim.__PVT__scratch_storage),32);
        tracep->fullBit(oldp+27,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank0_scratch0_we));
        tracep->fullBit(oldp+28,((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                                                  >> 9U)))));
        tracep->fullBit(oldp+29,((1U & vlSymsp->TOP__sim.__PVT__interface1_dat_w)));
        tracep->fullBit(oldp+30,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_en0_re));
        tracep->fullBit(oldp+31,(vlSymsp->TOP__sim.__PVT__timer_en_storage));
        tracep->fullBit(oldp+32,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_en0_we));
        tracep->fullBit(oldp+33,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_enable0_re));
        tracep->fullBit(oldp+34,(vlSymsp->TOP__sim.__PVT__timer_enable_storage));
        tracep->fullBit(oldp+35,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_enable0_we));
        tracep->fullBit(oldp+36,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_pending_re));
        tracep->fullBit(oldp+37,(vlSymsp->TOP__sim.__PVT__timer_pending_status));
        tracep->fullBit(oldp+38,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_pending_we));
        tracep->fullBit(oldp+39,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_status_re));
        tracep->fullBit(oldp+40,(vlSymsp->TOP__sim.__PVT__timer_status_status));
        tracep->fullBit(oldp+41,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_ev_status_we));
        tracep->fullBit(oldp+42,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_load0_re));
        tracep->fullIData(oldp+43,(vlSymsp->TOP__sim.__PVT__timer_load_storage),32);
        tracep->fullBit(oldp+44,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_load0_we));
        tracep->fullBit(oldp+45,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reload0_re));
        tracep->fullIData(oldp+46,(vlSymsp->TOP__sim.__PVT__timer_reload_storage),32);
        tracep->fullBit(oldp+47,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_reload0_we));
        tracep->fullBit(oldp+48,((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                                                  >> 9U)))));
        tracep->fullBit(oldp+49,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_update_value0_re));
        tracep->fullBit(oldp+50,(vlSymsp->TOP__sim.__PVT__timer_update_value_storage));
        tracep->fullBit(oldp+51,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_update_value0_we));
        tracep->fullBit(oldp+52,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_value_re));
        tracep->fullIData(oldp+53,(vlSymsp->TOP__sim.__PVT__timer_value_status),32);
        tracep->fullBit(oldp+54,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank1_value_we));
        tracep->fullBit(oldp+55,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_enable0_re));
        tracep->fullCData(oldp+56,(vlSymsp->TOP__sim.__PVT__uart_enable_storage),2);
        tracep->fullBit(oldp+57,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_enable0_we));
        tracep->fullBit(oldp+58,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_pending_re));
        tracep->fullCData(oldp+59,(vlSymsp->TOP__sim.__PVT__uart_pending_status),2);
        tracep->fullBit(oldp+60,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_pending_we));
        tracep->fullBit(oldp+61,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_status_re));
        tracep->fullCData(oldp+62,(vlSymsp->TOP__sim.__PVT__uart_status_status),2);
        tracep->fullBit(oldp+63,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_ev_status_we));
        tracep->fullBit(oldp+64,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxempty_re));
        tracep->fullBit(oldp+65,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable)))));
        tracep->fullBit(oldp+66,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxempty_we));
        tracep->fullBit(oldp+67,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxfull_re));
        tracep->fullBit(oldp+68,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0))));
        tracep->fullBit(oldp+69,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_rxfull_we));
        tracep->fullBit(oldp+70,((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                                                  >> 9U)))));
        tracep->fullBit(oldp+71,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txempty_re));
        tracep->fullBit(oldp+72,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable)))));
        tracep->fullBit(oldp+73,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txempty_we));
        tracep->fullBit(oldp+74,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txfull_re));
        tracep->fullBit(oldp+75,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))));
        tracep->fullBit(oldp+76,(vlSymsp->TOP__sim.__PVT__csr_bankarray_csrbank2_txfull_we));
        tracep->fullCData(oldp+77,(((0x24U >= (IData)(vlSymsp->TOP__sim.__PVT__mem_adr0))
                                     ? vlSymsp->TOP__sim.__PVT__mem
                                    [vlSymsp->TOP__sim.__PVT__mem_adr0]
                                     : 0U)),8);
        tracep->fullSData(oldp+78,(vlSymsp->TOP__sim.__PVT__interface1_adr),14);
        tracep->fullIData(oldp+79,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r),32);
        tracep->fullBit(oldp+80,(vlSymsp->TOP__sim.__PVT__interface1_we));
        tracep->fullIData(oldp+81,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r),32);
        tracep->fullIData(oldp+82,(vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r),32);
        tracep->fullBit(oldp+83,((1U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__interface1_adr) 
                                                  >> 9U)))));
        tracep->fullBit(oldp+84,(vlSymsp->TOP__sim.__PVT__csr_bankarray_sel_r));
        tracep->fullIData(oldp+85,(vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r),32);
        tracep->fullIData(oldp+86,((((vlSymsp->TOP__sim.__PVT__csr_bankarray_interface0_bank_bus_dat_r 
                                      | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface1_bank_bus_dat_r) 
                                     | vlSymsp->TOP__sim.__PVT__csr_bankarray_interface2_bank_bus_dat_r) 
                                    | vlSymsp->TOP__sim.__PVT__csr_bankarray_sram_bus_dat_r)),32);
        tracep->fullBit(oldp+87,(vlSymsp->TOP__sim.__PVT__dbus_dbus_ack));
        tracep->fullIData(oldp+88,((0x3fffffffU & (
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                                     ? 
                                                    ((0xffffffe0U 
                                                      & vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                                                     | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBusWishbone_ADR) 
                                                        << 2U))
                                                     : 
                                                    (0xfffffffcU 
                                                     & vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                                                   >> 2U))),30);
        tracep->fullCData(oldp+89,(((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                     ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2)
                                         ? 7U : 2U)
                                     : 0U)),3);
        tracep->fullBit(oldp+90,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid));
        tracep->fullIData(oldp+91,(vlSymsp->TOP__sim.__PVT__shared_dat_r),32);
        tracep->fullIData(oldp+92,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_data),32);
        tracep->fullCData(oldp+93,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
                                     ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
                                     : 0xfU)),4);
        tracep->fullBit(oldp+94,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr));
        tracep->fullBit(oldp+95,((0U == vlSymsp->TOP__sim.__PVT__count)));
        tracep->fullBit(oldp+96,(vlSymsp->TOP__sim.__PVT__grant));
        tracep->fullBit(oldp+97,(vlSymsp->TOP__sim.__PVT__ibus_ibus_ack));
        tracep->fullIData(oldp+98,(((0x3ffffff8U & 
                                     (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                      >> 2U)) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))),30);
        tracep->fullCData(oldp+99,(((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                     ? 7U : 2U)),3);
        tracep->fullBit(oldp+100,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
        tracep->fullBit(oldp+101,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB));
        tracep->fullBit(oldp+102,(vlSymsp->TOP__sim.__PVT__int_rst));
        tracep->fullBit(oldp+103,(vlSymsp->TOP__sim.__PVT__interface0_ack));
        tracep->fullBit(oldp+104,(vlSymsp->TOP__sim.__PVT__interface0_cyc));
        tracep->fullIData(oldp+105,(vlSymsp->TOP__sim.__PVT__interface0_dat_r),32);
        tracep->fullIData(oldp+106,(vlSymsp->TOP__sim.__PVT__interrupt),32);
        tracep->fullBit(oldp+107,(vlSymsp->TOP__sim.__PVT__next_state));
        tracep->fullSData(oldp+108,((0x7ffU & vlSymsp->TOP__sim.__PVT__array_muxed0)),11);
        tracep->fullBit(oldp+109,(vlSymsp->TOP__sim.__PVT__ram_bus_ram_bus_ack));
        tracep->fullBit(oldp+110,(vlSymsp->TOP__sim.__PVT__ram_bus_ram_bus_cyc));
        tracep->fullIData(oldp+111,(vlSymsp->TOP__sim.__PVT__sram
                                    [vlSymsp->TOP__sim.__PVT__sram_adr0]),32);
        tracep->fullCData(oldp+112,(vlSymsp->TOP__sim.__PVT__ram_we),4);
        tracep->fullCData(oldp+113,(vlSymsp->TOP__sim.__PVT__request),2);
        tracep->fullBit(oldp+114,(vlSymsp->TOP__sim.__PVT__reset));
        tracep->fullBit(oldp+115,(vlSymsp->TOP__sim.__PVT__reset_re));
        tracep->fullBit(oldp+116,(vlSymsp->TOP__sim.__PVT__scratch_re));
        tracep->fullBit(oldp+117,(vlSymsp->TOP__sim.__PVT__shared_ack));
        tracep->fullSData(oldp+118,((0x7fffU & vlSymsp->TOP__sim.__PVT__array_muxed0)),15);
        tracep->fullIData(oldp+119,(vlSymsp->TOP__sim.__PVT__rom_dat0),32);
        tracep->fullBit(oldp+120,(vlSymsp->TOP__sim.__PVT__simsoc_ram_bus_ack));
        tracep->fullBit(oldp+121,(((IData)(vlSymsp->TOP__sim.__PVT__array_muxed3) 
                                   & ((IData)(vlSymsp->TOP__sim.__PVT__slave_sel) 
                                      >> 1U))));
        tracep->fullBit(oldp+122,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_first));
        tracep->fullBit(oldp+123,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_fifo_out_last));
        tracep->fullCData(oldp+124,(vlSymsp->TOP__sim.__PVT__slave_sel),4);
        tracep->fullCData(oldp+125,(vlSymsp->TOP__sim.__PVT__slave_sel_r),4);
        tracep->fullBit(oldp+126,(vlSymsp->TOP__sim.__PVT__soc_rst));
        tracep->fullBit(oldp+127,(vlSymsp->TOP__sim.__PVT__state));
        tracep->fullBit(oldp+128,(vlSymsp->TOP__sim.__PVT__timer_en_re));
        tracep->fullBit(oldp+129,(vlSymsp->TOP__sim.__PVT__timer_enable_re));
        tracep->fullBit(oldp+130,(((IData)(vlSymsp->TOP__sim.__PVT__timer_pending_status) 
                                   & (IData)(vlSymsp->TOP__sim.__PVT__timer_enable_storage))));
        tracep->fullBit(oldp+131,(vlSymsp->TOP__sim.__PVT__timer_load_re));
        tracep->fullBit(oldp+132,(vlSymsp->TOP__sim.__PVT__timer_pending_r));
        tracep->fullBit(oldp+133,(vlSymsp->TOP__sim.__PVT__timer_pending_re));
        tracep->fullBit(oldp+134,(vlSymsp->TOP__sim.__PVT__timer_reload_re));
        tracep->fullBit(oldp+135,(vlSymsp->TOP__sim.__PVT__timer_status_re));
        tracep->fullBit(oldp+136,(vlSymsp->TOP__sim.__PVT__timer_update_value_re));
        tracep->fullIData(oldp+137,(vlSymsp->TOP__sim.__PVT__timer_value),32);
        tracep->fullBit(oldp+138,(vlSymsp->TOP__sim.__PVT__timer_value_re));
        tracep->fullBit(oldp+139,((0U == vlSymsp->TOP__sim.__PVT__timer_value)));
        tracep->fullBit(oldp+140,(vlSymsp->TOP__sim.__PVT__timer_zero_pending));
        tracep->fullBit(oldp+141,(vlSymsp->TOP__sim.__PVT__timer_zero_clear));
        tracep->fullBit(oldp+142,(vlSymsp->TOP__sim.__PVT__timer_zero_trigger_d));
        tracep->fullBit(oldp+143,(vlSymsp->TOP__sim.__PVT__uart_enable_re));
        tracep->fullBit(oldp+144,((1U & (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status) 
                                          & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage)) 
                                         | (((IData)(vlSymsp->TOP__sim.__PVT__uart_pending_status) 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage)) 
                                            >> 1U)))));
        tracep->fullCData(oldp+145,(vlSymsp->TOP__sim.__PVT__uart_pending_r),2);
        tracep->fullBit(oldp+146,(vlSymsp->TOP__sim.__PVT__uart_pending_re));
        tracep->fullBit(oldp+147,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable));
        tracep->fullBit(oldp+148,(vlSymsp->TOP__sim.__PVT__uart_rx_pending));
        tracep->fullBit(oldp+149,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage) 
                                         >> 1U))));
        tracep->fullBit(oldp+150,(vlSymsp->TOP__sim.__PVT__uart_rx_clear));
        tracep->fullCData(oldp+151,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_consume),4);
        tracep->fullBit(oldp+152,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_do_read));
        tracep->fullBit(oldp+153,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_first));
        tracep->fullBit(oldp+154,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_last));
        tracep->fullCData(oldp+155,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_fifo_out_payload_data),8);
        tracep->fullCData(oldp+156,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0),5);
        tracep->fullCData(oldp+157,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0) 
                                              + (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_readable)))),5);
        tracep->fullCData(oldp+158,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_produce),4);
        tracep->fullSData(oldp+159,(vlSymsp->TOP__sim.__PVT__storage_1_dat1),10);
        tracep->fullBit(oldp+160,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_syncfifo_re));
        tracep->fullBit(oldp+161,((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0))));
        tracep->fullCData(oldp+162,(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_wrport_adr),4);
        tracep->fullSData(oldp+163,(vlSymsp->TOP__sim.__PVT__storage_1_dat0),10);
        tracep->fullBit(oldp+164,(vlSymsp->TOP__sim.__PVT__uart_rx_trigger_d));
        tracep->fullBit(oldp+165,(vlSymsp->TOP__sim.__PVT__uart_rxempty_re));
        tracep->fullBit(oldp+166,(vlSymsp->TOP__sim.__PVT__uart_rxfull_re));
        tracep->fullCData(oldp+167,((0xffU & vlSymsp->TOP__sim.__PVT__interface1_dat_w)),8);
        tracep->fullBit(oldp+168,(vlSymsp->TOP__sim.__PVT__uart_rxtx_re));
        tracep->fullBit(oldp+169,(vlSymsp->TOP__sim.__PVT__uart_rxtx_we));
        tracep->fullBit(oldp+170,(vlSymsp->TOP__sim.__PVT__uart_status_re));
        tracep->fullBit(oldp+171,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))));
        tracep->fullBit(oldp+172,(vlSymsp->TOP__sim.__PVT__uart_tx_pending));
        tracep->fullBit(oldp+173,((1U & (IData)(vlSymsp->TOP__sim.__PVT__uart_enable_storage))));
    }
}

void Vsim::traceFullSub1(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+174,(vlSymsp->TOP__sim.__PVT__uart_tx_clear));
        tracep->fullCData(oldp+175,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_consume),4);
        tracep->fullCData(oldp+176,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0),5);
        tracep->fullCData(oldp+177,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0) 
                                              + (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_readable)))),5);
        tracep->fullCData(oldp+178,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_produce),4);
        tracep->fullSData(oldp+179,(vlSymsp->TOP__sim.__PVT__storage_dat1),10);
        tracep->fullSData(oldp+180,((0xffU & vlSymsp->TOP__sim.__PVT__interface1_dat_w)),10);
        tracep->fullBit(oldp+181,((0U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0))));
        tracep->fullCData(oldp+182,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_wrport_adr),4);
        tracep->fullSData(oldp+183,(vlSymsp->TOP__sim.__PVT__storage_dat0),10);
        tracep->fullBit(oldp+184,(((IData)(vlSymsp->TOP__sim.__PVT__uart_rxtx_re) 
                                   & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_level0)))));
        tracep->fullBit(oldp+185,(vlSymsp->TOP__sim.__PVT__uart_tx_trigger_d));
        tracep->fullBit(oldp+186,(vlSymsp->TOP__sim.__PVT__uart_txempty_re));
        tracep->fullBit(oldp+187,(vlSymsp->TOP__sim.__PVT__uart_txfull_re));
        tracep->fullBit(oldp+188,(vlSymsp->TOP__sim.__PVT__vexriscv_dbus_err));
        tracep->fullBit(oldp+189,(vlSymsp->TOP__sim.__PVT__vexriscv_debug_bus_ack));
        tracep->fullBit(oldp+190,(vlSymsp->TOP__sim.__PVT__vexriscv_debug_bus_cyc));
        tracep->fullIData(oldp+191,(vlSymsp->TOP__sim.__PVT__vexriscv_debug_bus_dat_r),32);
        tracep->fullBit(oldp+192,(vlSymsp->TOP__sim.__PVT__vexriscv_debug_reset));
        tracep->fullCData(oldp+193,(vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_payload_address),8);
        tracep->fullIData(oldp+194,(vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_payload_data),32);
        tracep->fullBit(oldp+195,(vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_payload_wr));
        tracep->fullBit(oldp+196,(vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_valid));
        tracep->fullBit(oldp+197,(vlSymsp->TOP__sim.__PVT__vexriscv_ibus_err));
        tracep->fullBit(oldp+198,(vlSymsp->TOP__sim__VexRiscv.__PVT__debug_bus_cmd_ready));
        tracep->fullBit(oldp+199,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_resetIt_regNext));
        tracep->fullIData(oldp+200,(vlSymsp->TOP__sim__VexRiscv.__PVT__debug_bus_rsp_data),32);
        tracep->fullBit(oldp+201,(vlSymsp->TOP__sim.__PVT__vexriscv_reset_debug_logic));
        tracep->fullBit(oldp+202,(vlSymsp->TOP__sim.__PVT__vexriscv_transfer_complete));
        tracep->fullBit(oldp+203,(vlSymsp->TOP__sim.__PVT__vexriscv_transfer_in_progress));
        tracep->fullBit(oldp+204,(vlSymsp->TOP__sim.__PVT__vexriscv_transfer_wait_for_ack));
        tracep->fullBit(oldp+205,((((IData)(vlSymsp->TOP__sim.__PVT__array_muxed4) 
                                    & (IData)(vlSymsp->TOP__sim.__PVT__array_muxed3)) 
                                   & (~ (IData)(vlSymsp->TOP__sim.__PVT__shared_ack)))));
        tracep->fullSData(oldp+206,(vlSymsp->TOP__sim.__PVT__sram_adr0),11);
        tracep->fullCData(oldp+207,(vlSymsp->TOP__sim.__PVT__mem_adr0),6);
        tracep->fullSData(oldp+208,(vlSymsp->TOP__sim.__PVT__storage[0]),10);
        tracep->fullSData(oldp+209,(vlSymsp->TOP__sim.__PVT__storage[1]),10);
        tracep->fullSData(oldp+210,(vlSymsp->TOP__sim.__PVT__storage[2]),10);
        tracep->fullSData(oldp+211,(vlSymsp->TOP__sim.__PVT__storage[3]),10);
        tracep->fullSData(oldp+212,(vlSymsp->TOP__sim.__PVT__storage[4]),10);
        tracep->fullSData(oldp+213,(vlSymsp->TOP__sim.__PVT__storage[5]),10);
        tracep->fullSData(oldp+214,(vlSymsp->TOP__sim.__PVT__storage[6]),10);
        tracep->fullSData(oldp+215,(vlSymsp->TOP__sim.__PVT__storage[7]),10);
        tracep->fullSData(oldp+216,(vlSymsp->TOP__sim.__PVT__storage[8]),10);
        tracep->fullSData(oldp+217,(vlSymsp->TOP__sim.__PVT__storage[9]),10);
        tracep->fullSData(oldp+218,(vlSymsp->TOP__sim.__PVT__storage[10]),10);
        tracep->fullSData(oldp+219,(vlSymsp->TOP__sim.__PVT__storage[11]),10);
        tracep->fullSData(oldp+220,(vlSymsp->TOP__sim.__PVT__storage[12]),10);
        tracep->fullSData(oldp+221,(vlSymsp->TOP__sim.__PVT__storage[13]),10);
        tracep->fullSData(oldp+222,(vlSymsp->TOP__sim.__PVT__storage[14]),10);
        tracep->fullSData(oldp+223,(vlSymsp->TOP__sim.__PVT__storage[15]),10);
        tracep->fullSData(oldp+224,(vlSymsp->TOP__sim.__PVT__storage_1[0]),10);
        tracep->fullSData(oldp+225,(vlSymsp->TOP__sim.__PVT__storage_1[1]),10);
        tracep->fullSData(oldp+226,(vlSymsp->TOP__sim.__PVT__storage_1[2]),10);
        tracep->fullSData(oldp+227,(vlSymsp->TOP__sim.__PVT__storage_1[3]),10);
        tracep->fullSData(oldp+228,(vlSymsp->TOP__sim.__PVT__storage_1[4]),10);
        tracep->fullSData(oldp+229,(vlSymsp->TOP__sim.__PVT__storage_1[5]),10);
        tracep->fullSData(oldp+230,(vlSymsp->TOP__sim.__PVT__storage_1[6]),10);
        tracep->fullSData(oldp+231,(vlSymsp->TOP__sim.__PVT__storage_1[7]),10);
        tracep->fullSData(oldp+232,(vlSymsp->TOP__sim.__PVT__storage_1[8]),10);
        tracep->fullSData(oldp+233,(vlSymsp->TOP__sim.__PVT__storage_1[9]),10);
        tracep->fullSData(oldp+234,(vlSymsp->TOP__sim.__PVT__storage_1[10]),10);
        tracep->fullSData(oldp+235,(vlSymsp->TOP__sim.__PVT__storage_1[11]),10);
        tracep->fullSData(oldp+236,(vlSymsp->TOP__sim.__PVT__storage_1[12]),10);
        tracep->fullSData(oldp+237,(vlSymsp->TOP__sim.__PVT__storage_1[13]),10);
        tracep->fullSData(oldp+238,(vlSymsp->TOP__sim.__PVT__storage_1[14]),10);
        tracep->fullSData(oldp+239,(vlSymsp->TOP__sim.__PVT__storage_1[15]),10);
        tracep->fullBit(oldp+240,(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset));
        tracep->fullBit(oldp+241,(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__debugReset));
        tracep->fullBit(oldp+242,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush));
        tracep->fullBit(oldp+243,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid));
        tracep->fullBit(oldp+244,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)))));
        tracep->fullBit(oldp+245,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready)))));
        tracep->fullBit(oldp+246,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid));
        tracep->fullBit(oldp+247,((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_privilege))));
        tracep->fullBit(oldp+248,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid));
        tracep->fullBit(oldp+249,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_isValid));
        tracep->fullIData(oldp+250,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub),32);
        tracep->fullBit(oldp+251,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE))));
        tracep->fullIData(oldp+252,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA),32);
        tracep->fullBit(oldp+253,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_memory_mmuRsp_isIoAccess));
        tracep->fullBit(oldp+254,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid));
        tracep->fullIData(oldp+255,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF),32);
        tracep->fullIData(oldp+256,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA),32);
        tracep->fullBit(oldp+257,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid));
        tracep->fullBit(oldp+258,((0U != (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xfU)))));
        tracep->fullCData(oldp+259,((0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                              >> 5U))),7);
        tracep->fullBit(oldp+260,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt));
        tracep->fullIData(oldp+261,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1),32);
        tracep->fullBit(oldp+262,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error) 
                                         | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                            & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                               | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))))));
        tracep->fullBit(oldp+263,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
        tracep->fullBit(oldp+264,((((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                   & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                      | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))));
        tracep->fullIData(oldp+265,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen),32);
        tracep->fullBit(oldp+266,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid)))));
        tracep->fullIData(oldp+267,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress),32);
        tracep->fullBit(oldp+268,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid));
        tracep->fullIData(oldp+269,((0xffffffe0U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)),32);
        tracep->fullBit(oldp+270,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt));
        tracep->fullBit(oldp+271,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid));
        tracep->fullBit(oldp+272,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_wr));
        tracep->fullBit(oldp+273,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt));
        tracep->fullIData(oldp+274,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data),32);
        tracep->fullBit(oldp+275,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException));
        tracep->fullBit(oldp+276,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess));
        tracep->fullBit(oldp+277,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError));
        tracep->fullBit(oldp+278,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr));
        tracep->fullBit(oldp+279,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready));
        tracep->fullBit(oldp+280,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo));
        tracep->fullBit(oldp+281,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid));
        tracep->fullBit(oldp+282,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr));
        tracep->fullBit(oldp+283,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess));
        tracep->fullIData(oldp+284,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address),32);
        tracep->fullCData(oldp+285,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask),4);
        tracep->fullCData(oldp+286,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size),3);
        tracep->fullQData(oldp+287,((0xfffffffffffffULL 
                                     & (((((QData)((IData)(
                                                           (0x7ffffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL)) 
                                                                                >> 0x20U)))))))) 
                                           << 0x21U) 
                                          | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL))) 
                                         + (((QData)((IData)(
                                                             (3U 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (1ULL 
                                                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
                                                                                >> 0x21U))))))))) 
                                             << 0x32U) 
                                            | (0x3ffffffffffffULL 
                                               & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
                                                  << 0x10U)))) 
                                        + (((QData)((IData)(
                                                            (3U 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (1ULL 
                                                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
                                                                                >> 0x21U))))))))) 
                                            << 0x32U) 
                                           | (0x3ffffffffffffULL 
                                              & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
                                                 << 0x10U)))))),52);
        tracep->fullQData(oldp+289,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HH),34);
        tracep->fullQData(oldp+291,((0x3ffffffffULL 
                                     & VL_MULS_QQQ(34,34,34, 
                                                   (0x3ffffffffULL 
                                                    & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                   (0x3ffffffffULL 
                                                    & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
        tracep->fullQData(oldp+293,((0x3ffffffffULL 
                                     & VL_MULS_QQQ(34,34,34, 
                                                   (0x3ffffffffULL 
                                                    & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                   (0x3ffffffffULL 
                                                    & VL_EXTENDS_QI(34,17, 
                                                                    (0xffffU 
                                                                     & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)))))),34);
        tracep->fullQData(oldp+295,((0x3ffffffffULL 
                                     & VL_MULS_QQQ(34,34,34, 
                                                   (0x3ffffffffULL 
                                                    & VL_EXTENDS_QI(34,17, 
                                                                    (0xffffU 
                                                                     & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1))), 
                                                   (0x3ffffffffULL 
                                                    & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
        tracep->fullIData(oldp+297,(((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1) 
                                     * (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
        tracep->fullIData(oldp+298,((0xfffffffeU & 
                                     (((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                        ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                        : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                      + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2))),32);
        tracep->fullBit(oldp+299,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
                                    != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1)) 
                                   | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                                      & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                          ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                              >> 0x15U) 
                                             ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                                >> 1U))
                                          : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                              ? (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0x15U)
                                              : (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 8U)))))));
        tracep->fullIData(oldp+300,((IData)((0x1ffffffffULL 
                                             & VL_SHIFTRS_QQI(33,33,5, 
                                                              (((QData)((IData)(
                                                                                ((3U 
                                                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
                                                                                >> 0x1fU)))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
                                                              (0x1fU 
                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4))))),32);
        tracep->fullIData(oldp+301,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                      ? ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                          ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)
                                          : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                              ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                                 | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)
                                              : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                                 ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)))
                                      : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                          ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less)
                                          : vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub))),32);
        tracep->fullIData(oldp+302,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE_DATA_RF),32);
        tracep->fullIData(oldp+303,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xcU)))
                                      ? ((0xff000000U 
                                          & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                             << 0x18U)) 
                                         | ((0xff0000U 
                                             & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))))
                                      : ((1U == (3U 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0xcU)))
                                          ? ((0xffff0000U 
                                              & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                 << 0x10U)) 
                                             | (0xffffU 
                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))
                                          : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
        tracep->fullBit(oldp+304,((((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_haltIt)) 
                                    & ((IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                >> 0x20U)) 
                                       | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_hardwareBreakpoints_0_valid) 
                                           & (vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_hardwareBreakpoints_0_pc 
                                              == (0x7fffffffU 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload 
                                                     >> 1U)))) 
                                          | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_hardwareBreakpoints_1_valid) 
                                             & (vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_hardwareBreakpoints_1_pc 
                                                == 
                                                (0x7fffffffU 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload 
                                                    >> 1U))))))) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_allowEBreak))));
        tracep->fullBit(oldp+305,((0x20U != (0x7fU 
                                             & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                >> 7U)))));
        tracep->fullBit(oldp+306,((1U & (~ (((1U == 
                                              (3U & 
                                               (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                >> 0xdU))) 
                                             & (0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                    >> 0xfU)))) 
                                            | ((3U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                    >> 0xdU))) 
                                               & (0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                      >> 0xfU)))))))));
    }
}

void Vsim::traceFullSub2(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+307,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
        tracep->fullBit(oldp+308,((1U & ((IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                  >> 0x14U)) 
                                         & (~ (IData)(
                                                      (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                       >> 3U)))))));
        tracep->fullBit(oldp+309,((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 0x1fU)))));
        tracep->fullBit(oldp+310,((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 0x1eU)))));
        tracep->fullBit(oldp+311,((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 0x1dU)))));
        tracep->fullBit(oldp+312,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_MUL));
        tracep->fullBit(oldp+313,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_MUL));
        tracep->fullBit(oldp+314,((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 0x1cU)))));
        tracep->fullCData(oldp+315,((3U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 0x1aU)))),2);
        tracep->fullBit(oldp+316,((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 0x19U)))));
        tracep->fullCData(oldp+317,((3U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 0x15U)))),2);
        tracep->fullCData(oldp+318,((3U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 0x12U)))),2);
        tracep->fullBit(oldp+319,((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 0x11U)))));
        tracep->fullBit(oldp+320,((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 0x10U)))));
        tracep->fullBit(oldp+321,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_WR));
        tracep->fullBit(oldp+322,((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 0xdU)))));
        tracep->fullBit(oldp+323,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE));
        tracep->fullBit(oldp+324,((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+325,((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 0xbU)))));
        tracep->fullCData(oldp+326,((3U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 8U)))),2);
        tracep->fullCData(oldp+327,((3U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 6U)))),2);
        tracep->fullCData(oldp+328,((3U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 1U)))),2);
        tracep->fullIData(oldp+329,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_FORMAL_PC_NEXT),32);
        tracep->fullIData(oldp+330,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT),32);
        tracep->fullIData(oldp+331,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT),32);
        tracep->fullIData(oldp+332,(((IData)(4U) + vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
        tracep->fullIData(oldp+333,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_PC),32);
        tracep->fullBit(oldp+334,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_DO_EBREAK));
        tracep->fullBit(oldp+335,((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 0x20U)))));
        tracep->fullBit(oldp+336,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED));
        tracep->fullBit(oldp+337,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_DIV));
        tracep->fullBit(oldp+338,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
        tracep->fullBit(oldp+339,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_DIV));
        tracep->fullBit(oldp+340,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL));
        tracep->fullQData(oldp+341,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH),34);
        tracep->fullQData(oldp+343,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW),52);
        tracep->fullQData(oldp+345,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL),34);
        tracep->fullQData(oldp+347,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH),34);
        tracep->fullIData(oldp+349,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL),32);
        tracep->fullBit(oldp+350,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE));
        tracep->fullBit(oldp+351,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE));
        tracep->fullBit(oldp+352,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR));
        tracep->fullCData(oldp+353,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL),2);
        tracep->fullCData(oldp+354,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL),2);
        tracep->fullCData(oldp+355,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL),2);
        tracep->fullIData(oldp+356,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC),32);
        tracep->fullBit(oldp+357,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
        tracep->fullIData(oldp+358,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC),32);
        tracep->fullBit(oldp+359,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2));
        tracep->fullBit(oldp+360,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1));
        tracep->fullCData(oldp+361,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL),2);
        tracep->fullBit(oldp+362,((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 0xfU)))));
        tracep->fullBit(oldp+363,((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 5U)))));
        tracep->fullBit(oldp+364,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
        tracep->fullBit(oldp+365,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE));
        tracep->fullBit(oldp+366,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
        tracep->fullIData(oldp+367,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION),32);
        tracep->fullBit(oldp+368,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE));
        tracep->fullBit(oldp+369,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
        tracep->fullIData(oldp+370,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2),32);
        tracep->fullIData(oldp+371,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1),32);
        tracep->fullIData(oldp+372,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT),32);
        tracep->fullCData(oldp+373,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL),2);
        tracep->fullCData(oldp+374,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL),2);
        tracep->fullBit(oldp+375,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED));
        tracep->fullBit(oldp+376,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO));
        tracep->fullBit(oldp+377,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS));
        tracep->fullCData(oldp+378,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL),2);
        tracep->fullCData(oldp+379,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL),2);
        tracep->fullBit(oldp+380,((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 3U)))));
        tracep->fullBit(oldp+381,((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 0x14U)))));
        tracep->fullBit(oldp+382,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less));
        tracep->fullCData(oldp+383,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL),2);
        tracep->fullIData(oldp+384,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4),32);
        tracep->fullIData(oldp+385,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1),32);
        tracep->fullCData(oldp+386,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL),2);
        tracep->fullIData(oldp+387,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED),32);
        tracep->fullBit(oldp+388,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID));
        tracep->fullBit(oldp+389,(((0x17U == (0x5fU 
                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                   | ((0x6fU == (0x7fU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                      | ((0x1073U == 
                                          (0x107fU 
                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                         | ((0x2073U 
                                             == (0x207fU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                            | ((0x4063U 
                                                == 
                                                (0x407fU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                               | ((0x2013U 
                                                   == 
                                                   (0x207fU 
                                                    & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                  | ((0x13U 
                                                      == 
                                                      (0x107fU 
                                                       & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                     | ((0x23U 
                                                         == 
                                                         (0x603fU 
                                                          & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                        | ((3U 
                                                            == 
                                                            (0x207fU 
                                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                           | ((3U 
                                                               == 
                                                               (0x505fU 
                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                              | ((0x63U 
                                                                  == 
                                                                  (0x707bU 
                                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                 | ((0xfU 
                                                                     == 
                                                                     (0x607fU 
                                                                      & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                    | ((0x33U 
                                                                        == 
                                                                        (0xfc00007fU 
                                                                         & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                       | ((0x500fU 
                                                                           == 
                                                                           (0x1f0707fU 
                                                                            & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                          | ((0x5013U 
                                                                              == 
                                                                              (0xbe00705fU 
                                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                             | ((0x1013U 
                                                                                == 
                                                                                (0xfe00305fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x33U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10200073U 
                                                                                == 
                                                                                (0xdfffffffU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x73U 
                                                                                == 
                                                                                (0xffefffffU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x10500073U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))))))))))))))))));
        tracep->fullBit(oldp+390,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR));
        tracep->fullBit(oldp+391,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
        tracep->fullBit(oldp+392,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
        tracep->fullBit(oldp+393,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY));
        tracep->fullIData(oldp+394,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1),32);
        tracep->fullBit(oldp+395,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT));
        tracep->fullIData(oldp+396,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2),32);
        tracep->fullBit(oldp+397,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_WR));
        tracep->fullBit(oldp+398,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
        tracep->fullIData(oldp+399,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION),32);
        tracep->fullBit(oldp+400,((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 4U)))));
        tracep->fullBit(oldp+401,((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED))));
        tracep->fullBit(oldp+402,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_4));
        tracep->fullBit(oldp+403,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3));
        tracep->fullBit(oldp+404,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2));
        tracep->fullBit(oldp+405,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1));
        tracep->fullCData(oldp+406,((3U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 0x17U)))),2);
        tracep->fullIData(oldp+407,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload),32);
        tracep->fullIData(oldp+408,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC),32);
        tracep->fullIData(oldp+409,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION),32);
        tracep->fullBit(oldp+410,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltItself));
        tracep->fullBit(oldp+411,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther));
        tracep->fullBit(oldp+412,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt));
        tracep->fullBit(oldp+413,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext));
        tracep->fullBit(oldp+414,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid));
        tracep->fullBit(oldp+415,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuck));
        tracep->fullBit(oldp+416,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther) 
                                   | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck) 
                                       | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
        tracep->fullBit(oldp+417,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed));
        tracep->fullBit(oldp+418,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuck)) 
                                         & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt))))));
        tracep->fullBit(oldp+419,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuck))) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt)))));
        tracep->fullBit(oldp+420,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself));
        tracep->fullBit(oldp+421,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther));
        tracep->fullBit(oldp+422,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt));
        tracep->fullBit(oldp+423,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushIt));
        tracep->fullBit(oldp+424,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext));
        tracep->fullBit(oldp+425,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid));
        tracep->fullBit(oldp+426,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck));
        tracep->fullBit(oldp+427,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther) 
                                   | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck) 
                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
        tracep->fullBit(oldp+428,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed));
        tracep->fullBit(oldp+429,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                         & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt))))));
        tracep->fullBit(oldp+430,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck))) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
        tracep->fullBit(oldp+431,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_haltItself));
        tracep->fullBit(oldp+432,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt));
        tracep->fullBit(oldp+433,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext));
        tracep->fullBit(oldp+434,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid));
        tracep->fullBit(oldp+435,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck));
        tracep->fullBit(oldp+436,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself));
        tracep->fullBit(oldp+437,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isFlushed));
        tracep->fullBit(oldp+438,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                         & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt))))));
        tracep->fullBit(oldp+439,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck))) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
        tracep->fullBit(oldp+440,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt));
        tracep->fullBit(oldp+441,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt));
    }
}

void Vsim::traceFullSub3(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+442,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext));
        tracep->fullBit(oldp+443,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid));
        tracep->fullBit(oldp+444,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                         & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt))))));
        tracep->fullBit(oldp+445,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring));
        tracep->fullBit(oldp+446,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt));
        tracep->fullBit(oldp+447,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction));
        tracep->fullBit(oldp+448,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid));
        tracep->fullIData(oldp+449,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload),32);
        tracep->fullBit(oldp+450,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid));
        tracep->fullBit(oldp+451,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1));
        tracep->fullBit(oldp+452,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2));
        tracep->fullBit(oldp+453,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3));
        tracep->fullBit(oldp+454,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4));
        tracep->fullBit(oldp+455,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
        tracep->fullCData(oldp+456,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code),4);
        tracep->fullIData(oldp+457,((0xfffffffcU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
        tracep->fullBit(oldp+458,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) 
                                   | (0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                                 << 2U) 
                                                | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext))))))));
        tracep->fullBit(oldp+459,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready) 
                                   & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2)))));
        tracep->fullBit(oldp+460,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_uncached));
        tracep->fullIData(oldp+461,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_address),32);
        tracep->fullCData(oldp+462,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_mask),4);
        tracep->fullCData(oldp+463,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_size),3);
        tracep->fullBit(oldp+464,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_last));
        tracep->fullBit(oldp+465,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid));
        tracep->fullIData(oldp+466,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext),32);
        tracep->fullBit(oldp+467,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                         >> 0x1fU))));
        tracep->fullBit(oldp+468,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                         | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
        tracep->fullBit(oldp+469,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid));
        tracep->fullBit(oldp+470,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid));
        tracep->fullCData(oldp+471,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code),4);
        tracep->fullBit(oldp+472,(vlSymsp->TOP__sim__VexRiscv.__PVT__decodeExceptionPort_valid));
        tracep->fullBit(oldp+473,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid));
        tracep->fullBit(oldp+474,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_inDebugNoFetchFlag));
        tracep->fullIData(oldp+475,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataInit),32);
        tracep->fullIData(oldp+476,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal),32);
        tracep->fullBit(oldp+477,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_allowCsrSignal));
        tracep->fullBit(oldp+478,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                            | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))))));
        tracep->fullBit(oldp+479,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_thirdPartyWake));
        tracep->fullBit(oldp+480,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid));
        tracep->fullIData(oldp+481,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload),32);
        tracep->fullBit(oldp+482,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode));
        tracep->fullBit(oldp+483,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute));
        tracep->fullBit(oldp+484,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory));
        tracep->fullBit(oldp+485,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack));
        tracep->fullBit(oldp+486,((0U != vlSymsp->TOP__sim__VexRiscv.__PVT___zz_externalInterrupt)));
        tracep->fullCData(oldp+487,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_privilege),2);
        tracep->fullBit(oldp+488,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_forceMachineWire));
        tracep->fullBit(oldp+489,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid));
        tracep->fullCData(oldp+490,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_payload_code),4);
        tracep->fullBit(oldp+491,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_allowInterrupts));
        tracep->fullBit(oldp+492,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_allowException));
        tracep->fullBit(oldp+493,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_allowEbreakException));
        tracep->fullBit(oldp+494,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_injectionPort_valid));
        tracep->fullBit(oldp+495,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_injectionPort_ready));
        tracep->fullBit(oldp+496,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext)))))));
        tracep->fullBit(oldp+497,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid));
        tracep->fullIData(oldp+498,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                      ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC
                                      : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                          ? vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload
                                          : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                              ? vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
                                              : vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload)))),32);
        tracep->fullBit(oldp+499,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready));
        tracep->fullIData(oldp+500,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc),32);
        tracep->fullBit(oldp+501,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction));
        tracep->fullBit(oldp+502,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg));
        tracep->fullBit(oldp+503,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_fire));
        tracep->fullBit(oldp+504,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg))));
        tracep->fullBit(oldp+505,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate));
        tracep->fullBit(oldp+506,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
        tracep->fullBit(oldp+507,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc));
        tracep->fullBit(oldp+508,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate))));
        tracep->fullBit(oldp+509,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid)) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))));
        tracep->fullBit(oldp+510,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch));
        tracep->fullBit(oldp+511,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed));
        tracep->fullBit(oldp+512,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted) 
                                   & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready) 
                                       | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction)) 
                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate)))));
        tracep->fullBit(oldp+513,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)))));
        tracep->fullBit(oldp+514,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready));
        tracep->fullBit(oldp+515,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt));
        tracep->fullBit(oldp+516,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1));
        tracep->fullBit(oldp+517,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
        tracep->fullBit(oldp+518,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt)))));
        tracep->fullBit(oldp+519,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuck)))));
        tracep->fullBit(oldp+520,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt));
        tracep->fullBit(oldp+521,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_flush));
        tracep->fullBit(oldp+522,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError));
        tracep->fullBit(oldp+523,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))));
        tracep->fullBit(oldp+524,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))));
        tracep->fullBit(oldp+525,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0));
        tracep->fullBit(oldp+526,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
        tracep->fullBit(oldp+527,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))));
        tracep->fullBit(oldp+528,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
        tracep->fullBit(oldp+529,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                                   & (IData)(vlSymsp->TOP__sim.__PVT__ibus_ibus_ack))));
        tracep->fullBit(oldp+530,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid));
        tracep->fullIData(oldp+531,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext),32);
        tracep->fullIData(oldp+532,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rspCounter),32);
        tracep->fullBit(oldp+533,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit));
        tracep->fullBit(oldp+534,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit));
        tracep->fullBit(oldp+535,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch));
        tracep->fullBit(oldp+536,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l245));
        tracep->fullBit(oldp+537,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250));
        tracep->fullBit(oldp+538,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256));
        tracep->fullBit(oldp+539,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l262));
        tracep->fullBit(oldp+540,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                                         | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN))))));
        tracep->fullBit(oldp+541,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_ready));
        tracep->fullBit(oldp+542,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                    ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr)
                                    : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_wr))));
        tracep->fullBit(oldp+543,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                    ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)
                                    : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_uncached))));
        tracep->fullIData(oldp+544,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                      ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address
                                      : vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_address)),32);
        tracep->fullIData(oldp+545,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                      ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF
                                      : vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_data)),32);
        tracep->fullCData(oldp+546,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                      ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask)
                                      : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_mask))),4);
        tracep->fullCData(oldp+547,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                      ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size)
                                      : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_size))),3);
        tracep->fullBit(oldp+548,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_last))));
        tracep->fullBit(oldp+549,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN));
        tracep->fullBit(oldp+550,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_wr));
        tracep->fullBit(oldp+551,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_uncached));
        tracep->fullIData(oldp+552,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_address),32);
        tracep->fullIData(oldp+553,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_data),32);
        tracep->fullCData(oldp+554,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_mask),4);
        tracep->fullCData(oldp+555,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_size),3);
        tracep->fullBit(oldp+556,(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rData_last));
        tracep->fullBit(oldp+557,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid)))));
        tracep->fullIData(oldp+558,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_rspCounter),32);
        tracep->fullCData(oldp+559,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0xcU))),2);
        tracep->fullBit(oldp+560,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready)))));
        tracep->fullBit(oldp+561,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready))) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt))));
        tracep->fullBit(oldp+562,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid))));
        tracep->fullBit(oldp+563,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_DBusCachedPlugin_l472) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_wr)))));
        tracep->fullBit(oldp+564,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_DBusCachedPlugin_l533));
        tracep->fullBit(oldp+565,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt))));
        tracep->fullCData(oldp+566,((0xffU & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data)),8);
        tracep->fullCData(oldp+567,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                              >> 8U))),8);
        tracep->fullCData(oldp+568,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+569,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                              >> 0x18U))),8);
        tracep->fullIData(oldp+570,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted),32);
        tracep->fullCData(oldp+571,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                           >> 0xcU))),2);
        tracep->fullIData(oldp+572,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                   >> 0xcU)))
                                      ? vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_1
                                      : ((1U == (3U 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                    >> 0xcU)))
                                          ? vlSymsp->TOP__sim__VexRiscv.__PVT___zz_writeBack_DBusCachedPlugin_rspFormated_3
                                          : vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted))),32);
        tracep->fullBit(oldp+573,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE))));
        tracep->fullBit(oldp+574,((0U == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                   >> 7U)))));
        tracep->fullCData(oldp+575,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+576,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+577,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port0),32);
        tracep->fullIData(oldp+578,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port1),32);
        tracep->fullIData(oldp+579,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                      ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                         & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)
                                      : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                          ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                             | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)
                                          : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                             ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)))),32);
        tracep->fullCData(oldp+580,((0x1fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)),5);
        tracep->fullIData(oldp+581,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed),32);
        tracep->fullBit(oldp+582,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard));
        tracep->fullBit(oldp+583,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard));
        tracep->fullBit(oldp+584,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring))));
        tracep->fullCData(oldp+585,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                              >> 7U))),5);
        tracep->fullIData(oldp+586,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2),32);
        tracep->fullBit(oldp+587,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid));
        tracep->fullCData(oldp+588,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address),5);
        tracep->fullIData(oldp+589,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data),32);
        tracep->fullBit(oldp+590,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                                   == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                >> 0xfU)))));
        tracep->fullBit(oldp+591,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                                   == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                >> 0x14U)))));
    }
}

void Vsim::traceFullSub4(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp2[3];
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp4[3];
    WData/*95:0*/ __Vtemp5[3];
    WData/*95:0*/ __Vtemp6[3];
    // Body
    {
        tracep->fullBit(oldp+592,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                             >> 7U)) 
                                   == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                >> 0xfU)))));
        tracep->fullBit(oldp+593,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                             >> 7U)) 
                                   == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                >> 0x14U)))));
        tracep->fullBit(oldp+594,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45));
        tracep->fullBit(oldp+595,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID))));
        tracep->fullBit(oldp+596,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1));
        tracep->fullBit(oldp+597,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1));
        tracep->fullBit(oldp+598,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1));
        tracep->fullBit(oldp+599,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_1));
        tracep->fullBit(oldp+600,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))));
        tracep->fullBit(oldp+601,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2));
        tracep->fullBit(oldp+602,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2));
        tracep->fullBit(oldp+603,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2));
        tracep->fullBit(oldp+604,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_2));
        tracep->fullBit(oldp+605,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))));
        tracep->fullBit(oldp+606,((1U & (~ (IData)(
                                                   (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                    >> 5U))))));
        tracep->fullBit(oldp+607,((1U & (~ (IData)(
                                                   (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                    >> 0xfU))))));
        tracep->fullBit(oldp+608,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid) 
                                   & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard) 
                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard)))));
        tracep->fullBit(oldp+609,((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                   == vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4)));
        tracep->fullCData(oldp+610,((7U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+611,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                                   & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                       ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0x15U) 
                                          ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                             >> 1U))
                                       : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                           ? (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                              >> 0x15U)
                                           : (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                              >> 8U))))));
        tracep->fullIData(oldp+612,(((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                      ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                      : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC)),32);
        tracep->fullIData(oldp+613,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2),32);
        tracep->fullIData(oldp+614,((((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                       ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                       : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                     + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2)),32);
        tracep->fullIData(oldp+615,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_base),30);
        tracep->fullIData(oldp+616,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc),32);
        tracep->fullBit(oldp+617,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE));
        tracep->fullBit(oldp+618,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE));
        tracep->fullCData(oldp+619,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP),2);
        tracep->fullBit(oldp+620,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MEIP));
        tracep->fullBit(oldp+621,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MTIP));
        tracep->fullBit(oldp+622,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP));
        tracep->fullBit(oldp+623,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
        tracep->fullBit(oldp+624,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
        tracep->fullBit(oldp+625,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
        tracep->fullBit(oldp+626,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_interrupt));
        tracep->fullCData(oldp+627,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode),4);
        tracep->fullIData(oldp+628,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtval),32);
        tracep->fullQData(oldp+629,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcycle),64);
        tracep->fullQData(oldp+631,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_minstret),64);
        tracep->fullBit(oldp+633,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode));
        tracep->fullBit(oldp+634,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute));
        tracep->fullBit(oldp+635,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory));
        tracep->fullBit(oldp+636,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
        tracep->fullCData(oldp+637,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code),4);
        tracep->fullIData(oldp+638,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr),32);
        tracep->fullCData(oldp+639,(((3U > (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_privilege))
                                      ? 3U : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_privilege))),2);
        tracep->fullBit(oldp+640,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))));
        tracep->fullBit(oldp+641,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid));
        tracep->fullCData(oldp+642,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege),2);
        tracep->fullBit(oldp+643,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1296));
        tracep->fullBit(oldp+644,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l1302));
        tracep->fullBit(oldp+645,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l1302_1));
        tracep->fullBit(oldp+646,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l1302_2));
        tracep->fullBit(oldp+647,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_allowException))));
        tracep->fullBit(oldp+648,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_0));
        tracep->fullBit(oldp+649,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_1));
        tracep->fullBit(oldp+650,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_2));
        tracep->fullBit(oldp+651,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active));
        tracep->fullBit(oldp+652,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1340));
        tracep->fullBit(oldp+653,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done));
        tracep->fullBit(oldp+654,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))));
        tracep->fullCData(oldp+655,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege),2);
        tracep->fullCData(oldp+656,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_trapCause),4);
        tracep->fullCData(oldp+657,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_mode),2);
        tracep->fullIData(oldp+658,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_base),30);
        tracep->fullBit(oldp+659,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1390));
        tracep->fullBit(oldp+660,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1456));
        tracep->fullCData(oldp+661,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                           >> 0x1cU))),2);
        tracep->fullBit(oldp+662,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake));
        tracep->fullBit(oldp+663,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                    & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))) 
                                   | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                       & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))) 
                                      | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                         & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))))));
        tracep->fullBit(oldp+664,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))));
        tracep->fullBit(oldp+665,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess));
        tracep->fullBit(oldp+666,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalInstruction));
        tracep->fullBit(oldp+667,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                   & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))));
        tracep->fullBit(oldp+668,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_privilege) 
                                   < (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0x1cU)))));
        tracep->fullBit(oldp+669,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1555));
        tracep->fullBit(oldp+670,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeInstruction));
        tracep->fullBit(oldp+671,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction));
        tracep->fullBit(oldp+672,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable));
        tracep->fullBit(oldp+673,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
        tracep->fullBit(oldp+674,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                         >> 0xdU))));
        tracep->fullBit(oldp+675,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))));
        tracep->fullSData(oldp+676,((0xfffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                               >> 0x14U))),12);
        tracep->fullBit(oldp+677,(((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0xcU))) 
                                   | (2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xcU))))));
        tracep->fullBit(oldp+678,((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0xcU)))));
        tracep->fullSData(oldp+679,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),16);
        tracep->fullSData(oldp+680,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),16);
        tracep->fullIData(oldp+681,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),17);
        tracep->fullIData(oldp+682,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),17);
        tracep->fullIData(oldp+683,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh),17);
        tracep->fullIData(oldp+684,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh),17);
        __Vtemp2[0U] = (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW);
        __Vtemp2[1U] = ((0xfff00000U & ((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                               >> 0x33U))))) 
                                        << 0x14U)) 
                        | (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                   >> 0x20U)));
        __Vtemp2[2U] = (3U & ((- (IData)((1U & (IData)(
                                                       (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                        >> 0x33U))))) 
                              >> 0xcU));
        VL_EXTEND_WQ(66,34, __Vtemp3, vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH);
        VL_SHIFTL_WWI(66,66,6, __Vtemp4, __Vtemp3, 0x20U);
        VL_ADD_W(3, __Vtemp5, __Vtemp2, __Vtemp4);
        __Vtemp6[0U] = __Vtemp5[0U];
        __Vtemp6[1U] = __Vtemp5[1U];
        __Vtemp6[2U] = (3U & __Vtemp5[2U]);
        tracep->fullWData(oldp+685,(__Vtemp6),66);
        tracep->fullBit(oldp+688,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL))));
        tracep->fullQData(oldp+689,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1),33);
        tracep->fullIData(oldp+691,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs2),32);
        tracep->fullWData(oldp+692,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator),65);
        tracep->fullBit(oldp+695,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_needRevert));
        tracep->fullBit(oldp+696,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement));
        tracep->fullBit(oldp+697,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear));
        tracep->fullCData(oldp+698,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_valueNext),6);
        tracep->fullCData(oldp+699,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value),6);
        tracep->fullBit(oldp+700,((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
        tracep->fullBit(oldp+701,(((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value)) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))));
        tracep->fullBit(oldp+702,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done));
        tracep->fullBit(oldp+703,((0x20U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
        tracep->fullIData(oldp+704,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_result),32);
        tracep->fullBit(oldp+705,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128));
        tracep->fullBit(oldp+706,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))));
        tracep->fullQData(oldp+707,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted),33);
        tracep->fullQData(oldp+709,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator),33);
        tracep->fullIData(oldp+711,(((1U & (IData)(
                                                   (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                    >> 0x20U)))
                                      ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted)
                                      : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator))),32);
        tracep->fullIData(oldp+712,(((0xfffffffeU & 
                                      ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(
                                                               (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                                >> 0x20U)))))),32);
        tracep->fullIData(oldp+713,(vlSymsp->TOP__sim__VexRiscv.__PVT__externalInterruptArray_regNext),32);
        tracep->fullBit(oldp+714,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_firstCycle));
        tracep->fullBit(oldp+715,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_secondCycle));
        tracep->fullBit(oldp+716,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_resetIt));
        tracep->fullBit(oldp+717,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_haltIt));
        tracep->fullBit(oldp+718,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_stepIt));
        tracep->fullBit(oldp+719,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_isPipBusy));
        tracep->fullBit(oldp+720,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_godmode));
        tracep->fullBit(oldp+721,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_haltIt) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_isPipBusy)))));
        tracep->fullBit(oldp+722,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_haltedByBreak));
        tracep->fullBit(oldp+723,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_disableEbreak));
        tracep->fullBit(oldp+724,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_allowEBreak));
        tracep->fullBit(oldp+725,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_hardwareBreakpoints_0_valid));
        tracep->fullIData(oldp+726,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_hardwareBreakpoints_0_pc),31);
        tracep->fullBit(oldp+727,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_hardwareBreakpoints_1_valid));
        tracep->fullIData(oldp+728,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_hardwareBreakpoints_1_pc),31);
        tracep->fullIData(oldp+729,(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_busReadDataReg),32);
        tracep->fullBit(oldp+730,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_DebugPlugin_l257)))));
        tracep->fullCData(oldp+731,((0x3fU & ((IData)(vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_payload_address) 
                                              >> 2U))),6);
        tracep->fullBit(oldp+732,((1U & (vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_payload_data 
                                         >> 0x10U))));
        tracep->fullBit(oldp+733,((1U & (vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_payload_data 
                                         >> 0x18U))));
        tracep->fullBit(oldp+734,((1U & (vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_payload_data 
                                         >> 0x11U))));
        tracep->fullBit(oldp+735,((1U & (vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_payload_data 
                                         >> 0x19U))));
    }
}
