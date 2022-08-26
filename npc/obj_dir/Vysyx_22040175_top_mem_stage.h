// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_MEM_STAGE_H_
#define VERILATED_VYSYX_22040175_TOP_MEM_STAGE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_mem_stage) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__rd_buf_flag,2,0);
    VL_IN8(__PVT__alu_op,4,0);
    VL_IN8(__PVT__mem_expand_signed,3,0);
    VL_IN8(__PVT__mem_cunqu_hazard,0,0);
    VL_IN8(__PVT__return_id,3,0);
    VL_OUT8(__PVT__mem_axi_valid,0,0);
    VL_OUT8(__PVT__mem_res_valid,0,0);
    VL_OUT8(__PVT__mem_send_id,3,0);
    VL_IN8(__PVT__ar_hs,0,0);
    VL_IN8(__PVT__r_done,0,0);
    VL_OUT8(__PVT__mem_no_use,0,0);
    VL_OUT8(__PVT__mem_rd_buf_flag,2,0);
    VL_IN16(__PVT__mem_csr_addr,11,0);
    VL_IN64(__PVT__mem_pc,63,0);
    VL_IN64(__PVT__alu_src1,63,0);
    VL_IN64(__PVT__alu_src2,63,0);
    VL_OUT64(__PVT__sign_alu_res,63,0);
    VL_IN64(__PVT__mem_from_ex_alu_res,63,0);
    VL_OUT64(__PVT__wb_hazard_result,63,0);
    VL_OUT64(__PVT__mem_addr,63,0);
    VL_IN64(__PVT__axi_rdata,63,0);
    VL_OUT64(__PVT__mepc,63,0);
    VL_OUT64(__PVT__mcause,63,0);
    VL_OUT64(__PVT__mtvec,63,0);
    VL_OUT64(__PVT__mstatus,63,0);

    // LOCAL SIGNALS
    CData/*2:0*/ __PVT__reg_rd_buf_flag;
    CData/*1:0*/ __PVT__present_state;
    CData/*1:0*/ __PVT__next_state;
    QData/*63:0*/ __PVT__rd_buf_lw;
    QData/*63:0*/ __PVT__alu_res;
    QData/*63:0*/ __PVT__reg_mstatus;
    QData/*63:0*/ __PVT__reg_mem_addr;

    // LOCAL VARIABLES
    CData/*1:0*/ __Vdly__present_state;
    CData/*3:0*/ __Vdly__mem_send_id;
    CData/*2:0*/ __Vdly__reg_rd_buf_flag;
    QData/*63:0*/ __Vdly__reg_mstatus;
    QData/*63:0*/ __Vdly__reg_mem_addr;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_mem_stage);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_mem_stage(const char* name);
    ~Vysyx_22040175_top_mem_stage();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
