// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_ex_stage.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_ex_stage___ctor_var_reset(Vysyx_22040175_top_ex_stage* vlSelf);

Vysyx_22040175_top_ex_stage::Vysyx_22040175_top_ex_stage(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_ex_stage___ctor_var_reset(this);
}

void Vysyx_22040175_top_ex_stage::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_ex_stage::~Vysyx_22040175_top_ex_stage() {
}

void Vysyx_22040175_top_ex_stage___settle__TOP__ysyx_22040175_top__u_ex_stage__1(Vysyx_22040175_top_ex_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_ex_stage___settle__TOP__ysyx_22040175_top__u_ex_stage__1\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu.__PVT__rd_flag 
        = vlSelf->__PVT__rd_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu.__PVT__alu_op 
        = vlSelf->__PVT__alu_op;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu.__PVT__expand_signed 
        = vlSelf->__PVT__expand_signed;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu.__PVT__alu_src2 
        = vlSelf->__PVT__alu_src2;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu.__PVT__alu_src1 
        = vlSelf->__PVT__alu_src1;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSelf->__PVT__sh_fnsh_flag = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu.__PVT__sh_fnsh_flag;
}

void Vysyx_22040175_top_ex_stage___settle__TOP__ysyx_22040175_top__u_ex_stage__2(Vysyx_22040175_top_ex_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_ex_stage___settle__TOP__ysyx_22040175_top__u_ex_stage__2\n"); );
    // Body
    vlSelf->__PVT__div_finish = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu.__PVT__div_finish;
}

void Vysyx_22040175_top_ex_stage___settle__TOP__ysyx_22040175_top__u_ex_stage__3(Vysyx_22040175_top_ex_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_ex_stage___settle__TOP__ysyx_22040175_top__u_ex_stage__3\n"); );
    // Body
    vlSelf->__PVT__alu_res = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu.__PVT__alu_res_ex_sign;
}

void Vysyx_22040175_top_ex_stage___ctor_var_reset(Vysyx_22040175_top_ex_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_ex_stage___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_op = VL_RAND_RESET_I(5);
    vlSelf->__PVT__alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_res = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__rd_flag = VL_RAND_RESET_I(3);
    vlSelf->__PVT__expand_signed = VL_RAND_RESET_I(4);
    vlSelf->__PVT__sh_fnsh_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_finish = VL_RAND_RESET_I(1);
}
