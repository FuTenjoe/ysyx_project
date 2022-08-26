// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_axi_judge.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_axi_judge___sequent__TOP__ysyx_22040175_top__u_if_stage__u_axi_judge__3(Vysyx_22040175_top_axi_judge* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi_judge___sequent__TOP__ysyx_22040175_top__u_if_stage__u_axi_judge__3\n"); );
    // Body
    vlSelf->__Vdly__axi_addr = vlSelf->__PVT__axi_addr;
    vlSelf->__Vdly__axi_id = vlSelf->__PVT__axi_id;
    if (vlSelf->__PVT__rst_n) {
        if ((0U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__axi_id = 0U;
            vlSelf->__Vdly__axi_addr = 0ULL;
        } else if ((4U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__axi_id = vlSelf->__PVT__if_send_id;
            vlSelf->__Vdly__axi_addr = VL_EXTEND_QI(64,32, vlSelf->__PVT__pc);
        } else if ((5U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__axi_id = vlSelf->__PVT__mem_send_id;
            vlSelf->__Vdly__axi_addr = vlSelf->__PVT__mem_addr;
        } else if ((1U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__axi_id = vlSelf->__PVT__mem_send_id;
            vlSelf->__Vdly__axi_addr = vlSelf->__PVT__mem_addr;
        } else if ((2U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__axi_id = vlSelf->__PVT__if_send_id;
            vlSelf->__Vdly__axi_addr = VL_EXTEND_QI(64,32, vlSelf->__PVT__pc);
        } else if ((3U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__axi_id = 0U;
            vlSelf->__Vdly__axi_addr = 0ULL;
        } else {
            vlSelf->__Vdly__axi_id = 0U;
            vlSelf->__Vdly__axi_addr = 0ULL;
        }
    } else {
        vlSelf->__Vdly__axi_id = 0U;
        vlSelf->__Vdly__axi_addr = 0ULL;
    }
    vlSelf->__Vdly__present_state = vlSelf->__PVT__present_state;
    vlSelf->__PVT__axi_addr = vlSelf->__Vdly__axi_addr;
    vlSelf->__PVT__axi_id = vlSelf->__Vdly__axi_id;
    vlSelf->__Vdly__present_state = ((IData)(vlSelf->__PVT__rst_n)
                                      ? (IData)(vlSelf->__PVT__next_state)
                                      : 0U);
    vlSelf->__PVT__present_state = vlSelf->__Vdly__present_state;
    vlSelf->__PVT__axi_valid = ((((1U == (IData)(vlSelf->__PVT__present_state)) 
                                  | (2U == (IData)(vlSelf->__PVT__present_state))) 
                                 | (4U == (IData)(vlSelf->__PVT__present_state))) 
                                | (5U == (IData)(vlSelf->__PVT__present_state)));
    vlSelf->__PVT__axi_burst = (4U == (IData)(vlSelf->__PVT__present_state));
}

VL_INLINE_OPT void Vysyx_22040175_top_axi_judge___combo__TOP__ysyx_22040175_top__u_if_stage__u_axi_judge__4(Vysyx_22040175_top_axi_judge* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi_judge___combo__TOP__ysyx_22040175_top__u_if_stage__u_axi_judge__4\n"); );
    // Body
    vlSelf->__PVT__next_state = ((0U == (IData)(vlSelf->__PVT__present_state))
                                  ? (((IData)(vlSelf->__PVT__if_valid) 
                                      & (IData)(vlSelf->__PVT__mem_valid))
                                      ? 1U : (((IData)(vlSelf->__PVT__if_valid) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__if_valid) 
                                                   & (IData)(vlSelf->__PVT__mem_valid))))
                                               ? 4U
                                               : (((IData)(vlSelf->__PVT__mem_valid) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__if_valid) 
                                                       & (IData)(vlSelf->__PVT__mem_valid))))
                                                   ? 5U
                                                   : 0U)))
                                  : ((4U == (IData)(vlSelf->__PVT__present_state))
                                      ? (((IData)(vlSelf->__PVT__r_done) 
                                          & (1U == (IData)(vlSelf->__PVT__return_id)))
                                          ? 3U : 4U)
                                      : ((5U == (IData)(vlSelf->__PVT__present_state))
                                          ? (((IData)(vlSelf->__PVT__r_done) 
                                              & (2U 
                                                 == (IData)(vlSelf->__PVT__return_id)))
                                              ? 3U : 5U)
                                          : ((1U == (IData)(vlSelf->__PVT__present_state))
                                              ? (((IData)(vlSelf->__PVT__r_done) 
                                                  & (2U 
                                                     == (IData)(vlSelf->__PVT__return_id)))
                                                  ? 2U
                                                  : 1U)
                                              : ((2U 
                                                  == (IData)(vlSelf->__PVT__present_state))
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__r_done) 
                                                   & (1U 
                                                      == (IData)(vlSelf->__PVT__return_id)))
                                                   ? 3U
                                                   : 2U)
                                                  : 0U)))));
}
