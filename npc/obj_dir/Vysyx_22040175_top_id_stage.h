// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_ID_STAGE_H_
#define VERILATED_VYSYX_22040175_TOP_ID_STAGE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;
class Vysyx_22040175_top_ctrl;
class Vysyx_22040175_top_imm_gen;
class Vysyx_22040175_top_id_rest;
class Vysyx_22040175_top_id_control_rest;
class Vysyx_22040175_top_mux_dt_pipe;
class Vysyx_22040175_top_mux_alu;
class Vysyx_22040175_top_muxpc;


//----------

VL_MODULE(Vysyx_22040175_top_id_stage) {
  public:
    // CELLS
    Vysyx_22040175_top_ctrl* __PVT__u_ctrl;
    Vysyx_22040175_top_imm_gen* __PVT__u_imm_gen;
    Vysyx_22040175_top_id_rest* __PVT__u_id_rest;
    Vysyx_22040175_top_id_control_rest* __PVT__u_id_control_rest;
    Vysyx_22040175_top_mux_dt_pipe* __PVT__u_mux_dt_pipe;
    Vysyx_22040175_top_mux_alu* __PVT__u_mux_alu;
    Vysyx_22040175_top_muxpc* __PVT__u_mux_pc;

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__ex_reg_waddr,4,0);
    VL_OUT8(__PVT__rest_from_id,0,0);
    VL_OUT8(__PVT__reg_wen,0,0);
    VL_OUT8(__PVT__reg_waddr,4,0);
    VL_OUT8(__PVT__alu_op,4,0);
    VL_OUT8(__PVT__alu_src_sel,2,0);
    VL_OUT8(__PVT__jalr,0,0);
    VL_OUT8(__PVT__ebreak_flag,0,0);
    VL_OUT8(__PVT__wmask,7,0);
    VL_OUT8(__PVT__s_flag,0,0);
    VL_OUT8(__PVT__expand_signed,3,0);
    VL_OUT8(__PVT__rd_flag,2,0);
    VL_OUT8(__PVT__rd_buf_flag,2,0);
    VL_OUT8(__PVT__control_rest,0,0);
    VL_IN8(__PVT__ex_rd_buf_flag,2,0);
    VL_OUT8(__PVT__rest_id_mem,0,0);
    VL_IN8(__PVT__mem_reg_waddr,4,0);
    VL_IN8(__PVT__ex_s_flag,0,0);
    VL_IN8(__PVT__mem_s_flag,0,0);
    VL_OUT8(__PVT__rest_wb_hazard,0,0);
    VL_OUT8(__PVT__sig_jalr,0,0);
    VL_OUT8(__PVT__delay_sig_jalr,0,0);
    VL_OUT8(__PVT__cunqu_hazard,0,0);
    VL_IN8(__PVT__mem_cunqu_hazard,0,0);
    VL_OUT8(__PVT__id_mul,0,0);
    VL_OUT8(__PVT__id_div,0,0);
    VL_OUT8(__PVT__mret_flag,0,0);
    VL_OUT8(__PVT__ecall_flag,0,0);
    VL_IN(__PVT__ex_inst,31,0);
    VL_OUT(__PVT__s_imm,31,0);
    VL_IN(__PVT__ex_s_imm,31,0);
    VL_IN64(__PVT__id_pc,63,0);
    VL_OUT64(__PVT__next_pc,63,0);
    VL_IN64(__PVT__inst,63,0);
    VL_OUT64(__PVT__imm,63,0);
    VL_OUT64(__PVT__unknown_code,63,0);
    VL_IN64(__PVT__from_ex_alu_res,63,0);
    VL_IN64(__PVT__from_mem_alu_res,63,0);
    VL_OUT64(__PVT__alu_src1,63,0);
    VL_OUT64(__PVT__alu_src2,63,0);
    VL_IN64(__PVT__wb_hazard_result,63,0);
    VL_IN64(__PVT__mem_from_ex_alu_res,63,0);
    VL_IN64(__PVT__mepc,63,0);
    VL_IN64(__PVT__mcause,63,0);
    VL_IN64(__PVT__mtvec,63,0);
    VL_OUT64(__PVT__csr_addr,63,0);
    VL_IN64(__PVT__reg_f[32],63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__branch;
    CData/*0:0*/ __PVT__jump;
    CData/*2:0*/ __PVT__imm_gen_op;
    CData/*4:0*/ __PVT__reg1_raddr;
    CData/*4:0*/ __PVT__reg2_raddr;
    CData/*2:0*/ __PVT__data_rest_cond;
    CData/*0:0*/ __PVT__mstatus;
    IData/*31:0*/ __PVT__unnormal_pc;
    QData/*63:0*/ __PVT__reg1_rdata;
    QData/*63:0*/ __PVT__reg2_rdata;
    QData/*63:0*/ __PVT__delay_reg1_rdata;

    // LOCAL VARIABLES
    SData/*11:0*/ __Vcellout__u_ctrl__csr_addr;
    SData/*11:0*/ __Vcellinp__u_mux_alu__csr_addr;
    QData/*63:0*/ __Vcellinp__u_mux_alu__mstatus;
    VlUnpacked<QData/*63:0*/, 32> __Vcellinp__u_mux_dt_pipe__reg_f;
    VlUnpacked<QData/*63:0*/, 32> __Vcellinp__u_mux_pc__reg_f;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_id_stage);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_id_stage(const char* name);
    ~Vysyx_22040175_top_id_stage();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
