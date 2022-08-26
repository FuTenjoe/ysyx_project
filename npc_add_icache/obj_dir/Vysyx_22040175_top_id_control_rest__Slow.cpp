// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_id_control_rest.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_id_control_rest___ctor_var_reset(Vysyx_22040175_top_id_control_rest* vlSelf);

Vysyx_22040175_top_id_control_rest::Vysyx_22040175_top_id_control_rest(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_id_control_rest___ctor_var_reset(this);
}

void Vysyx_22040175_top_id_control_rest::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_id_control_rest::~Vysyx_22040175_top_id_control_rest() {
}

void Vysyx_22040175_top_id_control_rest___settle__TOP__ysyx_22040175_top__u_id_stage__u_id_control_rest__1(Vysyx_22040175_top_id_control_rest* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_id_control_rest___settle__TOP__ysyx_22040175_top__u_id_stage__u_id_control_rest__1\n"); );
    // Body
    vlSelf->__PVT__control_rest = ((((IData)(vlSelf->__PVT__branch) 
                                     | (IData)(vlSelf->__PVT__jump)) 
                                    | (IData)(vlSelf->__PVT__mret_flag)) 
                                   | (IData)(vlSelf->__PVT__ecall_flag));
}

void Vysyx_22040175_top_id_control_rest___ctor_var_reset(Vysyx_22040175_top_id_control_rest* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_id_control_rest___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__jump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__control_rest = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rest_from_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mret_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ecall_flag = VL_RAND_RESET_I(1);
}
