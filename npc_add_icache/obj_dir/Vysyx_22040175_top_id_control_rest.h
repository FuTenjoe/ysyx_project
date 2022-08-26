// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_ID_CONTROL_REST_H_
#define VERILATED_VYSYX_22040175_TOP_ID_CONTROL_REST_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_id_control_rest) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__branch,0,0);
    VL_IN8(__PVT__jump,0,0);
    VL_OUT8(__PVT__control_rest,0,0);
    VL_IN8(__PVT__rest_from_id,0,0);
    VL_IN8(__PVT__mret_flag,0,0);
    VL_IN8(__PVT__ecall_flag,0,0);

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_id_control_rest);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_id_control_rest(const char* name);
    ~Vysyx_22040175_top_id_control_rest();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
