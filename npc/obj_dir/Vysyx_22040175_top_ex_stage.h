// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_EX_STAGE_H_
#define VERILATED_VYSYX_22040175_TOP_EX_STAGE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;
class Vysyx_22040175_top_alu;


//----------

VL_MODULE(Vysyx_22040175_top_ex_stage) {
  public:
    // CELLS
    Vysyx_22040175_top_alu* __PVT__u_alu;

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
    VL_OUT64(__PVT__alu_res,63,0);

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_ex_stage);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_ex_stage(const char* name);
    ~Vysyx_22040175_top_ex_stage();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
