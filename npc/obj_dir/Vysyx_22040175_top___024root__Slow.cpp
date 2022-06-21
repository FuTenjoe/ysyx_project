// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top___024root.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top___024root___ctor_var_reset(Vysyx_22040175_top___024root* vlSelf);

Vysyx_22040175_top___024root::Vysyx_22040175_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top___024root___ctor_var_reset(this);
}

void Vysyx_22040175_top___024root::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top___024root::~Vysyx_22040175_top___024root() {
}

void Vysyx_22040175_top___024root___eval_initial(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__rst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n;
}

void Vysyx_22040175_top___024root___settle__TOP__2(Vysyx_22040175_top___024root* vlSelf);

void Vysyx_22040175_top___024root___eval_settle(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22040175_top___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_22040175_top___024root___final(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___final\n"); );
}

void Vysyx_22040175_top___024root___ctor_var_reset(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->unknown_code = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__reg_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__reg1_raddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__reg2_raddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040175_top__DOT__reg2_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__imm_gen_op = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040175_top__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040175_top__DOT__alu_src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__alu_src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__alu_res = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__rst_n = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
