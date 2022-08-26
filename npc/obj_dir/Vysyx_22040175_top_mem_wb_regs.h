// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_MEM_WB_REGS_H_
#define VERILATED_VYSYX_22040175_TOP_MEM_WB_REGS_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top_mem_wb_regs) {
  public:

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__reg_wen_mem_wb_i,0,0);
    VL_IN8(__PVT__reg_waddr_mem_wb_i,4,0);
    VL_IN8(__PVT__wmask_mem_wb_i,7,0);
    VL_IN8(__PVT__s_flag_mem_wb_i,0,0);
    VL_IN8(__PVT__time_set_mem_wb_i,0,0);
    VL_IN8(__PVT__expand_signed_mem_wb_i,3,0);
    VL_IN8(__PVT__ebreak_flag_mem_wb_i,0,0);
    VL_IN8(__PVT__rd_buf_flag_mem_wb_i,2,0);
    VL_OUT8(__PVT__reg_wen_mem_wb_o,0,0);
    VL_OUT8(__PVT__reg_waddr_mem_wb_o,4,0);
    VL_OUT8(__PVT__wmask_mem_wb_o,7,0);
    VL_OUT8(__PVT__s_flag_mem_wb_o,0,0);
    VL_OUT8(__PVT__time_set_mem_wb_o,0,0);
    VL_OUT8(__PVT__expand_signed_mem_wb_o,3,0);
    VL_OUT8(__PVT__ebreak_flag_mem_wb_o,0,0);
    VL_OUT8(__PVT__rd_buf_flag_mem_wb_o,2,0);
    VL_IN8(__PVT__rest_id_mem_ex_mem_o,0,0);
    VL_IN8(__PVT__cunqu_hazard_mem_wb_i,0,0);
    VL_OUT8(__PVT__cunqu_hazard_mem_wb_o,0,0);
    VL_IN8(__PVT__mem_no_use,0,0);
    VL_IN8(__PVT__reg_rd_buf_flag,2,0);
    VL_IN(__PVT__s_imm_mem_wb_i,31,0);
    VL_OUT(__PVT__s_imm_mem_wb_o,31,0);
    VL_IN64(__PVT__from_ex_alu_res_mem_wb_i,63,0);
    VL_IN64(__PVT__from_mem_alu_res_mem_wb_i,63,0);
    VL_OUT64(__PVT__from_ex_alu_res_mem_wb_o,63,0);
    VL_OUT64(__PVT__from_mem_alu_res_mem_wb_o,63,0);
    VL_IN64(__PVT__pc_mem_wb_i,63,0);
    VL_OUT64(__PVT__pc_mem_wb_o,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__delay_mem_no_use;
    CData/*1:0*/ __PVT__wm_valid;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__delay_mem_no_use;
    CData/*0:0*/ __Vdly__reg_wen_mem_wb_o;
    CData/*4:0*/ __Vdly__reg_waddr_mem_wb_o;
    CData/*7:0*/ __Vdly__wmask_mem_wb_o;
    CData/*0:0*/ __Vdly__s_flag_mem_wb_o;
    CData/*0:0*/ __Vdly__time_set_mem_wb_o;
    CData/*3:0*/ __Vdly__expand_signed_mem_wb_o;
    CData/*0:0*/ __Vdly__ebreak_flag_mem_wb_o;
    CData/*2:0*/ __Vdly__rd_buf_flag_mem_wb_o;
    CData/*0:0*/ __Vdly__cunqu_hazard_mem_wb_o;
    CData/*1:0*/ __Vdly__wm_valid;
    IData/*31:0*/ __Vdly__s_imm_mem_wb_o;
    QData/*63:0*/ __Vdly__from_ex_alu_res_mem_wb_o;
    QData/*63:0*/ __Vdly__from_mem_alu_res_mem_wb_o;
    QData/*63:0*/ __Vdly__pc_mem_wb_o;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_mem_wb_regs);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_mem_wb_regs(const char* name);
    ~Vysyx_22040175_top_mem_wb_regs();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
