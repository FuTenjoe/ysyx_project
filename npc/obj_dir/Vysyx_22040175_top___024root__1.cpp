// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top___024root.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_id_stage__DOT__u_ctrl__DOT__unknown_inst_TOP();

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__3(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__3\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp375;
    VlWide<5>/*159:0*/ __Vtemp378;
    VlWide<5>/*159:0*/ __Vtemp381;
    VlWide<5>/*159:0*/ __Vtemp384;
    VlWide<5>/*159:0*/ __Vtemp385;
    VlWide<5>/*159:0*/ __Vtemp387;
    VlWide<5>/*159:0*/ __Vtemp388;
    VlWide<5>/*159:0*/ __Vtemp394;
    VlWide<3>/*95:0*/ __Vtemp397;
    QData/*63:0*/ __Vtemp390;
    // Body
    vlSelf->ysyx_22040175_top__DOT__id_pc = vlSelf->__Vdly__ysyx_22040175_top__DOT__id_pc;
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0x1fU])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                   [0x1fU] 
                                                                   >> 0x1eU)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0x1eU])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                   [0x1eU] 
                                                                   >> 0x1dU)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0x1dU])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                   [0x1dU] 
                                                                   >> 0x1cU)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0x1cU])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                   [0x1cU] 
                                                                   >> 0x1bU)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0x1bU])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                   [0x1bU] 
                                                                   >> 0x1aU)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0x1aU])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                   [0x1aU] 
                                                                   >> 0x19U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0x19U])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                   [0x19U] 
                                                                   >> 0x18U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0x18U])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                   [0x18U] 
                                                                   >> 0x17U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0x17U])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                   [0x17U] 
                                                                   >> 0x16U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0x16U])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                   [0x16U] 
                                                                   >> 0x15U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0x15U])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                   [0x15U] 
                                                                   >> 0x14U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0x14U])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                   [0x14U] 
                                                                   >> 0x13U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0x13U])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                   [0x13U] 
                                                                   >> 0x12U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0x12U])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                   [0x12U] 
                                                                   >> 0x11U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0x11U])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                   [0x11U] 
                                                                   >> 0x10U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0x10U])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                   [0x10U] 
                                                                   >> 0xfU)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0xfU])) << 1U) | (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                  [0xfU] 
                                                                  >> 0xeU)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0xeU])) << 1U) | (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                  [0xeU] 
                                                                  >> 0xdU)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0xdU])) << 1U) | (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                  [0xdU] 
                                                                  >> 0xcU)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0xcU])) << 1U) | (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                  [0xcU] 
                                                                  >> 0xbU)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0xbU])) << 1U) | (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                  [0xbU] 
                                                                  >> 0xaU)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [0xaU])) << 1U) | (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                  [0xaU] 
                                                                  >> 9U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [9U])) << 1U) | (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                [9U] 
                                                                >> 8U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [8U])) << 1U) | (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                [8U] 
                                                                >> 7U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [7U])) << 1U) | (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                [7U] 
                                                                >> 6U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [6U])) << 1U) | (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                [6U] 
                                                                >> 5U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [5U])) << 1U) | (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                [5U] 
                                                                >> 4U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [4U])) << 1U) | (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                [4U] 
                                                                >> 3U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [3U])) << 1U) | (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                [3U] 
                                                                >> 2U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [2U])) << 1U) | (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                                [2U] 
                                                                >> 1U)))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT____Vcellinp__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__dividend 
        = (((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                            [1U])) << 1U) | (QData)((IData)(
                                                            (1U 
                                                             & vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__dividend_t
                                                             [1U]))));
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 3U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                if ((0U == (7U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0xfU)));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                         >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xeU)))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xdU)))) {
                                if ((1U & (~ (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                }
                            } else if ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))) {
                                if ((1U == (0x7fU & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_imm 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xdU)))
                                    ? ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1fU))))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & ((IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x19U)) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)))))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1fU))))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & ((IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x19U)) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U))))))
                                    : ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1fU))))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & ((IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x19U)) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)))))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1fU))))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & ((IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x19U)) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)))))));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_s_imm 
                            = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))
                                ? 0U : ((1U & (IData)(
                                                      ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                       >> 0xcU)))
                                         ? 0U : 0U));
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        if (((0U == (0x7fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x19U)))) 
                             | (1U == (0x7fU & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U)))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_s_imm 
                            = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))
                                ? 0U : (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                >> 0x1fU))))) 
                                         << 0xcU) | 
                                        (0xfffU & (IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x14U)))));
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3fU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x3fU] 
                                                     >> 0x3eU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3fU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x3fU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3fU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3eU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x3eU] 
                                                     >> 0x3dU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3eU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x3eU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3eU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3dU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x3dU] 
                                                     >> 0x3cU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3dU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x3dU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3dU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3cU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x3cU] 
                                                     >> 0x3bU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3cU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x3cU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3cU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3bU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x3bU] 
                                                     >> 0x3aU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3bU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x3bU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3bU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3aU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x3aU] 
                                                     >> 0x39U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3aU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x3aU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x3aU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x39U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x39U] 
                                                     >> 0x38U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x39U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x39U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x39U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x38U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x38U] 
                                                     >> 0x37U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x38U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x38U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x38U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x37U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x37U] 
                                                     >> 0x36U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x37U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x37U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x37U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x36U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x36U] 
                                                     >> 0x35U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x36U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x36U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x36U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x35U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x35U] 
                                                     >> 0x34U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x35U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x35U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x35U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x34U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x34U] 
                                                     >> 0x33U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x34U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x34U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x34U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x33U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x33U] 
                                                     >> 0x32U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x33U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x33U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x33U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x32U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x32U] 
                                                     >> 0x31U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x32U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x32U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x32U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x31U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x31U] 
                                                     >> 0x30U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x31U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x31U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x31U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x30U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x30U] 
                                                     >> 0x2fU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x30U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x30U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x30U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2fU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x2fU] 
                                                     >> 0x2eU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2fU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x2fU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2fU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2eU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x2eU] 
                                                     >> 0x2dU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2eU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x2eU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2eU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2dU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x2dU] 
                                                     >> 0x2cU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2dU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x2dU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2dU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2cU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x2cU] 
                                                     >> 0x2bU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2cU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x2cU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2cU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2bU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x2bU] 
                                                     >> 0x2aU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2bU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x2bU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2bU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2aU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x2aU] 
                                                     >> 0x29U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2aU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x2aU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x2aU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x29U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x29U] 
                                                     >> 0x28U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x29U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x29U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x29U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x28U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x28U] 
                                                     >> 0x27U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x28U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x28U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x28U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x27U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x27U] 
                                                     >> 0x26U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x27U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x27U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x27U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x26U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x26U] 
                                                     >> 0x25U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x26U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x26U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x26U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x25U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x25U] 
                                                     >> 0x24U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x25U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x25U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x25U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x24U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x24U] 
                                                     >> 0x23U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x24U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x24U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x24U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x23U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x23U] 
                                                     >> 0x22U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x23U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x23U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x23U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x22U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x22U] 
                                                     >> 0x21U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x22U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x22U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x22U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x21U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x21U] 
                                                     >> 0x20U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x21U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x21U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x21U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__32__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x20U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x20U] 
                                                     >> 0x1fU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__32__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x20U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x20U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__32__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x20U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__33__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1fU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x1fU] 
                                                     >> 0x1eU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__33__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1fU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x1fU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__33__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1fU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__34__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1eU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x1eU] 
                                                     >> 0x1dU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__34__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1eU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x1eU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__34__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1eU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__35__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1dU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x1dU] 
                                                     >> 0x1cU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__35__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1dU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x1dU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__35__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1dU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__36__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1cU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x1cU] 
                                                     >> 0x1bU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__36__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1cU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x1cU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__36__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1cU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__37__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1bU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x1bU] 
                                                     >> 0x1aU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__37__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1bU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x1bU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__37__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1bU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__38__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1aU]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x1aU] 
                                                     >> 0x19U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__38__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1aU]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x1aU] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__38__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x1aU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__39__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x19U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x19U] 
                                                     >> 0x18U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__39__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x19U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x19U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__39__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x19U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__40__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x18U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x18U] 
                                                     >> 0x17U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__40__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x18U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x18U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__40__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x18U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__41__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x17U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x17U] 
                                                     >> 0x16U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__41__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x17U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x17U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__41__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x17U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__42__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x16U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x16U] 
                                                     >> 0x15U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__42__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x16U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x16U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__42__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x16U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__43__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x15U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x15U] 
                                                     >> 0x14U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__43__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x15U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x15U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__43__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x15U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__44__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x14U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x14U] 
                                                     >> 0x13U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__44__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x14U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x14U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__44__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x14U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__45__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x13U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x13U] 
                                                     >> 0x12U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__45__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x13U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x13U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__45__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x13U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__46__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x12U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x12U] 
                                                     >> 0x11U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__46__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x12U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x12U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__46__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x12U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__47__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x11U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x11U] 
                                                     >> 0x10U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__47__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x11U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x11U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__47__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x11U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__48__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x10U]) << 1U) | (1U & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                     [0x10U] 
                                                     >> 0xfU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__48__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x10U]) >> 0x1fU) | ((IData)((
                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                   [0x10U] 
                                                   >> 0x20U)) 
                                          << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__48__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0x10U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__49__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xfU]) << 1U) | (1U & (IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                    [0xfU] 
                                                    >> 0xeU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__49__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xfU]) >> 0x1fU) | ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                  [0xfU] 
                                                  >> 0x20U)) 
                                         << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__49__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xfU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__50__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xeU]) << 1U) | (1U & (IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                    [0xeU] 
                                                    >> 0xdU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__50__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xeU]) >> 0x1fU) | ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                  [0xeU] 
                                                  >> 0x20U)) 
                                         << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__50__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xeU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__51__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xdU]) << 1U) | (1U & (IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                    [0xdU] 
                                                    >> 0xcU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__51__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xdU]) >> 0x1fU) | ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                  [0xdU] 
                                                  >> 0x20U)) 
                                         << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__51__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xdU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__52__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xcU]) << 1U) | (1U & (IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                    [0xcU] 
                                                    >> 0xbU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__52__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xcU]) >> 0x1fU) | ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                  [0xcU] 
                                                  >> 0x20U)) 
                                         << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__52__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xcU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__53__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xbU]) << 1U) | (1U & (IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                    [0xbU] 
                                                    >> 0xaU))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__53__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xbU]) >> 0x1fU) | ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                  [0xbU] 
                                                  >> 0x20U)) 
                                         << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__53__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xbU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__54__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xaU]) << 1U) | (1U & (IData)(
                                                   (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                    [0xaU] 
                                                    >> 9U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__54__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xaU]) >> 0x1fU) | ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                  [0xaU] 
                                                  >> 0x20U)) 
                                         << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__54__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [0xaU] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__55__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [9U]) << 1U) | (1U & (IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                  [9U] 
                                                  >> 8U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__55__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [9U]) >> 0x1fU) | ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                [9U] 
                                                >> 0x20U)) 
                                       << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__55__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [9U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__56__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [8U]) << 1U) | (1U & (IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                  [8U] 
                                                  >> 7U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__56__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [8U]) >> 0x1fU) | ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                [8U] 
                                                >> 0x20U)) 
                                       << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__56__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [8U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__57__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [7U]) << 1U) | (1U & (IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                  [7U] 
                                                  >> 6U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__57__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [7U]) >> 0x1fU) | ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                [7U] 
                                                >> 0x20U)) 
                                       << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__57__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [7U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__58__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [6U]) << 1U) | (1U & (IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                  [6U] 
                                                  >> 5U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__58__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [6U]) >> 0x1fU) | ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                [6U] 
                                                >> 0x20U)) 
                                       << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__58__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [6U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__59__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [5U]) << 1U) | (1U & (IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                  [5U] 
                                                  >> 4U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__59__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [5U]) >> 0x1fU) | ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                [5U] 
                                                >> 0x20U)) 
                                       << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__59__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [5U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__60__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [4U]) << 1U) | (1U & (IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                  [4U] 
                                                  >> 3U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__60__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [4U]) >> 0x1fU) | ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                [4U] 
                                                >> 0x20U)) 
                                       << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__60__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [4U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__61__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [3U]) << 1U) | (1U & (IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                  [3U] 
                                                  >> 2U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__61__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [3U]) >> 0x1fU) | ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                [3U] 
                                                >> 0x20U)) 
                                       << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__61__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [3U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__62__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [2U]) << 1U) | (1U & (IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                  [2U] 
                                                  >> 1U))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__62__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [2U]) >> 0x1fU) | ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                [2U] 
                                                >> 0x20U)) 
                                       << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__62__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [2U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__63__KET____DOT__u_divider_step__dividend[0U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [1U]) << 1U) | (1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__dividend_t
                                                 [1U])));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__63__KET____DOT__u_divider_step__dividend[1U] 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [1U]) >> 0x1fU) | ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                                                [1U] 
                                                >> 0x20U)) 
                                       << 1U));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT____Vcellinp__sqrt_stepx__BRA__63__KET____DOT__u_divider_step__dividend[2U] 
        = ((IData)((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                    [1U] >> 0x20U)) >> 0x1fU);
    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xeU)))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        } else if ((1U & (~ (IData)(
                                                    ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                     >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xdU)))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU)))) {
                            if ((1U == (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xcU)))) {
                            if ((0U == (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                            }
                        } else if ((0U == (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        }
                    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                 >> 0xcU))))) {
                        if ((0U == (0x7fU & (IData)(
                                                    ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                     >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        } else if ((0x20U == (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        } else if ((1U == (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 1U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 0xeU)))) {
                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 7U)));
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 7U)));
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_waddr = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                                = (0x1fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 7U)));
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                            = (0x1fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 7U)));
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                            = (0x1fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 7U)));
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)));
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)));
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)));
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)));
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)));
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                >> 7U)));
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                            >> 7U)));
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xcU)))) {
                                if ((1U == (0x7fU & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)));
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0xfU)));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 7U)));
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 7U)));
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                                        = 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                    >> 7U)));
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                                    = 
                                                    (0x1fU 
                                                     & (IData)(
                                                               ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                >> 7U)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                            >> 7U)));
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 0xeU)))) {
                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                            >> 7U)));
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                >> 7U)));
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                >> 7U)));
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                            >> 7U)));
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 7U)));
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                >> 7U)));
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                >> 7U)));
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xdU)))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU)))) {
                            if ((1U == (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xcU)))) {
                            if ((0U == (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                            }
                        } else if ((0U == (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                        }
                    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                 >> 0xcU))))) {
                        if ((0U == (0x7fU & (IData)(
                                                    ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                     >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                        } else if ((0x20U == (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                        } else if ((1U == (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 0xeU)))) {
                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_expand_signed 
                            = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))
                                ? 0U : 1U);
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 3U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU)))
                                    ? 6U : 4U);
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag 
                            = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))
                                ? 2U : 1U);
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 6U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__id_mul = 0U;
    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                          >> 6U))))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 4U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                if ((1U & (~ (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xeU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xdU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0xcU))))) {
                                            if ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x19U))))) {
                                                if (
                                                    (1U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(
                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                 >> 0x19U))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_mul = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                             >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xeU))))) {
                                if ((1U & (~ (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xdU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((0U != 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            if ((0x20U 
                                                 != 
                                                 (0x7fU 
                                                  & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x19U))))) {
                                                if (
                                                    (1U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(
                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                 >> 0x19U))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_mul = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__id_div = 0U;
    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                          >> 6U))))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 4U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xeU)))) {
                                    if ((1U & (IData)(
                                                      ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                       >> 0xdU)))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0xcU))))) {
                                            if ((1U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x19U))))) {
                                                vlSelf->ysyx_22040175_top__DOT__id_div = 1U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__id_div = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                             >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_div 
                                        = ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))
                                            ? (0U != 
                                               (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x19U))))
                                            : (0U != 
                                               (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x19U)))));
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_div = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xeU)))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xdU)))
                                    ? ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))
                                        ? 0x12U : 0xbU)
                                    : ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))
                                        ? 0x11U : 0xaU));
                        } else if ((1U & (~ (IData)(
                                                    ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                     >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU)))
                                    ? 4U : 0xcU);
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__id_alu_op = 0x15U;
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_alu_op = 7U;
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_alu_op = 6U;
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 0x14U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 5U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 0x13U;
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 4U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xdU)))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU)))
                                    ? ((0U == (0x7fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x19U))))
                                        ? 0U : 0xfU)
                                    : ((0U == (0x7fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x19U))))
                                        ? 1U : 0xfU));
                        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU)))) {
                            if ((1U == (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_alu_op = 0xeU;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_op 
                            = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))
                                ? 9U : 8U);
                    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                 >> 0xcU))))) {
                        if ((0U == (0x7fU & (IData)(
                                                    ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                     >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                        } else if ((0x20U == (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op = 4U;
                        } else if ((1U == (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op = 0x13U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op = 0x16U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op = 5U;
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 7U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__id_alu_op = 6U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 0xeU)))) {
                    vlSelf->ysyx_22040175_top__DOT__id_alu_op 
                        = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU)))
                            ? ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))
                                ? 0U : 1U) : ((1U & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0xcU)))
                                               ? 6U
                                               : 2U));
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_op = 9U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_op = 0x10U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                    }
                }
            }
        }
    }
    if ((0ULL != vlSelf->ysyx_22040175_top__DOT__id_unknown_code)) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_id_stage__DOT__u_ctrl__DOT__unknown_inst_TOP();
    }
    vlSelf->ysyx_22040175_top__DOT__id_control_rest 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch) 
           | (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump));
    vlSelf->ysyx_22040175_top__DOT__id_imm = ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op))
                                               ? ((2U 
                                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op))
                                                   ? (QData)((IData)(
                                                                     (((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x1fU))))) 
                                                                       << 7U) 
                                                                      | (0x7fU 
                                                                         & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op))
                                                    ? (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x14U)))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((IData)(
                                                                               ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0xcU)) 
                                                                       << 0xcU))))))
                                               : ((2U 
                                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x1fU)))))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      ((0xff000U 
                                                                        & ((IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0xcU)) 
                                                                           << 0xcU)) 
                                                                       | ((0x800U 
                                                                           & ((IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x14U)) 
                                                                              << 0xbU)) 
                                                                          | (0x7feU 
                                                                             & ((IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x15U)) 
                                                                                << 1U)))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0x800U 
                                                                        & ((IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 7U)) 
                                                                           << 0xbU)) 
                                                                       | ((0x7e0U 
                                                                           & ((IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x19U)) 
                                                                              << 5U)) 
                                                                          | (0x1eU 
                                                                             & ((IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 8U)) 
                                                                                << 1U))))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & ((IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x19U)) 
                                                                           << 5U)) 
                                                                       | (0x1fU 
                                                                          & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 7U)))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x14U)))))))));
    if ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_alu_op))) {
        if ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag))) {
            vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res 
                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw));
        } else if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag))) {
            vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res 
                = vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw;
        } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag))) {
            vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res 
                = (QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw))));
        } else if ((6U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag))) {
            vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res 
                = (QData)((IData)((0xffffU & (IData)(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw))));
        }
    }
    vlSelf->ysyx_22040175_top__DOT__div_finish = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__redy2) 
                                                  | (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__redy2));
    if (vlSelf->ysyx_22040175_top__DOT__rst_n) {
        if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))) {
            vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U] = 0U;
            vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U] = 0U;
            vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U] = 0U;
            vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U] = 0U;
            vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U] = 0U;
        } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))) {
            if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))) {
                vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U];
                vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U];
                vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U];
                vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U];
                vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U];
            } else {
                VL_SHIFTR_WWI(130,130,3, __Vtemp375, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y, 2U);
                vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U] 
                    = __Vtemp375[0U];
                vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U] 
                    = __Vtemp375[1U];
                vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U] 
                    = __Vtemp375[2U];
                vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U] 
                    = __Vtemp375[3U];
                vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U] 
                    = (3U & __Vtemp375[4U]);
                VL_SHIFTR_WWI(130,130,3, __Vtemp378, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y, 1U);
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U] 
                    = __Vtemp378[0U];
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U] 
                    = __Vtemp378[1U];
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U] 
                    = __Vtemp378[2U];
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U] 
                    = __Vtemp378[3U];
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U] 
                    = (3U & __Vtemp378[4U]);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))) {
            VL_SHIFTR_WWI(130,130,3, __Vtemp381, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y, 1U);
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U] 
                = __Vtemp381[0U];
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U] 
                = __Vtemp381[1U];
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U] 
                = __Vtemp381[2U];
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U] 
                = __Vtemp381[3U];
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U] 
                = (3U & __Vtemp381[4U]);
            VL_EXTEND_WW(130,66, __Vtemp384, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y);
            VL_SHIFTR_WWI(130,130,3, __Vtemp385, __Vtemp384, 2U);
            vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U] 
                = __Vtemp385[0U];
            vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U] 
                = __Vtemp385[1U];
            vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U] 
                = __Vtemp385[2U];
            vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U] 
                = __Vtemp385[3U];
            vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U] 
                = (3U & __Vtemp385[4U]);
        } else {
            VL_EXTEND_WW(130,66, __Vtemp387, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y);
            vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U] 
                = __Vtemp387[0U];
            vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U] 
                = __Vtemp387[1U];
            vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U] 
                = __Vtemp387[2U];
            vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U] 
                = __Vtemp387[3U];
            vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U] 
                = __Vtemp387[4U];
            VL_EXTEND_WW(130,66, __Vtemp388, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y);
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U] 
                = __Vtemp388[0U];
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U] 
                = __Vtemp388[1U];
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U] 
                = __Vtemp388[2U];
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U] 
                = __Vtemp388[3U];
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U] 
                = __Vtemp388[4U];
        }
    }
    vlSelf->ysyx_22040175_top__DOT__rest_wb_hazard 
        = (((((0ULL != vlSelf->ysyx_22040175_top__DOT__id_pc) 
              & (0x80000000ULL != vlSelf->ysyx_22040175_top__DOT__id_pc)) 
             & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem))) 
           & (((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)) 
                 | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
                | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
               | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)))
               ? (((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                       == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                      & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                     | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)))) 
                    & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                   & (0U == vlSelf->ysyx_22040175_top__DOT__id_s_imm)) 
                  | ((~ ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                          | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag)))) 
                     & (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                          | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                         & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                        & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__mem_s_flag)))))
               : ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                     & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                    | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                       & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                          == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)))) 
                   & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                  | ((~ ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                          | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag)))) 
                     & (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                          | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                         & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                        & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__mem_s_flag)))))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__sign_dividend 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__div_sign)
            ? ((1U & (IData)((vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                              >> 0x1fU))) ? ((IData)(1U) 
                                             + (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1)))
                : (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1))
            : (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__sign_dividend 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__div_sign)
            ? ((1U & (IData)((vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                              >> 0x3fU))) ? (1ULL + 
                                             (~ vlSelf->ysyx_22040175_top__DOT__ex_alu_src1))
                : vlSelf->ysyx_22040175_top__DOT__ex_alu_src1)
            : vlSelf->ysyx_22040175_top__DOT__ex_alu_src1);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__sign_divisor 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__div_sign)
            ? ((1U & (IData)((vlSelf->ysyx_22040175_top__DOT__ex_alu_src2 
                              >> 0x1fU))) ? ((IData)(1U) 
                                             + (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)))
                : (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2))
            : (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__sign_divisor 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__div_sign)
            ? ((1U & (IData)((vlSelf->ysyx_22040175_top__DOT__ex_alu_src2 
                              >> 0x3fU))) ? (1ULL + 
                                             (~ vlSelf->ysyx_22040175_top__DOT__ex_alu_src2))
                : vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)
            : vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__res_sign 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__div_sign)
            ? ((1U & (IData)((vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                              >> 0x1fU))) ? ((1U & (IData)(
                                                           (vlSelf->ysyx_22040175_top__DOT__ex_alu_src2 
                                                            >> 0x1fU)))
                                              ? 1U : 3U)
                : ((1U & (IData)((vlSelf->ysyx_22040175_top__DOT__ex_alu_src2 
                                  >> 0x1fU))) ? 2U : 0U))
            : 0U);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__res_sign 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__div_sign)
            ? ((1U & (IData)((vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                              >> 0x3fU))) ? ((1U & (IData)(
                                                           (vlSelf->ysyx_22040175_top__DOT__ex_alu_src2 
                                                            >> 0x3fU)))
                                              ? 1U : 3U)
                : ((1U & (IData)((vlSelf->ysyx_22040175_top__DOT__ex_alu_src2 
                                  >> 0x3fU))) ? 2U : 0U))
            : 0U);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div_signed = 0U;
    if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op) 
                              >> 1U)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div_signed 
                        = (1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op));
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div_signed = 0U;
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div64_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div64_valid = 1U;
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div32_valid = 0U;
    if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op) 
                              >> 1U)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div32_valid = 1U;
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero = 0U;
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
        = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
           - vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1 
        = vlSelf->ysyx_22040175_top__DOT__ex_alu_src1;
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2 
        = vlSelf->ysyx_22040175_top__DOT__ex_alu_src2;
    if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                   - vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                = (0ULL == vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res);
        } else if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                        = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                           - vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                        = (0ULL == vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res);
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                        = ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                            ? vlSelf->ysyx_22040175_top__DOT__ex_alu_src2
                            : ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                                ? (QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2))))
                                : ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                                    ? (QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2))))
                                    : ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                                        ? (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2))
                                        : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res))));
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1 
                    = VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1));
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2 
                    = VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2));
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op)))) {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                    = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                       < vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1 
                = vlSelf->ysyx_22040175_top__DOT__ex_alu_src1;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__ex_alu_src2;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                = VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2);
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22040175_top__DOT__ex_alu_src1, vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
        }
    } else if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                        = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                           - vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                        = (0ULL == vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res);
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                        = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                           - vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                        = (0ULL != vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res);
                }
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                    = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                       >= vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1 
                    = vlSelf->ysyx_22040175_top__DOT__ex_alu_src1;
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2 
                    = vlSelf->ysyx_22040175_top__DOT__ex_alu_src2;
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                    = VL_GTES_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = ((vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                    < vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)
                    ? 1ULL : 0ULL);
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1 
                = vlSelf->ysyx_22040175_top__DOT__ex_alu_src1;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__ex_alu_src2;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = (VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2)
                    ? 1ULL : 0ULL);
        }
    } else if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            __Vtemp390 = ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))
                           ? ((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                               ? VL_SHIFTRS_QQQ(64,64,64, vlSelf->ysyx_22040175_top__DOT__ex_alu_src1, vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)
                               : ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                                   ? VL_SHIFTRS_QQQ(64,64,64, 
                                                    VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1)), vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)
                                   : ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                                       ? VL_SHIFTRS_QQI(64,64,5, 
                                                        VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1)), 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)))
                                       : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res)))
                           : ((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                               ? VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22040175_top__DOT__ex_alu_src1, vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)
                               : ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                                   ? VL_SHIFTR_QQQ(64,64,64, (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1)), vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)
                                   : ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                                       ? ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1)) 
                                          >> (0x1fU 
                                              & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)))
                                       : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res))));
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = __Vtemp390;
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22040175_top__DOT__ex_alu_src1, vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res));
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                   - vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                = (0ULL == vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res);
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            if ((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))) {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                       + vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res));
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                    = ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                        ? (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                           + vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)
                        : ((5U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                            ? vlSelf->ysyx_22040175_top__DOT__ex_alu_src2
                            : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res));
            }
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                   ^ vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
        }
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
            = ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))
                ? (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                   | vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)
                : (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                   & vlSelf->ysyx_22040175_top__DOT__ex_alu_src2));
    }
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid = 0U;
    if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed = 0U;
    if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed 
                            = vlSelf->ysyx_22040175_top__DOT__ex_expand_signed;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_sec = 0U;
    if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op) 
                              >> 1U)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_sec 
                        = (1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op));
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_sec 
                    = (1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op));
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__rest_from_id = 
        (((((0ULL != vlSelf->ysyx_22040175_top__DOT__id_pc) 
            & (0x80000000ULL != vlSelf->ysyx_22040175_top__DOT__id_pc)) 
           & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
          & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem))) 
         & (((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)) 
               | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
              | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
             | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)))
             ? (((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                     == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                    & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                       == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                   | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                       == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                      & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)))) 
                  & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                 & (0U == vlSelf->ysyx_22040175_top__DOT__id_s_imm)) 
                | (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                     | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                    & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag))) 
                   | (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                        | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                       & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                      & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__mem_s_flag)))))
             : ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                   & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                  | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                     & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)))) 
                 & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                | (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                     | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                    & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag))) 
                   | ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                          == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                         | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                        & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                       & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__mem_s_flag))) 
                      | (((((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr)) 
                            + vlSelf->ysyx_22040175_top__DOT__id_imm) 
                           == ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                               + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_imm)))) 
                          & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag)) 
                         & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag))))))));
    vlSelf->ysyx_22040175_top__DOT__id_cunqu_hazard 
        = (((((0ULL != vlSelf->ysyx_22040175_top__DOT__id_pc) 
              & (0x80000000ULL != vlSelf->ysyx_22040175_top__DOT__id_pc)) 
             & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem))) 
           & ((~ ((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)) 
                    | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
                   | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
                  | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)))) 
              & ((~ (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                       & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                          == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                      | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                          == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                         & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)))) 
                     & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)))) 
                 & ((~ ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                          == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                         | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                        & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag)))) 
                    & ((~ (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                              == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                             | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                                == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                            & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                           & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__mem_s_flag)))) 
                       & (((((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr)) 
                             + vlSelf->ysyx_22040175_top__DOT__id_imm) 
                            == ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                                + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_imm)))) 
                           & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag)) 
                          & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag))))))));
    vlSelf->ysyx_22040175_top__DOT__ex_rest_id_mem 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__rest_id_mem));
    vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res 
        = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed))
            ? vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res
            : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed))
                ? vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res
                : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed))
                    ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed))
                        ? (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res 
                                                           >> 0xfU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res)))))
                        : (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res)))
                    : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res)))
                        : vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U] 
        = vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U] 
        = vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U] 
        = vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U] 
        = vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U] 
        = vlSelf->__Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__en2 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div64_valid) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__delay_div_valid))) 
           | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div64_valid) 
               & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__delay_div_valid)) 
              & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__delay2_div_finish)));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__en2 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div32_valid) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__delay_div_valid))) 
           | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div32_valid) 
               & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__delay_div_valid)) 
              & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__delay2_div_finish)));
    VL_EXTEND_WQ(130,64, __Vtemp394, vlSelf->ysyx_22040175_top__DOT__ex_alu_src1);
    if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid) 
         & ((~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_mul_valid)) 
            | (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay2_sh_fg)))) {
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[0U] 
            = __Vtemp394[0U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[1U] 
            = __Vtemp394[1U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[2U] 
            = __Vtemp394[2U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[3U] 
            = __Vtemp394[3U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[4U] 
            = __Vtemp394[4U];
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[0U] 
            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__no_latch_x[0U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[1U] 
            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__no_latch_x[1U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[2U] 
            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__no_latch_x[2U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[3U] 
            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__no_latch_x[3U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[4U] 
            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__no_latch_x[4U];
    }
    VL_EXTEND_WQ(66,64, __Vtemp397, vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
    if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid) 
         & ((~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_mul_valid)) 
            | (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay2_sh_fg)))) {
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y[0U] 
            = __Vtemp397[0U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y[1U] 
            = __Vtemp397[1U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y[2U] 
            = __Vtemp397[2U];
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y[0U] 
            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__no_latch_y[0U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y[1U] 
            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__no_latch_y[1U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y[2U] 
            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__no_latch_y[2U];
    }
    if (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_sec) {
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT____Vcellout__u_div32__div_res 
            = ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__res_sign))
                ? ((IData)(1U) + (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
                                  [0U])) : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__remainder_t
               [0U]);
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div_res64 
            = ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__res_sign))
                ? (1ULL + (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
                           [0U])) : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__remainder_t
               [0U]);
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT____Vcellout__u_div32__div_res 
            = ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__res_sign))
                ? ((IData)(1U) + (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__merchant_t
                                  [0U])) : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__merchant_t
               [0U]);
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div_res64 
            = ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__res_sign))
                ? (1ULL + (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__merchant_t
                           [0U])) : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__merchant_t
               [0U]);
    }
    vlSelf->ysyx_22040175_top__DOT__rest_id_mem = (
                                                   ((((0ULL 
                                                       != vlSelf->ysyx_22040175_top__DOT__id_pc) 
                                                      & (0x80000000ULL 
                                                         != vlSelf->ysyx_22040175_top__DOT__id_pc)) 
                                                     & (0U 
                                                        != (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                                                    & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem))) 
                                                   & (((((1U 
                                                          == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)) 
                                                         | (2U 
                                                            == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
                                                        | (4U 
                                                           == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
                                                       | (6U 
                                                          == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
                                                      & (((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                                                              == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                                                             & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                                                                == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                                                            | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                                                                == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                                                               & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                                                                  == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)))) 
                                                           & (0U 
                                                              != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                                                          & (0U 
                                                             == vlSelf->ysyx_22040175_top__DOT__id_s_imm)) 
                                                         | ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                                                              == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                                                             | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                                                                == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                                                            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag))))));
    vlSelf->ysyx_22040175_top__DOT__wb_hazard_result 
        = (((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag)) 
              | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag))) 
             | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag))) 
            | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag)))
            ? vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res
            : vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res);
}

extern const VlUnpacked<CData/*0:0*/, 64> Vysyx_22040175_top__ConstPool__TABLE_c1a1efce_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vysyx_22040175_top__ConstPool__TABLE_3289ff5d_0;
void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__4(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*5:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx2;
    CData/*1:0*/ __Vdly__ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_resp_i;
    QData/*63:0*/ __Vtask_ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__pmem_read__0__rdata;
    QData/*63:0*/ __Vtask_ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__pmem_read__1__rdata;
    QData/*63:0*/ __Vdly__ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_data_i;
    // Body
    __Vdly__ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_data_i 
        = vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_data_i;
    __Vdly__ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_resp_i 
        = vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_resp_i;
    if (vlSelf->ysyx_22040175_top__DOT__rst_n) {
        if (((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi__DOT__r_state)) 
             & (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__r_state)))) {
            vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_data_i;
        }
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata = 0ULL;
    }
    __Vtableidx2 = ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__r_hs) 
                      & (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_last_i)) 
                     << 5U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi__DOT__ar_hs) 
                                << 4U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__r_state) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyx_22040175_top__DOT__if_ena) 
                                             & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__dd_r_done))) 
                                            << 1U) 
                                           | (IData)(vlSelf->ysyx_22040175_top__DOT__rst_n)))));
    if (Vysyx_22040175_top__ConstPool__TABLE_c1a1efce_0
        [__Vtableidx2]) {
        vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__r_state 
            = Vysyx_22040175_top__ConstPool__TABLE_3289ff5d_0
            [__Vtableidx2];
    }
    __Vtableidx1 = (((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__r_done) 
                     << 5U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi__DOT__ar_hs) 
                                << 4U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi__DOT__r_state) 
                                           << 2U) | 
                                          (((((IData)(vlSelf->ysyx_22040175_top__DOT__if_ena) 
                                              & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__dd_r_done))) 
                                             & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__sh_fnsh_flag))) 
                                            << 1U) 
                                           | (IData)(vlSelf->ysyx_22040175_top__DOT__rst_n)))));
    if (Vysyx_22040175_top__ConstPool__TABLE_c1a1efce_0
        [__Vtableidx1]) {
        vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi__DOT__r_state 
            = Vysyx_22040175_top__ConstPool__TABLE_3289ff5d_0
            [__Vtableidx1];
    }
    if (vlSelf->ysyx_22040175_top__DOT__rst_n) {
        if (vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi__DOT__ar_hs) {
            Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__pmem_read_TOP((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_pc_predict__DOT__curr_pc)), __Vtask_ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__pmem_read__0__rdata);
            vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__rdata 
                = __Vtask_ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__pmem_read__0__rdata;
            vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_last_i = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_resp_i = 0U;
        } else if (vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__r_hs) {
            __Vdly__ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_data_i 
                = vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__rdata;
            vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_last_i = 1U;
            __Vdly__ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_resp_i = 3U;
        } else {
            __Vdly__ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_data_i 
                = vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_data_i;
            __Vdly__ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_resp_i 
                = vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_resp_i;
            vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_last_i = 0U;
        }
    } else {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__pmem_read_TOP(0x80000000ULL, __Vtask_ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__pmem_read__1__rdata);
        vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__rdata 
            = __Vtask_ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__pmem_read__1__rdata;
        vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_last_i = 0U;
        __Vdly__ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_resp_i = 0U;
    }
    vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_resp_i 
        = __Vdly__ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_resp_i;
    vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_data_i 
        = __Vdly__ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_data_i;
    vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__r_hs 
        = ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi__DOT__r_state)) 
           & (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__r_state)));
    vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi__DOT__ar_hs 
        = ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__r_state)) 
           & (1U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi__DOT__r_state)));
    vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__r_done 
        = (((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi__DOT__r_state)) 
            & (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_axi_slave__DOT__r_state))) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__axi_r_last_i));
}

void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_wb_stage__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_22040175_top___024root___combo__TOP__7(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___combo__TOP__7\n"); );
    // Body
    if (((((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__wb_reg_wen)) 
          & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr))) 
         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__wb_s_flag)))) {
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr] 
            = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed))
                ? (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata))
                : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed))
                    ? (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata))
                    : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed))
                        ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed))
                            ? (((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata 
                                                               >> 0xfU)))))) 
                                << 0x10U) | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata)))))
                            : (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata)))
                        : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed))
                            ? (((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata)))
                            : vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata))));
    }
    if ((((((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n) 
            & (IData)(vlSelf->ysyx_22040175_top__DOT__wb_reg_wen)) 
           & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr))) 
          & (IData)(vlSelf->ysyx_22040175_top__DOT__wb_s_flag)) 
         & (IData)(vlSelf->time_set))) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_wb_stage__DOT__pmem_write_TOP(
                                                                                (vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
                                                                                [vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr] 
                                                                                + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__wb_s_imm))), vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata, (IData)(vlSelf->ysyx_22040175_top__DOT__wb_wmask));
    }
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x1fU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f
        [0x1fU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x1fU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f
        [0x1fU];
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__8(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__8\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp508;
    VlWide<5>/*159:0*/ __Vtemp509;
    VlWide<5>/*159:0*/ __Vtemp512;
    VlWide<5>/*159:0*/ __Vtemp525;
    VlWide<5>/*159:0*/ __Vtemp526;
    VlWide<5>/*159:0*/ __Vtemp528;
    VlWide<5>/*159:0*/ __Vtemp529;
    VlWide<5>/*159:0*/ __Vtemp532;
    // Body
    vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_pc_predict__DOT__curr_pc 
        = vlSelf->__Vdly__ysyx_22040175_top__DOT__u_if_stage__DOT__u_pc_predict__DOT__curr_pc;
    vlSelf->ysyx_22040175_top__DOT__if_ena = vlSelf->ysyx_22040175_top__DOT__rst_n;
    vlSelf->ysyx_22040175_top__DOT__sh_fnsh_flag = 
        ((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n) 
         & (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state) 
             >> 2U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state) 
                        >> 1U) & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))));
    vlSelf->pc = (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_pc_predict__DOT__curr_pc);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n)
            ? (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__next_state)
            : 0U);
    vlSelf->ysyx_22040175_top__DOT__if_inst = (((IData)(vlSelf->ysyx_22040175_top__DOT__if_delay_r_done) 
                                                | (IData)(vlSelf->ysyx_22040175_top__DOT__sh_fnsh_flag))
                                                ? (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata)
                                                : 0x13U);
    VL_EXTEND_WQ(130,64, __Vtemp508, (((- (QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                                                              >> 0xfU))))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U])))));
    VL_EXTEND_WI(130,32, __Vtemp509, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U]);
    VL_EXTEND_WQ(130,64, __Vtemp512, (((QData)((IData)(
                                                       (- (IData)(
                                                                  (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                                                                   >> 0x1fU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U]))));
    if (vlSelf->ysyx_22040175_top__DOT__sh_fnsh_flag) {
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res[0U] 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__sh_fnsh_flag)
                ? ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                    ? 0U : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                             ? 0U : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                      ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                          ? __Vtemp508[0U]
                                          : __Vtemp509[0U])
                                      : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                          ? __Vtemp512[0U]
                                          : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U]))))
                : 0U);
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res[1U] 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__sh_fnsh_flag)
                ? ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                    ? 0U : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                             ? 0U : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                      ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                          ? __Vtemp508[1U]
                                          : __Vtemp509[1U])
                                      : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                          ? __Vtemp512[1U]
                                          : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U]))))
                : 0U);
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res[2U] 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__sh_fnsh_flag)
                ? ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                    ? 0U : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                             ? 0U : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                      ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                          ? __Vtemp508[2U]
                                          : __Vtemp509[2U])
                                      : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                          ? __Vtemp512[2U]
                                          : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U]))))
                : 0U);
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res[3U] 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__sh_fnsh_flag)
                ? ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                    ? 0U : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                             ? 0U : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                      ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                          ? __Vtemp508[3U]
                                          : __Vtemp509[3U])
                                      : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                          ? __Vtemp512[3U]
                                          : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U]))))
                : 0U);
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res[4U] 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__sh_fnsh_flag)
                ? ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                    ? 0U : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                             ? 0U : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                      ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                          ? __Vtemp508[4U]
                                          : __Vtemp509[4U])
                                      : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                          ? __Vtemp512[4U]
                                          : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U]))))
                : 0U);
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res[0U] = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res[1U] = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res[2U] = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res[3U] = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res[4U] = 0U;
    }
    vlSelf->inst = vlSelf->ysyx_22040175_top__DOT__if_inst;
    VL_EXTEND_WI(130,32, __Vtemp525, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT____Vcellout__u_div32__div_res);
    VL_EXTEND_WI(130,32, __Vtemp526, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__delay_div_res32);
    VL_EXTEND_WQ(130,64, __Vtemp528, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div_res64);
    VL_EXTEND_WQ(130,64, __Vtemp529, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__delay_div_res64);
    VL_EXTEND_WQ(130,64, __Vtemp532, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2 
        = (((QData)((IData)(((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div32_valid)
                              ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__redy2)
                                  ? __Vtemp525[1U] : 
                                 __Vtemp526[1U]) : 
                             ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div64_valid)
                               ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__redy2)
                                   ? __Vtemp528[1U]
                                   : __Vtemp529[1U])
                               : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid)
                                   ? ((IData)(vlSelf->ysyx_22040175_top__DOT__sh_fnsh_flag)
                                       ? vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res[1U]
                                       : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__delay_mul_res[1U])
                                   : __Vtemp532[1U]))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div32_valid)
                                          ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div32__DOT__redy2)
                                              ? __Vtemp525[0U]
                                              : __Vtemp526[0U])
                                          : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__div64_valid)
                                              ? ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_div64__DOT__redy2)
                                                  ? 
                                                 __Vtemp528[0U]
                                                  : 
                                                 __Vtemp529[0U])
                                              : ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid)
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22040175_top__DOT__sh_fnsh_flag)
                                                   ? 
                                                  vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res[0U]
                                                   : 
                                                  vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__delay_mul_res[0U])
                                                  : 
                                                 __Vtemp532[0U]))))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__next_state 
        = ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
            ? 0U : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                     ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                         ? 0U : ((0U == ((((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U] 
                                            | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U]) 
                                           | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U]) 
                                          | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U]) 
                                         | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U]))
                                  ? 3U : 2U)) : ((1U 
                                                  & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   ((((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U] 
                                                       | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U]) 
                                                      | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U]) 
                                                     | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U]) 
                                                    | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U]))
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid) 
                                                   & ((~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_mul_valid)) 
                                                      | (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay2_sh_fg)))
                                                   ? 1U
                                                   : 0U))));
    vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res 
        = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed))
            ? vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2
            : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed))
                ? vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2
                : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed))
                    ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed))
                        ? (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2 
                                                           >> 0xfU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2)))))
                        : (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2)))
                    : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2)))
                        : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2))));
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___combo__TOP__9(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___combo__TOP__9\n"); );
    // Body
    vlSelf->ysyx_22040175_top__DOT__rst_n = (1U & (~ (IData)(vlSelf->rst)));
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond 
        = (((IData)(vlSelf->ysyx_22040175_top__DOT__rest_from_id) 
            << 2U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_rest_id_mem) 
                       << 1U) | (IData)(vlSelf->ysyx_22040175_top__DOT__rest_wb_hazard)));
    if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond))) {
        if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond))) {
            if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond))) {
                if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                     & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__wb_hazard_result;
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res;
                } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                            & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                               == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res;
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__wb_hazard_result;
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
                }
            } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr))) {
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
            } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr))) {
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res;
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond))) {
            if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond))) {
                if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                     == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res;
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
                } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res;
                } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                            & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                               != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__wb_hazard_result;
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
                } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                            & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                               != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__wb_hazard_result;
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
                }
            } else if ((6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond))) {
                if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                     == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res;
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
                } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res;
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                        = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                        [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
                }
            } else if (vlSelf->ysyx_22040175_top__DOT__mem_cunqu_hazard) {
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__wb_hazard_result;
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__wb_hazard_result;
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__wb_hazard_result;
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res;
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                           != (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__wb_hazard_result;
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__wb_hazard_result;
            } else if ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                           != (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)))) {
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__wb_hazard_result;
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                    [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
            }
        } else if (vlSelf->ysyx_22040175_top__DOT__id_cunqu_hazard) {
            if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__id_expand_signed))) {
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            } else if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__id_expand_signed))) {
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__id_expand_signed))) {
                if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__id_expand_signed))) {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                        = (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res 
                                                           >> 0xfU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res)))));
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res));
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__id_expand_signed))) {
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res)));
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                    = vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res;
                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
            }
        } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) {
            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res;
            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
        } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) {
            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res;
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond))) {
        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond))) {
            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
        } else if (vlSelf->ysyx_22040175_top__DOT__mem_cunqu_hazard) {
            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res;
            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata = 0ULL;
        } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr))) {
            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res;
            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
        } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr))) {
            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res;
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
                = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
        }
    } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond))) {
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
            [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
            [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
            [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr];
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
            [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr];
    }
    vlSelf->ysyx_22040175_top__DOT__id_alu_src1 = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata;
    if (vlSelf->ysyx_22040175_top__DOT__id_cunqu_hazard) {
        vlSelf->ysyx_22040175_top__DOT__id_alu_src1 
            = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata;
    } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__id_alu_src1 
            = ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel))
                ? vlSelf->ysyx_22040175_top__DOT__id_imm
                : 4ULL);
    }
    vlSelf->ysyx_22040175_top__DOT__id_alu_src2 = ((IData)(vlSelf->ysyx_22040175_top__DOT__id_cunqu_hazard)
                                                    ? 0ULL
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel))
                                                     ? vlSelf->ysyx_22040175_top__DOT__id_pc
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel))
                                                      ? vlSelf->ysyx_22040175_top__DOT__id_imm
                                                      : vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata)));
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1 
        = vlSelf->ysyx_22040175_top__DOT__id_alu_src1;
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2 
        = vlSelf->ysyx_22040175_top__DOT__id_alu_src2;
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero 
        = ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__id_alu_op))
            ? (IData)(((0U == (0xcU & (IData)(vlSelf->ysyx_22040175_top__DOT__id_alu_op))) 
                       & ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__id_alu_op))
                           ? ((~ (IData)(vlSelf->ysyx_22040175_top__DOT__id_alu_op)) 
                              & (vlSelf->ysyx_22040175_top__DOT__id_alu_src1 
                                 < vlSelf->ysyx_22040175_top__DOT__id_alu_src2))
                           : ((IData)(vlSelf->ysyx_22040175_top__DOT__id_alu_op) 
                              & VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2)))))
            : ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__id_alu_op))
                ? ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__id_alu_op))
                    ? (IData)(((0U == (3U & (IData)(vlSelf->ysyx_22040175_top__DOT__id_alu_op))) 
                               & (0ULL != (vlSelf->ysyx_22040175_top__DOT__id_alu_src1 
                                           - vlSelf->ysyx_22040175_top__DOT__id_alu_src2))))
                    : (((IData)(vlSelf->ysyx_22040175_top__DOT__id_alu_op) 
                        >> 1U) & ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__id_alu_op))
                                   ? (vlSelf->ysyx_22040175_top__DOT__id_alu_src1 
                                      >= vlSelf->ysyx_22040175_top__DOT__id_alu_src2)
                                   : VL_GTES_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2))))
                : (IData)(((4U == (7U & (IData)(vlSelf->ysyx_22040175_top__DOT__id_alu_op))) 
                           & (0ULL == (vlSelf->ysyx_22040175_top__DOT__id_alu_src1 
                                       - vlSelf->ysyx_22040175_top__DOT__id_alu_src2))))));
    vlSelf->ysyx_22040175_top__DOT__id_next_pc = vlSelf->ysyx_22040175_top__DOT__id_pc;
    if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch) 
         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero)))) {
        vlSelf->ysyx_22040175_top__DOT__id_next_pc 
            = (vlSelf->ysyx_22040175_top__DOT__id_pc 
               + vlSelf->ysyx_22040175_top__DOT__id_imm);
    } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch) 
                & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero))) {
        vlSelf->ysyx_22040175_top__DOT__id_next_pc 
            = (4ULL + vlSelf->ysyx_22040175_top__DOT__id_pc);
    } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump) 
                & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__id_jalr)))) {
        vlSelf->ysyx_22040175_top__DOT__id_next_pc 
            = (vlSelf->ysyx_22040175_top__DOT__id_pc 
               + vlSelf->ysyx_22040175_top__DOT__id_imm);
    } else if (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump) 
                & (IData)(vlSelf->ysyx_22040175_top__DOT__id_jalr))) {
        if ((1U & (~ (((((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond)) 
                         | (5U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond))) 
                        | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond))) 
                       | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond))) 
                      | (7U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond)))))) {
            vlSelf->ysyx_22040175_top__DOT__id_next_pc 
                = (vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f
                   [(0x1fU & vlSelf->ysyx_22040175_top__DOT__id_s_imm)] 
                   + vlSelf->ysyx_22040175_top__DOT__id_imm);
        }
    } else {
        vlSelf->ysyx_22040175_top__DOT__id_next_pc 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__delay_sig_jalr)
                ? (vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__delay_reg1_rdata 
                   + vlSelf->ysyx_22040175_top__DOT__id_imm)
                : ((IData)(vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag)
                    ? 0x80000000ULL : vlSelf->ysyx_22040175_top__DOT__id_pc));
    }
    vlSelf->ysyx_22040175_top__DOT__sig_jalr = ((~ 
                                                 ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch) 
                                                  & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero)))) 
                                                & ((~ 
                                                    ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch) 
                                                     & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero))) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump) 
                                                        & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__id_jalr)))) 
                                                      & (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump) 
                                                          & (IData)(vlSelf->ysyx_22040175_top__DOT__id_jalr)) 
                                                         & (((((4U 
                                                                == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond)) 
                                                               | (5U 
                                                                  == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond))) 
                                                              | (2U 
                                                                 == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond))) 
                                                             | (6U 
                                                                == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond))) 
                                                            | (7U 
                                                               == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond)))))));
    vlSelf->out_mem_rd_buf_flag = vlSelf->ysyx_22040175_top__DOT__sig_jalr;
}

void Vysyx_22040175_top___024root___sequent__TOP__1(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___sequent__TOP__2(Vysyx_22040175_top___024root* vlSelf);

void Vysyx_22040175_top___024root___eval(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vysyx_22040175_top___024root___sequent__TOP__2(vlSelf);
        Vysyx_22040175_top___024root___sequent__TOP__3(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22040175_top___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vysyx_22040175_top___024root___combo__TOP__7(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    Vysyx_22040175_top___024root___combo__TOP__9(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__rst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n;
    vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n 
        = vlSelf->ysyx_22040175_top__DOT__rst_n;
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
    __req |= ((vlSelf->ysyx_22040175_top__DOT__rst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__rst_n));
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22040175_top__DOT__rst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__rst_n))) VL_DBG_MSGF("        CHANGE: vsrc/ysyx_22040175_top.v:18: ysyx_22040175_top.rst_n\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__rst_n 
        = vlSelf->ysyx_22040175_top__DOT__rst_n;
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
