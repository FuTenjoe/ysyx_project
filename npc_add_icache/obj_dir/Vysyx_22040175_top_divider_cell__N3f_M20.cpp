// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_divider_cell__N3f_M20.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__u_divider_step0__1(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__u_divider_step0__1\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__2(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__2\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__3(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__3\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__4(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__4\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__5(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__5\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__6(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__6\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__7(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__7\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__8(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__8\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__9(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__9\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__10(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__10\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__11(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__11\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__12(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__12\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__13(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__13\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__14(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__14\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__15(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__15\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__16(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__16\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__17(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__17\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__18(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__18\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__19(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__19\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__20(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__20\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__21(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__21\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__22(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__22\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__23(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__23\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__24(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__24\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__25(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__25\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__26(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__26\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__27(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__27\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__28(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__28\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__29(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__29\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__30(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__30\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__31(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__31\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}

VL_INLINE_OPT void Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__32(Vysyx_22040175_top_divider_cell__N3f_M20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vysyx_22040175_top_divider_cell__N3f_M20___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__32\n"); );
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
            if ((vlSelf->__PVT__dividend >= VL_EXTEND_QI(33,32, vlSelf->__PVT__divisor))) {
                vlSelf->__Vdly__merchant = ((IData)(1U) 
                                            + ((0x1fU 
                                                >= 1U)
                                                ? (vlSelf->__PVT__merchant_ci 
                                                   << 1U)
                                                : 0U));
                vlSelf->__Vdly__remainder = (VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U) 
                                             - vlSelf->__PVT__divisor);
            } else {
                vlSelf->__Vdly__merchant = ((0x1fU 
                                             >= 1U)
                                             ? (vlSelf->__PVT__merchant_ci 
                                                << 1U)
                                             : 0U);
                vlSelf->__Vdly__remainder = VL_SEL_IQII(32,33,32,32, vlSelf->__PVT__dividend, 0U, 0x20U);
            }
        } else {
            vlSelf->__Vdly__rdy = 0U;
            vlSelf->__Vdly__merchant = 0U;
            vlSelf->__Vdly__remainder = 0U;
            vlSelf->__Vdly__divisor_kp = 0U;
            vlSelf->__Vdly__dividend_kp = 0U;
        }
    } else {
        vlSelf->__Vdly__rdy = 0U;
        vlSelf->__Vdly__merchant = 0U;
        vlSelf->__Vdly__remainder = 0U;
        vlSelf->__Vdly__divisor_kp = 0U;
        vlSelf->__Vdly__dividend_kp = 0U;
    }
    vlSelf->__PVT__rdy = vlSelf->__Vdly__rdy;
    vlSelf->__PVT__divisor_kp = vlSelf->__Vdly__divisor_kp;
    vlSelf->__PVT__dividend_kp = vlSelf->__Vdly__dividend_kp;
    vlSelf->__PVT__merchant = vlSelf->__Vdly__merchant;
    vlSelf->__PVT__remainder = vlSelf->__Vdly__remainder;
}
