// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


void Vsim::traceFullSub5(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+736,((1U & (vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_payload_data 
                                         >> 0x12U))));
        tracep->fullBit(oldp+737,((1U & (vlSymsp->TOP__sim.__PVT__vexriscv_i_cmd_payload_data 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+738,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_DebugPlugin_l308));
        tracep->fullBit(oldp+739,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_DebugPlugin_l311));
        tracep->fullBit(oldp+740,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_DebugPlugin_l324));
        tracep->fullBit(oldp+741,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_haltIt) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__DebugPlugin_stepIt))));
        tracep->fullBit(oldp+742,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                         & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack))))));
        tracep->fullBit(oldp+743,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                         | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
        tracep->fullBit(oldp+744,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                         | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt)))));
        tracep->fullCData(oldp+745,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_port_state),3);
        tracep->fullBit(oldp+746,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264));
        tracep->fullBit(oldp+747,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768));
        tracep->fullBit(oldp+748,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836));
        tracep->fullBit(oldp+749,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772));
        tracep->fullBit(oldp+750,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_773));
        tracep->fullBit(oldp+751,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833));
        tracep->fullBit(oldp+752,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_834));
        tracep->fullBit(oldp+753,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835));
        tracep->fullBit(oldp+754,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008));
        tracep->fullBit(oldp+755,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032));
        tracep->fullCData(oldp+756,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                           >> 0xbU))),2);
        tracep->fullBit(oldp+757,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
                                   & ((0x3a0U == (0xffcU 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                     >> 0x14U))) 
                                      | (0x3b0U == 
                                         (0xff0U & 
                                          (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0x14U)))))));
        tracep->fullBit(oldp+758,(((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR)) 
                                    & (3U <= (0x1fU 
                                              & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0x14U)))) 
                                   & (((0xb00U == (0xf60U 
                                                   & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                      >> 0x14U))) 
                                       | (((0xc00U 
                                            == (0xf60U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0x14U))) 
                                           & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeInstruction))) 
                                          & (3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_privilege)))) 
                                      | (0x320U == 
                                         (0xfe0U & 
                                          (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0x14U)))))));
        tracep->fullBit(oldp+759,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1719));
        tracep->fullBit(oldp+760,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_privilege) 
                                   < (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                            >> 0x1cU)))));
        tracep->fullBit(oldp+761,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid)) 
                                         | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))))));
        tracep->fullBit(oldp+762,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239));
        tracep->fullQData(oldp+763,(((0U == (3U & (IData)(
                                                          (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                           >> 0x1aU))))
                                      ? 0x4e4f4e4520ULL
                                      : ((1U == (3U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                            >> 0x1aU))))
                                          ? 0x5852455420ULL
                                          : ((2U == 
                                              (3U & (IData)(
                                                            (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                             >> 0x1aU))))
                                              ? 0x4543414c4cULL
                                              : 0x3f3f3f3f3fULL)))),40);
        tracep->fullWData(oldp+765,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string),72);
        tracep->fullQData(oldp+768,(((0U == (3U & (IData)(
                                                          (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                           >> 0x12U))))
                                      ? 0x584f525f31ULL
                                      : ((1U == (3U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                            >> 0x12U))))
                                          ? 0x4f525f3120ULL
                                          : ((2U == 
                                              (3U & (IData)(
                                                            (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                             >> 0x12U))))
                                              ? 0x414e445f31ULL
                                              : 0x3f3f3f3f3fULL)))),40);
        tracep->fullIData(oldp+770,(((1U & (IData)(
                                                   (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                    >> 9U)))
                                      ? ((1U & (IData)(
                                                       (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                        >> 8U)))
                                          ? 0x504320U
                                          : 0x494d53U)
                                      : ((1U & (IData)(
                                                       (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                        >> 8U)))
                                          ? 0x494d49U
                                          : 0x525320U))),24);
        tracep->fullQData(oldp+771,(((0U == (3U & (IData)(
                                                          (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                           >> 6U))))
                                      ? 0x4144445f53554220ULL
                                      : ((1U == (3U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                            >> 6U))))
                                          ? 0x534c545f534c5455ULL
                                          : ((2U == 
                                              (3U & (IData)(
                                                            (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                             >> 6U))))
                                              ? 0x4249545749534520ULL
                                              : 0x3f3f3f3f3f3f3f3fULL)))),64);
        tracep->fullWData(oldp+773,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string),96);
        tracep->fullQData(oldp+776,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                      ? 0x4e4f4e4520ULL
                                      : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                          ? 0x5852455420ULL
                                          : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                              ? 0x4543414c4cULL
                                              : 0x3f3f3f3f3fULL)))),40);
        tracep->fullQData(oldp+778,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                      ? 0x4e4f4e4520ULL
                                      : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                          ? 0x5852455420ULL
                                          : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                              ? 0x4543414c4cULL
                                              : 0x3f3f3f3f3fULL)))),40);
        tracep->fullQData(oldp+780,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                      ? 0x4e4f4e4520ULL
                                      : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                          ? 0x5852455420ULL
                                          : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                              ? 0x4543414c4cULL
                                              : 0x3f3f3f3f3fULL)))),40);
        tracep->fullIData(oldp+782,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                      ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                          ? 0x4a414c52U
                                          : 0x4a414c20U)
                                      : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                          ? 0x42202020U
                                          : 0x494e4320U))),32);
        tracep->fullWData(oldp+783,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_SHIFT_CTRL_string),72);
        tracep->fullWData(oldp+786,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SHIFT_CTRL_string),72);
        tracep->fullIData(oldp+789,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                      ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                          ? 0x504320U
                                          : 0x494d53U)
                                      : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                          ? 0x494d49U
                                          : 0x525320U))),24);
        tracep->fullWData(oldp+790,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1_CTRL_string),96);
        tracep->fullQData(oldp+793,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                      ? 0x4144445f53554220ULL
                                      : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                          ? 0x534c545f534c5455ULL
                                          : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                              ? 0x4249545749534520ULL
                                              : 0x3f3f3f3f3f3f3f3fULL)))),64);
        tracep->fullQData(oldp+795,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                      ? 0x584f525f31ULL
                                      : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                          ? 0x4f525f3120ULL
                                          : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                              ? 0x414e445f31ULL
                                              : 0x3f3f3f3f3fULL)))),40);
        tracep->fullIData(oldp+797,(((1U & (IData)(
                                                   (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                    >> 0x18U)))
                                      ? ((1U & (IData)(
                                                       (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                        >> 0x17U)))
                                          ? 0x4a414c52U
                                          : 0x4a414c20U)
                                      : ((1U & (IData)(
                                                       (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                        >> 0x17U)))
                                          ? 0x42202020U
                                          : 0x494e4320U))),32);
        tracep->fullWData(oldp+798,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string),96);
        tracep->fullWData(oldp+801,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
        tracep->fullWData(oldp+804,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
        tracep->fullBit(oldp+807,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire));
        tracep->fullBit(oldp+808,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
        tracep->fullIData(oldp+809,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address),32);
        tracep->fullBit(oldp+810,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError));
        tracep->fullBit(oldp+811,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
        tracep->fullCData(oldp+812,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter),8);
        tracep->fullBit(oldp+813,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                            >> 7U)))));
        tracep->fullBit(oldp+814,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))));
        tracep->fullBit(oldp+815,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351));
        tracep->fullBit(oldp+816,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent));
        tracep->fullBit(oldp+817,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))));
        tracep->fullBit(oldp+818,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement));
        tracep->fullCData(oldp+819,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex),3);
        tracep->fullBit(oldp+820,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
                                         | (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                               >> 7U))))));
        tracep->fullCData(oldp+821,((0x7fU & ((0x80U 
                                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                                               ? (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                  >> 5U)
                                               : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)))),7);
        tracep->fullBit(oldp+822,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                         >> 7U))));
        tracep->fullIData(oldp+823,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                 >> 0xcU))),20);
        tracep->fullSData(oldp+824,(((0x3f8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                >> 2U)) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))),10);
        tracep->fullBit(oldp+825,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))));
        tracep->fullBit(oldp+826,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1)));
        tracep->fullBit(oldp+827,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                         >> 1U))));
        tracep->fullIData(oldp+828,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                                 >> 2U))),20);
        tracep->fullBit(oldp+829,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess));
        tracep->fullBit(oldp+830,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging));
        tracep->fullBit(oldp+831,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead));
    }
}

void Vsim::traceFullSub6(void* userp, VerilatedVcd* tracep) {
    Vsim__Syms* __restrict vlSymsp = static_cast<Vsim__Syms*>(userp);
    Vsim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+832,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite));
        tracep->fullBit(oldp+833,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute));
        tracep->fullBit(oldp+834,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception));
        tracep->fullBit(oldp+835,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation));
        tracep->fullBit(oldp+836,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid));
        tracep->fullBit(oldp+837,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error));
        tracep->fullBit(oldp+838,((0U != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_port_state))));
        tracep->fullBit(oldp+839,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid));
        tracep->fullCData(oldp+840,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload),7);
        tracep->fullBit(oldp+841,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid));
        tracep->fullBit(oldp+842,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way));
        tracep->fullCData(oldp+843,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address),7);
        tracep->fullBit(oldp+844,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid));
        tracep->fullBit(oldp+845,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error));
        tracep->fullIData(oldp+846,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address),20);
        tracep->fullBit(oldp+847,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid));
        tracep->fullBit(oldp+848,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way));
        tracep->fullCData(oldp+849,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address),7);
        tracep->fullBit(oldp+850,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid));
        tracep->fullBit(oldp+851,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error));
        tracep->fullIData(oldp+852,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address),20);
        tracep->fullBit(oldp+853,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid));
        tracep->fullSData(oldp+854,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload),10);
        tracep->fullBit(oldp+855,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid));
        tracep->fullBit(oldp+856,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way));
        tracep->fullSData(oldp+857,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address),10);
        tracep->fullIData(oldp+858,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data),32);
        tracep->fullCData(oldp+859,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask),4);
        tracep->fullBit(oldp+860,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
        tracep->fullBit(oldp+861,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                         >> 1U))));
        tracep->fullIData(oldp+862,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                                 >> 2U))),20);
        tracep->fullIData(oldp+863,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3) 
                                      << 0x18U) | (
                                                   ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1) 
                                                       << 8U) 
                                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read))))),32);
        tracep->fullBit(oldp+864,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way))));
        tracep->fullBit(oldp+865,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way))));
        tracep->fullBit(oldp+866,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l667));
        tracep->fullBit(oldp+867,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent));
        tracep->fullBit(oldp+868,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN))));
        tracep->fullCData(oldp+869,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask),4);
        tracep->fullBit(oldp+870,(((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                     & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                                    & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                       == (0x3ffU & 
                                           (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                                            >> 2U)))) 
                                   & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask) 
                                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask))))));
        tracep->fullCData(oldp+871,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size),2);
        tracep->fullBit(oldp+872,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_totalyConsistent));
        tracep->fullCData(oldp+873,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask),4);
        tracep->fullBit(oldp+874,((((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                                 >> 0xcU)) 
                                    == (0xfffffU & 
                                        (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                         >> 2U))) & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
        tracep->fullBit(oldp+875,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_wayInvalidate));
        tracep->fullBit(oldp+876,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen));
        tracep->fullBit(oldp+877,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen) 
                                   | ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                        & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                                       & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                          == (0x3ffU 
                                              & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                                 >> 2U)))) 
                                      & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask) 
                                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask)))))));
        tracep->fullCData(oldp+878,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_size),2);
        tracep->fullBit(oldp+879,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_totalyConsistent));
        tracep->fullBit(oldp+880,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRspFreeze));
        tracep->fullBit(oldp+881,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l829));
        tracep->fullIData(oldp+882,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress),32);
        tracep->fullBit(oldp+883,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
        tracep->fullBit(oldp+884,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead));
        tracep->fullBit(oldp+885,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite));
        tracep->fullBit(oldp+886,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute));
        tracep->fullBit(oldp+887,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_exception));
        tracep->fullBit(oldp+888,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling));
        tracep->fullBit(oldp+889,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation));
        tracep->fullBit(oldp+890,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid));
        tracep->fullBit(oldp+891,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error));
        tracep->fullIData(oldp+892,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address),20);
        tracep->fullIData(oldp+893,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0),32);
        tracep->fullBit(oldp+894,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_wayInvalidate));
        tracep->fullBit(oldp+895,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions));
        tracep->fullBit(oldp+896,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_unaligned));
        tracep->fullBit(oldp+897,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
        tracep->fullBit(oldp+898,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
        tracep->fullBit(oldp+899,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
        tracep->fullBit(oldp+900,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid));
        tracep->fullBit(oldp+901,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone));
        tracep->fullCData(oldp+902,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter),8);
        tracep->fullBit(oldp+903,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                                            >> 7U)))));
        tracep->fullBit(oldp+904,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                                   & (0U != (0x1fU 
                                             & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0xfU))))));
        tracep->fullBit(oldp+905,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start));
        tracep->fullBit(oldp+906,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache));
        tracep->fullBit(oldp+907,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits))));
        tracep->fullBit(oldp+908,((1U & (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                                          & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                         | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                                            & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)))))));
        tracep->fullBit(oldp+909,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault));
        tracep->fullBit(oldp+910,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)
                                    ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)
                                    : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid))));
        tracep->fullBit(oldp+911,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1009));
        tracep->fullBit(oldp+912,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                         | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__toplevel_dataCache_1_io_mem_cmd_rValidN)))));
        tracep->fullBit(oldp+913,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                   & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits)))));
        tracep->fullBit(oldp+914,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent)))));
        tracep->fullBit(oldp+915,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1072));
        tracep->fullBit(oldp+916,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement));
        tracep->fullCData(oldp+917,((7U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value) 
                                           + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement)))),3);
        tracep->fullCData(oldp+918,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value),3);
        tracep->fullBit(oldp+919,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value))));
        tracep->fullBit(oldp+920,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow));
        tracep->fullBit(oldp+921,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator));
        tracep->fullBit(oldp+922,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error));
        tracep->fullBit(oldp+923,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_killReg));
        tracep->fullBit(oldp+924,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1097));
        tracep->fullBit(oldp+925,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid)))));
        tracep->fullBit(oldp+926,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext));
        tracep->fullBit(oldp+927,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext)))));
        tracep->fullBit(oldp+928,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid))));
        tracep->fullCData(oldp+929,(vlTOPp->serial_sink_data),8);
        tracep->fullBit(oldp+930,(vlTOPp->serial_sink_ready));
        tracep->fullBit(oldp+931,(vlTOPp->serial_sink_valid));
        tracep->fullCData(oldp+932,(vlTOPp->serial_source_data),8);
        tracep->fullBit(oldp+933,(vlTOPp->serial_source_ready));
        tracep->fullBit(oldp+934,(vlTOPp->serial_source_valid));
        tracep->fullBit(oldp+935,(vlTOPp->sim_trace));
        tracep->fullBit(oldp+936,(vlTOPp->sys_clk));
        tracep->fullSData(oldp+937,(vlTOPp->serial_sink_data),10);
        tracep->fullBit(oldp+938,(((IData)(vlTOPp->serial_sink_valid) 
                                   & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__uart_rx_fifo_level0)))));
        tracep->fullBit(oldp+939,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_do_read));
        tracep->fullBit(oldp+940,(vlSymsp->TOP__sim.__PVT__uart_tx_fifo_syncfifo_re));
        tracep->fullIData(oldp+941,(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg),32);
        tracep->fullIData(oldp+942,(vlSymsp->TOP__sim__VexRiscv.lastStageInstruction),32);
        tracep->fullIData(oldp+943,(vlSymsp->TOP__sim__VexRiscv.lastStagePc),32);
        tracep->fullBit(oldp+944,(vlSymsp->TOP__sim__VexRiscv.lastStageIsValid));
        tracep->fullBit(oldp+945,(vlSymsp->TOP__sim__VexRiscv.lastStageIsFiring));
        tracep->fullBit(oldp+946,((1U & (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                         >> 0x1fU))));
        tracep->fullBit(oldp+947,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_inWfi));
        tracep->fullBit(oldp+948,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid));
        tracep->fullCData(oldp+949,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address),5);
        tracep->fullIData(oldp+950,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data),32);
        tracep->fullCData(oldp+951,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code),4);
        tracep->fullBit(oldp+952,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump));
        tracep->fullBit(oldp+953,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException));
        tracep->fullBit(oldp+954,(vlSymsp->TOP__sim__VexRiscv.DebugPlugin_debugUsed));
        tracep->fullIData(oldp+955,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[0]),32);
        tracep->fullIData(oldp+956,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[1]),32);
        tracep->fullIData(oldp+957,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[2]),32);
        tracep->fullIData(oldp+958,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[3]),32);
        tracep->fullIData(oldp+959,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[4]),32);
        tracep->fullIData(oldp+960,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[5]),32);
        tracep->fullIData(oldp+961,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[6]),32);
        tracep->fullIData(oldp+962,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[7]),32);
        tracep->fullIData(oldp+963,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[8]),32);
        tracep->fullIData(oldp+964,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[9]),32);
        tracep->fullIData(oldp+965,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[10]),32);
        tracep->fullIData(oldp+966,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[11]),32);
        tracep->fullIData(oldp+967,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[12]),32);
        tracep->fullIData(oldp+968,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[13]),32);
        tracep->fullIData(oldp+969,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[14]),32);
        tracep->fullIData(oldp+970,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[15]),32);
        tracep->fullIData(oldp+971,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[16]),32);
        tracep->fullIData(oldp+972,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[17]),32);
        tracep->fullIData(oldp+973,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[18]),32);
        tracep->fullIData(oldp+974,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[19]),32);
        tracep->fullIData(oldp+975,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[20]),32);
        tracep->fullIData(oldp+976,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[21]),32);
        tracep->fullIData(oldp+977,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[22]),32);
        tracep->fullIData(oldp+978,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[23]),32);
        tracep->fullIData(oldp+979,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[24]),32);
        tracep->fullIData(oldp+980,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[25]),32);
        tracep->fullIData(oldp+981,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[26]),32);
        tracep->fullIData(oldp+982,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[27]),32);
        tracep->fullIData(oldp+983,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[28]),32);
        tracep->fullIData(oldp+984,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[29]),32);
        tracep->fullIData(oldp+985,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[30]),32);
        tracep->fullIData(oldp+986,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[31]),32);
        tracep->fullBit(oldp+987,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                   & ((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                                   >> 2U)) 
                                      == (0xfffffU 
                                          & (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                             >> 0xcU))))));
        tracep->fullBit(oldp+988,(1U));
        tracep->fullCData(oldp+989,(0U),2);
        tracep->fullBit(oldp+990,(0U));
        tracep->fullIData(oldp+991,(0U),32);
        tracep->fullCData(oldp+992,(0xfU),4);
        tracep->fullCData(oldp+993,(1U),2);
        tracep->fullCData(oldp+994,(2U),2);
        tracep->fullCData(oldp+995,(3U),2);
        tracep->fullBit(oldp+996,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fetch_isRemoved));
        tracep->fullBit(oldp+997,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SW));
        tracep->fullBit(oldp+998,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SR));
        tracep->fullBit(oldp+999,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SO));
        tracep->fullBit(oldp+1000,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SI));
        tracep->fullBit(oldp+1001,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PW));
        tracep->fullBit(oldp+1002,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PR));
        tracep->fullBit(oldp+1003,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PO));
        tracep->fullBit(oldp+1004,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PI));
        tracep->fullCData(oldp+1005,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_FM),4);
        tracep->fullCData(oldp+1006,(5U),3);
        tracep->fullBit(oldp+1007,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_exclusiveOk));
        tracep->fullBit(oldp+1008,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writesPending));
        tracep->fullBit(oldp+1009,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_bypassTranslation));
        tracep->fullBit(oldp+1010,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBus_rsp_payload_last));
        tracep->fullBit(oldp+1011,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_bypassTranslation));
        tracep->fullCData(oldp+1012,(2U),4);
        tracep->fullCData(oldp+1013,(0U),4);
        tracep->fullBit(oldp+1014,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_output_payload_rsp_error));
        tracep->fullBit(oldp+1015,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_output_payload_isRvc));
        tracep->fullIData(oldp+1016,(0x42U),26);
        tracep->fullCData(oldp+1017,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_mode),2);
    }
}
