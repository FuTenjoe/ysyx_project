// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_ex_stage.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_ex_stage___combo__TOP__ysyx_22040175_top__u_ex_stage__4(Vysyx_22040175_top_ex_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_ex_stage___combo__TOP__ysyx_22040175_top__u_ex_stage__4\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vysyx_22040175_top_ex_stage___sequent__TOP__ysyx_22040175_top__u_ex_stage__5(Vysyx_22040175_top_ex_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_ex_stage___sequent__TOP__ysyx_22040175_top__u_ex_stage__5\n"); );
    // Body
    vlSelf->__PVT__sh_fnsh_flag = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu.__PVT__sh_fnsh_flag;
}

VL_INLINE_OPT void Vysyx_22040175_top_ex_stage___combo__TOP__ysyx_22040175_top__u_ex_stage__6(Vysyx_22040175_top_ex_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_ex_stage___combo__TOP__ysyx_22040175_top__u_ex_stage__6\n"); );
    // Body
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
}

VL_INLINE_OPT void Vysyx_22040175_top_ex_stage___combo__TOP__ysyx_22040175_top__u_ex_stage__7(Vysyx_22040175_top_ex_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_ex_stage___combo__TOP__ysyx_22040175_top__u_ex_stage__7\n"); );
    // Body
    vlSelf->__PVT__alu_res = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu.__PVT__alu_res_ex_sign;
}

VL_INLINE_OPT void Vysyx_22040175_top_ex_stage___multiclk__TOP__ysyx_22040175_top__u_ex_stage__8(Vysyx_22040175_top_ex_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_ex_stage___multiclk__TOP__ysyx_22040175_top__u_ex_stage__8\n"); );
    // Body
    vlSelf->__PVT__div_finish = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu.__PVT__div_finish;
}
