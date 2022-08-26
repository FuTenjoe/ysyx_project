// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_ID_REST_H_
#define VERILATED_VYSYX_22040175_TOP_ID_REST_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_id_rest) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__reg1_raddr,4,0);
    VL_IN8(__PVT__reg2_raddr,4,0);
    VL_IN8(__PVT__reg_waddr,4,0);
    VL_IN8(__PVT__rd_buf_flag,2,0);
    VL_OUT8(__PVT__rest_from_id,0,0);
    VL_OUT8(__PVT__rest_id_mem,0,0);
    VL_IN8(__PVT__wb_reg_waddr,4,0);
    VL_OUT8(__PVT__rest_wb_hazard,0,0);
    VL_IN8(__PVT__ex_s_flag,0,0);
    VL_IN8(__PVT__mem_s_flag,0,0);
    VL_OUT8(__PVT__cunqu_hazard,0,0);
    VL_IN8(__PVT__curr_rd_buf_flag,2,0);
    VL_IN(__PVT__ex_inst,31,0);
    VL_IN(__PVT__s_imm,31,0);
    VL_IN(__PVT__ex_s_imm,31,0);
    VL_IN64(__PVT__id_pc,63,0);
    VL_IN64(__PVT__imm,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__delay_rest_id_mem;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__delay_rest_id_mem;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_id_rest);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_id_rest(const char* name);
    ~Vysyx_22040175_top_id_rest();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
