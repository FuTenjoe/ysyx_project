// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_MUX_DT_PIPE_H_
#define VERILATED_VYSYX_22040175_TOP_MUX_DT_PIPE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_mux_dt_pipe) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__reg1_raddr,4,0);
    VL_IN8(__PVT__reg2_raddr,4,0);
    VL_IN8(__PVT__reg_waddr,4,0);
    VL_IN8(__PVT__rd_buf_flag,2,0);
    VL_IN8(__PVT__control_rest,0,0);
    VL_IN8(__PVT__rest_from_id,0,0);
    VL_IN8(__PVT__s_flag,0,0);
    VL_IN8(__PVT__mem_reg_waddr,4,0);
    VL_IN8(__PVT__rest_id_mem,0,0);
    VL_IN8(__PVT__rest_wb_hazard,0,0);
    VL_OUT8(__PVT__data_rest_cond,2,0);
    VL_IN8(__PVT__cunqu_hazard,0,0);
    VL_IN8(__PVT__mem_cunqu_hazard,0,0);
    VL_IN8(__PVT__expand_signed,3,0);
    VL_OUT64(__PVT__reg1_rdata,63,0);
    VL_OUT64(__PVT__reg2_rdata,63,0);
    VL_IN64(__PVT__from_ex_alu_res,63,0);
    VL_IN64(__PVT__from_mem_alu_res,63,0);
    VL_IN64(__PVT__wb_hazard_result,63,0);
    VL_OUT64(__PVT__delay_reg1_rdata,63,0);
    VL_IN64(__PVT__mem_from_ex_alu_res,63,0);
    VL_IN64(__PVT__reg_f[32],63,0);

    // LOCAL SIGNALS
    CData/*2:0*/ __PVT__test;
    CData/*0:0*/ __PVT__delay_rest_id_mem;
    CData/*0:0*/ __PVT__delay_control_rest;
    CData/*4:0*/ __PVT__delay_reg_waddr;
    CData/*2:0*/ __PVT__delay_data_rest_cond;
    QData/*63:0*/ __PVT__delay_reg2_rdata;

    // LOCAL VARIABLES
    CData/*2:0*/ __Vdly__delay_data_rest_cond;
    CData/*0:0*/ __Vdly__delay_rest_id_mem;
    CData/*4:0*/ __Vdly__delay_reg_waddr;
    CData/*0:0*/ __Vdly__delay_control_rest;
    QData/*63:0*/ __Vdly__delay_reg1_rdata;
    QData/*63:0*/ __Vdly__delay_reg2_rdata;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_mux_dt_pipe);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_mux_dt_pipe(const char* name);
    ~Vysyx_22040175_top_mux_dt_pipe();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
