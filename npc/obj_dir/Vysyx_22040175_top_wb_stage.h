// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_WB_STAGE_H_
#define VERILATED_VYSYX_22040175_TOP_WB_STAGE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_wb_stage) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__reg_wen,0,0);
    VL_IN8(__PVT__reg_waddr,4,0);
    VL_IN8(__PVT__wmask,7,0);
    VL_IN8(__PVT__s_flag,0,0);
    VL_IN8(__PVT__time_set,0,0);
    VL_IN8(__PVT__expand_signed,3,0);
    VL_IN8(__PVT__rd_buf_flag,2,0);
    VL_IN8(__PVT__ebreak_flag,0,0);
    VL_IN8(__PVT__cunqu_hazard,0,0);
    VL_OUT8(__PVT__waxi_valid,0,0);
    VL_OUT8(__PVT__reg_write_wmask,7,0);
    VL_OUT8(__PVT__wb_res_valid,0,0);
    VL_OUT8(__PVT__axi_req,0,0);
    VL_IN8(__PVT__w_done,0,0);
    VL_IN8(__PVT__b_hs,0,0);
    VL_OUT8(__PVT__w_start,0,0);
    VL_IN(__PVT__s_imm,31,0);
    VL_IN64(__PVT__from_ex_alu_res,63,0);
    VL_IN64(__PVT__from_mem_alu_res,63,0);
    VL_IN64(__PVT__wb_pc,63,0);
    VL_OUT64(__PVT__wb_delay_pc,63,0);
    VL_OUT64(__PVT__reg_write_addr,63,0);
    VL_OUT64(__PVT__reg_write_data,63,0);
    VL_OUT64(__PVT__reg_f[32],63,0);

    // LOCAL SIGNALS
    CData/*2:0*/ __PVT__present_state;
    CData/*2:0*/ __PVT__next_state;
    QData/*63:0*/ __PVT__reg_wdata;
    VlUnpacked<QData/*63:0*/, 32> __PVT__wb_delay_reg_f;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdlyvset__wb_delay_reg_f__v0;
    CData/*2:0*/ __Vdly__present_state;
    CData/*7:0*/ __Vdly__reg_write_wmask;
    QData/*63:0*/ __Vdly__wb_delay_pc;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v0;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v1;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v2;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v3;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v4;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v5;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v6;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v7;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v8;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v9;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v10;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v11;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v12;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v13;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v14;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v15;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v16;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v17;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v18;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v19;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v20;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v21;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v22;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v23;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v24;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v25;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v26;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v27;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v28;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v29;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v30;
    QData/*63:0*/ __Vdlyvval__wb_delay_reg_f__v31;
    QData/*63:0*/ __Vdly__reg_write_addr;
    QData/*63:0*/ __Vdly__reg_write_data;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_wb_stage);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_wb_stage(const char* name);
    ~Vysyx_22040175_top_wb_stage();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
