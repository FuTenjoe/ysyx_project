// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_IF_ID_REGS_H_
#define VERILATED_VYSYX_22040175_TOP_IF_ID_REGS_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_if_id_regs) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__ena_if_id_i,0,0);
    VL_IN8(__PVT__time_set_if_id_i,0,0);
    VL_OUT8(__PVT__ena_if_id_o,0,0);
    VL_OUT8(__PVT__time_set_if_id_o,0,0);
    VL_IN8(__PVT__control_rest,0,0);
    VL_IN8(__PVT__rest_id_mem,0,0);
    VL_IN8(__PVT__delay_sig_jalr,0,0);
    VL_IN8(__PVT__id_mul,0,0);
    VL_IN8(__PVT__sh_fnsh_flag,0,0);
    VL_IN8(__PVT__id_div,0,0);
    VL_IN8(__PVT__div_finish,0,0);
    VL_IN(__PVT__instr_if_id_i,31,0);
    VL_OUT(__PVT__instr_if_id_o,31,0);
    VL_IN64(__PVT__pc_if_id_i,63,0);
    VL_OUT64(__PVT__pc_if_id_o,63,0);
    VL_IN64(__PVT__id_pc,63,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__ena_if_id_o;
    CData/*0:0*/ __Vdly__time_set_if_id_o;
    IData/*31:0*/ __Vdly__instr_if_id_o;
    QData/*63:0*/ __Vdly__pc_if_id_o;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_if_id_regs);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_if_id_regs(const char* name);
    ~Vysyx_22040175_top_if_id_regs();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
