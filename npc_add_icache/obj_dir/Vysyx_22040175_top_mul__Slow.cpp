// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_mul.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_mul___ctor_var_reset(Vysyx_22040175_top_mul* vlSelf);

Vysyx_22040175_top_mul::Vysyx_22040175_top_mul(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_mul___ctor_var_reset(this);
}

void Vysyx_22040175_top_mul::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_mul::~Vysyx_22040175_top_mul() {
}

void Vysyx_22040175_top_mul___settle__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul__1(Vysyx_22040175_top_mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vysyx_22040175_top_mul___settle__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul__1\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1;
    VlWide<5>/*159:0*/ __Vtemp2;
    VlWide<5>/*159:0*/ __Vtemp3;
    VlWide<5>/*159:0*/ __Vtemp4;
    CData/*31:0*/ __Vtemp5;
    VlWide<5>/*159:0*/ __Vtemp6;
    CData/*31:0*/ __Vtemp7;
    VlWide<5>/*159:0*/ __Vtemp8;
    CData/*31:0*/ __Vtemp9;
    VlWide<5>/*159:0*/ __Vtemp10;
    CData/*31:0*/ __Vtemp11;
    VlWide<5>/*159:0*/ __Vtemp12;
    VlWide<5>/*159:0*/ __Vtemp13;
    VlWide<5>/*159:0*/ __Vtemp14;
    VlWide<5>/*159:0*/ __Vtemp15;
    VlWide<5>/*159:0*/ __Vtemp16;
    // Body
    VL_EXTEND_WQ(130,64, __Vtemp1, VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                            (1U 
                                                                             & VL_BITSEL_IWII(1,130,8,32, vlSelf->__PVT__p, 0x1fU)), 0x20U), 
                                                 VL_SEL_IWII(32,130,8,32, vlSelf->__PVT__p, 0U, 0x20U)));
    VL_EXTEND_WI(130,32, __Vtemp2, VL_SEL_IWII(32,130,8,32, vlSelf->__PVT__p, 0U, 0x20U));
    VL_EXTEND_WQ(130,64, __Vtemp3, VL_CONCAT_QQI(64,48,16, 
                                                 (0xffffffffffffULL 
                                                  & VL_REPLICATE_QOI(48,1,32,
                                                                     (1U 
                                                                      & VL_BITSEL_IWII(1,130,8,32, vlSelf->__PVT__p, 0xfU)), 0x30U)), 
                                                 (0xffffU 
                                                  & VL_SEL_IWII(16,130,8,32, vlSelf->__PVT__p, 0U, 0x10U))));
    VL_CONST_W_1X(130,__Vtemp4,0x00000000);
    __Vtemp5 = (3U == (IData)(vlSelf->__PVT__mul_expand_signed));
    VL_COND_WIWW(130,1,130,130, __Vtemp6, __Vtemp5, __Vtemp3, __Vtemp4);
    __Vtemp7 = (2U == (IData)(vlSelf->__PVT__mul_expand_signed));
    VL_COND_WIWW(130,1,130,130, __Vtemp8, __Vtemp7, __Vtemp2, __Vtemp6);
    __Vtemp9 = (1U == (IData)(vlSelf->__PVT__mul_expand_signed));
    VL_COND_WIWW(130,1,130,130, __Vtemp10, __Vtemp9, __Vtemp1, __Vtemp8);
    __Vtemp11 = (0U == (IData)(vlSelf->__PVT__mul_expand_signed));
    VL_COND_WIWW(130,1,130,130, __Vtemp12, __Vtemp11, vlSelf->__PVT__p, __Vtemp10);
    VL_CONST_W_1X(130,__Vtemp13,0x00000000);
    VL_COND_WIWW(130,1,130,130, __Vtemp14, (IData)(vlSelf->__PVT__sh_fnsh_flag), __Vtemp12, __Vtemp13);
    VL_ASSIGN_W(130,vlSelf->__PVT__ex_p, __Vtemp14);
    VL_CONST_W_1X(130,__Vtemp15,0x00000000);
    VL_COND_WIWW(130,1,130,130, __Vtemp16, (IData)(vlSelf->__PVT__sh_fnsh_flag), vlSelf->__PVT__ex_p, __Vtemp15);
    VL_ASSIGN_W(130,vlSelf->__PVT__mul_res, __Vtemp16);
}

void Vysyx_22040175_top_mul___settle__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul__3(Vysyx_22040175_top_mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vysyx_22040175_top_mul___settle__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp137;
    VlWide<3>/*95:0*/ __Vtemp138;
    VlWide<3>/*95:0*/ __Vtemp139;
    VlWide<5>/*159:0*/ __Vtemp140;
    VlWide<3>/*95:0*/ __Vtemp141;
    VlWide<3>/*95:0*/ __Vtemp142;
    VlWide<3>/*95:0*/ __Vtemp143;
    VlWide<3>/*95:0*/ __Vtemp144;
    VlWide<5>/*159:0*/ __Vtemp145;
    VlWide<3>/*95:0*/ __Vtemp146;
    VlWide<5>/*159:0*/ __Vtemp147;
    VlWide<3>/*95:0*/ __Vtemp148;
    VlWide<5>/*159:0*/ __Vtemp149;
    VlWide<3>/*95:0*/ __Vtemp150;
    VlWide<5>/*159:0*/ __Vtemp151;
    VlWide<5>/*159:0*/ __Vtemp152;
    VlWide<5>/*159:0*/ __Vtemp153;
    VlWide<5>/*159:0*/ __Vtemp154;
    // Body
    if (((IData)(vlSelf->__PVT__mul_valid) & ((~ (IData)(vlSelf->__PVT__delay_mul_valid)) 
                                              | (IData)(vlSelf->__PVT__delay2_sh_fg)))) {
        if ((0U == (IData)(vlSelf->__PVT__mul_signed))) {
            VL_CONST_W_3X(96,__Vtemp137,0x00000003,0xffffffff,0xffffffff);
            VL_REPLICATE_WII(66,1,32, __Vtemp138, (1U 
                                                   & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__alu_src1, 0x3fU)), 0x42U);
            VL_AND_W(3, __Vtemp139, __Vtemp137, __Vtemp138);
            VL_CONCAT_WWQ(130,66,64, __Vtemp140, __Vtemp139, vlSelf->__PVT__alu_src1);
            VL_ASSIGN_W(130,vlSelf->__PVT__alu_x, __Vtemp140);
            VL_CONCAT_WIQ(66,2,64, __Vtemp141, (3U 
                                                & VL_REPLICATE_IOI(2,1,32,
                                                                   (1U 
                                                                    & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__alu_src2, 0x3fU)), 2U)), vlSelf->__PVT__alu_src2);
            VL_ASSIGN_W(66,vlSelf->__PVT__alu_y, __Vtemp141);
        } else if ((1U == (IData)(vlSelf->__PVT__mul_signed))) {
            VL_CONST_W_3X(96,__Vtemp142,0x00000003,0xffffffff,0xffffffff);
            VL_REPLICATE_WII(66,1,32, __Vtemp143, (1U 
                                                   & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__alu_src1, 0x3fU)), 0x42U);
            VL_AND_W(3, __Vtemp144, __Vtemp142, __Vtemp143);
            VL_CONCAT_WWQ(130,66,64, __Vtemp145, __Vtemp144, vlSelf->__PVT__alu_src1);
            VL_ASSIGN_W(130,vlSelf->__PVT__alu_x, __Vtemp145);
            VL_EXTEND_WQ(66,64, __Vtemp146, vlSelf->__PVT__alu_src2);
            VL_ASSIGN_W(66,vlSelf->__PVT__alu_y, __Vtemp146);
        } else if ((2U == (IData)(vlSelf->__PVT__mul_signed))) {
            VL_EXTEND_WQ(130,64, __Vtemp147, vlSelf->__PVT__alu_src1);
            VL_ASSIGN_W(130,vlSelf->__PVT__alu_x, __Vtemp147);
            VL_CONCAT_WIQ(66,2,64, __Vtemp148, (3U 
                                                & VL_REPLICATE_IOI(2,1,32,
                                                                   (1U 
                                                                    & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__alu_src2, 0x3fU)), 2U)), vlSelf->__PVT__alu_src2);
            VL_ASSIGN_W(66,vlSelf->__PVT__alu_y, __Vtemp148);
        } else {
            VL_EXTEND_WQ(130,64, __Vtemp149, vlSelf->__PVT__alu_src1);
            VL_ASSIGN_W(130,vlSelf->__PVT__alu_x, __Vtemp149);
            VL_EXTEND_WQ(66,64, __Vtemp150, vlSelf->__PVT__alu_src2);
            VL_ASSIGN_W(66,vlSelf->__PVT__alu_y, __Vtemp150);
        }
    } else {
        VL_ASSIGN_W(130,vlSelf->__PVT__alu_x, vlSelf->__PVT__no_latch_x);
        VL_ASSIGN_W(66,vlSelf->__PVT__alu_y, vlSelf->__PVT__no_latch_y);
    }
    VL_CONST_W_1X(130,__Vtemp151,0x00000007);
    VL_CONST_W_1X(130,__Vtemp152,0x00000000);
    VL_CONST_W_1X(130,__Vtemp153,0x00000007);
    VL_CONST_W_1X(130,__Vtemp154,0x00000000);
    vlSelf->__PVT__next_state = ((0U == (IData)(vlSelf->__PVT__present_state))
                                  ? (((IData)(vlSelf->__PVT__mul_valid) 
                                      & ((~ (IData)(vlSelf->__PVT__delay_mul_valid)) 
                                         | (IData)(vlSelf->__PVT__delay2_sh_fg)))
                                      ? 1U : 0U) : 
                                 ((1U == (IData)(vlSelf->__PVT__present_state))
                                   ? (((VL_EQ_W(5, __Vtemp151, vlSelf->__PVT__delay_alu_y) 
                                        & (~ VL_BITSEL_IIII(1,2,1,32, (IData)(vlSelf->__PVT__mul_signed), 0U))) 
                                       | (VL_EQ_W(5, __Vtemp152, vlSelf->__PVT__delay_alu_y) 
                                          & VL_BITSEL_IIII(1,2,1,32, (IData)(vlSelf->__PVT__mul_signed), 0U)))
                                       ? 3U : 2U) : 
                                  ((2U == (IData)(vlSelf->__PVT__present_state))
                                    ? (((VL_EQ_W(5, __Vtemp153, vlSelf->__PVT__delay_alu_y) 
                                         & (~ VL_BITSEL_IIII(1,2,1,32, (IData)(vlSelf->__PVT__mul_signed), 0U))) 
                                        | (VL_EQ_W(5, __Vtemp154, vlSelf->__PVT__delay_alu_y) 
                                           & VL_BITSEL_IIII(1,2,1,32, (IData)(vlSelf->__PVT__mul_signed), 0U)))
                                        ? 3U : 2U) : 0U)));
}

void Vysyx_22040175_top_mul___ctor_var_reset(Vysyx_22040175_top_mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vysyx_22040175_top_mul___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_signed = VL_RAND_RESET_I(2);
    vlSelf->__PVT__mul_expand_signed = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(130, vlSelf->__PVT__mul_res);
    vlSelf->__PVT__sh_fnsh_flag = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(130, vlSelf->__PVT__alu_x);
    VL_RAND_RESET_W(66, vlSelf->__PVT__alu_y);
    VL_RAND_RESET_W(130, vlSelf->__PVT__no_latch_x);
    VL_RAND_RESET_W(66, vlSelf->__PVT__no_latch_y);
    vlSelf->__PVT__delay_mul_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__delay1_sh_fg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__delay2_sh_fg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__present_state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__next_state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(130, vlSelf->__PVT__x);
    vlSelf->__PVT__y = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(130, vlSelf->__PVT__add_p);
    VL_RAND_RESET_W(130, vlSelf->__PVT__reg_alu_y);
    VL_RAND_RESET_W(130, vlSelf->__PVT__delay_alu_y);
    VL_RAND_RESET_W(130, vlSelf->__PVT__p);
    VL_RAND_RESET_W(130, vlSelf->__PVT__ex_p);
    VL_RAND_RESET_W(130, vlSelf->__Vdly__no_latch_x);
    VL_RAND_RESET_W(66, vlSelf->__Vdly__no_latch_y);
    vlSelf->__Vdly__delay_mul_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__delay1_sh_fg = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__delay2_sh_fg = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__present_state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(130, vlSelf->__Vdly__x);
    vlSelf->__Vdly__y = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__sh_fnsh_flag = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(130, vlSelf->__Vdly__add_p);
    VL_RAND_RESET_W(130, vlSelf->__Vdly__p);
    VL_RAND_RESET_W(130, vlSelf->__Vdly__reg_alu_y);
    VL_RAND_RESET_W(130, vlSelf->__Vdly__delay_alu_y);
}
