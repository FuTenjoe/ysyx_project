// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top___024root.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

extern const VlUnpacked<CData/*1:0*/, 64> Vysyx_22040175_top__ConstPool__TABLE_4a8f4832_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_22040175_top__ConstPool__TABLE_d1af7cb1_0;

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__15(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__15\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx7;
    CData/*5:0*/ __Vtableidx9;
    VlWide<10>/*319:0*/ __Vtemp701;
    VlWide<10>/*319:0*/ __Vtemp702;
    VlWide<10>/*319:0*/ __Vtemp703;
    VlWide<10>/*319:0*/ __Vtemp704;
    // Body
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_mem_addr 
        = vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__reg_mem_addr;
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
        = vlSelf->__Vdly__ysyx_22040175_top__DOT__u_cpu__DOT__if_pc;
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)
            ? (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__next_state)
            : 0U);
    vlSelf->pc = (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc);
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1 
        = ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))
            ? ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                    >> 4U)) << 1U))][9U] 
                >> 0x16U) & ((0x3fffffffffffffULL & 
                              (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                [(0x7eU 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                              >> 4U)) 
                                                     << 1U))][9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                            [
                                                            (0x7eU 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                         >> 4U)) 
                                                                << 1U))][8U])))) 
                             == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                 >> 0xaU))) : ((3U 
                                                == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
                                               & ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                   [
                                                   (0x7eU 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                >> 4U)) 
                                                       << 1U))][9U] 
                                                   >> 0x16U) 
                                                  & ((0x3fffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                                          [
                                                                          (0x7eU 
                                                                           & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                                >> 4U)) 
                                                                              << 1U))][9U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                                           [
                                                                           (0x7eU 
                                                                            & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                                >> 4U)) 
                                                                               << 1U))][8U])))) 
                                                     == 
                                                     (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                      >> 0xaU)))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit 
        = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
            | (3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))) 
           & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1) 
              | ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))
                  ? ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                      [(0x7fU & ((IData)(1U) + (0xfeU 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                            >> 4U)) 
                                                   << 1U))))][9U] 
                      >> 0x16U) & ((0x3fffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (0xfeU 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                         >> 4U)) 
                                                                << 1U))))][9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                                    [
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (0xfeU 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                                >> 4U)) 
                                                                            << 1U))))][8U])))) 
                                   == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                       >> 0xaU))) : 
                 ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
                  & ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                      [(0x7fU & ((IData)(1U) + (0xfeU 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                            >> 4U)) 
                                                   << 1U))))][9U] 
                      >> 0x16U) & ((0x3fffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (0xfeU 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                         >> 4U)) 
                                                                << 1U))))][9U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                                                                    [
                                                                    (0x7fU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (0xfeU 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                                >> 4U)) 
                                                                            << 1U))))][8U])))) 
                                   == (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                       >> 0xaU)))))));
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_axi_rw__rw_valid_i 
        = (((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)) 
              | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))) 
             | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))) 
            | (5U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state))) 
           | (1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state)));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__way 
        = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit))) 
           & ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
               [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                   >> 4U)) << 1U))][9U] 
               >> 0x16U) & (~ (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
                               [(0x7fU & ((IData)(1U) 
                                          + (0xfeU 
                                             & ((IData)(
                                                        (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                         >> 4U)) 
                                                << 1U))))][9U] 
                               >> 0x16U))));
    __Vtableidx9 = (((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__count)) 
                     << 5U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit) 
                                << 4U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_control_rest) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__if_valid) 
                                            << 2U) 
                                           | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_4a8f4832_0
        [__Vtableidx9];
    __Vtemp701[0U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][0U];
    __Vtemp701[1U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][1U];
    __Vtemp701[2U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][2U];
    __Vtemp701[3U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][3U];
    __Vtemp701[4U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][4U];
    __Vtemp701[5U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][5U];
    __Vtemp701[6U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][6U];
    __Vtemp701[7U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][7U];
    __Vtemp701[8U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][8U];
    __Vtemp701[9U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                            >> 4U)) << 1U))][9U];
    __Vtemp702[0U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][0U];
    __Vtemp702[1U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][1U];
    __Vtemp702[2U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][2U];
    __Vtemp702[3U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][3U];
    __Vtemp702[4U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][4U];
    __Vtemp702[5U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][5U];
    __Vtemp702[6U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][6U];
    __Vtemp702[7U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][7U];
    __Vtemp702[8U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][8U];
    __Vtemp702[9U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                    >> 4U)) 
                                           << 1U))))][9U];
    __Vtemp703[0U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][0U];
    __Vtemp703[1U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][1U];
    __Vtemp703[2U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][2U];
    __Vtemp703[3U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][3U];
    __Vtemp703[4U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][4U];
    __Vtemp703[5U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][5U];
    __Vtemp703[6U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][6U];
    __Vtemp703[7U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][7U];
    __Vtemp703[8U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][8U];
    __Vtemp703[9U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7eU & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                            >> 4U)) << 1U))][9U];
    __Vtemp704[0U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][0U];
    __Vtemp704[1U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][1U];
    __Vtemp704[2U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][2U];
    __Vtemp704[3U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][3U];
    __Vtemp704[4U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][4U];
    __Vtemp704[5U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][5U];
    __Vtemp704[6U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][6U];
    __Vtemp704[7U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][7U];
    __Vtemp704[8U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][8U];
    __Vtemp704[9U] = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__cache_data
        [(0x7fU & ((IData)(1U) + (0xfeU & ((IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                    >> 4U)) 
                                           << 1U))))][9U];
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__instruction 
        = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
            & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit))
            ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1)
                ? ((0x136U >= (0xc0U & ((IData)((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                 >> 2U)) 
                                        << 6U))) ? 
                   (((QData)((IData)(__Vtemp701[(((IData)(0x3fU) 
                                                  + 
                                                  (0xc0U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                               >> 2U)) 
                                                      << 6U))) 
                                                 >> 5U)])) 
                     << 0x20U) | (QData)((IData)(__Vtemp701[
                                                 (6U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                              >> 2U)) 
                                                     << 1U))])))
                    : 0ULL) : ((0x136U >= (0xc0U & 
                                           ((IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                     >> 2U)) 
                                            << 6U)))
                                ? (((QData)((IData)(
                                                    __Vtemp702[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0xc0U 
                                                       & ((IData)(
                                                                  (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                   >> 2U)) 
                                                          << 6U))) 
                                                     >> 5U)])) 
                                    << 0x20U) | (QData)((IData)(
                                                                __Vtemp702[
                                                                (6U 
                                                                 & ((IData)(
                                                                            (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_pc 
                                                                             >> 2U)) 
                                                                    << 1U))])))
                                : 0ULL)) : (((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
                                             & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit))
                                             ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit1)
                                                 ? 
                                                ((0x136U 
                                                  >= 
                                                  (0xc0U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                               >> 2U)) 
                                                      << 6U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp703[
                                                                   (((IData)(0x3fU) 
                                                                     + 
                                                                     (0xc0U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                                >> 2U)) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp703[
                                                                    (6U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                                >> 2U)) 
                                                                        << 1U))])))
                                                  : 0ULL)
                                                 : 
                                                ((0x136U 
                                                  >= 
                                                  (0xc0U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                               >> 2U)) 
                                                      << 6U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp704[
                                                                   (((IData)(0x3fU) 
                                                                     + 
                                                                     (0xc0U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                                >> 2U)) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp704[
                                                                    (6U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__delay_cpu_req_addr 
                                                                                >> 2U)) 
                                                                        << 1U))])))
                                                  : 0ULL))
                                             : 0ULL));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready 
        = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state)) 
            | (3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__state))) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_i_cache__DOT__hit));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__if_inst 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__delay_control_rest)))
            ? (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__instruction)
            : 0x13U);
    __Vtableidx7 = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_div) 
                     << 6U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_mul) 
                                << 5U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__div_finish) 
                                           << 4U) | 
                                          (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__sh_fnsh_flag) 
                                            << 3U) 
                                           | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
                                               << 2U) 
                                              | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__md_present_state))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__md_next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_d1af7cb1_0
        [__Vtableidx7];
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___multiclk__TOP__16(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___multiclk__TOP__16\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp705;
    VlWide<3>/*95:0*/ __Vtemp706;
    VlWide<4>/*127:0*/ __Vtemp707;
    VlWide<3>/*95:0*/ __Vtemp708;
    // Body
    __Vtemp705[0U] = 0xffU;
    __Vtemp705[1U] = 0U;
    __Vtemp705[2U] = 0U;
    __Vtemp705[3U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp706, vlSelf->ysyx_22040175_top__DOT__axi_r_addr);
    VL_SHIFTL_WWI(128,128,6, __Vtemp707, __Vtemp705, 
                  (0x38U & (__Vtemp706[0U] << 3U)));
    VL_EXTEND_WQ(65,64, __Vtemp708, vlSelf->ysyx_22040175_top__DOT__axi_r_addr);
    vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__axi_r_data_l 
        = ((vlSelf->ysyx_22040175_top__DOT__r_data 
            & (((QData)((IData)(__Vtemp707[1U])) << 0x20U) 
               | (QData)((IData)(__Vtemp707[0U])))) 
           >> (0x38U & (__Vtemp708[0U] << 3U)));
    vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__len_incr_en 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__len) 
            != (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__axi_len)) 
           & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_rw__DOT__w_hs) 
              | (IData)(vlSelf->ysyx_22040175_top__DOT__u_axi_slave2__DOT__r_hs)));
}

extern const VlUnpacked<CData/*2:0*/, 2048> Vysyx_22040175_top__ConstPool__TABLE_815565d4_0;

VL_INLINE_OPT void Vysyx_22040175_top___024root___multiclk__TOP__17(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___multiclk__TOP__17\n"); );
    // Variables
    SData/*10:0*/ __Vtableidx10;
    // Body
    __Vtableidx10 = (((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state)) 
                      << 0xaU) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__mem_req_valid) 
                                   << 9U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
                                              << 8U) 
                                             | (((IData)(vlSelf->ysyx_22040175_top__DOT__r_done2) 
                                                 << 3U) 
                                                | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__present_state)))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_cache_axi_judge__DOT__next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_815565d4_0
        [__Vtableidx10];
}

extern const VlUnpacked<CData/*2:0*/, 256> Vysyx_22040175_top__ConstPool__TABLE_f66fabbc_0;

VL_INLINE_OPT void Vysyx_22040175_top___024root___combo__TOP__18(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___combo__TOP__18\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx5;
    // Body
    __Vtableidx5 = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__cpu_ready) 
                     << 7U) | ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n) 
                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_wen)) 
                                  & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_reg_waddr))) 
                                 & (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__wb_s_flag)) 
                                << 6U) | ((0x20U & 
                                           ((~ ((1U 
                                                 == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state)) 
                                                | (2U 
                                                   == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_wb_stage__DOT__present_state)))) 
                                            << 5U)) 
                                          | (((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_mem_stage__DOT__present_state)) 
                                              << 4U) 
                                             | ((((((1U 
                                                     == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag)) 
                                                    | (2U 
                                                       == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag))) 
                                                   | (4U 
                                                      == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag))) 
                                                  | (6U 
                                                     == (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__id_rd_buf_flag))) 
                                                 << 3U) 
                                                | (IData)(vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__present_state))))));
    vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__u_if_stage__DOT__u_pc_predict__DOT__next_state 
        = Vysyx_22040175_top__ConstPool__TABLE_f66fabbc_0
        [__Vtableidx5];
}

void Vysyx_22040175_top___024root___sequent__TOP__3(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__4(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__5(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__6(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__7(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___combo__TOP__9(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__10(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___multiclk__TOP__11(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__12(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___combo__TOP__14(Vysyx_22040175_top___024root* vlSelf);

void Vysyx_22040175_top___024root___eval(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->ysyx_22040175_top__DOT__clock) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock)))) {
        Vysyx_22040175_top___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->ysyx_22040175_top__DOT__clock) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vysyx_22040175_top___024root___sequent__TOP__5(vlSelf);
        Vysyx_22040175_top___024root___sequent__TOP__6(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22040175_top___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Vysyx_22040175_top___024root___combo__TOP__9(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    if ((((IData)(vlSelf->ysyx_22040175_top__DOT__clock) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___sequent__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((IData)(vlSelf->ysyx_22040175_top__DOT__clock) 
             & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock)))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___multiclk__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if (((IData)(vlSelf->ysyx_22040175_top__DOT__clock) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock)))) {
        Vysyx_22040175_top___024root___sequent__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    Vysyx_22040175_top___024root___combo__TOP__14(vlSelf);
    if ((((IData)(vlSelf->ysyx_22040175_top__DOT__clock) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___sequent__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->ysyx_22040175_top__DOT__clock) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock))))) {
        Vysyx_22040175_top___024root___multiclk__TOP__16(vlSelf);
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((IData)(vlSelf->ysyx_22040175_top__DOT__clock) 
             & (~ (IData)(vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock)))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___multiclk__TOP__17(vlSelf);
    }
    Vysyx_22040175_top___024root___combo__TOP__18(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__ysyx_22040175_top__DOT__clock 
        = vlSelf->ysyx_22040175_top__DOT__clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n;
}

QData Vysyx_22040175_top___024root___change_request_1(Vysyx_22040175_top___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22040175_top___024root___change_request(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___change_request\n"); );
    // Body
    return (Vysyx_22040175_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22040175_top___024root___change_request_1(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n));
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n))) VL_DBG_MSGF("        CHANGE: vsrc/cpu.v:41: ysyx_22040175_top.u_cpu.rst_n\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__u_cpu__DOT__rst_n 
        = vlSelf->ysyx_22040175_top__DOT__u_cpu__DOT__rst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22040175_top___024root___eval_debug_assertions(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->time_set & 0xfeU))) {
        Verilated::overWidthError("time_set");}
}
#endif  // VL_DEBUG
