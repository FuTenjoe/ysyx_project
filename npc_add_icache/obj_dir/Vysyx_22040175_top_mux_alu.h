// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_MUX_ALU_H_
#define VERILATED_VYSYX_22040175_TOP_MUX_ALU_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_mux_alu) {
  public:

    // PORTS
    VL_IN8(__PVT__alu_src_sel,2,0);
    VL_IN8(__PVT__cunqu_hazard,0,0);
    VL_IN16(__PVT__csr_addr,11,0);
    VL_IN64(__PVT__reg1_rdata,63,0);
    VL_IN64(__PVT__reg2_rdata,63,0);
    VL_IN64(__PVT__imm,63,0);
    VL_IN64(__PVT__curr_pc,63,0);
    VL_OUT64(__PVT__alu_src1,63,0);
    VL_OUT64(__PVT__alu_src2,63,0);
    VL_IN64(__PVT__mepc,63,0);
    VL_IN64(__PVT__mcause,63,0);
    VL_IN64(__PVT__mtvec,63,0);
    VL_IN64(__PVT__mstatus,63,0);

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_mux_alu);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_mux_alu(const char* name);
    ~Vysyx_22040175_top_mux_alu();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
