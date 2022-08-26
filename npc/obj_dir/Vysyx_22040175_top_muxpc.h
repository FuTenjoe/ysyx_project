// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_MUXPC_H_
#define VERILATED_VYSYX_22040175_TOP_MUXPC_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_muxpc) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__branch,0,0);
    VL_IN8(__PVT__jump,0,0);
    VL_IN8(__PVT__jalr,0,0);
    VL_IN8(__PVT__ebreak_flag,0,0);
    VL_IN8(__PVT__alu_op,4,0);
    VL_IN8(__PVT__data_rest_cond,2,0);
    VL_OUT8(__PVT__sig_jalr,0,0);
    VL_OUT8(__PVT__delay_sig_jalr,0,0);
    VL_IN8(__PVT__mret_flag,0,0);
    VL_IN8(__PVT__ecall_flag,0,0);
    VL_IN(__PVT__s_imm,31,0);
    VL_IN(__PVT__unnormal_pc,31,0);
    VL_IN64(__PVT__imm,63,0);
    VL_IN64(__PVT__curr_pc,63,0);
    VL_OUT64(__PVT__next_pc,63,0);
    VL_IN64(__PVT__alu_src1,63,0);
    VL_IN64(__PVT__alu_src2,63,0);
    VL_IN64(__PVT__reg1_rdata,63,0);
    VL_IN64(__PVT__mtvec,63,0);
    VL_IN64(__PVT__mepc,63,0);
    VL_IN64(__PVT__reg_f[32],63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__zero;
    QData/*63:0*/ __PVT__signed_alu_src1;
    QData/*63:0*/ __PVT__signed_alu_src2;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__delay_sig_jalr;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_muxpc);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_muxpc(const char* name);
    ~Vysyx_22040175_top_muxpc();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
