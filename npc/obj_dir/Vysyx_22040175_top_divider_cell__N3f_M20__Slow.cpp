// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_divider_cell__N3f_M20.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_divider_cell__N3f_M20___ctor_var_reset(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf);

Vysyx_22040175_top_divider_cell__N3f_M20::Vysyx_22040175_top_divider_cell__N3f_M20(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_divider_cell__N3f_M20___ctor_var_reset(this);
}

void Vysyx_22040175_top_divider_cell__N3f_M20::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_divider_cell__N3f_M20::~Vysyx_22040175_top_divider_cell__N3f_M20() {
}

void Vysyx_22040175_top_divider_cell__N3f_M20___ctor_var_reset(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rstn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dividend = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__divisor = VL_RAND_RESET_I(32);
    vlSelf->__PVT__merchant_ci = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dividend_ci = VL_RAND_RESET_I(31);
    vlSelf->__PVT__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->__PVT__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__merchant = VL_RAND_RESET_I(32);
    vlSelf->__PVT__remainder = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__divisor_kp = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__dividend_kp = VL_RAND_RESET_I(31);
    vlSelf->__Vdly__merchant = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__remainder = VL_RAND_RESET_I(32);
}