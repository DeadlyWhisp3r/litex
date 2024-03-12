// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim_VexRiscv.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__36(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__36\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_DebugPlugin_l308) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_DebugPlugin_l311) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext = 1U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed 
        = ((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                    << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext))) 
           | (0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt) 
                      << 2U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushIt))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isFlushed) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isFlushed) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l829 
        = (1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                 & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRspFreeze))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
            & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself))) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_haltItself) 
           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself));
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt)));
    if ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_port_state))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid = 1U;
    } else {
        if ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_port_state))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid = 1U;
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 1U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_773) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_834) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_allowCsrSignal) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1719) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 1U;
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid)) 
               | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask 
        = (0xfU & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_stage0_mask) 
                   << (3U & vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less 
        = (1U & (((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
                                              >> 0x1fU)))
                  ? (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                     >> 0x1fU) : ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED)
                                   ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4 
                                      >> 0x1fU) : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                                   >> 0x1fU))));
    if (vlSymsp->TOP__sim__VexRiscv.__Vdlyvset__IBusCachedPlugin_cache__DOT__banks_0__v0) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__banks_0[vlSymsp->TOP__sim__VexRiscv.__Vdlyvdim0__IBusCachedPlugin_cache__DOT__banks_0__v0] 
            = vlSymsp->TOP__sim__VexRiscv.__Vdlyvval__IBusCachedPlugin_cache__DOT__banks_0__v0;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID 
        = (1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                         >> 0xaU)));
    if ((0U == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                         >> 7U)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__Vtableidx3 = (3U 
                                                & (IData)(
                                                          (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                           >> 0x15U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string[0U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable3___PVT__decode_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx3][0U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string[1U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable3___PVT__decode_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx3][1U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string[2U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable3___PVT__decode_SHIFT_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx3][2U];
    vlSymsp->TOP__sim__VexRiscv.__Vtableidx7 = (3U 
                                                & (IData)(
                                                          (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                           >> 1U)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string[0U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable7___PVT__decode_SRC1_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx7][0U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string[1U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable7___PVT__decode_SRC1_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx7][1U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string[2U] 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable7___PVT__decode_SRC1_CTRL_string
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx7][2U];
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload 
        = (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload 
           + ((2U == (3U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0x17U)))) ? 
              (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_1) 
                << 0x15U) | ((0x100000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                           >> 0xbU)) 
                             | ((0xff000U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                | ((0x800U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                              >> 9U)) 
                                   | (0x7feU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                >> 0x14U))))))
               : ((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_predictionJumpInterface_payload_3 
                   << 0xdU) | ((0x1000U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                 >> 7U))))))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_1) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_2) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard = 1U;
            }
        }
    }
    if ((1U & (~ (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                          >> 5U))))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_1) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard = 1U;
            }
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_2) {
        if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard = 1U;
            }
        }
    }
    if ((1U & (~ (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                          >> 0xfU))))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch 
        = ((2U == (3U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                 >> 0x17U)))) | ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                              >> 0x17U)))) 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_decodePrediction_cmd_hadBranch_1 
                                                    >> 0x12U)));
    if ((1U & ((2U == (3U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x17U)))) ? 
               (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                >> 0x15U) : (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                             >> 8U)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed 
        = ((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                    << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                               << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext)))) 
           | (0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt) 
                      << 3U) | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushIt) 
                                << 1U))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.lastStageIsFiring = vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring;
    vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring));
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_10) {
        vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear = 1U;
    }
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__37(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__37\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l667 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_isValid) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther) 
              | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck) 
                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED));
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid) 
            & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_allowInterrupts)) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid));
    vlSymsp->TOP__sim__VexRiscv.__PVT__decodeExceptionPort_valid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid) 
           & (~ ((0x17U == (0x5fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                 | ((0x6fU == (0x7fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                    | ((0x1073U == (0x107fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                       | ((0x2073U == (0x207fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                          | ((0x4063U == (0x407fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                             | ((0x2013U == (0x207fU 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                | ((0x13U == (0x107fU 
                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                   | ((0x23U == (0x603fU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                      | ((3U == (0x207fU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                         | ((3U == 
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
    vlSymsp->TOP__sim__VexRiscv.__Vtableidx25 = (((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                                   == vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_4) 
                                                  << 4U) 
                                                 | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less) 
                                                     << 3U) 
                                                    | (7U 
                                                       & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                          >> 0xcU))));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable25___PVT___zz_execute_BRANCH_COND_RESULT
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx25];
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2 
        = ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
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
                : vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub));
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
         & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataInit;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_1 = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_1 = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_valueNext 
        = (((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value)) 
            & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))
            ? 0U : (0x3fU & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value) 
                             + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))));
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_valueNext = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l667) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l667) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload 
            = (0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                        >> 5U));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l667) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload 
            = (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                         >> 2U));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l667) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeInstruction) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    if ((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                  >> 7U)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther = 0U;
    if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isValid) 
         & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard) 
            | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther = 1U;
    }
    if ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
          & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))) 
         | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
             & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))) 
            | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
               & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decodeExceptionPort_valid) 
            << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when = (0U 
                                                   != 
                                                   (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decodeExceptionPort_valid) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid)));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1 
        = ((0U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
           & ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
              | ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL)) 
                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2 = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port1;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid) {
        if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
             == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0x14U)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2 
                = vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45) {
        if (((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                       >> 7U)) == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0x14U)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2 
                = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2 
                    = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_1;
            }
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2 
                    = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2;
            }
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1 = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port0;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid) {
        if (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
             == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0xfU)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1 
                = vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45) {
        if (((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                       >> 7U)) == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0xfU)))) {
            vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1 
                = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2;
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1 
                    = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_1;
            }
        }
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2) {
        if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
            if (vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1 
                    = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2;
            }
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_to_execute_FORMAL_PC_NEXT 
        = ((IData)(4U) + vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload);
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_to_execute_FORMAL_PC_NEXT 
            = vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid 
        = (0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid) 
                   << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid) 
                              << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid) 
                                         << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid)))));
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__38(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__38\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid) 
            << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid) 
                       << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid) 
                                  << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_dataReadRspMem 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuck 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltItself) 
           | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther) 
              | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck) 
                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself))));
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code) 
           & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code) 
                 - (IData)(1U))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode 
        = vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 0U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed = 1U;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload) 
           & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload) 
                 - (IData)(1U))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuck)
            ? vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen
            : vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1);
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuck)) 
                 & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1340 
        = (1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active)) 
                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_flush 
        = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt) 
            | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext) 
               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuck)))) 
           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch));
    vlSymsp->TOP__sim__VexRiscv.__Vtableidx24 = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_DebugPlugin_l324) 
                                                  << 6U) 
                                                 | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_haltIt) 
                                                     << 5U) 
                                                    | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_DebugPlugin_l311) 
                                                        << 4U) 
                                                       | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_DebugPlugin_l308) 
                                                           << 3U) 
                                                          | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1456) 
                                                              << 2U) 
                                                             | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1390) 
                                                                 << 1U) 
                                                                | (0U 
                                                                   != 
                                                                   (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                                                                           << 1U) 
                                                                          | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))))))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt 
        = vlSymsp->TOP__sim__VexRiscv.__Vtable24___PVT__IBusCachedPlugin_fetcherHalt
        [vlSymsp->TOP__sim__VexRiscv.__Vtableidx24];
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6 
        = ((2U & ((0x7ffffffeU & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1) 
                                  >> 1U)) | (0x3ffffffeU 
                                             & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1) 
                                                >> 2U)))) 
           | (1U & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1) 
                     >> 1U) | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1) 
                               >> 3U))));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = 0U;
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = 1U;
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) 
           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid 
        = ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt)) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
        = (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
           + ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc) 
              << 2U));
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
            = vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload;
    }
    if (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
            = ((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC
                : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                    ? vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload
                    : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                        ? vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
                        : vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload)));
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
        = (0xfffffffeU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc);
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc 
        = (0xfffffffdU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc);
    vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_fire 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready));
}

VL_INLINE_OPT void Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__39(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv::_sequent__TOP__sim__VexRiscv__39\n"); );
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_injectionPort_valid = 0U;
    if (vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_valid) {
        if ((1U == (0x3fU & ((IData)(vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_payload_address) 
                             >> 2U)))) {
            if (vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_payload_wr) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_injectionPort_valid = 1U;
            }
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT__debug_bus_cmd_ready = 1U;
    if (vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_valid) {
        if ((1U == (0x3fU & ((IData)(vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_payload_address) 
                             >> 2U)))) {
            if (vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_payload_wr) {
                vlSymsp->TOP__sim__VexRiscv.__PVT__debug_bus_cmd_ready 
                    = vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_injectionPort_ready;
            }
        }
    }
    vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid) 
           & (IData)(vlSymsp->TOP__sim.__PVT__dbus_dbus_ack));
    vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_ready 
        = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready) 
           & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2)));
    if ((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_rValid)))) {
        vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_s2mPipe_ready = 1U;
    }
}
