// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_mul.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_mul___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul__2(Vysyx_22040175_top_mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vysyx_22040175_top_mul___sequent__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul__2\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp17;
    VlWide<5>/*159:0*/ __Vtemp18;
    VlWide<5>/*159:0*/ __Vtemp19;
    VlWide<5>/*159:0*/ __Vtemp20;
    VlWide<5>/*159:0*/ __Vtemp21;
    VlWide<5>/*159:0*/ __Vtemp22;
    VlWide<5>/*159:0*/ __Vtemp23;
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
    VlWide<5>/*159:0*/ __Vtemp35;
    VlWide<5>/*159:0*/ __Vtemp36;
    VlWide<5>/*159:0*/ __Vtemp37;
    VlWide<5>/*159:0*/ __Vtemp38;
    VlWide<5>/*159:0*/ __Vtemp39;
    VlWide<5>/*159:0*/ __Vtemp40;
    VlWide<5>/*159:0*/ __Vtemp41;
    VlWide<5>/*159:0*/ __Vtemp42;
    VlWide<5>/*159:0*/ __Vtemp43;
    VlWide<5>/*159:0*/ __Vtemp44;
    VlWide<5>/*159:0*/ __Vtemp45;
    VlWide<5>/*159:0*/ __Vtemp46;
    VlWide<5>/*159:0*/ __Vtemp47;
    VlWide<5>/*159:0*/ __Vtemp48;
    VlWide<5>/*159:0*/ __Vtemp49;
    VlWide<5>/*159:0*/ __Vtemp50;
    VlWide<5>/*159:0*/ __Vtemp51;
    VlWide<5>/*159:0*/ __Vtemp52;
    VlWide<5>/*159:0*/ __Vtemp53;
    VlWide<5>/*159:0*/ __Vtemp54;
    VlWide<5>/*159:0*/ __Vtemp55;
    VlWide<5>/*159:0*/ __Vtemp56;
    VlWide<5>/*159:0*/ __Vtemp57;
    VlWide<5>/*159:0*/ __Vtemp58;
    VlWide<5>/*159:0*/ __Vtemp59;
    VlWide<5>/*159:0*/ __Vtemp60;
    VlWide<5>/*159:0*/ __Vtemp61;
    VlWide<5>/*159:0*/ __Vtemp62;
    VlWide<5>/*159:0*/ __Vtemp63;
    VlWide<5>/*159:0*/ __Vtemp64;
    VlWide<5>/*159:0*/ __Vtemp65;
    VlWide<5>/*159:0*/ __Vtemp66;
    VlWide<5>/*159:0*/ __Vtemp67;
    VlWide<5>/*159:0*/ __Vtemp68;
    VlWide<5>/*159:0*/ __Vtemp69;
    VlWide<5>/*159:0*/ __Vtemp70;
    VlWide<5>/*159:0*/ __Vtemp71;
    VlWide<5>/*159:0*/ __Vtemp72;
    VlWide<5>/*159:0*/ __Vtemp73;
    VlWide<5>/*159:0*/ __Vtemp74;
    VlWide<5>/*159:0*/ __Vtemp75;
    VlWide<5>/*159:0*/ __Vtemp76;
    VlWide<5>/*159:0*/ __Vtemp77;
    VlWide<5>/*159:0*/ __Vtemp78;
    VlWide<5>/*159:0*/ __Vtemp79;
    VlWide<5>/*159:0*/ __Vtemp80;
    VlWide<5>/*159:0*/ __Vtemp81;
    VlWide<5>/*159:0*/ __Vtemp82;
    VlWide<5>/*159:0*/ __Vtemp83;
    VlWide<5>/*159:0*/ __Vtemp84;
    VlWide<5>/*159:0*/ __Vtemp85;
    VlWide<5>/*159:0*/ __Vtemp86;
    VlWide<5>/*159:0*/ __Vtemp87;
    VlWide<5>/*159:0*/ __Vtemp88;
    VlWide<5>/*159:0*/ __Vtemp89;
    VlWide<5>/*159:0*/ __Vtemp90;
    VlWide<5>/*159:0*/ __Vtemp91;
    VlWide<5>/*159:0*/ __Vtemp92;
    VlWide<5>/*159:0*/ __Vtemp93;
    VlWide<5>/*159:0*/ __Vtemp94;
    VlWide<5>/*159:0*/ __Vtemp95;
    VlWide<5>/*159:0*/ __Vtemp96;
    VlWide<5>/*159:0*/ __Vtemp97;
    VlWide<5>/*159:0*/ __Vtemp98;
    VlWide<5>/*159:0*/ __Vtemp99;
    VlWide<5>/*159:0*/ __Vtemp100;
    VlWide<5>/*159:0*/ __Vtemp101;
    VlWide<5>/*159:0*/ __Vtemp102;
    VlWide<5>/*159:0*/ __Vtemp103;
    VlWide<5>/*159:0*/ __Vtemp104;
    VlWide<5>/*159:0*/ __Vtemp105;
    VlWide<5>/*159:0*/ __Vtemp106;
    VlWide<5>/*159:0*/ __Vtemp107;
    VlWide<5>/*159:0*/ __Vtemp108;
    VlWide<5>/*159:0*/ __Vtemp109;
    VlWide<5>/*159:0*/ __Vtemp110;
    VlWide<5>/*159:0*/ __Vtemp111;
    VlWide<5>/*159:0*/ __Vtemp112;
    VlWide<5>/*159:0*/ __Vtemp113;
    VlWide<5>/*159:0*/ __Vtemp114;
    VlWide<5>/*159:0*/ __Vtemp115;
    VlWide<5>/*159:0*/ __Vtemp116;
    VlWide<5>/*159:0*/ __Vtemp117;
    VlWide<5>/*159:0*/ __Vtemp118;
    VlWide<5>/*159:0*/ __Vtemp119;
    VlWide<5>/*159:0*/ __Vtemp120;
    VlWide<5>/*159:0*/ __Vtemp121;
    VlWide<5>/*159:0*/ __Vtemp122;
    VlWide<5>/*159:0*/ __Vtemp123;
    VlWide<5>/*159:0*/ __Vtemp124;
    VlWide<5>/*159:0*/ __Vtemp125;
    VlWide<5>/*159:0*/ __Vtemp126;
    VlWide<5>/*159:0*/ __Vtemp127;
    VlWide<5>/*159:0*/ __Vtemp128;
    VlWide<5>/*159:0*/ __Vtemp129;
    VlWide<5>/*159:0*/ __Vtemp130;
    VlWide<5>/*159:0*/ __Vtemp131;
    VlWide<5>/*159:0*/ __Vtemp132;
    VlWide<5>/*159:0*/ __Vtemp133;
    VlWide<5>/*159:0*/ __Vtemp134;
    VlWide<5>/*159:0*/ __Vtemp135;
    VlWide<5>/*159:0*/ __Vtemp136;
    // Body
    VL_ASSIGN_W(66,vlSelf->__Vdly__no_latch_y, vlSelf->__PVT__no_latch_y);
    VL_ASSIGN_W(130,vlSelf->__Vdly__no_latch_x, vlSelf->__PVT__no_latch_x);
    VL_ASSIGN_W(130,vlSelf->__Vdly__reg_alu_y, vlSelf->__PVT__reg_alu_y);
    vlSelf->__Vdly__y = vlSelf->__PVT__y;
    VL_ASSIGN_W(130,vlSelf->__Vdly__x, vlSelf->__PVT__x);
    VL_ASSIGN_W(130,vlSelf->__Vdly__add_p, vlSelf->__PVT__add_p);
    VL_ASSIGN_W(130,vlSelf->__Vdly__delay_alu_y, vlSelf->__PVT__delay_alu_y);
    VL_ASSIGN_W(130,vlSelf->__Vdly__p, vlSelf->__PVT__p);
    vlSelf->__Vdly__delay1_sh_fg = vlSelf->__PVT__delay1_sh_fg;
    vlSelf->__Vdly__delay2_sh_fg = vlSelf->__PVT__delay2_sh_fg;
    vlSelf->__Vdly__delay_mul_valid = vlSelf->__PVT__delay_mul_valid;
    if (vlSelf->__PVT__rst_n) {
        VL_ASSIGN_W(130,vlSelf->__Vdly__no_latch_x, vlSelf->__PVT__alu_x);
        VL_ASSIGN_W(66,vlSelf->__Vdly__no_latch_y, vlSelf->__PVT__alu_y);
    } else {
        VL_CONST_W_1X(130,vlSelf->__Vdly__no_latch_x,0x00000000);
        VL_CONST_W_1X(66,vlSelf->__Vdly__no_latch_y,0x00000000);
    }
    if (vlSelf->__PVT__rst_n) {
        vlSelf->__Vdly__delay_mul_valid = vlSelf->__PVT__mul_valid;
        vlSelf->__Vdly__delay1_sh_fg = vlSelf->__PVT__sh_fnsh_flag;
        vlSelf->__Vdly__delay2_sh_fg = vlSelf->__PVT__delay1_sh_fg;
    } else {
        vlSelf->__Vdly__delay_mul_valid = 0U;
        vlSelf->__Vdly__delay1_sh_fg = 0U;
        vlSelf->__Vdly__delay2_sh_fg = 0U;
    }
    VL_ASSIGN_W(130,vlSelf->__PVT__no_latch_x, vlSelf->__Vdly__no_latch_x);
    VL_ASSIGN_W(66,vlSelf->__PVT__no_latch_y, vlSelf->__Vdly__no_latch_y);
    vlSelf->__PVT__delay1_sh_fg = vlSelf->__Vdly__delay1_sh_fg;
    vlSelf->__PVT__delay_mul_valid = vlSelf->__Vdly__delay_mul_valid;
    vlSelf->__PVT__delay2_sh_fg = vlSelf->__Vdly__delay2_sh_fg;
    vlSelf->__Vdly__sh_fnsh_flag = vlSelf->__PVT__sh_fnsh_flag;
    if (vlSelf->__PVT__rst_n) {
        if ((0U == (IData)(vlSelf->__PVT__present_state))) {
            VL_CONST_W_1X(130,vlSelf->__Vdly__x,0x00000000);
            vlSelf->__Vdly__y = 0U;
            vlSelf->__Vdly__sh_fnsh_flag = 0U;
            VL_CONST_W_1X(130,vlSelf->__Vdly__add_p,0x00000000);
            VL_CONST_W_1X(130,vlSelf->__Vdly__p,0x00000000);
            VL_EXTEND_WW(130,66, __Vtemp17, vlSelf->__PVT__alu_y);
            VL_ASSIGN_W(130,vlSelf->__Vdly__reg_alu_y, __Vtemp17);
            VL_EXTEND_WW(130,66, __Vtemp18, vlSelf->__PVT__alu_y);
            VL_ASSIGN_W(130,vlSelf->__Vdly__delay_alu_y, __Vtemp18);
        } else if ((1U == (IData)(vlSelf->__PVT__present_state))) {
            VL_ASSIGN_W(130,vlSelf->__Vdly__x, vlSelf->__PVT__alu_x);
            vlSelf->__Vdly__y = VL_CONCAT_III(3,1,2, 
                                              (1U & 
                                               VL_BITSEL_IWII(1,66,7,32, vlSelf->__PVT__alu_y, 1U)), 
                                              VL_CONCAT_III(2,1,1, 
                                                            (1U 
                                                             & VL_BITSEL_IWII(1,66,7,32, vlSelf->__PVT__alu_y, 0U)), 0U));
            VL_CONST_W_5X(160,__Vtemp19,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
            VL_EXTEND_WW(130,66, __Vtemp20, vlSelf->__PVT__alu_y);
            VL_SHIFTR_WWI(130,130,3, __Vtemp21, __Vtemp20, 2U);
            VL_AND_W(5, __Vtemp22, __Vtemp19, __Vtemp21);
            VL_ASSIGN_W(130,vlSelf->__Vdly__reg_alu_y, __Vtemp22);
            VL_CONST_W_5X(160,__Vtemp23,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
            VL_SHIFTR_WWI(130,130,3, __Vtemp24, vlSelf->__PVT__reg_alu_y, 1U);
            VL_AND_W(5, __Vtemp25, __Vtemp23, __Vtemp24);
            VL_ASSIGN_W(130,vlSelf->__Vdly__delay_alu_y, __Vtemp25);
            vlSelf->__Vdly__sh_fnsh_flag = 0U;
            if (((0U == (IData)(vlSelf->__PVT__y)) 
                 | (7U == (IData)(vlSelf->__PVT__y)))) {
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, vlSelf->__PVT__p);
                VL_CONST_W_1X(130,vlSelf->__Vdly__add_p,0x00000000);
            } else if (((1U == (IData)(vlSelf->__PVT__y)) 
                        | (2U == (IData)(vlSelf->__PVT__y)))) {
                VL_CONST_W_5X(160,__Vtemp26,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_ADD_W(5, __Vtemp27, vlSelf->__PVT__p, vlSelf->__PVT__x);
                VL_AND_W(5, __Vtemp28, __Vtemp26, __Vtemp27);
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, __Vtemp28);
                VL_ASSIGN_W(130,vlSelf->__Vdly__add_p, vlSelf->__PVT__x);
            } else if ((3U == (IData)(vlSelf->__PVT__y))) {
                VL_CONST_W_5X(160,__Vtemp29,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_SHIFTL_WWI(130,130,1, __Vtemp30, vlSelf->__PVT__x, 1U);
                VL_ADD_W(5, __Vtemp31, vlSelf->__PVT__p, __Vtemp30);
                VL_AND_W(5, __Vtemp32, __Vtemp29, __Vtemp31);
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, __Vtemp32);
                VL_CONST_W_5X(160,__Vtemp33,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_SHIFTL_WWI(130,130,1, __Vtemp34, vlSelf->__PVT__x, 1U);
                VL_AND_W(5, __Vtemp35, __Vtemp33, __Vtemp34);
                VL_ASSIGN_W(130,vlSelf->__Vdly__add_p, __Vtemp35);
            } else if ((4U == (IData)(vlSelf->__PVT__y))) {
                VL_CONST_W_5X(160,__Vtemp36,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_CONST_W_1X(130,__Vtemp37,0x00000001);
                VL_SHIFTL_WWI(130,130,1, __Vtemp38, vlSelf->__PVT__x, 1U);
                VL_NOT_W(5, __Vtemp39, __Vtemp38);
                VL_ADD_W(5, __Vtemp40, vlSelf->__PVT__p, __Vtemp39);
                VL_ADD_W(5, __Vtemp41, __Vtemp37, __Vtemp40);
                VL_AND_W(5, __Vtemp42, __Vtemp36, __Vtemp41);
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, __Vtemp42);
                VL_CONST_W_5X(160,__Vtemp43,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_CONST_W_1X(130,__Vtemp44,0x00000001);
                VL_SHIFTL_WWI(130,130,1, __Vtemp45, vlSelf->__PVT__x, 1U);
                VL_NOT_W(5, __Vtemp46, __Vtemp45);
                VL_ADD_W(5, __Vtemp47, __Vtemp44, __Vtemp46);
                VL_AND_W(5, __Vtemp48, __Vtemp43, __Vtemp47);
                VL_ASSIGN_W(130,vlSelf->__Vdly__add_p, __Vtemp48);
            } else if (((5U == (IData)(vlSelf->__PVT__y)) 
                        | (6U == (IData)(vlSelf->__PVT__y)))) {
                VL_CONST_W_5X(160,__Vtemp49,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_CONST_W_1X(130,__Vtemp50,0x00000001);
                VL_NOT_W(5, __Vtemp51, vlSelf->__PVT__x);
                VL_ADD_W(5, __Vtemp52, vlSelf->__PVT__p, __Vtemp51);
                VL_ADD_W(5, __Vtemp53, __Vtemp50, __Vtemp52);
                VL_AND_W(5, __Vtemp54, __Vtemp49, __Vtemp53);
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, __Vtemp54);
                VL_CONST_W_5X(160,__Vtemp55,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_CONST_W_1X(130,__Vtemp56,0x00000001);
                VL_NOT_W(5, __Vtemp57, vlSelf->__PVT__x);
                VL_ADD_W(5, __Vtemp58, __Vtemp56, __Vtemp57);
                VL_AND_W(5, __Vtemp59, __Vtemp55, __Vtemp58);
                VL_ASSIGN_W(130,vlSelf->__Vdly__add_p, __Vtemp59);
            } else {
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, vlSelf->__PVT__p);
                VL_CONST_W_1X(130,vlSelf->__Vdly__add_p,0x00000000);
            }
        } else if ((2U == (IData)(vlSelf->__PVT__present_state))) {
            VL_CONST_W_5X(160,__Vtemp60,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
            VL_SHIFTL_WWI(130,130,3, __Vtemp61, vlSelf->__PVT__x, 2U);
            VL_AND_W(5, __Vtemp62, __Vtemp60, __Vtemp61);
            VL_ASSIGN_W(130,vlSelf->__Vdly__x, __Vtemp62);
            VL_CONST_W_5X(160,__Vtemp63,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
            VL_SHIFTR_WWI(130,130,3, __Vtemp64, vlSelf->__PVT__reg_alu_y, 2U);
            VL_AND_W(5, __Vtemp65, __Vtemp63, __Vtemp64);
            VL_ASSIGN_W(130,vlSelf->__Vdly__reg_alu_y, __Vtemp65);
            VL_CONST_W_5X(160,__Vtemp66,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
            VL_SHIFTR_WWI(130,130,3, __Vtemp67, vlSelf->__PVT__reg_alu_y, 1U);
            VL_AND_W(5, __Vtemp68, __Vtemp66, __Vtemp67);
            VL_ASSIGN_W(130,vlSelf->__Vdly__delay_alu_y, __Vtemp68);
            vlSelf->__Vdly__y = (7U & VL_SEL_IWII(3,130,8,32, vlSelf->__PVT__delay_alu_y, 0U, 3U));
            vlSelf->__Vdly__sh_fnsh_flag = 0U;
            if (((0U == (IData)(vlSelf->__PVT__y)) 
                 | (7U == (IData)(vlSelf->__PVT__y)))) {
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, vlSelf->__PVT__p);
                VL_CONST_W_1X(130,vlSelf->__Vdly__add_p,0x00000000);
            } else if (((1U == (IData)(vlSelf->__PVT__y)) 
                        | (2U == (IData)(vlSelf->__PVT__y)))) {
                VL_CONST_W_5X(160,__Vtemp69,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_ADD_W(5, __Vtemp70, vlSelf->__PVT__p, vlSelf->__PVT__x);
                VL_AND_W(5, __Vtemp71, __Vtemp69, __Vtemp70);
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, __Vtemp71);
                VL_ASSIGN_W(130,vlSelf->__Vdly__add_p, vlSelf->__PVT__x);
            } else if ((3U == (IData)(vlSelf->__PVT__y))) {
                VL_CONST_W_5X(160,__Vtemp72,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_SHIFTL_WWI(130,130,1, __Vtemp73, vlSelf->__PVT__x, 1U);
                VL_ADD_W(5, __Vtemp74, vlSelf->__PVT__p, __Vtemp73);
                VL_AND_W(5, __Vtemp75, __Vtemp72, __Vtemp74);
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, __Vtemp75);
                VL_CONST_W_5X(160,__Vtemp76,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_SHIFTL_WWI(130,130,1, __Vtemp77, vlSelf->__PVT__x, 1U);
                VL_AND_W(5, __Vtemp78, __Vtemp76, __Vtemp77);
                VL_ASSIGN_W(130,vlSelf->__Vdly__add_p, __Vtemp78);
            } else if ((4U == (IData)(vlSelf->__PVT__y))) {
                VL_CONST_W_5X(160,__Vtemp79,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_CONST_W_1X(130,__Vtemp80,0x00000001);
                VL_SHIFTL_WWI(130,130,1, __Vtemp81, vlSelf->__PVT__x, 1U);
                VL_NOT_W(5, __Vtemp82, __Vtemp81);
                VL_ADD_W(5, __Vtemp83, vlSelf->__PVT__p, __Vtemp82);
                VL_ADD_W(5, __Vtemp84, __Vtemp80, __Vtemp83);
                VL_AND_W(5, __Vtemp85, __Vtemp79, __Vtemp84);
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, __Vtemp85);
                VL_CONST_W_5X(160,__Vtemp86,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_CONST_W_1X(130,__Vtemp87,0x00000001);
                VL_SHIFTL_WWI(130,130,1, __Vtemp88, vlSelf->__PVT__x, 1U);
                VL_NOT_W(5, __Vtemp89, __Vtemp88);
                VL_ADD_W(5, __Vtemp90, __Vtemp87, __Vtemp89);
                VL_AND_W(5, __Vtemp91, __Vtemp86, __Vtemp90);
                VL_ASSIGN_W(130,vlSelf->__Vdly__add_p, __Vtemp91);
            } else if (((5U == (IData)(vlSelf->__PVT__y)) 
                        | (6U == (IData)(vlSelf->__PVT__y)))) {
                VL_CONST_W_5X(160,__Vtemp92,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_CONST_W_1X(130,__Vtemp93,0x00000001);
                VL_NOT_W(5, __Vtemp94, vlSelf->__PVT__x);
                VL_ADD_W(5, __Vtemp95, vlSelf->__PVT__p, __Vtemp94);
                VL_ADD_W(5, __Vtemp96, __Vtemp93, __Vtemp95);
                VL_AND_W(5, __Vtemp97, __Vtemp92, __Vtemp96);
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, __Vtemp97);
                VL_CONST_W_5X(160,__Vtemp98,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_CONST_W_1X(130,__Vtemp99,0x00000001);
                VL_NOT_W(5, __Vtemp100, vlSelf->__PVT__x);
                VL_ADD_W(5, __Vtemp101, __Vtemp99, __Vtemp100);
                VL_AND_W(5, __Vtemp102, __Vtemp98, __Vtemp101);
                VL_ASSIGN_W(130,vlSelf->__Vdly__add_p, __Vtemp102);
            } else {
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, vlSelf->__PVT__p);
                VL_CONST_W_1X(130,vlSelf->__Vdly__add_p,0x00000000);
            }
        } else if ((3U == (IData)(vlSelf->__PVT__present_state))) {
            VL_CONST_W_1X(130,vlSelf->__Vdly__x,0x00000000);
            vlSelf->__Vdly__y = 0U;
            if (((0U == (IData)(vlSelf->__PVT__y)) 
                 | (7U == (IData)(vlSelf->__PVT__y)))) {
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, vlSelf->__PVT__p);
                VL_CONST_W_1X(130,vlSelf->__Vdly__add_p,0x00000000);
            } else if (((1U == (IData)(vlSelf->__PVT__y)) 
                        | (2U == (IData)(vlSelf->__PVT__y)))) {
                VL_CONST_W_5X(160,__Vtemp103,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_ADD_W(5, __Vtemp104, vlSelf->__PVT__p, vlSelf->__PVT__x);
                VL_AND_W(5, __Vtemp105, __Vtemp103, __Vtemp104);
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, __Vtemp105);
                VL_ASSIGN_W(130,vlSelf->__Vdly__add_p, vlSelf->__PVT__x);
            } else if ((3U == (IData)(vlSelf->__PVT__y))) {
                VL_CONST_W_5X(160,__Vtemp106,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_SHIFTL_WWI(130,130,1, __Vtemp107, vlSelf->__PVT__x, 1U);
                VL_ADD_W(5, __Vtemp108, vlSelf->__PVT__p, __Vtemp107);
                VL_AND_W(5, __Vtemp109, __Vtemp106, __Vtemp108);
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, __Vtemp109);
                VL_CONST_W_5X(160,__Vtemp110,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_SHIFTL_WWI(130,130,1, __Vtemp111, vlSelf->__PVT__x, 1U);
                VL_AND_W(5, __Vtemp112, __Vtemp110, __Vtemp111);
                VL_ASSIGN_W(130,vlSelf->__Vdly__add_p, __Vtemp112);
            } else if ((4U == (IData)(vlSelf->__PVT__y))) {
                VL_CONST_W_5X(160,__Vtemp113,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_CONST_W_1X(130,__Vtemp114,0x00000001);
                VL_SHIFTL_WWI(130,130,1, __Vtemp115, vlSelf->__PVT__x, 1U);
                VL_NOT_W(5, __Vtemp116, __Vtemp115);
                VL_ADD_W(5, __Vtemp117, vlSelf->__PVT__p, __Vtemp116);
                VL_ADD_W(5, __Vtemp118, __Vtemp114, __Vtemp117);
                VL_AND_W(5, __Vtemp119, __Vtemp113, __Vtemp118);
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, __Vtemp119);
                VL_CONST_W_5X(160,__Vtemp120,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_CONST_W_1X(130,__Vtemp121,0x00000001);
                VL_SHIFTL_WWI(130,130,1, __Vtemp122, vlSelf->__PVT__x, 1U);
                VL_NOT_W(5, __Vtemp123, __Vtemp122);
                VL_ADD_W(5, __Vtemp124, __Vtemp121, __Vtemp123);
                VL_AND_W(5, __Vtemp125, __Vtemp120, __Vtemp124);
                VL_ASSIGN_W(130,vlSelf->__Vdly__add_p, __Vtemp125);
            } else if (((5U == (IData)(vlSelf->__PVT__y)) 
                        | (6U == (IData)(vlSelf->__PVT__y)))) {
                VL_CONST_W_5X(160,__Vtemp126,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_CONST_W_1X(130,__Vtemp127,0x00000001);
                VL_NOT_W(5, __Vtemp128, vlSelf->__PVT__x);
                VL_ADD_W(5, __Vtemp129, vlSelf->__PVT__p, __Vtemp128);
                VL_ADD_W(5, __Vtemp130, __Vtemp127, __Vtemp129);
                VL_AND_W(5, __Vtemp131, __Vtemp126, __Vtemp130);
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, __Vtemp131);
                VL_CONST_W_5X(160,__Vtemp132,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
                VL_CONST_W_1X(130,__Vtemp133,0x00000001);
                VL_NOT_W(5, __Vtemp134, vlSelf->__PVT__x);
                VL_ADD_W(5, __Vtemp135, __Vtemp133, __Vtemp134);
                VL_AND_W(5, __Vtemp136, __Vtemp132, __Vtemp135);
                VL_ASSIGN_W(130,vlSelf->__Vdly__add_p, __Vtemp136);
            } else {
                VL_ASSIGN_W(130,vlSelf->__Vdly__p, vlSelf->__PVT__p);
                VL_CONST_W_1X(130,vlSelf->__Vdly__add_p,0x00000000);
            }
            vlSelf->__Vdly__sh_fnsh_flag = 1U;
            VL_ASSIGN_W(130,vlSelf->__Vdly__reg_alu_y, vlSelf->__PVT__reg_alu_y);
        } else {
            VL_CONST_W_1X(130,vlSelf->__Vdly__x,0x00000000);
            vlSelf->__Vdly__y = 0U;
            VL_CONST_W_1X(130,vlSelf->__Vdly__p,0x00000000);
            vlSelf->__Vdly__sh_fnsh_flag = 1U;
            VL_CONST_W_1X(130,vlSelf->__Vdly__add_p,0x00000000);
            VL_CONST_W_1X(130,vlSelf->__Vdly__reg_alu_y,0x00000000);
        }
    } else {
        VL_CONST_W_1X(130,vlSelf->__Vdly__x,0x00000000);
        vlSelf->__Vdly__y = 0U;
        vlSelf->__Vdly__sh_fnsh_flag = 0U;
        VL_CONST_W_1X(130,vlSelf->__Vdly__add_p,0x00000000);
        VL_CONST_W_1X(130,vlSelf->__Vdly__p,0x00000000);
    }
    VL_ASSIGN_W(130,vlSelf->__PVT__x, vlSelf->__Vdly__x);
    vlSelf->__PVT__y = vlSelf->__Vdly__y;
    VL_ASSIGN_W(130,vlSelf->__PVT__add_p, vlSelf->__Vdly__add_p);
    VL_ASSIGN_W(130,vlSelf->__PVT__reg_alu_y, vlSelf->__Vdly__reg_alu_y);
    VL_ASSIGN_W(130,vlSelf->__PVT__delay_alu_y, vlSelf->__Vdly__delay_alu_y);
    vlSelf->__Vdly__present_state = vlSelf->__PVT__present_state;
    VL_ASSIGN_W(130,vlSelf->__PVT__p, vlSelf->__Vdly__p);
    vlSelf->__PVT__sh_fnsh_flag = vlSelf->__Vdly__sh_fnsh_flag;
    vlSelf->__Vdly__present_state = ((IData)(vlSelf->__PVT__rst_n)
                                      ? (IData)(vlSelf->__PVT__next_state)
                                      : 0U);
    vlSelf->__PVT__present_state = vlSelf->__Vdly__present_state;
}

VL_INLINE_OPT void Vysyx_22040175_top_mul___combo__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul__4(Vysyx_22040175_top_mul* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vysyx_22040175_top_mul___combo__TOP__ysyx_22040175_top__u_ex_stage__u_alu__u_mul__4\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp155;
    VlWide<3>/*95:0*/ __Vtemp156;
    VlWide<3>/*95:0*/ __Vtemp157;
    VlWide<5>/*159:0*/ __Vtemp158;
    VlWide<3>/*95:0*/ __Vtemp159;
    VlWide<3>/*95:0*/ __Vtemp160;
    VlWide<3>/*95:0*/ __Vtemp161;
    VlWide<3>/*95:0*/ __Vtemp162;
    VlWide<5>/*159:0*/ __Vtemp163;
    VlWide<3>/*95:0*/ __Vtemp164;
    VlWide<5>/*159:0*/ __Vtemp165;
    VlWide<3>/*95:0*/ __Vtemp166;
    VlWide<5>/*159:0*/ __Vtemp167;
    VlWide<3>/*95:0*/ __Vtemp168;
    VlWide<5>/*159:0*/ __Vtemp169;
    VlWide<5>/*159:0*/ __Vtemp170;
    VlWide<5>/*159:0*/ __Vtemp171;
    VlWide<5>/*159:0*/ __Vtemp172;
    VlWide<5>/*159:0*/ __Vtemp173;
    VlWide<5>/*159:0*/ __Vtemp174;
    VlWide<5>/*159:0*/ __Vtemp175;
    VlWide<5>/*159:0*/ __Vtemp176;
    CData/*31:0*/ __Vtemp177;
    VlWide<5>/*159:0*/ __Vtemp178;
    CData/*31:0*/ __Vtemp179;
    VlWide<5>/*159:0*/ __Vtemp180;
    CData/*31:0*/ __Vtemp181;
    VlWide<5>/*159:0*/ __Vtemp182;
    CData/*31:0*/ __Vtemp183;
    VlWide<5>/*159:0*/ __Vtemp184;
    VlWide<5>/*159:0*/ __Vtemp185;
    VlWide<5>/*159:0*/ __Vtemp186;
    VlWide<5>/*159:0*/ __Vtemp187;
    VlWide<5>/*159:0*/ __Vtemp188;
    // Body
    if (((IData)(vlSelf->__PVT__mul_valid) & ((~ (IData)(vlSelf->__PVT__delay_mul_valid)) 
                                              | (IData)(vlSelf->__PVT__delay2_sh_fg)))) {
        if ((0U == (IData)(vlSelf->__PVT__mul_signed))) {
            VL_CONST_W_3X(96,__Vtemp155,0x00000003,0xffffffff,0xffffffff);
            VL_REPLICATE_WII(66,1,32, __Vtemp156, (1U 
                                                   & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__alu_src1, 0x3fU)), 0x42U);
            VL_AND_W(3, __Vtemp157, __Vtemp155, __Vtemp156);
            VL_CONCAT_WWQ(130,66,64, __Vtemp158, __Vtemp157, vlSelf->__PVT__alu_src1);
            VL_ASSIGN_W(130,vlSelf->__PVT__alu_x, __Vtemp158);
            VL_CONCAT_WIQ(66,2,64, __Vtemp159, (3U 
                                                & VL_REPLICATE_IOI(2,1,32,
                                                                   (1U 
                                                                    & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__alu_src2, 0x3fU)), 2U)), vlSelf->__PVT__alu_src2);
            VL_ASSIGN_W(66,vlSelf->__PVT__alu_y, __Vtemp159);
        } else if ((1U == (IData)(vlSelf->__PVT__mul_signed))) {
            VL_CONST_W_3X(96,__Vtemp160,0x00000003,0xffffffff,0xffffffff);
            VL_REPLICATE_WII(66,1,32, __Vtemp161, (1U 
                                                   & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__alu_src1, 0x3fU)), 0x42U);
            VL_AND_W(3, __Vtemp162, __Vtemp160, __Vtemp161);
            VL_CONCAT_WWQ(130,66,64, __Vtemp163, __Vtemp162, vlSelf->__PVT__alu_src1);
            VL_ASSIGN_W(130,vlSelf->__PVT__alu_x, __Vtemp163);
            VL_EXTEND_WQ(66,64, __Vtemp164, vlSelf->__PVT__alu_src2);
            VL_ASSIGN_W(66,vlSelf->__PVT__alu_y, __Vtemp164);
        } else if ((2U == (IData)(vlSelf->__PVT__mul_signed))) {
            VL_EXTEND_WQ(130,64, __Vtemp165, vlSelf->__PVT__alu_src1);
            VL_ASSIGN_W(130,vlSelf->__PVT__alu_x, __Vtemp165);
            VL_CONCAT_WIQ(66,2,64, __Vtemp166, (3U 
                                                & VL_REPLICATE_IOI(2,1,32,
                                                                   (1U 
                                                                    & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__alu_src2, 0x3fU)), 2U)), vlSelf->__PVT__alu_src2);
            VL_ASSIGN_W(66,vlSelf->__PVT__alu_y, __Vtemp166);
        } else {
            VL_EXTEND_WQ(130,64, __Vtemp167, vlSelf->__PVT__alu_src1);
            VL_ASSIGN_W(130,vlSelf->__PVT__alu_x, __Vtemp167);
            VL_EXTEND_WQ(66,64, __Vtemp168, vlSelf->__PVT__alu_src2);
            VL_ASSIGN_W(66,vlSelf->__PVT__alu_y, __Vtemp168);
        }
    } else {
        VL_ASSIGN_W(130,vlSelf->__PVT__alu_x, vlSelf->__PVT__no_latch_x);
        VL_ASSIGN_W(66,vlSelf->__PVT__alu_y, vlSelf->__PVT__no_latch_y);
    }
    VL_CONST_W_1X(130,__Vtemp169,0x00000007);
    VL_CONST_W_1X(130,__Vtemp170,0x00000000);
    VL_CONST_W_1X(130,__Vtemp171,0x00000007);
    VL_CONST_W_1X(130,__Vtemp172,0x00000000);
    vlSelf->__PVT__next_state = ((0U == (IData)(vlSelf->__PVT__present_state))
                                  ? (((IData)(vlSelf->__PVT__mul_valid) 
                                      & ((~ (IData)(vlSelf->__PVT__delay_mul_valid)) 
                                         | (IData)(vlSelf->__PVT__delay2_sh_fg)))
                                      ? 1U : 0U) : 
                                 ((1U == (IData)(vlSelf->__PVT__present_state))
                                   ? (((VL_EQ_W(5, __Vtemp169, vlSelf->__PVT__delay_alu_y) 
                                        & (~ VL_BITSEL_IIII(1,2,1,32, (IData)(vlSelf->__PVT__mul_signed), 0U))) 
                                       | (VL_EQ_W(5, __Vtemp170, vlSelf->__PVT__delay_alu_y) 
                                          & VL_BITSEL_IIII(1,2,1,32, (IData)(vlSelf->__PVT__mul_signed), 0U)))
                                       ? 3U : 2U) : 
                                  ((2U == (IData)(vlSelf->__PVT__present_state))
                                    ? (((VL_EQ_W(5, __Vtemp171, vlSelf->__PVT__delay_alu_y) 
                                         & (~ VL_BITSEL_IIII(1,2,1,32, (IData)(vlSelf->__PVT__mul_signed), 0U))) 
                                        | (VL_EQ_W(5, __Vtemp172, vlSelf->__PVT__delay_alu_y) 
                                           & VL_BITSEL_IIII(1,2,1,32, (IData)(vlSelf->__PVT__mul_signed), 0U)))
                                        ? 3U : 2U) : 0U)));
    VL_EXTEND_WQ(130,64, __Vtemp173, VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                              (1U 
                                                                               & VL_BITSEL_IWII(1,130,8,32, vlSelf->__PVT__p, 0x1fU)), 0x20U), 
                                                   VL_SEL_IWII(32,130,8,32, vlSelf->__PVT__p, 0U, 0x20U)));
    VL_EXTEND_WI(130,32, __Vtemp174, VL_SEL_IWII(32,130,8,32, vlSelf->__PVT__p, 0U, 0x20U));
    VL_EXTEND_WQ(130,64, __Vtemp175, VL_CONCAT_QQI(64,48,16, 
                                                   (0xffffffffffffULL 
                                                    & VL_REPLICATE_QOI(48,1,32,
                                                                       (1U 
                                                                        & VL_BITSEL_IWII(1,130,8,32, vlSelf->__PVT__p, 0xfU)), 0x30U)), 
                                                   (0xffffU 
                                                    & VL_SEL_IWII(16,130,8,32, vlSelf->__PVT__p, 0U, 0x10U))));
    VL_CONST_W_1X(130,__Vtemp176,0x00000000);
    __Vtemp177 = (3U == (IData)(vlSelf->__PVT__mul_expand_signed));
    VL_COND_WIWW(130,1,130,130, __Vtemp178, __Vtemp177, __Vtemp175, __Vtemp176);
    __Vtemp179 = (2U == (IData)(vlSelf->__PVT__mul_expand_signed));
    VL_COND_WIWW(130,1,130,130, __Vtemp180, __Vtemp179, __Vtemp174, __Vtemp178);
    __Vtemp181 = (1U == (IData)(vlSelf->__PVT__mul_expand_signed));
    VL_COND_WIWW(130,1,130,130, __Vtemp182, __Vtemp181, __Vtemp173, __Vtemp180);
    __Vtemp183 = (0U == (IData)(vlSelf->__PVT__mul_expand_signed));
    VL_COND_WIWW(130,1,130,130, __Vtemp184, __Vtemp183, vlSelf->__PVT__p, __Vtemp182);
    VL_CONST_W_1X(130,__Vtemp185,0x00000000);
    VL_COND_WIWW(130,1,130,130, __Vtemp186, (IData)(vlSelf->__PVT__sh_fnsh_flag), __Vtemp184, __Vtemp185);
    VL_ASSIGN_W(130,vlSelf->__PVT__ex_p, __Vtemp186);
    VL_CONST_W_1X(130,__Vtemp187,0x00000000);
    VL_COND_WIWW(130,1,130,130, __Vtemp188, (IData)(vlSelf->__PVT__sh_fnsh_flag), vlSelf->__PVT__ex_p, __Vtemp187);
    VL_ASSIGN_W(130,vlSelf->__PVT__mul_res, __Vtemp188);
}
