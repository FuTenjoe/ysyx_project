// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_axi_judge.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_axi_judge___ctor_var_reset(Vysyx_22040175_top_axi_judge* vlSelf);

Vysyx_22040175_top_axi_judge::Vysyx_22040175_top_axi_judge(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_axi_judge___ctor_var_reset(this);
}

void Vysyx_22040175_top_axi_judge::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_axi_judge::~Vysyx_22040175_top_axi_judge() {
}

void Vysyx_22040175_top_axi_judge___settle__TOP__ysyx_22040175_top__u_if_stage__u_axi_judge__1(Vysyx_22040175_top_axi_judge* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi_judge___settle__TOP__ysyx_22040175_top__u_if_stage__u_axi_judge__1\n"); );
    // Body
    vlSelf->__PVT__axi_valid = ((((1U == (IData)(vlSelf->__PVT__present_state)) 
                                  | (2U == (IData)(vlSelf->__PVT__present_state))) 
                                 | (4U == (IData)(vlSelf->__PVT__present_state))) 
                                | (5U == (IData)(vlSelf->__PVT__present_state)));
    vlSelf->__PVT__axi_burst = (4U == (IData)(vlSelf->__PVT__present_state));
}

void Vysyx_22040175_top_axi_judge___settle__TOP__ysyx_22040175_top__u_if_stage__u_axi_judge__2(Vysyx_22040175_top_axi_judge* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi_judge___settle__TOP__ysyx_22040175_top__u_if_stage__u_axi_judge__2\n"); );
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

void Vysyx_22040175_top_axi_judge___ctor_var_reset(Vysyx_22040175_top_axi_judge* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_axi_judge___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_send_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_send_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_addr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__r_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__return_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_addr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi_burst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__present_state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__next_state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__present_state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__axi_id = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__axi_addr = VL_RAND_RESET_Q(64);
}
