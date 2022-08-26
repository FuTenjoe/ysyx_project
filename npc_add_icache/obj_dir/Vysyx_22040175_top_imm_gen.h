// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_IMM_GEN_H_
#define VERILATED_VYSYX_22040175_TOP_IMM_GEN_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_imm_gen) {
  public:

    // PORTS
    VL_IN8(__PVT__imm_gen_op,2,0);
    VL_IN64(__PVT__inst,63,0);
    VL_OUT64(__PVT__imm,63,0);

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_imm_gen);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_imm_gen(const char* name);
    ~Vysyx_22040175_top_imm_gen();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
