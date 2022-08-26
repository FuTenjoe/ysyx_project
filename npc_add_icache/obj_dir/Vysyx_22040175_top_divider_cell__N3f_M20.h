// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_DIVIDER_CELL__N3F_M20_H_
#define VERILATED_VYSYX_22040175_TOP_DIVIDER_CELL__N3F_M20_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_divider_cell__N3f_M20) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rstn,0,0);
    VL_IN8(__PVT__en,0,0);
    VL_OUT8(__PVT__rdy,0,0);
    VL_IN(__PVT__divisor,31,0);
    VL_IN(__PVT__merchant_ci,31,0);
    VL_IN(__PVT__dividend_ci,30,0);
    VL_OUT(__PVT__dividend_kp,30,0);
    VL_OUT(__PVT__divisor_kp,31,0);
    VL_OUT(__PVT__merchant,31,0);
    VL_OUT(__PVT__remainder,31,0);
    VL_IN64(__PVT__dividend,32,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__rdy;
    IData/*31:0*/ __Vdly__divisor_kp;
    IData/*30:0*/ __Vdly__dividend_kp;
    IData/*31:0*/ __Vdly__merchant;
    IData/*31:0*/ __Vdly__remainder;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_divider_cell__N3f_M20);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_divider_cell__N3f_M20(const char* name);
    ~Vysyx_22040175_top_divider_cell__N3f_M20();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
