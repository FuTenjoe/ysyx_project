// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_alu.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_alu___combo__TOP__ysyx_22040175_top__u_ex_stage__u_alu__4(Vysyx_22040175_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_alu___combo__TOP__ysyx_22040175_top__u_ex_stage__u_alu__4\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vysyx_22040175_top_alu___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__6(Vysyx_22040175_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_alu___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__6\n"); );
    // Body
    vlSelf->__Vdly__delay_sh_fg = vlSelf->__PVT__delay_sh_fg;
    vlSelf->__Vdly__delay_div_res64 = vlSelf->__PVT__delay_div_res64;
    vlSelf->__Vdly__delay_div_res32 = vlSelf->__PVT__delay_div_res32;
    VL_ASSIGN_W(130,vlSelf->__Vdly__delay_mul_res, vlSelf->__PVT__delay_mul_res);
    if (vlSelf->__PVT__rst_n) {
        vlSelf->__Vdly__delay_sh_fg = vlSelf->__PVT__sh_fnsh_flag;
        VL_ASSIGN_W(130,vlSelf->__Vdly__delay_mul_res, vlSelf->__PVT__mul_res);
        vlSelf->__Vdly__delay_div_res32 = VL_SEL_IQII(32,64,32,32, vlSelf->__PVT__div_res32, 0U, 0x20U);
        vlSelf->__Vdly__delay_div_res64 = vlSelf->__PVT__div_res64;
    } else {
        vlSelf->__Vdly__delay_sh_fg = 0U;
        VL_CONST_W_1X(130,vlSelf->__Vdly__delay_mul_res,0x00000000);
        vlSelf->__Vdly__delay_div_res32 = 0U;
        vlSelf->__Vdly__delay_div_res64 = 0ULL;
    }
    vlSelf->__PVT__delay_sh_fg = vlSelf->__Vdly__delay_sh_fg;
    VL_ASSIGN_W(130,vlSelf->__PVT__delay_mul_res, vlSelf->__Vdly__delay_mul_res);
    vlSelf->__PVT__delay_div_res32 = vlSelf->__Vdly__delay_div_res32;
    vlSelf->__PVT__delay_div_res64 = vlSelf->__Vdly__delay_div_res64;
}

VL_INLINE_OPT void Vysyx_22040175_top_alu___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__7(Vysyx_22040175_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_alu___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__7\n"); );
    // Body
    vlSelf->__PVT__sh_fnsh_flag = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul.__PVT__sh_fnsh_flag;
}

VL_INLINE_OPT void Vysyx_22040175_top_alu___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__8(Vysyx_22040175_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_alu___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__8\n"); );
    // Body
    vlSelf->__PVT__div_finish32 = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32.__PVT__res_rdy;
}

VL_INLINE_OPT void Vysyx_22040175_top_alu___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__9(Vysyx_22040175_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_alu___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__9\n"); );
    // Body
    vlSelf->__PVT__div_finish64 = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64.__PVT__res_rdy;
}

VL_INLINE_OPT void Vysyx_22040175_top_alu___combo__TOP__ysyx_22040175_top__u_ex_stage__u_alu__11(Vysyx_22040175_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_alu___combo__TOP__ysyx_22040175_top__u_ex_stage__u_alu__11\n"); );
    // Variables
    QData/*63:0*/ __Vtemp18;
    QData/*63:0*/ __Vtemp19;
    QData/*63:0*/ __Vtemp20;
    QData/*63:0*/ __Vtemp21;
    QData/*63:0*/ __Vtemp22;
    QData/*63:0*/ __Vtemp23;
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32.__PVT__rstn 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64.__PVT__rstn 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul.__PVT__alu_src2 
        = vlSelf->__PVT__alu_src2;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64.__PVT__divisor 
        = vlSelf->__PVT__alu_src2;
    vlSelf->__Vcellinp__u_div32__divisor = VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_src2, 0U, 0x20U);
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul.__PVT__alu_src1 
        = vlSelf->__PVT__alu_src1;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64.__PVT__dividend 
        = vlSelf->__PVT__alu_src1;
    vlSelf->__PVT__zero = 0U;
    vlSelf->__PVT__alu_res = (vlSelf->__PVT__alu_src1 
                              - vlSelf->__PVT__alu_src2);
    vlSelf->__PVT__signed_alu_src1 = vlSelf->__PVT__alu_src1;
    vlSelf->__PVT__signed_alu_src2 = vlSelf->__PVT__alu_src2;
    vlSelf->__PVT__mul_valid = 0U;
    vlSelf->__PVT__mul_expand_signed = 0U;
    vlSelf->__PVT__div32_valid = 0U;
    vlSelf->__PVT__div64_valid = 0U;
    vlSelf->__PVT__alu_sec = 0U;
    vlSelf->__PVT__div_signed = 0U;
    if (((((((((3U == (IData)(vlSelf->__PVT__alu_op)) 
               | (4U == (IData)(vlSelf->__PVT__alu_op))) 
              | (0xcU == (IData)(vlSelf->__PVT__alu_op))) 
             | (0x11U == (IData)(vlSelf->__PVT__alu_op))) 
            | (0xaU == (IData)(vlSelf->__PVT__alu_op))) 
           | (0xbU == (IData)(vlSelf->__PVT__alu_op))) 
          | (0x12U == (IData)(vlSelf->__PVT__alu_op))) 
         | (9U == (IData)(vlSelf->__PVT__alu_op)))) {
        if ((3U == (IData)(vlSelf->__PVT__alu_op))) {
            if ((0U == (IData)(vlSelf->__PVT__rd_flag))) {
                vlSelf->__PVT__alu_res = (vlSelf->__PVT__alu_src1 
                                          + vlSelf->__PVT__alu_src2);
                __Vtemp18 = VL_EXTEND_QI(64,32, VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_res, 0U, 0x20U));
                vlSelf->__PVT__alu_res = __Vtemp18;
            } else {
                __Vtemp19 = ((3U == (IData)(vlSelf->__PVT__rd_flag))
                              ? (vlSelf->__PVT__alu_src1 
                                 + vlSelf->__PVT__alu_src2)
                              : ((5U == (IData)(vlSelf->__PVT__rd_flag))
                                  ? vlSelf->__PVT__alu_src2
                                  : vlSelf->__PVT__alu_res));
                vlSelf->__PVT__alu_res = __Vtemp19;
            }
        } else if ((4U == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__alu_res = (vlSelf->__PVT__alu_src1 
                                      - vlSelf->__PVT__alu_src2);
            vlSelf->__PVT__zero = (0ULL == vlSelf->__PVT__alu_res);
        } else if ((0xcU == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__alu_res = (vlSelf->__PVT__alu_src1 
                                      - vlSelf->__PVT__alu_src2);
            vlSelf->__PVT__zero = (0ULL != vlSelf->__PVT__alu_res);
        } else if ((0x11U == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__signed_alu_src1 = vlSelf->__PVT__alu_src1;
            vlSelf->__PVT__signed_alu_src2 = vlSelf->__PVT__alu_src2;
            vlSelf->__PVT__zero = VL_LTS_IQQ(1,64,64, vlSelf->__PVT__signed_alu_src1, vlSelf->__PVT__signed_alu_src2);
        } else if ((0xaU == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__signed_alu_src1 = vlSelf->__PVT__alu_src1;
            vlSelf->__PVT__signed_alu_src2 = vlSelf->__PVT__alu_src2;
            vlSelf->__PVT__zero = VL_GTES_IQQ(1,64,64, vlSelf->__PVT__signed_alu_src1, vlSelf->__PVT__signed_alu_src2);
        } else if ((0xbU == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__zero = (vlSelf->__PVT__alu_src1 
                                   >= vlSelf->__PVT__alu_src2);
        } else if ((0x12U == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__zero = (vlSelf->__PVT__alu_src1 
                                   < vlSelf->__PVT__alu_src2);
        } else {
            vlSelf->__PVT__alu_res = ((vlSelf->__PVT__alu_src1 
                                       < vlSelf->__PVT__alu_src2)
                                       ? 1ULL : 0ULL);
        }
    } else if (((((((((8U == (IData)(vlSelf->__PVT__alu_op)) 
                      | (7U == (IData)(vlSelf->__PVT__alu_op))) 
                     | (6U == (IData)(vlSelf->__PVT__alu_op))) 
                    | (0U == (IData)(vlSelf->__PVT__alu_op))) 
                   | (5U == (IData)(vlSelf->__PVT__alu_op))) 
                  | (0x10U == (IData)(vlSelf->__PVT__alu_op))) 
                 | (0xeU == (IData)(vlSelf->__PVT__alu_op))) 
                | (0x17U == (IData)(vlSelf->__PVT__alu_op)))) {
        if ((8U == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__signed_alu_src1 = vlSelf->__PVT__alu_src1;
            vlSelf->__PVT__signed_alu_src2 = vlSelf->__PVT__alu_src2;
            vlSelf->__PVT__alu_res = (VL_LTS_IQQ(1,64,64, vlSelf->__PVT__signed_alu_src1, vlSelf->__PVT__signed_alu_src2)
                                       ? 1ULL : 0ULL);
        } else if ((7U == (IData)(vlSelf->__PVT__alu_op))) {
            __Vtemp20 = ((0U == (IData)(vlSelf->__PVT__rd_flag))
                          ? VL_SHIFTRS_QQQ(64,64,64, vlSelf->__PVT__alu_src1, vlSelf->__PVT__alu_src2)
                          : ((1U == (IData)(vlSelf->__PVT__rd_flag))
                              ? VL_SHIFTRS_QQQ(64,64,64, 
                                               VL_EXTENDS_QI(64,32, 
                                                             VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_src1, 0U, 0x20U)), vlSelf->__PVT__alu_src2)
                              : ((3U == (IData)(vlSelf->__PVT__rd_flag))
                                  ? VL_SHIFTRS_QQI(64,64,5, 
                                                   VL_EXTENDS_QI(64,32, 
                                                                 VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_src1, 0U, 0x20U)), 
                                                   (0x1fU 
                                                    & VL_SEL_IQII(5,64,6,32, vlSelf->__PVT__alu_src2, 0U, 5U)))
                                  : vlSelf->__PVT__alu_res)));
            vlSelf->__PVT__alu_res = __Vtemp20;
        } else if ((6U == (IData)(vlSelf->__PVT__alu_op))) {
            __Vtemp21 = ((0U == (IData)(vlSelf->__PVT__rd_flag))
                          ? VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__alu_src1, vlSelf->__PVT__alu_src2)
                          : ((1U == (IData)(vlSelf->__PVT__rd_flag))
                              ? VL_SHIFTR_QQQ(64,64,64, 
                                              VL_EXTEND_QI(64,32, 
                                                           VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_src1, 0U, 0x20U)), vlSelf->__PVT__alu_src2)
                              : ((2U == (IData)(vlSelf->__PVT__rd_flag))
                                  ? (VL_EXTEND_QI(64,32, 
                                                  VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_src1, 0U, 0x20U)) 
                                     >> (0x1fU & VL_SEL_IQII(5,64,6,32, vlSelf->__PVT__alu_src2, 0U, 5U)))
                                  : vlSelf->__PVT__alu_res)));
            vlSelf->__PVT__alu_res = __Vtemp21;
        } else if ((0U == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__alu_res = (vlSelf->__PVT__alu_src1 
                                      & vlSelf->__PVT__alu_src2);
        } else if ((5U == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__alu_res = VL_SHIFTL_QQQ(64,64,64, vlSelf->__PVT__alu_src1, vlSelf->__PVT__alu_src2);
            __Vtemp22 = VL_EXTEND_QI(64,32, VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_res, 0U, 0x20U));
            vlSelf->__PVT__alu_res = __Vtemp22;
        } else if ((0x10U == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__alu_res = VL_SHIFTL_QQQ(64,64,64, vlSelf->__PVT__alu_src1, vlSelf->__PVT__alu_src2);
        } else if ((0xeU == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__div64_valid = 1U;
            vlSelf->__PVT__div_signed = 0U;
            vlSelf->__PVT__alu_sec = 0U;
        } else {
            vlSelf->__PVT__div64_valid = 1U;
            vlSelf->__PVT__div_signed = 1U;
            vlSelf->__PVT__alu_sec = 0U;
        }
    } else if (((((((((0xfU == (IData)(vlSelf->__PVT__alu_op)) 
                      | (2U == (IData)(vlSelf->__PVT__alu_op))) 
                     | (1U == (IData)(vlSelf->__PVT__alu_op))) 
                    | (0x13U == (IData)(vlSelf->__PVT__alu_op))) 
                   | (0x14U == (IData)(vlSelf->__PVT__alu_op))) 
                  | (0x15U == (IData)(vlSelf->__PVT__alu_op))) 
                 | (0x16U == (IData)(vlSelf->__PVT__alu_op))) 
                | (0x18U == (IData)(vlSelf->__PVT__alu_op)))) {
        if ((0xfU == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__div64_valid = 1U;
            vlSelf->__PVT__div_signed = 0U;
            vlSelf->__PVT__alu_sec = 1U;
        } else if ((2U == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__alu_res = (vlSelf->__PVT__alu_src1 
                                      ^ vlSelf->__PVT__alu_src2);
        } else if ((1U == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__alu_res = (vlSelf->__PVT__alu_src1 
                                      | vlSelf->__PVT__alu_src2);
        } else if ((0x13U == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__mul_valid = 1U;
            vlSelf->__PVT__mul_expand_signed = vlSelf->__PVT__expand_signed;
        } else if ((0x14U == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__div32_valid = 1U;
            vlSelf->__PVT__div_signed = 0U;
            vlSelf->__PVT__alu_sec = 0U;
        } else if ((0x15U == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__signed_alu_src1 = VL_EXTENDS_QI(64,32, 
                                                           VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_src1, 0U, 0x20U));
            vlSelf->__PVT__signed_alu_src2 = VL_EXTENDS_QI(64,32, 
                                                           VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_src2, 0U, 0x20U));
            vlSelf->__PVT__div32_valid = 1U;
            vlSelf->__PVT__div_signed = 1U;
            vlSelf->__PVT__alu_sec = 1U;
        } else {
            __Vtemp23 = ((0x16U == (IData)(vlSelf->__PVT__alu_op))
                          ? ((1U == (IData)(vlSelf->__PVT__rd_flag))
                              ? vlSelf->__PVT__alu_src2
                              : ((2U == (IData)(vlSelf->__PVT__rd_flag))
                                  ? VL_EXTEND_QI(64,16, 
                                                 (0xffffU 
                                                  & VL_SEL_IQII(16,64,6,32, vlSelf->__PVT__alu_src2, 0U, 0x10U)))
                                  : ((3U == (IData)(vlSelf->__PVT__rd_flag))
                                      ? VL_EXTEND_QI(64,8, 
                                                     (0xffU 
                                                      & VL_SEL_IQII(8,64,6,32, vlSelf->__PVT__alu_src2, 0U, 8U)))
                                      : ((4U == (IData)(vlSelf->__PVT__rd_flag))
                                          ? VL_EXTEND_QI(64,32, 
                                                         VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_src2, 0U, 0x20U))
                                          : vlSelf->__PVT__alu_res))))
                          : vlSelf->__PVT__alu_src2);
            vlSelf->__PVT__alu_res = __Vtemp23;
        }
    } else if ((0x19U == (IData)(vlSelf->__PVT__alu_op))) {
        vlSelf->__PVT__alu_res = vlSelf->__PVT__alu_src2;
    } else {
        vlSelf->__PVT__alu_res = (vlSelf->__PVT__alu_src1 
                                  - vlSelf->__PVT__alu_src2);
        vlSelf->__PVT__zero = (0ULL == vlSelf->__PVT__alu_res);
    }
    vlSelf->__Vcellinp__u_div32__dividend = VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_src1, 0U, 0x20U);
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32.__PVT__divisor 
        = vlSelf->__Vcellinp__u_div32__divisor;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32.__PVT__div_valid 
        = vlSelf->__PVT__div32_valid;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64.__PVT__div_valid 
        = vlSelf->__PVT__div64_valid;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul.__PVT__mul_valid 
        = vlSelf->__PVT__mul_valid;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul.__PVT__mul_expand_signed 
        = vlSelf->__PVT__mul_expand_signed;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64.__PVT__alu_sec 
        = vlSelf->__PVT__alu_sec;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32.__PVT__alu_sec 
        = vlSelf->__PVT__alu_sec;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32.__PVT__dividend 
        = vlSelf->__Vcellinp__u_div32__dividend;
}

VL_INLINE_OPT void Vysyx_22040175_top_alu___combo__TOP__ysyx_22040175_top__u_ex_stage__u_alu__12(Vysyx_22040175_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_alu___combo__TOP__ysyx_22040175_top__u_ex_stage__u_alu__12\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp24;
    VlWide<5>/*159:0*/ __Vtemp25;
    VlWide<5>/*159:0*/ __Vtemp26;
    VlWide<5>/*159:0*/ __Vtemp27;
    VlWide<5>/*159:0*/ __Vtemp28;
    VlWide<5>/*159:0*/ __Vtemp29;
    VlWide<5>/*159:0*/ __Vtemp30;
    VlWide<5>/*159:0*/ __Vtemp31;
    VlWide<5>/*159:0*/ __Vtemp32;
    VlWide<5>/*159:0*/ __Vtemp33;
    VlWide<5>/*159:0*/ __Vtemp34;
    // Body
    vlSelf->__Vcellout__u_div32__div_res = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32.__PVT__div_res;
    vlSelf->__PVT__div_res64 = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64.__PVT__div_res;
    VL_ASSIGN_W(130,vlSelf->__PVT__mul_res, vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul.__PVT__mul_res);
    vlSelf->__PVT__div_res32 = VL_EXTEND_QI(64,32, vlSelf->__Vcellout__u_div32__div_res);
    VL_EXTEND_WQ(130,64, __Vtemp24, vlSelf->__PVT__div_res32);
    VL_EXTEND_WI(130,32, __Vtemp25, vlSelf->__PVT__delay_div_res32);
    VL_COND_WIWW(130,1,130,130, __Vtemp26, (IData)(vlSelf->__PVT__div_finish32), __Vtemp24, __Vtemp25);
    VL_EXTEND_WQ(130,64, __Vtemp27, vlSelf->__PVT__div_res64);
    VL_EXTEND_WQ(130,64, __Vtemp28, vlSelf->__PVT__delay_div_res64);
    VL_COND_WIWW(130,1,130,130, __Vtemp29, (IData)(vlSelf->__PVT__div_finish64), __Vtemp27, __Vtemp28);
    VL_COND_WIWW(130,1,130,130, __Vtemp30, (IData)(vlSelf->__PVT__sh_fnsh_flag), vlSelf->__PVT__mul_res, vlSelf->__PVT__delay_mul_res);
    VL_EXTEND_WQ(130,64, __Vtemp31, vlSelf->__PVT__alu_res);
    VL_COND_WIWW(130,1,130,130, __Vtemp32, (IData)(vlSelf->__PVT__mul_valid), __Vtemp30, __Vtemp31);
    VL_COND_WIWW(130,1,130,130, __Vtemp33, (IData)(vlSelf->__PVT__div64_valid), __Vtemp29, __Vtemp32);
    VL_COND_WIWW(130,1,130,130, __Vtemp34, (IData)(vlSelf->__PVT__div32_valid), __Vtemp26, __Vtemp33);
    vlSelf->__PVT__alu_res2 = VL_SEL_QWII(64,130,32,32, __Vtemp34, 0U, 0x40U);
    vlSelf->__PVT__alu_res_ex_sign = ((0U == (IData)(vlSelf->__PVT__expand_signed))
                                       ? vlSelf->__PVT__alu_res2
                                       : ((1U == (IData)(vlSelf->__PVT__expand_signed))
                                           ? VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__alu_res2, 0x1fU)), 0x20U), 
                                                           VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_res2, 0U, 0x20U))
                                           : ((2U == (IData)(vlSelf->__PVT__expand_signed))
                                               ? VL_EXTEND_QI(64,32, 
                                                              VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_res2, 0U, 0x20U))
                                               : ((3U 
                                                   == (IData)(vlSelf->__PVT__expand_signed))
                                                   ? 
                                                  VL_CONCAT_QQI(64,48,16, 
                                                                (0xffffffffffffULL 
                                                                 & VL_REPLICATE_QOI(48,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__alu_res2, 0xfU)), 0x30U)), 
                                                                (0xffffU 
                                                                 & VL_SEL_IQII(16,64,6,32, vlSelf->__PVT__alu_res2, 0U, 0x10U)))
                                                   : vlSelf->__PVT__alu_res2))));
}

VL_INLINE_OPT void Vysyx_22040175_top_alu___multiclk__TOP__ysyx_22040175_top__u_ex_stage__u_alu__13(Vysyx_22040175_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_alu___multiclk__TOP__ysyx_22040175_top__u_ex_stage__u_alu__13\n"); );
    // Body
    vlSelf->__PVT__div_finish = ((IData)(vlSelf->__PVT__div_finish32) 
                                 | (IData)(vlSelf->__PVT__div_finish64));
}
