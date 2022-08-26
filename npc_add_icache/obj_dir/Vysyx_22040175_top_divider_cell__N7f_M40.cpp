// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_divider_cell__N7f_M40.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__u_divider_step0__1(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__u_divider_step0__1\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp1, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp1)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__2(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__2\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp2;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp2, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp2)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__3(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp3;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp3)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__4(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__4\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp4;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp4, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp4)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__5(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__5\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp5;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp5, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp5)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__6(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__6\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp6;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp6, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp6)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__7(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__7\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp7;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp7, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp7)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__8(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__8\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp8;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp8, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp8)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__9(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__9\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp9;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp9, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp9)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__10(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__10\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp10;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp10, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp10)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__11(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__11\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp11;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp11, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp11)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__12(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__12\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp12;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp12, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp12)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__13(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__13\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp13;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp13, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp13)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__14(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__14\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp14;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp14, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp14)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__15(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__15\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp15;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp15, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp15)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__16(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__16\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp16;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp16, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp16)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__17(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__17\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp17;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp17, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp17)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__18(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__18\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp18;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp18, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp18)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__19(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__19\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp19;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp19, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp19)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__20(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__20\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp20;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp20, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp20)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__21(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__21\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp21;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp21, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp21)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__22(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__22\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp22;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp22, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp22)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__23(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__23\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp23;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp23, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp23)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__24(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__24\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp24;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp24, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp24)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__25(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__25\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp25;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp25, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp25)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__26(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__26\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp26;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp26, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp26)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__27(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__27\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp27;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp27, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp27)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__28(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__28\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp28;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp28, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp28)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__29(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__29\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp29;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp29, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp29)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__30(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__30\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp30;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp30, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp30)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__31(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__31\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp31;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp31, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp31)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__32(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__32\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp32;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp32, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp32)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__32__KET____DOT__u_divider_step__33(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__32__KET____DOT__u_divider_step__33\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp33;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp33)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__33__KET____DOT__u_divider_step__34(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__33__KET____DOT__u_divider_step__34\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp34;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp34, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp34)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__34__KET____DOT__u_divider_step__35(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__34__KET____DOT__u_divider_step__35\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp35;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp35, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp35)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__35__KET____DOT__u_divider_step__36(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__35__KET____DOT__u_divider_step__36\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp36;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp36, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp36)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__36__KET____DOT__u_divider_step__37(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__36__KET____DOT__u_divider_step__37\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp37;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp37, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp37)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__37__KET____DOT__u_divider_step__38(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__37__KET____DOT__u_divider_step__38\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp38;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp38, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp38)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__38__KET____DOT__u_divider_step__39(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__38__KET____DOT__u_divider_step__39\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp39;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp39, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp39)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__39__KET____DOT__u_divider_step__40(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__39__KET____DOT__u_divider_step__40\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp40;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp40)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__40__KET____DOT__u_divider_step__41(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__40__KET____DOT__u_divider_step__41\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp41;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp41, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp41)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__41__KET____DOT__u_divider_step__42(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__41__KET____DOT__u_divider_step__42\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp42;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp42, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp42)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__42__KET____DOT__u_divider_step__43(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__42__KET____DOT__u_divider_step__43\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp43;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp43, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp43)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__43__KET____DOT__u_divider_step__44(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__43__KET____DOT__u_divider_step__44\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp44;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp44, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp44)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__44__KET____DOT__u_divider_step__45(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__44__KET____DOT__u_divider_step__45\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp45;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp45, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp45)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__45__KET____DOT__u_divider_step__46(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__45__KET____DOT__u_divider_step__46\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp46;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp46, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp46)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__46__KET____DOT__u_divider_step__47(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__46__KET____DOT__u_divider_step__47\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp47;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp47, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp47)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__47__KET____DOT__u_divider_step__48(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__47__KET____DOT__u_divider_step__48\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp48;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp48, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp48)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__48__KET____DOT__u_divider_step__49(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__48__KET____DOT__u_divider_step__49\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp49;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp49, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp49)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__49__KET____DOT__u_divider_step__50(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__49__KET____DOT__u_divider_step__50\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp50;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp50, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp50)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__50__KET____DOT__u_divider_step__51(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__50__KET____DOT__u_divider_step__51\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp51;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp51, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp51)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__51__KET____DOT__u_divider_step__52(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__51__KET____DOT__u_divider_step__52\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp52;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp52, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp52)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__52__KET____DOT__u_divider_step__53(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__52__KET____DOT__u_divider_step__53\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp53;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp53, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp53)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__53__KET____DOT__u_divider_step__54(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__53__KET____DOT__u_divider_step__54\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp54;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp54, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp54)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__54__KET____DOT__u_divider_step__55(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__54__KET____DOT__u_divider_step__55\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp55;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp55, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp55)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__55__KET____DOT__u_divider_step__56(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__55__KET____DOT__u_divider_step__56\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp56;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp56, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp56)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__56__KET____DOT__u_divider_step__57(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__56__KET____DOT__u_divider_step__57\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp57;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp57, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp57)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__57__KET____DOT__u_divider_step__58(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__57__KET____DOT__u_divider_step__58\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp58;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp58, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp58)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__58__KET____DOT__u_divider_step__59(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__58__KET____DOT__u_divider_step__59\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp59;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp59, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp59)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__59__KET____DOT__u_divider_step__60(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__59__KET____DOT__u_divider_step__60\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp60;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp60, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp60)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__60__KET____DOT__u_divider_step__61(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__60__KET____DOT__u_divider_step__61\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp61;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp61, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp61)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__61__KET____DOT__u_divider_step__62(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__61__KET____DOT__u_divider_step__62\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp62;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp62, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp62)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__62__KET____DOT__u_divider_step__63(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__62__KET____DOT__u_divider_step__63\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp63;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp63, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp63)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__63__KET____DOT__u_divider_step__64(Vysyx_22040175_top_divider_cell__N7f_M40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N7f_M40___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64__sqrt_stepx__BRA__63__KET____DOT__u_divider_step__64\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp64;
    // Body
    vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor_kp;
    vlSelf->__Vdly__rdy = vlSelf->__PVT__rdy;
    vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_kp;
    vlSelf->__Vdly__merchant = vlSelf->__PVT__merchant;
    vlSelf->__Vdly__remainder = vlSelf->__PVT__remainder;
    if (vlSelf->__PVT__rstn) {
        if (vlSelf->__PVT__en) {
            vlSelf->__Vdly__rdy = 1U;
            vlSelf->__Vdly__divisor_kp = vlSelf->__PVT__divisor;
            vlSelf->__Vdly__dividend_kp = vlSelf->__PVT__dividend_ci;
            VL_EXTEND_WQ(65,64, __Vtemp64, vlSelf->__PVT__divisor);
            if (VL_GTE_W(3, vlSelf->__PVT__dividend, __Vtemp64)) {
                vlSelf->__Vdly__merchant = (1ULL + 
                                            ((0x3fU 
                                              >= 1U)
                                              ? (vlSelf->__PVT__merchant_ci 
                                                 << 1U)
                                              : 0ULL));
                vlSelf->__Vdly__remainder = (VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x3fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0ULL);
                vlSelf->__Vdly__remainder = VL_SEL_QWII(64,65,32,32, vlSelf->__PVT__dividend, 0U, 0x40U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0ULL;
            vlSelf->__Vdly__remainder = 0ULL;
            vlSelf->__Vdly__divisor_kp = 0ULL;
            vlSelf->__Vdly__dividend_kp = 0ULL;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0ULL;
        vlSelf->__Vdly__remainder = 0ULL;
        vlSelf->__Vdly__divisor_kp = 0ULL;
        vlSelf->__Vdly__dividend_kp = 0ULL;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}
