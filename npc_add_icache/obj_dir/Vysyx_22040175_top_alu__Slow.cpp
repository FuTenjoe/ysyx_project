// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_alu.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_alu___ctor_var_reset(Vysyx_22040175_top_alu* vlSelf);

Vysyx_22040175_top_alu::Vysyx_22040175_top_alu(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_alu___ctor_var_reset(this);
}

void Vysyx_22040175_top_alu::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_alu::~Vysyx_22040175_top_alu() {
}

void Vysyx_22040175_top_alu___settle__TOP__ysyx_22040175_top__u_ex_stage__u_alu__1(Vysyx_22040175_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_alu___settle__TOP__ysyx_22040175_top__u_ex_stage__u_alu__1\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32.__PVT__rstn 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64.__PVT__rstn 
        = vlSelf->__PVT__rst_n;
    vlSelf->__PVT__sh_fnsh_flag = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul.__PVT__sh_fnsh_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
}

void Vysyx_22040175_top_alu___settle__TOP__ysyx_22040175_top__u_ex_stage__u_alu__2(Vysyx_22040175_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_alu___settle__TOP__ysyx_22040175_top__u_ex_stage__u_alu__2\n"); );
    // Variables
    QData/*63:0*/ __Vtemp1;
    QData/*63:0*/ __Vtemp2;
    QData/*63:0*/ __Vtemp3;
    QData/*63:0*/ __Vtemp4;
    QData/*63:0*/ __Vtemp5;
    QData/*63:0*/ __Vtemp6;
    // Body
    vlSelf->__PVT__div_finish64 = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64.__PVT__res_rdy;
    vlSelf->__PVT__div_finish32 = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32.__PVT__res_rdy;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64.__PVT__clk 
        = vlSelf->__PVT__clk;
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
                __Vtemp1 = VL_EXTEND_QI(64,32, VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_res, 0U, 0x20U));
                vlSelf->__PVT__alu_res = __Vtemp1;
            } else {
                __Vtemp2 = ((3U == (IData)(vlSelf->__PVT__rd_flag))
                             ? (vlSelf->__PVT__alu_src1 
                                + vlSelf->__PVT__alu_src2)
                             : ((5U == (IData)(vlSelf->__PVT__rd_flag))
                                 ? vlSelf->__PVT__alu_src2
                                 : vlSelf->__PVT__alu_res));
                vlSelf->__PVT__alu_res = __Vtemp2;
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
            __Vtemp3 = ((0U == (IData)(vlSelf->__PVT__rd_flag))
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
            vlSelf->__PVT__alu_res = __Vtemp3;
        } else if ((6U == (IData)(vlSelf->__PVT__alu_op))) {
            __Vtemp4 = ((0U == (IData)(vlSelf->__PVT__rd_flag))
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
            vlSelf->__PVT__alu_res = __Vtemp4;
        } else if ((0U == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__alu_res = (vlSelf->__PVT__alu_src1 
                                      & vlSelf->__PVT__alu_src2);
        } else if ((5U == (IData)(vlSelf->__PVT__alu_op))) {
            vlSelf->__PVT__alu_res = VL_SHIFTL_QQQ(64,64,64, vlSelf->__PVT__alu_src1, vlSelf->__PVT__alu_src2);
            __Vtemp5 = VL_EXTEND_QI(64,32, VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_res, 0U, 0x20U));
            vlSelf->__PVT__alu_res = __Vtemp5;
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
            __Vtemp6 = ((0x16U == (IData)(vlSelf->__PVT__alu_op))
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
            vlSelf->__PVT__alu_res = __Vtemp6;
        }
    } else if ((0x19U == (IData)(vlSelf->__PVT__alu_op))) {
        vlSelf->__PVT__alu_res = vlSelf->__PVT__alu_src2;
    } else {
        vlSelf->__PVT__alu_res = (vlSelf->__PVT__alu_src1 
                                  - vlSelf->__PVT__alu_src2);
        vlSelf->__PVT__zero = (0ULL == vlSelf->__PVT__alu_res);
    }
    vlSelf->__Vcellinp__u_div32__dividend = VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__alu_src1, 0U, 0x20U);
    vlSelf->__PVT__div_finish = ((IData)(vlSelf->__PVT__div_finish32) 
                                 | (IData)(vlSelf->__PVT__div_finish64));
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

void Vysyx_22040175_top_alu___settle__TOP__ysyx_22040175_top__u_ex_stage__u_alu__3(Vysyx_22040175_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_alu___settle__TOP__ysyx_22040175_top__u_ex_stage__u_alu__3\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp7;
    VlWide<5>/*159:0*/ __Vtemp8;
    VlWide<5>/*159:0*/ __Vtemp9;
    VlWide<5>/*159:0*/ __Vtemp10;
    VlWide<5>/*159:0*/ __Vtemp11;
    VlWide<5>/*159:0*/ __Vtemp12;
    VlWide<5>/*159:0*/ __Vtemp13;
    VlWide<5>/*159:0*/ __Vtemp14;
    VlWide<5>/*159:0*/ __Vtemp15;
    VlWide<5>/*159:0*/ __Vtemp16;
    VlWide<5>/*159:0*/ __Vtemp17;
    // Body
    vlSelf->__Vcellout__u_div32__div_res = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div32.__PVT__div_res;
    vlSelf->__PVT__div_res64 = vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_div64.__PVT__div_res;
    VL_ASSIGN_W(130,vlSelf->__PVT__mul_res, vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul.__PVT__mul_res);
    vlSelf->__PVT__div_res32 = VL_EXTEND_QI(64,32, vlSelf->__Vcellout__u_div32__div_res);
    VL_EXTEND_WQ(130,64, __Vtemp7, vlSelf->__PVT__div_res32);
    VL_EXTEND_WI(130,32, __Vtemp8, vlSelf->__PVT__delay_div_res32);
    VL_COND_WIWW(130,1,130,130, __Vtemp9, (IData)(vlSelf->__PVT__div_finish32), __Vtemp7, __Vtemp8);
    VL_EXTEND_WQ(130,64, __Vtemp10, vlSelf->__PVT__div_res64);
    VL_EXTEND_WQ(130,64, __Vtemp11, vlSelf->__PVT__delay_div_res64);
    VL_COND_WIWW(130,1,130,130, __Vtemp12, (IData)(vlSelf->__PVT__div_finish64), __Vtemp10, __Vtemp11);
    VL_COND_WIWW(130,1,130,130, __Vtemp13, (IData)(vlSelf->__PVT__sh_fnsh_flag), vlSelf->__PVT__mul_res, vlSelf->__PVT__delay_mul_res);
    VL_EXTEND_WQ(130,64, __Vtemp14, vlSelf->__PVT__alu_res);
    VL_COND_WIWW(130,1,130,130, __Vtemp15, (IData)(vlSelf->__PVT__mul_valid), __Vtemp13, __Vtemp14);
    VL_COND_WIWW(130,1,130,130, __Vtemp16, (IData)(vlSelf->__PVT__div64_valid), __Vtemp12, __Vtemp15);
    VL_COND_WIWW(130,1,130,130, __Vtemp17, (IData)(vlSelf->__PVT__div32_valid), __Vtemp9, __Vtemp16);
    vlSelf->__PVT__alu_res2 = VL_SEL_QWII(64,130,32,32, __Vtemp17, 0U, 0x40U);
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

void Vysyx_22040175_top_alu___initial__TOP__ysyx_22040175_top__u_ex_stage__u_alu__5(Vysyx_22040175_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_alu___initial__TOP__ysyx_22040175_top__u_ex_stage__u_alu__5\n"); );
    // Body
    vlSelf->__PVT__mul_signed = 3U;
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul.__PVT__mul_signed 
        = vlSelf->__PVT__mul_signed;
}

void Vysyx_22040175_top_alu___settle__TOP__ysyx_22040175_top__u_ex_stage__u_alu__10(Vysyx_22040175_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_alu___settle__TOP__ysyx_22040175_top__u_ex_stage__u_alu__10\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul.__PVT__mul_signed 
        = vlSelf->__PVT__mul_signed;
}

void Vysyx_22040175_top_alu___ctor_var_reset(Vysyx_22040175_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_alu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_op = VL_RAND_RESET_I(5);
    vlSelf->__PVT__alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_res_ex_sign = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__rd_flag = VL_RAND_RESET_I(3);
    vlSelf->__PVT__expand_signed = VL_RAND_RESET_I(4);
    vlSelf->__PVT__sh_fnsh_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_finish = VL_RAND_RESET_I(1);
    vlSelf->__PVT__zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_res = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__signed_alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__signed_alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mul_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(130, vlSelf->__PVT__mul_res);
    vlSelf->__PVT__mul_expand_signed = VL_RAND_RESET_I(4);
    vlSelf->__PVT__div32_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_signed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_sec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_res = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__div64_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_res32 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__div_res64 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__div_finish32 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_finish64 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_res2 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(130, vlSelf->__PVT__delay_mul_res);
    vlSelf->__PVT__delay_sh_fg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__delay_div_res64 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__delay_div_res32 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mul_signed = VL_RAND_RESET_I(2);
    vlSelf->__Vcellout__u_div32__div_res = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__u_div32__divisor = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__u_div32__dividend = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__delay_sh_fg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(130, vlSelf->__Vdly__delay_mul_res);
    vlSelf->__Vdly__delay_div_res32 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__delay_div_res64 = VL_RAND_RESET_Q(64);
}
