// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_MUL_H_
#define VERILATED_VYSYX_22040175_TOP_MUL_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_mul) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__mul_valid,0,0);
    VL_IN8(__PVT__mul_signed,1,0);
    VL_IN8(__PVT__mul_expand_signed,3,0);
    VL_OUT8(__PVT__sh_fnsh_flag,0,0);
    VL_OUTW(__PVT__mul_res,129,0,5);
    VL_IN64(__PVT__alu_src1,63,0);
    VL_IN64(__PVT__alu_src2,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__delay_mul_valid;
    CData/*0:0*/ __PVT__delay1_sh_fg;
    CData/*0:0*/ __PVT__delay2_sh_fg;
    CData/*2:0*/ __PVT__present_state;
    CData/*2:0*/ __PVT__next_state;
    CData/*2:0*/ __PVT__y;
    VlWide<5>/*129:0*/ __PVT__alu_x;
    VlWide<3>/*65:0*/ __PVT__alu_y;
    VlWide<5>/*129:0*/ __PVT__no_latch_x;
    VlWide<3>/*65:0*/ __PVT__no_latch_y;
    VlWide<5>/*129:0*/ __PVT__x;
    VlWide<5>/*129:0*/ __PVT__add_p;
    VlWide<5>/*129:0*/ __PVT__reg_alu_y;
    VlWide<5>/*129:0*/ __PVT__delay_alu_y;
    VlWide<5>/*129:0*/ __PVT__p;
    VlWide<5>/*129:0*/ __PVT__ex_p;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__delay_mul_valid;
    CData/*0:0*/ __Vdly__delay1_sh_fg;
    CData/*0:0*/ __Vdly__delay2_sh_fg;
    CData/*2:0*/ __Vdly__present_state;
    CData/*2:0*/ __Vdly__y;
    CData/*0:0*/ __Vdly__sh_fnsh_flag;
    VlWide<5>/*129:0*/ __Vdly__no_latch_x;
    VlWide<3>/*65:0*/ __Vdly__no_latch_y;
    VlWide<5>/*129:0*/ __Vdly__x;
    VlWide<5>/*129:0*/ __Vdly__add_p;
    VlWide<5>/*129:0*/ __Vdly__p;
    VlWide<5>/*129:0*/ __Vdly__reg_alu_y;
    VlWide<5>/*129:0*/ __Vdly__delay_alu_y;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_mul);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_mul(const char* name);
    ~Vysyx_22040175_top_mul();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
