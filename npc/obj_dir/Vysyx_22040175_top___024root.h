// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP___024ROOT_H_
#define VERILATED_VYSYX_22040175_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(inst,31,0);
    VL_OUT(curr_pc,31,0);
    VL_OUT(next_pc,31,0);

    // LOCAL SIGNALS
    CData/*0:0*/ ysyx_22040175_top__DOT__rst_n;
    CData/*0:0*/ ysyx_22040175_top__DOT__ena;
    CData/*0:0*/ ysyx_22040175_top__DOT__branch;
    CData/*0:0*/ ysyx_22040175_top__DOT__zero;
    CData/*0:0*/ ysyx_22040175_top__DOT__jump;
    CData/*0:0*/ ysyx_22040175_top__DOT__reg_wen;
    CData/*4:0*/ ysyx_22040175_top__DOT__reg_waddr;
    CData/*4:0*/ ysyx_22040175_top__DOT__reg1_raddr;
    CData/*4:0*/ ysyx_22040175_top__DOT__reg2_raddr;
    CData/*2:0*/ ysyx_22040175_top__DOT__imm_gen_op;
    CData/*3:0*/ ysyx_22040175_top__DOT__alu_op;
    CData/*1:0*/ ysyx_22040175_top__DOT__alu_src_sel;
    IData/*31:0*/ ysyx_22040175_top__DOT__reg2_rdata;
    IData/*31:0*/ ysyx_22040175_top__DOT__imm;
    IData/*31:0*/ ysyx_22040175_top__DOT__alu_src1;
    IData/*31:0*/ ysyx_22040175_top__DOT__alu_src2;
    IData/*31:0*/ ysyx_22040175_top__DOT__alu_res;
    VlUnpacked<IData/*31:0*/, 32> ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f;

    // LOCAL VARIABLES
    CData/*0:0*/ __VinpClk__TOP__ysyx_22040175_top__DOT__rst_n;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__rst_n;
    CData/*0:0*/ __Vchglast__TOP__ysyx_22040175_top__DOT__rst_n;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top___024root);  ///< Copying not allowed
  public:
    Vysyx_22040175_top___024root(const char* name);
    ~Vysyx_22040175_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
