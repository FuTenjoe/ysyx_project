// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_DIVIDER_CELL__N7F_M40_H_
#define VERILATED_VYSYX_22040175_TOP_DIVIDER_CELL__N7F_M40_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_divider_cell__N7f_M40) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rstn,0,0);
    VL_IN8(__PVT__en,0,0);
    VL_OUT8(__PVT__rdy,0,0);
    VL_INW(__PVT__dividend,64,0,3);
    VL_IN64(__PVT__divisor,63,0);
    VL_IN64(__PVT__merchant_ci,63,0);
    VL_IN64(__PVT__dividend_ci,62,0);
    VL_OUT64(__PVT__dividend_kp,62,0);
    VL_OUT64(__PVT__divisor_kp,63,0);
    VL_OUT64(__PVT__merchant,63,0);
    VL_OUT64(__PVT__remainder,63,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__rdy;
    QData/*63:0*/ __Vdly__divisor_kp;
    QData/*62:0*/ __Vdly__dividend_kp;
    QData/*63:0*/ __Vdly__merchant;
    QData/*63:0*/ __Vdly__remainder;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_divider_cell__N7f_M40);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_divider_cell__N7f_M40(const char* name);
    ~Vysyx_22040175_top_divider_cell__N7f_M40();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
