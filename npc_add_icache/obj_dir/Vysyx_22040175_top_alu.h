// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_ALU_H_
#define VERILATED_VYSYX_22040175_TOP_ALU_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;
class Vysyx_22040175_top_mul;
class Vysyx_22040175_top_div__NB3f;
class Vysyx_22040175_top_div__N40_M40_NB7f;


//----------

VL_MODULE(Vysyx_22040175_top_alu) {
  public:
    // CELLS
    Vysyx_22040175_top_mul* __PVT__u_mul;
    Vysyx_22040175_top_div__NB3f* __PVT__u_div32;
    Vysyx_22040175_top_div__N40_M40_NB7f* __PVT__u_div64;

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__alu_op,4,0);
    VL_IN8(__PVT__rd_flag,2,0);
    VL_IN8(__PVT__expand_signed,3,0);
    VL_OUT8(__PVT__sh_fnsh_flag,0,0);
    VL_OUT8(__PVT__div_finish,0,0);
    VL_IN64(__PVT__alu_src1,63,0);
    VL_IN64(__PVT__alu_src2,63,0);
    VL_OUT64(__PVT__alu_res_ex_sign,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__zero;
    CData/*0:0*/ __PVT__mul_valid;
    CData/*3:0*/ __PVT__mul_expand_signed;
    CData/*0:0*/ __PVT__div32_valid;
    CData/*0:0*/ __PVT__div_signed;
    CData/*0:0*/ __PVT__alu_sec;
    CData/*0:0*/ __PVT__div64_valid;
    CData/*0:0*/ __PVT__div_finish32;
    CData/*0:0*/ __PVT__div_finish64;
    CData/*0:0*/ __PVT__delay_sh_fg;
    CData/*1:0*/ __PVT__mul_signed;
    VlWide<5>/*129:0*/ __PVT__mul_res;
    VlWide<5>/*129:0*/ __PVT__delay_mul_res;
    IData/*31:0*/ __PVT__delay_div_res32;
    QData/*63:0*/ __PVT__alu_res;
    QData/*63:0*/ __PVT__signed_alu_src1;
    QData/*63:0*/ __PVT__signed_alu_src2;
    QData/*63:0*/ __PVT__div_res;
    QData/*63:0*/ __PVT__div_res32;
    QData/*63:0*/ __PVT__div_res64;
    QData/*63:0*/ __PVT__alu_res2;
    QData/*63:0*/ __PVT__delay_div_res64;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__delay_sh_fg;
    IData/*31:0*/ __Vcellout__u_div32__div_res;
    IData/*31:0*/ __Vcellinp__u_div32__divisor;
    IData/*31:0*/ __Vcellinp__u_div32__dividend;
    VlWide<5>/*129:0*/ __Vdly__delay_mul_res;
    IData/*31:0*/ __Vdly__delay_div_res32;
    QData/*63:0*/ __Vdly__delay_div_res64;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_alu);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_alu(const char* name);
    ~Vysyx_22040175_top_alu();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
