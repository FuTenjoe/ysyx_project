// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_AXI_JUDGE_H_
#define VERILATED_VYSYX_22040175_TOP_AXI_JUDGE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_axi_judge) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__if_valid,0,0);
    VL_IN8(__PVT__if_send_id,3,0);
    VL_IN8(__PVT__mem_valid,0,0);
    VL_IN8(__PVT__mem_send_id,3,0);
    VL_IN8(__PVT__r_done,0,0);
    VL_IN8(__PVT__return_id,3,0);
    VL_OUT8(__PVT__axi_valid,0,0);
    VL_OUT8(__PVT__axi_id,3,0);
    VL_OUT8(__PVT__axi_burst,0,0);
    VL_IN(__PVT__pc,31,0);
    VL_IN64(__PVT__mem_addr,63,0);
    VL_OUT64(__PVT__axi_addr,63,0);

    // LOCAL SIGNALS
    CData/*2:0*/ __PVT__present_state;
    CData/*2:0*/ __PVT__next_state;

    // LOCAL VARIABLES
    CData/*2:0*/ __Vdly__present_state;
    CData/*3:0*/ __Vdly__axi_id;
    QData/*63:0*/ __Vdly__axi_addr;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_axi_judge);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_axi_judge(const char* name);
    ~Vysyx_22040175_top_axi_judge();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
