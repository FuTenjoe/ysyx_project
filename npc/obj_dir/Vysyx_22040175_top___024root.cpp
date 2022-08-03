// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top___024root.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_if_stage__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_if_stage__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void ebreak();

VL_INLINE_OPT void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_id_stage__DOT__u_ctrl__DOT__ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_id_stage__DOT__u_ctrl__DOT__ebreak_TOP\n"); );
    // Body
    ebreak();
}

extern "C" void unknown_inst();

VL_INLINE_OPT void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_id_stage__DOT__u_ctrl__DOT__unknown_inst_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_id_stage__DOT__u_ctrl__DOT__unknown_inst_TOP\n"); );
    // Body
    unknown_inst();
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_wb_stage__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_wb_stage__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_wb_stage__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_wb_stage__DOT__pmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__1(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ __Vdly__ysyx_22040175_top__DOT__ex_s_flag;
    CData/*2:0*/ __Vdly__ysyx_22040175_top__DOT__ex_rd_buf_flag;
    CData/*0:0*/ __Vdly__ysyx_22040175_top__DOT__ex_rest_id_mem;
    CData/*0:0*/ __Vdly__ysyx_22040175_top__DOT__ex_cunqu_hazard;
    CData/*2:0*/ __Vdly__ysyx_22040175_top__DOT__mem_rd_buf_flag;
    CData/*0:0*/ __Vdly__ysyx_22040175_top__DOT__mem_ebreak_flag;
    CData/*0:0*/ __Vdly__ysyx_22040175_top__DOT__mem_time_set;
    CData/*0:0*/ __Vdly__ysyx_22040175_top__DOT__mem_s_flag;
    CData/*4:0*/ __Vdly__ysyx_22040175_top__DOT__mem_reg_waddr;
    CData/*3:0*/ __Vdly__ysyx_22040175_top__DOT__mem_expand_signed;
    CData/*7:0*/ __Vdly__ysyx_22040175_top__DOT__mem_wmask;
    CData/*0:0*/ __Vdly__ysyx_22040175_top__DOT__mem_reg_wen;
    CData/*0:0*/ __Vdly__ysyx_22040175_top__DOT__mem_cunqu_hazard;
    VlWide<5>/*129:0*/ __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x;
    VlWide<5>/*129:0*/ __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p;
    VlWide<5>/*129:0*/ __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y;
    VlWide<5>/*159:0*/ __Vtemp19;
    VlWide<5>/*159:0*/ __Vtemp20;
    VlWide<5>/*159:0*/ __Vtemp21;
    VlWide<5>/*159:0*/ __Vtemp22;
    VlWide<5>/*159:0*/ __Vtemp25;
    VlWide<5>/*159:0*/ __Vtemp26;
    VlWide<5>/*159:0*/ __Vtemp27;
    VlWide<5>/*159:0*/ __Vtemp30;
    VlWide<5>/*159:0*/ __Vtemp31;
    VlWide<5>/*159:0*/ __Vtemp32;
    VlWide<5>/*159:0*/ __Vtemp33;
    VlWide<5>/*159:0*/ __Vtemp36;
    VlWide<5>/*159:0*/ __Vtemp37;
    VlWide<5>/*159:0*/ __Vtemp38;
    VlWide<5>/*159:0*/ __Vtemp41;
    VlWide<5>/*159:0*/ __Vtemp42;
    VlWide<5>/*159:0*/ __Vtemp43;
    VlWide<5>/*159:0*/ __Vtemp44;
    VlWide<5>/*159:0*/ __Vtemp45;
    VlWide<5>/*159:0*/ __Vtemp48;
    VlWide<5>/*159:0*/ __Vtemp49;
    VlWide<5>/*159:0*/ __Vtemp50;
    VlWide<5>/*159:0*/ __Vtemp51;
    VlWide<5>/*159:0*/ __Vtemp54;
    VlWide<5>/*159:0*/ __Vtemp55;
    VlWide<5>/*159:0*/ __Vtemp58;
    VlWide<5>/*159:0*/ __Vtemp61;
    VlWide<5>/*159:0*/ __Vtemp64;
    VlWide<5>/*159:0*/ __Vtemp67;
    VlWide<5>/*159:0*/ __Vtemp70;
    VlWide<5>/*159:0*/ __Vtemp71;
    VlWide<5>/*159:0*/ __Vtemp72;
    VlWide<5>/*159:0*/ __Vtemp73;
    VlWide<5>/*159:0*/ __Vtemp76;
    VlWide<5>/*159:0*/ __Vtemp77;
    VlWide<5>/*159:0*/ __Vtemp78;
    VlWide<5>/*159:0*/ __Vtemp81;
    VlWide<5>/*159:0*/ __Vtemp82;
    VlWide<5>/*159:0*/ __Vtemp83;
    VlWide<5>/*159:0*/ __Vtemp84;
    VlWide<5>/*159:0*/ __Vtemp87;
    VlWide<5>/*159:0*/ __Vtemp88;
    VlWide<5>/*159:0*/ __Vtemp89;
    VlWide<5>/*159:0*/ __Vtemp92;
    VlWide<5>/*159:0*/ __Vtemp93;
    VlWide<5>/*159:0*/ __Vtemp94;
    VlWide<5>/*159:0*/ __Vtemp95;
    VlWide<5>/*159:0*/ __Vtemp96;
    VlWide<5>/*159:0*/ __Vtemp99;
    VlWide<5>/*159:0*/ __Vtemp100;
    VlWide<5>/*159:0*/ __Vtemp101;
    VlWide<5>/*159:0*/ __Vtemp102;
    VlWide<5>/*159:0*/ __Vtemp105;
    VlWide<5>/*159:0*/ __Vtemp106;
    VlWide<5>/*159:0*/ __Vtemp109;
    VlWide<5>/*159:0*/ __Vtemp112;
    VlWide<5>/*159:0*/ __Vtemp115;
    VlWide<5>/*159:0*/ __Vtemp118;
    VlWide<5>/*159:0*/ __Vtemp119;
    VlWide<5>/*159:0*/ __Vtemp120;
    VlWide<5>/*159:0*/ __Vtemp121;
    VlWide<5>/*159:0*/ __Vtemp124;
    VlWide<5>/*159:0*/ __Vtemp125;
    VlWide<5>/*159:0*/ __Vtemp126;
    VlWide<5>/*159:0*/ __Vtemp129;
    VlWide<5>/*159:0*/ __Vtemp130;
    VlWide<5>/*159:0*/ __Vtemp131;
    VlWide<5>/*159:0*/ __Vtemp132;
    VlWide<5>/*159:0*/ __Vtemp135;
    VlWide<5>/*159:0*/ __Vtemp136;
    VlWide<5>/*159:0*/ __Vtemp137;
    VlWide<5>/*159:0*/ __Vtemp140;
    VlWide<5>/*159:0*/ __Vtemp141;
    VlWide<5>/*159:0*/ __Vtemp142;
    VlWide<5>/*159:0*/ __Vtemp143;
    VlWide<5>/*159:0*/ __Vtemp144;
    VlWide<5>/*159:0*/ __Vtemp147;
    VlWide<5>/*159:0*/ __Vtemp148;
    VlWide<5>/*159:0*/ __Vtemp149;
    VlWide<5>/*159:0*/ __Vtemp150;
    VlWide<5>/*159:0*/ __Vtemp153;
    VlWide<5>/*159:0*/ __Vtemp154;
    VlWide<5>/*159:0*/ __Vtemp157;
    VlWide<5>/*159:0*/ __Vtemp160;
    VlWide<5>/*159:0*/ __Vtemp163;
    VlWide<5>/*159:0*/ __Vtemp185;
    VlWide<5>/*159:0*/ __Vtemp186;
    VlWide<5>/*159:0*/ __Vtemp187;
    VlWide<5>/*159:0*/ __Vtemp189;
    VlWide<5>/*159:0*/ __Vtemp194;
    VlWide<5>/*159:0*/ __Vtemp197;
    VlWide<5>/*159:0*/ __Vtemp200;
    VlWide<5>/*159:0*/ __Vtemp203;
    VlWide<5>/*159:0*/ __Vtemp204;
    VlWide<5>/*159:0*/ __Vtemp206;
    VlWide<5>/*159:0*/ __Vtemp207;
    VlWide<3>/*95:0*/ __Vtemp210;
    QData/*63:0*/ __Vdly__ysyx_22040175_top__DOT__if_pc;
    QData/*63:0*/ __Vdly__ysyx_22040175_top__DOT__ex_alu_src2;
    QData/*63:0*/ __Vdly__ysyx_22040175_top__DOT__ex_alu_src1;
    QData/*63:0*/ __Vdly__ysyx_22040175_top__DOT__mem_from_ex_alu_res;
    QData/*63:0*/ __Vdly__ysyx_22040175_top__DOT__mem_pc;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v1;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v2;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v3;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v4;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v5;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v6;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v7;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v8;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v9;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v10;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v11;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v12;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v13;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v14;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v15;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v16;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v17;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v18;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v19;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v20;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v21;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v22;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v23;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v24;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v25;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v26;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v27;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v28;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v29;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v30;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v31;
    QData/*63:0*/ __Vtemp181;
    // Body
    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U] 
        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U];
    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U] 
        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U];
    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U] 
        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U];
    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U] 
        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U];
    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U] 
        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U];
    __Vdly__ysyx_22040175_top__DOT__mem_time_set = vlSelf->ysyx_22040175_top__DOT__mem_time_set;
    __Vdly__ysyx_22040175_top__DOT__mem_pc = vlSelf->ysyx_22040175_top__DOT__mem_pc;
    __Vdly__ysyx_22040175_top__DOT__mem_reg_wen = vlSelf->ysyx_22040175_top__DOT__mem_reg_wen;
    __Vdly__ysyx_22040175_top__DOT__mem_wmask = vlSelf->ysyx_22040175_top__DOT__mem_wmask;
    __Vdly__ysyx_22040175_top__DOT__mem_ebreak_flag 
        = vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag;
    __Vdly__ysyx_22040175_top__DOT__ex_rest_id_mem 
        = vlSelf->ysyx_22040175_top__DOT__ex_rest_id_mem;
    __Vdly__ysyx_22040175_top__DOT__if_pc = vlSelf->ysyx_22040175_top__DOT__if_pc;
    __Vdly__ysyx_22040175_top__DOT__ex_cunqu_hazard 
        = vlSelf->ysyx_22040175_top__DOT__ex_cunqu_hazard;
    __Vdly__ysyx_22040175_top__DOT__mem_cunqu_hazard 
        = vlSelf->ysyx_22040175_top__DOT__mem_cunqu_hazard;
    __Vdly__ysyx_22040175_top__DOT__mem_from_ex_alu_res 
        = vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res;
    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U] 
        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U];
    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U] 
        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U];
    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U] 
        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U];
    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U] 
        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U];
    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U] 
        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U];
    __Vdly__ysyx_22040175_top__DOT__ex_s_flag = vlSelf->ysyx_22040175_top__DOT__ex_s_flag;
    __Vdly__ysyx_22040175_top__DOT__ex_alu_src1 = vlSelf->ysyx_22040175_top__DOT__ex_alu_src1;
    __Vdly__ysyx_22040175_top__DOT__ex_alu_src2 = vlSelf->ysyx_22040175_top__DOT__ex_alu_src2;
    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U];
    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U];
    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U];
    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U];
    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U];
    __Vdly__ysyx_22040175_top__DOT__mem_s_flag = vlSelf->ysyx_22040175_top__DOT__mem_s_flag;
    __Vdly__ysyx_22040175_top__DOT__ex_rd_buf_flag 
        = vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag;
    __Vdly__ysyx_22040175_top__DOT__mem_reg_waddr = vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr;
    __Vdly__ysyx_22040175_top__DOT__mem_expand_signed 
        = vlSelf->ysyx_22040175_top__DOT__mem_expand_signed;
    __Vdly__ysyx_22040175_top__DOT__mem_rd_buf_flag 
        = vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag;
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_control_rest 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__id_control_rest));
    if (vlSelf->ysyx_22040175_top__DOT__rst_n) {
        vlSelf->ysyx_22040175_top__DOT__wb_delay_pc 
            = vlSelf->ysyx_22040175_top__DOT__wb_pc;
        __Vdly__ysyx_22040175_top__DOT__mem_time_set 
            = (((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                 ? (IData)(vlSelf->ysyx_22040175_top__DOT__mem_time_set)
                 : (IData)(vlSelf->ysyx_22040175_top__DOT__ex_time_set)) 
               & 1U);
        vlSelf->ysyx_22040175_top__DOT__ex_ena = (((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                                                    ? (IData)(vlSelf->ysyx_22040175_top__DOT__ex_ena)
                                                    : (IData)(vlSelf->ysyx_22040175_top__DOT__id_ena)) 
                                                  & 1U);
        __Vdly__ysyx_22040175_top__DOT__mem_pc = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                                                   ? vlSelf->ysyx_22040175_top__DOT__mem_pc
                                                   : vlSelf->ysyx_22040175_top__DOT__ex_pc);
        __Vdly__ysyx_22040175_top__DOT__mem_reg_wen 
            = (((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                 ? (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_wen)
                 : (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_wen)) 
               & 1U);
        __Vdly__ysyx_22040175_top__DOT__mem_wmask = 
            ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
              ? (IData)(vlSelf->ysyx_22040175_top__DOT__mem_wmask)
              : (IData)(vlSelf->ysyx_22040175_top__DOT__ex_wmask));
        __Vdly__ysyx_22040175_top__DOT__mem_ebreak_flag 
            = (((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                 ? (IData)(vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag)
                 : (IData)(vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag)) 
               & 1U);
        vlSelf->ysyx_22040175_top__DOT__ex_wmask = 
            ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
              ? (IData)(vlSelf->ysyx_22040175_top__DOT__ex_wmask)
              : (IData)(vlSelf->ysyx_22040175_top__DOT__id_wmask));
        vlSelf->ysyx_22040175_top__DOT__ex_reg_wen 
            = (((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                 ? (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_wen)
                 : (IData)(vlSelf->ysyx_22040175_top__DOT__id_reg_wen)) 
               & 1U);
        vlSelf->ysyx_22040175_top__DOT__ex_unknown_code 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                ? vlSelf->ysyx_22040175_top__DOT__ex_unknown_code
                : vlSelf->ysyx_22040175_top__DOT__id_unknown_code);
        __Vdly__ysyx_22040175_top__DOT__ex_rest_id_mem 
            = (((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                 ? (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rest_id_mem)
                 : (IData)(vlSelf->ysyx_22040175_top__DOT__rest_id_mem)) 
               & 1U);
        vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag 
            = (((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                 ? (IData)(vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag)
                 : (IData)(vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag)) 
               & 1U);
        vlSelf->ysyx_22040175_top__DOT__wb_time_set 
            = (((IData)(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem)
                 ? (IData)(vlSelf->ysyx_22040175_top__DOT__wb_time_set)
                 : (IData)(vlSelf->ysyx_22040175_top__DOT__mem_time_set)) 
               & 1U);
        vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag 
            = (((IData)(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem)
                 ? (IData)(vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag)
                 : (IData)(vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag)) 
               & 1U);
        vlSelf->ysyx_22040175_top__DOT__wb_pc = ((IData)(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem)
                                                  ? vlSelf->ysyx_22040175_top__DOT__wb_pc
                                                  : vlSelf->ysyx_22040175_top__DOT__mem_pc);
        vlSelf->ysyx_22040175_top__DOT__wb_wmask = 
            ((IData)(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem)
              ? (IData)(vlSelf->ysyx_22040175_top__DOT__wb_wmask)
              : (IData)(vlSelf->ysyx_22040175_top__DOT__mem_wmask));
        vlSelf->ysyx_22040175_top__DOT__wb_s_imm = 
            ((IData)(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem)
              ? vlSelf->ysyx_22040175_top__DOT__wb_s_imm
              : vlSelf->ysyx_22040175_top__DOT__mem_s_imm);
        vlSelf->ysyx_22040175_top__DOT__id_time_set 
            = ((((IData)(vlSelf->ysyx_22040175_top__DOT__rest_id_mem) 
                 | (IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop))
                 ? (IData)(vlSelf->ysyx_22040175_top__DOT__id_time_set)
                 : (((IData)(vlSelf->ysyx_22040175_top__DOT__id_control_rest) 
                     | (IData)(vlSelf->ysyx_22040175_top__DOT__delay_sig_jalr))
                     ? (IData)(vlSelf->ysyx_22040175_top__DOT__id_time_set)
                     : (IData)(vlSelf->time_set))) 
               & 1U);
    } else {
        vlSelf->ysyx_22040175_top__DOT__wb_delay_pc = 0ULL;
        __Vdly__ysyx_22040175_top__DOT__mem_time_set = 0U;
        vlSelf->ysyx_22040175_top__DOT__ex_ena = 0U;
        __Vdly__ysyx_22040175_top__DOT__mem_pc = 0x80000000ULL;
        __Vdly__ysyx_22040175_top__DOT__mem_reg_wen = 0U;
        __Vdly__ysyx_22040175_top__DOT__mem_wmask = 0U;
        __Vdly__ysyx_22040175_top__DOT__mem_ebreak_flag = 0U;
        vlSelf->ysyx_22040175_top__DOT__ex_wmask = 0U;
        vlSelf->ysyx_22040175_top__DOT__ex_reg_wen = 0U;
        vlSelf->ysyx_22040175_top__DOT__ex_unknown_code = 0ULL;
        __Vdly__ysyx_22040175_top__DOT__ex_rest_id_mem = 0U;
        vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag = 0U;
        vlSelf->ysyx_22040175_top__DOT__wb_time_set = 0U;
        vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag = 0U;
        vlSelf->ysyx_22040175_top__DOT__wb_pc = 0x80000000ULL;
        vlSelf->ysyx_22040175_top__DOT__wb_wmask = 0U;
        vlSelf->ysyx_22040175_top__DOT__wb_s_imm = 0U;
        vlSelf->ysyx_22040175_top__DOT__id_time_set = 0U;
    }
    if (vlSelf->ysyx_22040175_top__DOT__rst_n) {
        if (vlSelf->ysyx_22040175_top__DOT__rest_id_mem) {
            __Vdly__ysyx_22040175_top__DOT__if_pc = vlSelf->ysyx_22040175_top__DOT__if_pc;
        } else if (vlSelf->ysyx_22040175_top__DOT__mul_stop) {
            __Vdly__ysyx_22040175_top__DOT__if_pc = vlSelf->ysyx_22040175_top__DOT__if_pc;
        } else if (vlSelf->ysyx_22040175_top__DOT__sig_jalr) {
            __Vdly__ysyx_22040175_top__DOT__if_pc = vlSelf->ysyx_22040175_top__DOT__if_pc;
        } else if (vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_pc_predict__DOT__delay_sig_jalr) {
            __Vdly__ysyx_22040175_top__DOT__if_pc = vlSelf->ysyx_22040175_top__DOT__id_next_pc;
        } else if ((1U & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__rest_id_mem)))) {
            __Vdly__ysyx_22040175_top__DOT__if_pc = 
                ((IData)(vlSelf->ysyx_22040175_top__DOT__id_control_rest)
                  ? vlSelf->ysyx_22040175_top__DOT__id_next_pc
                  : (4ULL + vlSelf->ysyx_22040175_top__DOT__if_pc));
        }
    } else {
        __Vdly__ysyx_22040175_top__DOT__if_pc = 0x80000000ULL;
    }
    vlSelf->ysyx_22040175_top__DOT__id_ena = ((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n) 
                                              & (((IData)(vlSelf->ysyx_22040175_top__DOT__rest_id_mem) 
                                                  | (IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop))
                                                  ? (IData)(vlSelf->ysyx_22040175_top__DOT__id_ena)
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22040175_top__DOT__id_control_rest) 
                                                   | (IData)(vlSelf->ysyx_22040175_top__DOT__delay_sig_jalr))
                                                   ? (IData)(vlSelf->ysyx_22040175_top__DOT__id_ena)
                                                   : (IData)(vlSelf->ysyx_22040175_top__DOT__if_ena))));
    if (vlSelf->ysyx_22040175_top__DOT__rst_n) {
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg2_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata;
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__delay_reg1_rdata 
            = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata;
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_rest_id_mem 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__rest_id_mem) 
               & 1U);
        __Vdly__ysyx_22040175_top__DOT__ex_cunqu_hazard 
            = (((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                 ? (IData)(vlSelf->ysyx_22040175_top__DOT__ex_cunqu_hazard)
                 : (IData)(vlSelf->ysyx_22040175_top__DOT__id_cunqu_hazard)) 
               & 1U);
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond 
            = vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond;
        __Vdly__ysyx_22040175_top__DOT__mem_cunqu_hazard 
            = (((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                 ? (IData)(vlSelf->ysyx_22040175_top__DOT__mem_cunqu_hazard)
                 : (IData)(vlSelf->ysyx_22040175_top__DOT__ex_cunqu_hazard)) 
               & 1U);
        vlSelf->ysyx_22040175_top__DOT__mem_s_imm = 
            ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
              ? vlSelf->ysyx_22040175_top__DOT__mem_s_imm
              : vlSelf->ysyx_22040175_top__DOT__ex_s_imm);
        vlSelf->ysyx_22040175_top__DOT__ex_pc = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                                                  ? vlSelf->ysyx_22040175_top__DOT__ex_pc
                                                  : vlSelf->ysyx_22040175_top__DOT__id_pc);
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr 
            = vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr;
        __Vdly__ysyx_22040175_top__DOT__mem_from_ex_alu_res 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                ? vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res
                : vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res);
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__rest_id_mem) 
               & 1U);
        __Vdly__ysyx_22040175_top__DOT__ex_s_flag = 
            (((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
               ? (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag)
               : (IData)(vlSelf->ysyx_22040175_top__DOT__id_s_flag)) 
             & 1U);
        vlSelf->ysyx_22040175_top__DOT__ex_s_imm = 
            ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
              ? vlSelf->ysyx_22040175_top__DOT__ex_s_imm
              : vlSelf->ysyx_22040175_top__DOT__id_s_imm);
        vlSelf->ysyx_22040175_top__DOT__id_pc = (((IData)(vlSelf->ysyx_22040175_top__DOT__rest_id_mem) 
                                                  | (IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop))
                                                  ? vlSelf->ysyx_22040175_top__DOT__id_pc
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22040175_top__DOT__id_control_rest) 
                                                   | (IData)(vlSelf->ysyx_22040175_top__DOT__delay_sig_jalr))
                                                   ? vlSelf->ysyx_22040175_top__DOT__id_pc
                                                   : vlSelf->ysyx_22040175_top__DOT__if_pc));
        vlSelf->ysyx_22040175_top__DOT__ex_rd_flag 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                ? (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag)
                : (IData)(vlSelf->ysyx_22040175_top__DOT__id_rd_flag));
        __Vdly__ysyx_22040175_top__DOT__ex_alu_src1 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                ? vlSelf->ysyx_22040175_top__DOT__ex_alu_src1
                : vlSelf->ysyx_22040175_top__DOT__id_alu_src1);
        __Vdly__ysyx_22040175_top__DOT__ex_alu_src2 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                ? vlSelf->ysyx_22040175_top__DOT__ex_alu_src2
                : vlSelf->ysyx_22040175_top__DOT__id_alu_src2);
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg2_rdata = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__delay_reg1_rdata = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_rest_id_mem = 0U;
        __Vdly__ysyx_22040175_top__DOT__ex_cunqu_hazard = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond = 0U;
        __Vdly__ysyx_22040175_top__DOT__mem_cunqu_hazard = 0U;
        vlSelf->ysyx_22040175_top__DOT__mem_s_imm = 0U;
        vlSelf->ysyx_22040175_top__DOT__ex_pc = 0x80000000ULL;
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr = 0U;
        __Vdly__ysyx_22040175_top__DOT__mem_from_ex_alu_res = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem = 0U;
        __Vdly__ysyx_22040175_top__DOT__ex_s_flag = 0U;
        vlSelf->ysyx_22040175_top__DOT__ex_s_imm = 0U;
        vlSelf->ysyx_22040175_top__DOT__id_pc = 0x80000000ULL;
        vlSelf->ysyx_22040175_top__DOT__ex_rd_flag = 0U;
        __Vdly__ysyx_22040175_top__DOT__ex_alu_src1 = 0ULL;
        __Vdly__ysyx_22040175_top__DOT__ex_alu_src2 = 0ULL;
    }
    if (vlSelf->ysyx_22040175_top__DOT__rst_n) {
        if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))) {
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U] = 0U;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] = 0U;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] = 0U;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] = 0U;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] = 0U;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] = 0U;
        } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))) {
            if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))) {
                if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                    if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                                = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U];
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                                = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U];
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                                = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U];
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                                = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U];
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                                = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U];
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] = 0U;
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] = 0U;
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] = 0U;
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] = 0U;
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] = 0U;
                        } else {
                            __Vtemp19[0U] = 1U;
                            __Vtemp19[1U] = 0U;
                            __Vtemp19[2U] = 0U;
                            __Vtemp19[3U] = 0U;
                            __Vtemp19[4U] = 0U;
                            __Vtemp20[0U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U]);
                            __Vtemp20[1U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U]);
                            __Vtemp20[2U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U]);
                            __Vtemp20[3U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U]);
                            __Vtemp20[4U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U]);
                            VL_ADD_W(5, __Vtemp21, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, __Vtemp20);
                            VL_ADD_W(5, __Vtemp22, __Vtemp19, __Vtemp21);
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                                = __Vtemp22[0U];
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                                = __Vtemp22[1U];
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                                = __Vtemp22[2U];
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                                = __Vtemp22[3U];
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                                = (3U & __Vtemp22[4U]);
                            __Vtemp25[0U] = 1U;
                            __Vtemp25[1U] = 0U;
                            __Vtemp25[2U] = 0U;
                            __Vtemp25[3U] = 0U;
                            __Vtemp25[4U] = 0U;
                            __Vtemp26[0U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U]);
                            __Vtemp26[1U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U]);
                            __Vtemp26[2U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U]);
                            __Vtemp26[3U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U]);
                            __Vtemp26[4U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U]);
                            VL_ADD_W(5, __Vtemp27, __Vtemp25, __Vtemp26);
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                                = __Vtemp27[0U];
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                                = __Vtemp27[1U];
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                                = __Vtemp27[2U];
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                                = __Vtemp27[3U];
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                                = (3U & __Vtemp27[4U]);
                        }
                    } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                        __Vtemp30[0U] = 1U;
                        __Vtemp30[1U] = 0U;
                        __Vtemp30[2U] = 0U;
                        __Vtemp30[3U] = 0U;
                        __Vtemp30[4U] = 0U;
                        __Vtemp31[0U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U]);
                        __Vtemp31[1U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U]);
                        __Vtemp31[2U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U]);
                        __Vtemp31[3U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U]);
                        __Vtemp31[4U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U]);
                        VL_ADD_W(5, __Vtemp32, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, __Vtemp31);
                        VL_ADD_W(5, __Vtemp33, __Vtemp30, __Vtemp32);
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                            = __Vtemp33[0U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                            = __Vtemp33[1U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                            = __Vtemp33[2U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                            = __Vtemp33[3U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                            = (3U & __Vtemp33[4U]);
                        __Vtemp36[0U] = 1U;
                        __Vtemp36[1U] = 0U;
                        __Vtemp36[2U] = 0U;
                        __Vtemp36[3U] = 0U;
                        __Vtemp36[4U] = 0U;
                        __Vtemp37[0U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U]);
                        __Vtemp37[1U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U]);
                        __Vtemp37[2U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U]);
                        __Vtemp37[3U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U]);
                        __Vtemp37[4U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U]);
                        VL_ADD_W(5, __Vtemp38, __Vtemp36, __Vtemp37);
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                            = __Vtemp38[0U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                            = __Vtemp38[1U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                            = __Vtemp38[2U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                            = __Vtemp38[3U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                            = (3U & __Vtemp38[4U]);
                    } else {
                        __Vtemp41[0U] = 1U;
                        __Vtemp41[1U] = 0U;
                        __Vtemp41[2U] = 0U;
                        __Vtemp41[3U] = 0U;
                        __Vtemp41[4U] = 0U;
                        VL_SHIFTL_WWI(130,130,1, __Vtemp42, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x, 1U);
                        __Vtemp43[0U] = (~ __Vtemp42[0U]);
                        __Vtemp43[1U] = (~ __Vtemp42[1U]);
                        __Vtemp43[2U] = (~ __Vtemp42[2U]);
                        __Vtemp43[3U] = (~ __Vtemp42[3U]);
                        __Vtemp43[4U] = (~ __Vtemp42[4U]);
                        VL_ADD_W(5, __Vtemp44, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, __Vtemp43);
                        VL_ADD_W(5, __Vtemp45, __Vtemp41, __Vtemp44);
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                            = __Vtemp45[0U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                            = __Vtemp45[1U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                            = __Vtemp45[2U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                            = __Vtemp45[3U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                            = (3U & __Vtemp45[4U]);
                        __Vtemp48[0U] = 1U;
                        __Vtemp48[1U] = 0U;
                        __Vtemp48[2U] = 0U;
                        __Vtemp48[3U] = 0U;
                        __Vtemp48[4U] = 0U;
                        VL_SHIFTL_WWI(130,130,1, __Vtemp49, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x, 1U);
                        __Vtemp50[0U] = (~ __Vtemp49[0U]);
                        __Vtemp50[1U] = (~ __Vtemp49[1U]);
                        __Vtemp50[2U] = (~ __Vtemp49[2U]);
                        __Vtemp50[3U] = (~ __Vtemp49[3U]);
                        __Vtemp50[4U] = (~ __Vtemp49[4U]);
                        VL_ADD_W(5, __Vtemp51, __Vtemp48, __Vtemp50);
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                            = __Vtemp51[0U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                            = __Vtemp51[1U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                            = __Vtemp51[2U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                            = __Vtemp51[3U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                            = (3U & __Vtemp51[4U]);
                    }
                } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                        VL_ADD_W(5, __Vtemp54, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x);
                        VL_SHIFTL_WWI(130,130,1, __Vtemp55, __Vtemp54, 1U);
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                            = __Vtemp55[0U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                            = __Vtemp55[1U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                            = __Vtemp55[2U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                            = __Vtemp55[3U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                            = (3U & __Vtemp55[4U]);
                        VL_SHIFTL_WWI(130,130,1, __Vtemp58, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x, 1U);
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                            = __Vtemp58[0U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                            = __Vtemp58[1U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                            = __Vtemp58[2U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                            = __Vtemp58[3U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                            = (3U & __Vtemp58[4U]);
                    } else {
                        VL_ADD_W(5, __Vtemp61, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x);
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                            = __Vtemp61[0U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                            = __Vtemp61[1U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                            = __Vtemp61[2U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                            = __Vtemp61[3U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                            = (3U & __Vtemp61[4U]);
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U];
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                    VL_ADD_W(5, __Vtemp64, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x);
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                        = __Vtemp64[0U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                        = __Vtemp64[1U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                        = __Vtemp64[2U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                        = __Vtemp64[3U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                        = (3U & __Vtemp64[4U]);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U];
                } else {
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] = 0U;
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] = 0U;
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] = 0U;
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] = 0U;
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] = 0U;
                }
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U] = 0U;
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U] = 0U;
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U] = 0U;
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U] = 0U;
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U] = 0U;
            } else {
                VL_SHIFTL_WWI(130,130,3, __Vtemp67, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x, 2U);
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U] 
                    = __Vtemp67[0U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U] 
                    = __Vtemp67[1U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U] 
                    = __Vtemp67[2U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U] 
                    = __Vtemp67[3U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U] 
                    = (3U & __Vtemp67[4U]);
                if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                    if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                                = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U];
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                                = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U];
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                                = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U];
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                                = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U];
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                                = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U];
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] = 0U;
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] = 0U;
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] = 0U;
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] = 0U;
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] = 0U;
                        } else {
                            __Vtemp70[0U] = 1U;
                            __Vtemp70[1U] = 0U;
                            __Vtemp70[2U] = 0U;
                            __Vtemp70[3U] = 0U;
                            __Vtemp70[4U] = 0U;
                            __Vtemp71[0U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U]);
                            __Vtemp71[1U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U]);
                            __Vtemp71[2U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U]);
                            __Vtemp71[3U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U]);
                            __Vtemp71[4U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U]);
                            VL_ADD_W(5, __Vtemp72, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, __Vtemp71);
                            VL_ADD_W(5, __Vtemp73, __Vtemp70, __Vtemp72);
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                                = __Vtemp73[0U];
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                                = __Vtemp73[1U];
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                                = __Vtemp73[2U];
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                                = __Vtemp73[3U];
                            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                                = (3U & __Vtemp73[4U]);
                            __Vtemp76[0U] = 1U;
                            __Vtemp76[1U] = 0U;
                            __Vtemp76[2U] = 0U;
                            __Vtemp76[3U] = 0U;
                            __Vtemp76[4U] = 0U;
                            __Vtemp77[0U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U]);
                            __Vtemp77[1U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U]);
                            __Vtemp77[2U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U]);
                            __Vtemp77[3U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U]);
                            __Vtemp77[4U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U]);
                            VL_ADD_W(5, __Vtemp78, __Vtemp76, __Vtemp77);
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                                = __Vtemp78[0U];
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                                = __Vtemp78[1U];
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                                = __Vtemp78[2U];
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                                = __Vtemp78[3U];
                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                                = (3U & __Vtemp78[4U]);
                        }
                    } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                        __Vtemp81[0U] = 1U;
                        __Vtemp81[1U] = 0U;
                        __Vtemp81[2U] = 0U;
                        __Vtemp81[3U] = 0U;
                        __Vtemp81[4U] = 0U;
                        __Vtemp82[0U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U]);
                        __Vtemp82[1U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U]);
                        __Vtemp82[2U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U]);
                        __Vtemp82[3U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U]);
                        __Vtemp82[4U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U]);
                        VL_ADD_W(5, __Vtemp83, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, __Vtemp82);
                        VL_ADD_W(5, __Vtemp84, __Vtemp81, __Vtemp83);
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                            = __Vtemp84[0U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                            = __Vtemp84[1U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                            = __Vtemp84[2U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                            = __Vtemp84[3U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                            = (3U & __Vtemp84[4U]);
                        __Vtemp87[0U] = 1U;
                        __Vtemp87[1U] = 0U;
                        __Vtemp87[2U] = 0U;
                        __Vtemp87[3U] = 0U;
                        __Vtemp87[4U] = 0U;
                        __Vtemp88[0U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U]);
                        __Vtemp88[1U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U]);
                        __Vtemp88[2U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U]);
                        __Vtemp88[3U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U]);
                        __Vtemp88[4U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U]);
                        VL_ADD_W(5, __Vtemp89, __Vtemp87, __Vtemp88);
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                            = __Vtemp89[0U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                            = __Vtemp89[1U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                            = __Vtemp89[2U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                            = __Vtemp89[3U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                            = (3U & __Vtemp89[4U]);
                    } else {
                        __Vtemp92[0U] = 1U;
                        __Vtemp92[1U] = 0U;
                        __Vtemp92[2U] = 0U;
                        __Vtemp92[3U] = 0U;
                        __Vtemp92[4U] = 0U;
                        VL_SHIFTL_WWI(130,130,1, __Vtemp93, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x, 1U);
                        __Vtemp94[0U] = (~ __Vtemp93[0U]);
                        __Vtemp94[1U] = (~ __Vtemp93[1U]);
                        __Vtemp94[2U] = (~ __Vtemp93[2U]);
                        __Vtemp94[3U] = (~ __Vtemp93[3U]);
                        __Vtemp94[4U] = (~ __Vtemp93[4U]);
                        VL_ADD_W(5, __Vtemp95, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, __Vtemp94);
                        VL_ADD_W(5, __Vtemp96, __Vtemp92, __Vtemp95);
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                            = __Vtemp96[0U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                            = __Vtemp96[1U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                            = __Vtemp96[2U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                            = __Vtemp96[3U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                            = (3U & __Vtemp96[4U]);
                        __Vtemp99[0U] = 1U;
                        __Vtemp99[1U] = 0U;
                        __Vtemp99[2U] = 0U;
                        __Vtemp99[3U] = 0U;
                        __Vtemp99[4U] = 0U;
                        VL_SHIFTL_WWI(130,130,1, __Vtemp100, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x, 1U);
                        __Vtemp101[0U] = (~ __Vtemp100[0U]);
                        __Vtemp101[1U] = (~ __Vtemp100[1U]);
                        __Vtemp101[2U] = (~ __Vtemp100[2U]);
                        __Vtemp101[3U] = (~ __Vtemp100[3U]);
                        __Vtemp101[4U] = (~ __Vtemp100[4U]);
                        VL_ADD_W(5, __Vtemp102, __Vtemp99, __Vtemp101);
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                            = __Vtemp102[0U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                            = __Vtemp102[1U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                            = __Vtemp102[2U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                            = __Vtemp102[3U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                            = (3U & __Vtemp102[4U]);
                    }
                } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                        VL_ADD_W(5, __Vtemp105, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x);
                        VL_SHIFTL_WWI(130,130,1, __Vtemp106, __Vtemp105, 1U);
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                            = __Vtemp106[0U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                            = __Vtemp106[1U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                            = __Vtemp106[2U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                            = __Vtemp106[3U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                            = (3U & __Vtemp106[4U]);
                        VL_SHIFTL_WWI(130,130,1, __Vtemp109, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x, 1U);
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                            = __Vtemp109[0U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                            = __Vtemp109[1U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                            = __Vtemp109[2U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                            = __Vtemp109[3U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                            = (3U & __Vtemp109[4U]);
                    } else {
                        VL_ADD_W(5, __Vtemp112, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x);
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                            = __Vtemp112[0U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                            = __Vtemp112[1U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                            = __Vtemp112[2U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                            = __Vtemp112[3U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                            = (3U & __Vtemp112[4U]);
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U];
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                    VL_ADD_W(5, __Vtemp115, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x);
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                        = __Vtemp115[0U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                        = __Vtemp115[1U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                        = __Vtemp115[2U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                        = __Vtemp115[3U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                        = (3U & __Vtemp115[4U]);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U];
                } else {
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] = 0U;
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] = 0U;
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] = 0U;
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] = 0U;
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))) {
            if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                            = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] = 0U;
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] = 0U;
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] = 0U;
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] = 0U;
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] = 0U;
                    } else {
                        __Vtemp118[0U] = 1U;
                        __Vtemp118[1U] = 0U;
                        __Vtemp118[2U] = 0U;
                        __Vtemp118[3U] = 0U;
                        __Vtemp118[4U] = 0U;
                        __Vtemp119[0U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U]);
                        __Vtemp119[1U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U]);
                        __Vtemp119[2U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U]);
                        __Vtemp119[3U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U]);
                        __Vtemp119[4U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U]);
                        VL_ADD_W(5, __Vtemp120, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, __Vtemp119);
                        VL_ADD_W(5, __Vtemp121, __Vtemp118, __Vtemp120);
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                            = __Vtemp121[0U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                            = __Vtemp121[1U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                            = __Vtemp121[2U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                            = __Vtemp121[3U];
                        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                            = (3U & __Vtemp121[4U]);
                        __Vtemp124[0U] = 1U;
                        __Vtemp124[1U] = 0U;
                        __Vtemp124[2U] = 0U;
                        __Vtemp124[3U] = 0U;
                        __Vtemp124[4U] = 0U;
                        __Vtemp125[0U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U]);
                        __Vtemp125[1U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U]);
                        __Vtemp125[2U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U]);
                        __Vtemp125[3U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U]);
                        __Vtemp125[4U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U]);
                        VL_ADD_W(5, __Vtemp126, __Vtemp124, __Vtemp125);
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                            = __Vtemp126[0U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                            = __Vtemp126[1U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                            = __Vtemp126[2U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                            = __Vtemp126[3U];
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                            = (3U & __Vtemp126[4U]);
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                    __Vtemp129[0U] = 1U;
                    __Vtemp129[1U] = 0U;
                    __Vtemp129[2U] = 0U;
                    __Vtemp129[3U] = 0U;
                    __Vtemp129[4U] = 0U;
                    __Vtemp130[0U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U]);
                    __Vtemp130[1U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U]);
                    __Vtemp130[2U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U]);
                    __Vtemp130[3U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U]);
                    __Vtemp130[4U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U]);
                    VL_ADD_W(5, __Vtemp131, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, __Vtemp130);
                    VL_ADD_W(5, __Vtemp132, __Vtemp129, __Vtemp131);
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                        = __Vtemp132[0U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                        = __Vtemp132[1U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                        = __Vtemp132[2U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                        = __Vtemp132[3U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                        = (3U & __Vtemp132[4U]);
                    __Vtemp135[0U] = 1U;
                    __Vtemp135[1U] = 0U;
                    __Vtemp135[2U] = 0U;
                    __Vtemp135[3U] = 0U;
                    __Vtemp135[4U] = 0U;
                    __Vtemp136[0U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U]);
                    __Vtemp136[1U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U]);
                    __Vtemp136[2U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U]);
                    __Vtemp136[3U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U]);
                    __Vtemp136[4U] = (~ vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U]);
                    VL_ADD_W(5, __Vtemp137, __Vtemp135, __Vtemp136);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                        = __Vtemp137[0U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                        = __Vtemp137[1U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                        = __Vtemp137[2U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                        = __Vtemp137[3U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                        = (3U & __Vtemp137[4U]);
                } else {
                    __Vtemp140[0U] = 1U;
                    __Vtemp140[1U] = 0U;
                    __Vtemp140[2U] = 0U;
                    __Vtemp140[3U] = 0U;
                    __Vtemp140[4U] = 0U;
                    VL_SHIFTL_WWI(130,130,1, __Vtemp141, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x, 1U);
                    __Vtemp142[0U] = (~ __Vtemp141[0U]);
                    __Vtemp142[1U] = (~ __Vtemp141[1U]);
                    __Vtemp142[2U] = (~ __Vtemp141[2U]);
                    __Vtemp142[3U] = (~ __Vtemp141[3U]);
                    __Vtemp142[4U] = (~ __Vtemp141[4U]);
                    VL_ADD_W(5, __Vtemp143, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, __Vtemp142);
                    VL_ADD_W(5, __Vtemp144, __Vtemp140, __Vtemp143);
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                        = __Vtemp144[0U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                        = __Vtemp144[1U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                        = __Vtemp144[2U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                        = __Vtemp144[3U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                        = (3U & __Vtemp144[4U]);
                    __Vtemp147[0U] = 1U;
                    __Vtemp147[1U] = 0U;
                    __Vtemp147[2U] = 0U;
                    __Vtemp147[3U] = 0U;
                    __Vtemp147[4U] = 0U;
                    VL_SHIFTL_WWI(130,130,1, __Vtemp148, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x, 1U);
                    __Vtemp149[0U] = (~ __Vtemp148[0U]);
                    __Vtemp149[1U] = (~ __Vtemp148[1U]);
                    __Vtemp149[2U] = (~ __Vtemp148[2U]);
                    __Vtemp149[3U] = (~ __Vtemp148[3U]);
                    __Vtemp149[4U] = (~ __Vtemp148[4U]);
                    VL_ADD_W(5, __Vtemp150, __Vtemp147, __Vtemp149);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                        = __Vtemp150[0U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                        = __Vtemp150[1U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                        = __Vtemp150[2U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                        = __Vtemp150[3U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                        = (3U & __Vtemp150[4U]);
                }
            } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                    VL_ADD_W(5, __Vtemp153, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x);
                    VL_SHIFTL_WWI(130,130,1, __Vtemp154, __Vtemp153, 1U);
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                        = __Vtemp154[0U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                        = __Vtemp154[1U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                        = __Vtemp154[2U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                        = __Vtemp154[3U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                        = (3U & __Vtemp154[4U]);
                    VL_SHIFTL_WWI(130,130,1, __Vtemp157, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x, 1U);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                        = __Vtemp157[0U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                        = __Vtemp157[1U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                        = __Vtemp157[2U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                        = __Vtemp157[3U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                        = (3U & __Vtemp157[4U]);
                } else {
                    VL_ADD_W(5, __Vtemp160, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x);
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                        = __Vtemp160[0U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                        = __Vtemp160[1U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                        = __Vtemp160[2U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                        = __Vtemp160[3U];
                    __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                        = (3U & __Vtemp160[4U]);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U];
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                        = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U];
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y))) {
                VL_ADD_W(5, __Vtemp163, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x);
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                    = __Vtemp163[0U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                    = __Vtemp163[1U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                    = __Vtemp163[2U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                    = __Vtemp163[3U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                    = (3U & __Vtemp163[4U]);
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U];
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U];
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U];
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U];
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U];
            } else {
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U];
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] = 0U;
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] = 0U;
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] = 0U;
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] = 0U;
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] = 0U;
            }
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U] 
                = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[0U];
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U] 
                = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[1U];
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U] 
                = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[2U];
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U] 
                = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[3U];
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U] 
                = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[4U];
        } else {
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U] = 0U;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] = 0U;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] = 0U;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] = 0U;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] = 0U;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] = 0U;
        }
    } else {
        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] = 0U;
        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] = 0U;
        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] = 0U;
        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] = 0U;
        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] = 0U;
        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U] = 0U;
        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U] = 0U;
        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U] = 0U;
        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U] = 0U;
        __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U] = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[0U] = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[1U] = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[2U] = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[3U] = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p[4U] = 0U;
    }
    __Vdly__ysyx_22040175_top__DOT__mem_s_flag = ((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n) 
                                                  & ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                                                      ? (IData)(vlSelf->ysyx_22040175_top__DOT__mem_s_flag)
                                                      : (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag)));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__sh_fnsh_flag 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n) 
           & (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state) 
               >> 2U) | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state) 
                          >> 1U) & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))));
    if (vlSelf->ysyx_22040175_top__DOT__rst_n) {
        __Vdly__ysyx_22040175_top__DOT__ex_rd_buf_flag 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                ? (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)
                : (IData)(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag));
        __Vdly__ysyx_22040175_top__DOT__mem_reg_waddr 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                ? (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)
                : (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr));
        __Vdly__ysyx_22040175_top__DOT__mem_expand_signed 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                ? (IData)(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed)
                : (IData)(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed));
        vlSelf->ysyx_22040175_top__DOT__mem_alu_op 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                ? (IData)(vlSelf->ysyx_22040175_top__DOT__mem_alu_op)
                : (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op));
        vlSelf->ysyx_22040175_top__DOT__ex_expand_signed 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                ? (IData)(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed)
                : (IData)(vlSelf->ysyx_22040175_top__DOT__id_expand_signed));
        vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                ? (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)
                : (IData)(vlSelf->ysyx_22040175_top__DOT__id_reg_waddr));
        vlSelf->ysyx_22040175_top__DOT__ex_alu_op = 
            ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
              ? (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op)
              : (IData)(vlSelf->ysyx_22040175_top__DOT__id_alu_op));
        vlSelf->ysyx_22040175_top__DOT__mem_alu_src2 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                ? vlSelf->ysyx_22040175_top__DOT__mem_alu_src2
                : vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
        vlSelf->ysyx_22040175_top__DOT__mem_alu_src1 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                ? vlSelf->ysyx_22040175_top__DOT__mem_alu_src1
                : vlSelf->ysyx_22040175_top__DOT__ex_alu_src1);
        __Vdly__ysyx_22040175_top__DOT__mem_rd_buf_flag 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                ? (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag)
                : (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag));
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)
                ? vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst
                : (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)));
    } else {
        __Vdly__ysyx_22040175_top__DOT__ex_rd_buf_flag = 0U;
        __Vdly__ysyx_22040175_top__DOT__mem_reg_waddr = 0U;
        __Vdly__ysyx_22040175_top__DOT__mem_expand_signed = 0U;
        vlSelf->ysyx_22040175_top__DOT__mem_alu_op = 0U;
        vlSelf->ysyx_22040175_top__DOT__ex_expand_signed = 0U;
        vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr = 0U;
        vlSelf->ysyx_22040175_top__DOT__ex_alu_op = 0U;
        vlSelf->ysyx_22040175_top__DOT__mem_alu_src2 = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__mem_alu_src1 = 0ULL;
        __Vdly__ysyx_22040175_top__DOT__mem_rd_buf_flag = 0U;
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst = 0ULL;
    }
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v0 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v1 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [1U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v2 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [2U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v3 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [3U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v4 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [4U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v5 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [5U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v6 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [6U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v7 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [7U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v8 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [8U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v9 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [9U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v10 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0xaU];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v11 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0xbU];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v12 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0xcU];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v13 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0xdU];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v14 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0xeU];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v15 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0xfU];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v16 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x10U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v17 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x11U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v18 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x12U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v19 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x13U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v20 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x14U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v21 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x15U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v22 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x16U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v23 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x17U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v24 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x18U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v25 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x19U];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v26 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x1aU];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v27 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x1bU];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v28 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x1cU];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v29 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x1dU];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v30 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x1eU];
    __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v31 
        = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
        [0x1fU];
    vlSelf->ysyx_22040175_top__DOT__wb_reg_wen = ((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n) 
                                                  & ((IData)(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem)
                                                      ? (IData)(vlSelf->ysyx_22040175_top__DOT__wb_reg_wen)
                                                      : (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_wen)));
    if (vlSelf->ysyx_22040175_top__DOT__rst_n) {
        vlSelf->ysyx_22040175_top__DOT__wb_expand_signed 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem)
                ? (IData)(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed)
                : (IData)(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed));
        vlSelf->ysyx_22040175_top__DOT__wb_s_flag = 
            (((IData)(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem)
               ? (IData)(vlSelf->ysyx_22040175_top__DOT__wb_s_flag)
               : (IData)(vlSelf->ysyx_22040175_top__DOT__mem_s_flag)) 
             & 1U);
        vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem)
                ? (IData)(vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr)
                : (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr));
        vlSelf->ysyx_22040175_top__DOT__wb_cunqu_hazard 
            = (((IData)(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem)
                 ? (IData)(vlSelf->ysyx_22040175_top__DOT__wb_cunqu_hazard)
                 : (IData)(vlSelf->ysyx_22040175_top__DOT__mem_cunqu_hazard)) 
               & 1U);
        vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem)
                ? vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res
                : vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res);
        vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem)
                ? vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res
                : vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res);
        vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag 
            = ((IData)(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem)
                ? (IData)(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag)
                : (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag));
    } else {
        vlSelf->ysyx_22040175_top__DOT__wb_expand_signed = 0U;
        vlSelf->ysyx_22040175_top__DOT__wb_s_flag = 0U;
        vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr = 0U;
        vlSelf->ysyx_22040175_top__DOT__wb_cunqu_hazard = 0U;
        vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res = 0ULL;
        vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag = 0U;
    }
    vlSelf->ysyx_22040175_top__DOT__mem_time_set = __Vdly__ysyx_22040175_top__DOT__mem_time_set;
    vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag 
        = __Vdly__ysyx_22040175_top__DOT__mem_ebreak_flag;
    vlSelf->ysyx_22040175_top__DOT__mem_pc = __Vdly__ysyx_22040175_top__DOT__mem_pc;
    vlSelf->ysyx_22040175_top__DOT__mem_wmask = __Vdly__ysyx_22040175_top__DOT__mem_wmask;
    vlSelf->ysyx_22040175_top__DOT__ex_cunqu_hazard 
        = __Vdly__ysyx_22040175_top__DOT__ex_cunqu_hazard;
    vlSelf->ysyx_22040175_top__DOT__if_pc = __Vdly__ysyx_22040175_top__DOT__if_pc;
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U] 
        = __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[0U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U] 
        = __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[1U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U] 
        = __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[2U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U] 
        = __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[3U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U] 
        = __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x[4U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
        = __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U] 
        = __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U] 
        = __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U] 
        = __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U] 
        = __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U];
    vlSelf->ysyx_22040175_top__DOT__ex_s_flag = __Vdly__ysyx_22040175_top__DOT__ex_s_flag;
    vlSelf->ysyx_22040175_top__DOT__ex_alu_src2 = __Vdly__ysyx_22040175_top__DOT__ex_alu_src2;
    vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 = __Vdly__ysyx_22040175_top__DOT__ex_alu_src1;
    vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag 
        = __Vdly__ysyx_22040175_top__DOT__ex_rd_buf_flag;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v0;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[1U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v1;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[2U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v2;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[3U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v3;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[4U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v4;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[5U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v5;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[6U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v6;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[7U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v7;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[8U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v8;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[9U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v9;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0xaU] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v10;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0xbU] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v11;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0xcU] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v12;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0xdU] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v13;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0xeU] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v14;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0xfU] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v15;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0x10U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v16;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0x11U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v17;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0x12U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v18;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0x13U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v19;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0x14U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v20;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0x15U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v21;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0x16U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v22;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0x17U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v23;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0x18U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v24;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0x19U] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v25;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0x1aU] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v26;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0x1bU] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v27;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0x1cU] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v28;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0x1dU] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v29;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0x1eU] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v30;
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0x1fU] 
        = __Vdlyvval__ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f__v31;
    vlSelf->ysyx_22040175_top__DOT__mem_reg_wen = __Vdly__ysyx_22040175_top__DOT__mem_reg_wen;
    vlSelf->ysyx_22040175_top__DOT__mem_expand_signed 
        = __Vdly__ysyx_22040175_top__DOT__mem_expand_signed;
    vlSelf->ysyx_22040175_top__DOT__mem_s_flag = __Vdly__ysyx_22040175_top__DOT__mem_s_flag;
    vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr = __Vdly__ysyx_22040175_top__DOT__mem_reg_waddr;
    vlSelf->ysyx_22040175_top__DOT__mem_cunqu_hazard 
        = __Vdly__ysyx_22040175_top__DOT__mem_cunqu_hazard;
    vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res 
        = __Vdly__ysyx_22040175_top__DOT__mem_from_ex_alu_res;
    vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag 
        = __Vdly__ysyx_22040175_top__DOT__mem_rd_buf_flag;
    vlSelf->diff_delay_pc = (IData)(vlSelf->ysyx_22040175_top__DOT__wb_delay_pc);
    if (vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_id_stage__DOT__u_ctrl__DOT__ebreak_TOP();
    }
    vlSelf->diff_pc = (IData)(vlSelf->ysyx_22040175_top__DOT__wb_pc);
    vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_pc_predict__DOT__delay_sig_jalr 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__sig_jalr));
    vlSelf->ysyx_22040175_top__DOT__if_ena = vlSelf->ysyx_22040175_top__DOT__rst_n;
    vlSelf->pc = (IData)(vlSelf->ysyx_22040175_top__DOT__if_pc);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n)
            ? ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                ? 0U : (7U & ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                               ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                                   ? 0U : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U])
                               : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                                   ? (6U & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y[0U] 
                                            << 1U))
                                   : 0U)))) : 0U);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid = 0U;
    if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid = 1U;
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed 
                            = (1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed));
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero = 0U;
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
        = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
           - vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1 
        = vlSelf->ysyx_22040175_top__DOT__ex_alu_src1;
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2 
        = vlSelf->ysyx_22040175_top__DOT__ex_alu_src2;
    if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                   - vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                = (0ULL == vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res);
        } else if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                        = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                           - vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                        = (0ULL == vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res);
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                        = ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                            ? vlSelf->ysyx_22040175_top__DOT__ex_alu_src2
                            : ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                                ? (QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2))))
                                : ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                                    ? (QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2))))
                                    : ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                                        ? (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2))
                                        : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res))));
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1 
                    = VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1));
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2 
                    = VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2));
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                    = VL_MODDIV_QQQ(64, (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1)), (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2)));
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                    = VL_DIV_QQQ(64, (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1)), (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)));
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                       * vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                    = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                       < vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1 
                = vlSelf->ysyx_22040175_top__DOT__ex_alu_src1;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__ex_alu_src2;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                = VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2);
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22040175_top__DOT__ex_alu_src1, vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
        }
    } else if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                    = ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))
                        ? VL_MODDIV_QQQ(64, vlSelf->ysyx_22040175_top__DOT__ex_alu_src1, vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)
                        : VL_DIV_QQQ(64, vlSelf->ysyx_22040175_top__DOT__ex_alu_src1, vlSelf->ysyx_22040175_top__DOT__ex_alu_src2));
            } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                       - vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                    = (0ULL == vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res);
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                       - vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                    = (0ULL != vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res);
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                    = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                       >= vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1 
                    = vlSelf->ysyx_22040175_top__DOT__ex_alu_src1;
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2 
                    = vlSelf->ysyx_22040175_top__DOT__ex_alu_src2;
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                    = VL_GTES_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = ((vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                    < vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)
                    ? 1ULL : 0ULL);
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1 
                = vlSelf->ysyx_22040175_top__DOT__ex_alu_src1;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2 
                = vlSelf->ysyx_22040175_top__DOT__ex_alu_src2;
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = (VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2)
                    ? 1ULL : 0ULL);
        }
    } else if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            __Vtemp181 = ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))
                           ? ((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                               ? VL_SHIFTRS_QQQ(64,64,64, vlSelf->ysyx_22040175_top__DOT__ex_alu_src1, vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)
                               : ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                                   ? VL_SHIFTRS_QQQ(64,64,64, 
                                                    VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1)), vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)
                                   : ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                                       ? VL_SHIFTRS_QQI(64,64,5, 
                                                        VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1)), 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)))
                                       : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res)))
                           : ((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                               ? VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22040175_top__DOT__ex_alu_src1, vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)
                               : ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                                   ? VL_SHIFTR_QQQ(64,64,64, (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1)), vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)
                                   : ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                                       ? ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1)) 
                                          >> (0x1fU 
                                              & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)))
                                       : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res))));
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = __Vtemp181;
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22040175_top__DOT__ex_alu_src1, vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res));
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                   - vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero 
                = (0ULL == vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res);
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))) {
            if ((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))) {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                       + vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res));
            } else {
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                    = ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                        ? (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                           + vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)
                        : ((5U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag))
                            ? vlSelf->ysyx_22040175_top__DOT__ex_alu_src2
                            : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res));
            }
        } else {
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
                = (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                   ^ vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
        }
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res 
            = ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_alu_op))
                ? (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                   | vlSelf->ysyx_22040175_top__DOT__ex_alu_src2)
                : (vlSelf->ysyx_22040175_top__DOT__ex_alu_src1 
                   & vlSelf->ysyx_22040175_top__DOT__ex_alu_src2));
    }
    if (vlSelf->ysyx_22040175_top__DOT__rst_n) {
        vlSelf->ysyx_22040175_top__DOT__id_inst = (
                                                   ((IData)(vlSelf->ysyx_22040175_top__DOT__rest_id_mem) 
                                                    | (IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop))
                                                    ? 0x13U
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22040175_top__DOT__id_control_rest) 
                                                     | (IData)(vlSelf->ysyx_22040175_top__DOT__delay_sig_jalr))
                                                     ? 0x13U
                                                     : (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata)));
        vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem 
            = (((~ (IData)(vlSelf->ysyx_22040175_top__DOT__mul_stop)) 
                & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rest_id_mem)) 
               & 1U);
    } else {
        vlSelf->ysyx_22040175_top__DOT__id_inst = (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata);
        vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem = 0U;
    }
    if (((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag)) 
           | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag))) 
          | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag))) 
         | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag)))) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_if_stage__DOT__pmem_read_TOP(
                                                                                (vlSelf->ysyx_22040175_top__DOT__mem_alu_src1 
                                                                                + vlSelf->ysyx_22040175_top__DOT__mem_alu_src2), vlSelf->__Vtask_ysyx_22040175_top__DOT__u_mem_stage__DOT__pmem_read__2__rdata);
        vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw 
            = vlSelf->__Vtask_ysyx_22040175_top__DOT__u_mem_stage__DOT__pmem_read__2__rdata;
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw = 0ULL;
    }
    vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata 
        = ((((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag)) 
               | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag))) 
              | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag))) 
             | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag))) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__wb_cunqu_hazard)))
            ? vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res
            : vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res);
    if (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid) {
        VL_EXTEND_WQ(130,64, __Vtemp185, vlSelf->ysyx_22040175_top__DOT__ex_alu_src1);
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[0U] 
            = __Vtemp185[0U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[1U] 
            = __Vtemp185[1U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[2U] 
            = __Vtemp185[2U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[3U] 
            = __Vtemp185[3U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x[4U] 
            = __Vtemp185[4U];
    }
    if (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__sh_fnsh_flag) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed) 
                          >> 2U)))) {
                VL_EXTEND_WQ(130,64, __Vtemp186, ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U])))));
                VL_EXTEND_WI(130,32, __Vtemp187, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U]);
                VL_EXTEND_WQ(130,64, __Vtemp189, (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U]))));
                if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))) {
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[0U] 
                        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                            ? __Vtemp186[0U] : __Vtemp187[0U]);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[1U] 
                        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                            ? __Vtemp186[1U] : __Vtemp187[1U]);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[2U] 
                        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                            ? __Vtemp186[2U] : __Vtemp187[2U]);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[3U] 
                        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                            ? __Vtemp186[3U] : __Vtemp187[3U]);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[4U] 
                        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                            ? __Vtemp186[4U] : __Vtemp187[4U]);
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[0U] 
                        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                            ? __Vtemp189[0U] : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U]);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[1U] 
                        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                            ? __Vtemp189[1U] : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U]);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[2U] 
                        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                            ? __Vtemp189[2U] : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U]);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[3U] 
                        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                            ? __Vtemp189[3U] : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U]);
                    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[4U] 
                        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                            ? __Vtemp189[4U] : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U]);
                }
            }
        }
    } else {
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[0U] = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[1U] = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[2U] = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[3U] = 0U;
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[4U] = 0U;
    }
    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_if_stage__DOT__pmem_read_TOP(vlSelf->ysyx_22040175_top__DOT__if_pc, vlSelf->__Vtask_ysyx_22040175_top__DOT__u_if_stage__DOT__pmem_read__0__rdata);
    vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata 
        = vlSelf->__Vtask_ysyx_22040175_top__DOT__u_if_stage__DOT__pmem_read__0__rdata;
    vlSelf->ysyx_22040175_top__DOT__ex_rest_id_mem 
        = __Vdly__ysyx_22040175_top__DOT__ex_rest_id_mem;
    if ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_alu_op))) {
        if ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag))) {
            vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res 
                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw));
        } else if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag))) {
            vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res 
                = vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw;
        } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag))) {
            vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res 
                = (QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw))));
        } else if ((6U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag))) {
            vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res 
                = (QData)((IData)((0xffffU & (IData)(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw))));
        }
    }
    if (vlSelf->ysyx_22040175_top__DOT__rst_n) {
        if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))) {
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U] = 0U;
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U] = 0U;
        } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))) {
            if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))) {
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U] 
                    = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U];
            } else {
                VL_SHIFTR_WWI(130,130,3, __Vtemp194, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y, 2U);
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U] 
                    = __Vtemp194[0U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U] 
                    = __Vtemp194[1U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U] 
                    = __Vtemp194[2U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U] 
                    = __Vtemp194[3U];
                __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U] 
                    = (3U & __Vtemp194[4U]);
                VL_SHIFTR_WWI(130,130,3, __Vtemp197, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y, 1U);
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U] 
                    = __Vtemp197[0U];
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U] 
                    = __Vtemp197[1U];
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U] 
                    = __Vtemp197[2U];
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U] 
                    = __Vtemp197[3U];
                vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U] 
                    = (3U & __Vtemp197[4U]);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))) {
            VL_SHIFTR_WWI(130,130,3, __Vtemp200, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y, 1U);
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U] 
                = __Vtemp200[0U];
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U] 
                = __Vtemp200[1U];
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U] 
                = __Vtemp200[2U];
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U] 
                = __Vtemp200[3U];
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U] 
                = (3U & __Vtemp200[4U]);
            VL_EXTEND_WW(130,66, __Vtemp203, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y);
            VL_SHIFTR_WWI(130,130,3, __Vtemp204, __Vtemp203, 2U);
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U] 
                = __Vtemp204[0U];
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U] 
                = __Vtemp204[1U];
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U] 
                = __Vtemp204[2U];
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U] 
                = __Vtemp204[3U];
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U] 
                = (3U & __Vtemp204[4U]);
        } else {
            VL_EXTEND_WW(130,66, __Vtemp206, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y);
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U] 
                = __Vtemp206[0U];
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U] 
                = __Vtemp206[1U];
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U] 
                = __Vtemp206[2U];
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U] 
                = __Vtemp206[3U];
            __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U] 
                = __Vtemp206[4U];
            VL_EXTEND_WW(130,66, __Vtemp207, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y);
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U] 
                = __Vtemp207[0U];
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U] 
                = __Vtemp207[1U];
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U] 
                = __Vtemp207[2U];
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U] 
                = __Vtemp207[3U];
            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U] 
                = __Vtemp207[4U];
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__sh_fnsh_flag)
            ? (((QData)((IData)(((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__sh_fnsh_flag)
                                  ? vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[1U]
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__sh_fnsh_flag)
                                   ? vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[0U]
                                   : 0U)))) : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res);
    vlSelf->inst = (IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata);
    vlSelf->ysyx_22040175_top__DOT__delay_sig_jalr 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__sig_jalr));
    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xeU)))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        } else if ((1U & (~ (IData)(
                                                    ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                     >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xdU)))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU)))) {
                            if ((1U == (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xcU)))) {
                            if ((0U == (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                            }
                        } else if ((0U == (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        }
                    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                 >> 0xcU))))) {
                        if ((0U == (0x7fU & (IData)(
                                                    ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                     >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        } else if ((0x20U == (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        } else if ((1U == (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 1U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 0xeU)))) {
                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_s_flag = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xcU)))) {
                                if ((1U == (0x7fU & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_wmask 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xdU)))
                                    ? ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))
                                        ? 0xffU : 0xfU)
                                    : ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))
                                        ? 3U : 1U));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 0xeU)))) {
                    vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_wmask = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xcU)))) {
                                if ((1U == (0x7fU & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 0xeU)))) {
                    vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_wen = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 3U;
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 2U;
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 5U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xdU)))) {
                            vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU)))) {
                            if ((1U == (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xcU)))) {
                            if ((0U == (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                            }
                        } else if ((0U == (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                        }
                    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                 >> 0xcU))))) {
                        if ((0U == (0x7fU & (IData)(
                                                    ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                     >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 3U;
                        } else if ((0x20U == (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 3U;
                        } else if ((1U == (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_rd_flag 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xdU)))
                                    ? ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))
                                        ? 1U : 4U) : 
                                   ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))
                                     ? 2U : 3U));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 0xeU)))) {
                    vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 3U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 3U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_flag = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__id_unknown_code = 0ULL;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 4U)))) {
                vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 3U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (~ (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                            = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U != (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                            = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xeU))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xdU)))) {
                            vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                        }
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                }
            } else {
                vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
            }
        } else {
            vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 2U)))) {
                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xeU)))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xdU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                                } else if ((1U != (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                                }
                            } else if ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))) {
                                if ((0x20U != (0x7fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x19U))))) {
                                    if ((0U != (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                            = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                                    }
                                }
                            } else if ((1U != (0x7fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                            }
                        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xdU)))) {
                            vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                        } else if ((1U & (~ (IData)(
                                                    ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                     >> 0xcU))))) {
                            if ((0U != (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                if ((1U != (0x7fU & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x19U))))) {
                                    if ((0x20U != (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                            = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                                    }
                                }
                            }
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                            = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (~ (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                            = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xcU)))) {
                                if ((1U != (0x7fU & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                                }
                            } else {
                                vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xcU)))) {
                            if ((0U != (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                            }
                        } else if ((0U != (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                            = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                    } else if ((0U != (0x7fU & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                        if ((0x20U != (0x7fU & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                            if ((1U != (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                            }
                        }
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                }
            } else {
                vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 3U)))) {
            vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 0xeU)))) {
                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                }
            } else {
                vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
            }
        } else {
            vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 2U)))) {
                vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((0U != (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU))))) {
                        if ((1U != (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            if ((5U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1fU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1eU)))) {
                                    if ((1U & (IData)(
                                                      ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                       >> 0x1dU)))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                            = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                                    } else if ((1U 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x1cU)))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                            = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                                    } else if ((1U 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x1bU)))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                            = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                                    } else if ((1U 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x1aU)))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                            = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1bU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1aU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                                }
                            } else {
                                vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                            }
                        }
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                }
            } else {
                vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (~ (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                }
            } else {
                vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 0xeU))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        if ((1U & (~ ((0U == (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U)))) 
                                      | (1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x19U)))))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                        }
                    }
                }
            } else {
                vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
            }
        } else {
            vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 3U)))) {
        vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
            = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U)))) {
        vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
            = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 1U)))) {
        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 0xeU)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 0xdU)))) {
                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                }
            } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                         >> 0xdU))))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 0xcU))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                        = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
                }
            }
        } else {
            vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
        }
    } else {
        vlSelf->ysyx_22040175_top__DOT__id_unknown_code 
            = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst));
    }
    if ((0x100073U == vlSelf->ysyx_22040175_top__DOT__id_inst)) {
        vlSelf->ysyx_22040175_top__DOT__id_unknown_code = 0ULL;
    }
    if ((0x100073U == vlSelf->ysyx_22040175_top__DOT__id_inst)) {
        vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag = 1U;
    }
    vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_jalr = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                         >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xeU)))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xcU)))) {
                                vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        if (((0U == (0x7fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x19U)))) 
                             | (1U == (0x7fU & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U)))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_jalr = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xeU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch = 1U;
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0xdU))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                         >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xeU)))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        if (((0U == (0x7fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x19U)))) 
                             | (1U == (0x7fU & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U)))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xeU)))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xdU)))
                                    ? ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))
                                        ? 0x12U : 0xbU)
                                    : ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))
                                        ? 0x11U : 0xaU));
                        } else if ((1U & (~ (IData)(
                                                    ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                     >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU)))
                                    ? 4U : 0xcU);
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__id_alu_op = 0x15U;
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_alu_op = 7U;
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_alu_op = 6U;
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 0x14U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 5U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 0x13U;
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 4U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xdU)))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU)))
                                    ? ((0U == (0x7fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x19U))))
                                        ? 0U : 0xfU)
                                    : ((0U == (0x7fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x19U))))
                                        ? 1U : 0xfU));
                        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU)))) {
                            if ((1U == (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_alu_op = 0xeU;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_op 
                            = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))
                                ? 9U : 8U);
                    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                 >> 0xcU))))) {
                        if ((0U == (0x7fU & (IData)(
                                                    ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                     >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                        } else if ((0x20U == (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op = 4U;
                        } else if ((1U == (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op = 0x13U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op = 0x16U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op = 5U;
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 7U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__id_alu_op = 6U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 0xeU)))) {
                    vlSelf->ysyx_22040175_top__DOT__id_alu_op 
                        = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU)))
                            ? ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))
                                ? 0U : 1U) : ((1U & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0xcU)))
                                               ? 6U
                                               : 2U));
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_op = 9U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_op = 0x10U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_op = 3U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 2U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 2U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 0U;
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 0U;
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 0U;
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 0U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 0U;
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 1U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 0U;
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xcU)))) {
                                if ((1U == (0x7fU & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 1U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 1U;
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 3U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 0xeU)))) {
                    vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 1U;
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 1U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 1U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 1U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 1U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xdU)))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU)))) {
                            if ((1U == (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xcU)))) {
                            if ((0U == (0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                            }
                        } else if ((0U == (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                        }
                    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                 >> 0xcU))))) {
                        if ((0U == (0x7fU & (IData)(
                                                    ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                     >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                        } else if ((0x20U == (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                        } else if ((1U == (0x7fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 0xeU)))) {
                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_expand_signed 
                            = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))
                                ? 0U : 1U);
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_expand_signed = 3U;
                    }
                }
            }
        }
    }
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 3U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                if ((0U == (7U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0xfU)));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                         >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xeU)))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xdU)))) {
                                if ((1U & (~ (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                }
                            } else if ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))) {
                                if ((1U == (0x7fU & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_imm 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xdU)))
                                    ? ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1fU))))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & ((IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x19U)) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)))))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1fU))))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & ((IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x19U)) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U))))))
                                    : ((1U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1fU))))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & ((IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x19U)) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)))))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1fU))))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & ((IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x19U)) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)))))));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_s_imm 
                            = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))
                                ? 0U : ((1U & (IData)(
                                                      ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                       >> 0xcU)))
                                         ? 0U : 0U));
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        if (((0U == (0x7fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x19U)))) 
                             | (1U == (0x7fU & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U)))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_s_imm 
                            = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))
                                ? 0U : (((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                >> 0x1fU))))) 
                                         << 0xcU) | 
                                        (0xfffU & (IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x14U)))));
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_s_imm = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 0U;
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag 
                                = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU)))
                                    ? 6U : 4U);
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag 
                            = ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))
                                ? 2U : 1U);
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag = 6U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 3U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                if ((0U == (7U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0xfU)));
                                }
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0xfU)));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                                                = (0x1fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0xfU)));
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                                            = (0x1fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xfU)));
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                                            = (0x1fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xfU)));
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0xfU)));
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0xfU)));
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0xfU)));
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0xfU)));
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0xfU)));
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr = 0U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                            >> 0xfU)));
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xcU)))) {
                                if ((1U == (0x7fU & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0xfU)));
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0xfU)));
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0xfU)));
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                                                        = 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                    >> 0xfU)));
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                                                    = 
                                                    (0x1fU 
                                                     & (IData)(
                                                               ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                >> 0xfU)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 0xeU)))) {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                            >> 0xfU)));
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                >> 0xfU)));
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                >> 0xfU)));
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                            >> 0xfU)));
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0xfU)));
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                >> 0xfU)));
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                >> 0xfU)));
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 3U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                if ((0U == (7U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr = 0U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x14U)));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                                = (0x1fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x14U)));
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                            = (0x1fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x14U)));
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                            = (0x1fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x14U)));
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x14U)));
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x14U)));
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x14U)));
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x14U)));
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x14U)));
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                         >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                >> 0x14U)));
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xeU)))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    if ((1U == (0x7fU 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                           >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                            = (0x1fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x14U)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x14U)));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr = 0U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x14U)));
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                                        = 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                    >> 0x14U)));
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                                    = 
                                                    (0x1fU 
                                                     & (IData)(
                                                               ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                >> 0x14U)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xcU)))) {
                                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x14U)));
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x14U)));
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        if (((0U == (0x7fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x19U)))) 
                             | (1U == (0x7fU & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U)))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x14U)));
                        }
                    } else {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr = 0U;
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                >> 0x14U)));
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 3U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 2U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 4U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xcU)))) {
                                if ((1U == (0x7fU & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 3U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 5U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 5U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 4U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 5U;
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 5U;
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 7U)));
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 7U)));
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_waddr = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xeU)))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xdU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU))))) {
                                        if ((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U))))) {
                                            vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                                = (0x1fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 7U)));
                                        }
                                    }
                                } else if ((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0xcU)))) {
                                    if ((0x20U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                            = (0x1fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 7U)));
                                    } else if ((0U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 0x19U))))) {
                                        vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                            = (0x1fU 
                                               & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 7U)));
                                    }
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)));
                                }
                            } else if ((1U & (~ (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xdU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)));
                                } else if ((0U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)));
                                } else if ((1U == (0x7fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)));
                                } else if ((0x20U == 
                                            (0x7fU 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                        >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)));
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                >> 7U)));
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                            >> 7U)));
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                               >> 0xcU)))) {
                                if ((1U == (0x7fU & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x19U))))) {
                                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                            >> 7U)));
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xeU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0xfU)));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 7U)));
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 7U)));
                        } else if ((5U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xcU))))) {
                            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x1fU))))) {
                                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1dU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1cU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1bU))))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(
                                                                  ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                   >> 0x1aU))))) {
                                                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                                        = 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                    >> 7U)));
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                             >> 0x1dU))))) {
                                    if ((1U & (~ (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                          >> 0x1cU))))) {
                                        if ((1U & (~ (IData)(
                                                             ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                              >> 0x1bU))))) {
                                            if ((1U 
                                                 & (~ (IData)(
                                                              ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                               >> 0x1aU))))) {
                                                vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                                    = 
                                                    (0x1fU 
                                                     & (IData)(
                                                               ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                >> 7U)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                            >> 7U)));
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                   >> 0xeU)))) {
                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                            >> 7U)));
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                >> 7U)));
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                          >> 0xcU)))) {
                    if (((0U == (0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                  >> 0x19U)))) 
                         | (1U == (0x7fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 0x19U)))))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                >> 7U)));
                    }
                } else {
                    vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                            >> 7U)));
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU))))) {
                            vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                    >> 7U)));
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xdU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                >> 7U)));
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__id_reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                >> 7U)));
                    }
                }
            }
        }
    }
    if (vlSelf->ysyx_22040175_top__DOT__rst_n) {
        vlSelf->ysyx_22040175_top__DOT__mul_stop = 
            (1U & ((~ ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state) 
                       >> 2U)) & (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state) 
                                   >> 1U) | (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))));
    }
    vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res 
        = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed))
            ? vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res
            : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed))
                ? vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res
                : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed))
                    ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed))
                        ? (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res 
                                                           >> 0xfU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res)))))
                        : (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res)))
                    : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res)))
                        : vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U] 
        = __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[0U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U] 
        = __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[1U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U] 
        = __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[2U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U] 
        = __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[3U];
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U] 
        = __Vdly__ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y[4U];
    if (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid) {
        VL_EXTEND_WQ(66,64, __Vtemp210, vlSelf->ysyx_22040175_top__DOT__ex_alu_src2);
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y[0U] 
            = __Vtemp210[0U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y[1U] 
            = __Vtemp210[1U];
        vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y[2U] 
            = __Vtemp210[2U];
    }
    vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res 
        = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed))
            ? vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2
            : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed))
                ? vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2
                : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed))
                    ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed))
                        ? (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2 
                                                           >> 0xfU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2)))))
                        : (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2)))
                    : ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2)))
                        : vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2))));
    if ((0ULL != vlSelf->ysyx_22040175_top__DOT__id_unknown_code)) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_id_stage__DOT__u_ctrl__DOT__unknown_inst_TOP();
    }
    vlSelf->ysyx_22040175_top__DOT__id_control_rest 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch) 
           | (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump));
    vlSelf->ysyx_22040175_top__DOT__id_imm = ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op))
                                               ? ((2U 
                                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op))
                                                   ? (QData)((IData)(
                                                                     (((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x1fU))))) 
                                                                       << 7U) 
                                                                      | (0x7fU 
                                                                         & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op))
                                                    ? (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x14U)))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((IData)(
                                                                               ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0xcU)) 
                                                                       << 0xcU))))))
                                               : ((2U 
                                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x1fU)))))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      ((0xff000U 
                                                                        & ((IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0xcU)) 
                                                                           << 0xcU)) 
                                                                       | ((0x800U 
                                                                           & ((IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x14U)) 
                                                                              << 0xbU)) 
                                                                          | (0x7feU 
                                                                             & ((IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x15U)) 
                                                                                << 1U)))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0x800U 
                                                                        & ((IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 7U)) 
                                                                           << 0xbU)) 
                                                                       | ((0x7e0U 
                                                                           & ((IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x19U)) 
                                                                              << 5U)) 
                                                                          | (0x1eU 
                                                                             & ((IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 8U)) 
                                                                                << 1U))))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & ((IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x19U)) 
                                                                           << 5U)) 
                                                                       | (0x1fU 
                                                                          & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 7U)))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                                                >> 0x14U)))))))));
    if ((0x100073U == vlSelf->ysyx_22040175_top__DOT__id_inst)) {
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyx_22040175_top__DOT__id_reg_waddr)));
    }
    if ((0x100073U == vlSelf->ysyx_22040175_top__DOT__id_inst)) {
        vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyx_22040175_top__DOT__id_reg_waddr)));
    }
    vlSelf->ysyx_22040175_top__DOT__wb_hazard_result 
        = (((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag)) 
              | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag))) 
             | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag))) 
            | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag)))
            ? vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res
            : vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res);
    vlSelf->ysyx_22040175_top__DOT__rest_id_mem = (
                                                   ((((0ULL 
                                                       != vlSelf->ysyx_22040175_top__DOT__id_pc) 
                                                      & (0x80000000ULL 
                                                         != vlSelf->ysyx_22040175_top__DOT__id_pc)) 
                                                     & (0U 
                                                        != (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                                                    & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem))) 
                                                   & (((((1U 
                                                          == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)) 
                                                         | (2U 
                                                            == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
                                                        | (4U 
                                                           == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
                                                       | (6U 
                                                          == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
                                                      & (((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                                                              == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                                                             & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                                                                == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                                                            | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                                                                == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                                                               & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                                                                  == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)))) 
                                                           & (0U 
                                                              != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                                                          & (0U 
                                                             == vlSelf->ysyx_22040175_top__DOT__id_s_imm)) 
                                                         | ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                                                              == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                                                             | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                                                                == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                                                            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag))))));
    vlSelf->ysyx_22040175_top__DOT__rest_wb_hazard 
        = (((((0ULL != vlSelf->ysyx_22040175_top__DOT__id_pc) 
              & (0x80000000ULL != vlSelf->ysyx_22040175_top__DOT__id_pc)) 
             & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem))) 
           & (((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)) 
                 | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
                | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
               | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)))
               ? (((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                       == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                      & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                     | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                        & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)))) 
                    & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                   & (0U == vlSelf->ysyx_22040175_top__DOT__id_s_imm)) 
                  | ((~ ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                          | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag)))) 
                     & (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                          | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                         & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                        & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__mem_s_flag)))))
               : ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                     & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                    | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                       & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                          == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)))) 
                   & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                  | ((~ ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                          | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag)))) 
                     & (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                          | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                             == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                         & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                        & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__mem_s_flag)))))));
    vlSelf->ysyx_22040175_top__DOT__rest_from_id = 
        (((((0ULL != vlSelf->ysyx_22040175_top__DOT__id_pc) 
            & (0x80000000ULL != vlSelf->ysyx_22040175_top__DOT__id_pc)) 
           & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
          & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem))) 
         & (((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)) 
               | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
              | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
             | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)))
             ? (((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                     == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                    & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                       == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                   | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                       == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                      & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)))) 
                  & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                 & (0U == vlSelf->ysyx_22040175_top__DOT__id_s_imm)) 
                | (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                     | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                    & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag))) 
                   | (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                         == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                        | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                           == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                       & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                      & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__mem_s_flag)))))
             : ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                    == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                   & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                  | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                     & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)))) 
                 & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                | (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                      == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                     | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                    & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag))) 
                   | ((((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                          == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                         | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                        & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                       & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__mem_s_flag))) 
                      | (((((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr)) 
                            + vlSelf->ysyx_22040175_top__DOT__id_imm) 
                           == ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                               + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_imm)))) 
                          & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag)) 
                         & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag))))))));
    vlSelf->ysyx_22040175_top__DOT__id_cunqu_hazard 
        = (((((0ULL != vlSelf->ysyx_22040175_top__DOT__id_pc) 
              & (0x80000000ULL != vlSelf->ysyx_22040175_top__DOT__id_pc)) 
             & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem))) 
           & ((~ ((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)) 
                    | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
                   | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
                  | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)))) 
              & ((~ (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                        == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                       & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                          == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                      | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                          == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                         & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)))) 
                     & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)))) 
                 & ((~ ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                          == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                         | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                            == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                        & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag)))) 
                    & ((~ (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                              == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                             | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                                == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                            & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                           & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__mem_s_flag)))) 
                       & (((((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr)) 
                             + vlSelf->ysyx_22040175_top__DOT__id_imm) 
                            == ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                                + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_imm)))) 
                           & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag)) 
                          & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag))))))));
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n)
            ? (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__next_state)
            : 0U);
    vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__next_state 
        = ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
            ? 0U : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                     ? ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                         ? 0U : (((0U == (((((7U ^ 
                                              vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U]) 
                                             | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U]) 
                                            | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U]) 
                                           | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U]) 
                                          | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U])) 
                                  | (0U == ((((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U] 
                                               | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U]) 
                                              | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U]) 
                                             | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U]) 
                                            | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U])))
                                  ? 3U : 2U)) : ((1U 
                                                  & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (((((7U 
                                                         ^ 
                                                         vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U]) 
                                                        | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U]) 
                                                       | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U]) 
                                                      | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U]) 
                                                     | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U])) 
                                                   | (0U 
                                                      == 
                                                      ((((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U] 
                                                          | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U]) 
                                                         | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U]) 
                                                        | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U]) 
                                                       | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U])))
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid)
                                                   ? 1U
                                                   : 0U))));
}
