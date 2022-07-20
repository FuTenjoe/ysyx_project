// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP___024ROOT_H_
#define VERILATED_VYSYX_22040175_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(time_set,0,0);
    VL_OUT(inst,31,0);
    VL_OUT(pc,31,0);
    VL_OUT(diff_pc,31,0);
    VL_OUT64(unknown_code,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ysyx_22040175_top__DOT__rst_n;
        CData/*0:0*/ ysyx_22040175_top__DOT__if_ena;
        CData/*0:0*/ ysyx_22040175_top__DOT__pc_no_use;
        CData/*0:0*/ ysyx_22040175_top__DOT__id_ena;
        CData/*0:0*/ ysyx_22040175_top__DOT__id_time_set;
        CData/*0:0*/ ysyx_22040175_top__DOT__id_no_use;
        CData/*0:0*/ ysyx_22040175_top__DOT__id_branch;
        CData/*0:0*/ ysyx_22040175_top__DOT__id_jump;
        CData/*0:0*/ ysyx_22040175_top__DOT__id_reg_wen;
        CData/*4:0*/ ysyx_22040175_top__DOT__id_reg_waddr;
        CData/*4:0*/ ysyx_22040175_top__DOT__id_alu_op;
        CData/*1:0*/ ysyx_22040175_top__DOT__id_alu_src_sel;
        CData/*0:0*/ ysyx_22040175_top__DOT__id_jalr;
        CData/*0:0*/ ysyx_22040175_top__DOT__id_ebreak_flag;
        CData/*7:0*/ ysyx_22040175_top__DOT__id_wmask;
        CData/*0:0*/ ysyx_22040175_top__DOT__id_s_flag;
        CData/*3:0*/ ysyx_22040175_top__DOT__id_expand_signed;
        CData/*2:0*/ ysyx_22040175_top__DOT__id_rd_flag;
        CData/*2:0*/ ysyx_22040175_top__DOT__id_rd_buf_flag;
        CData/*0:0*/ ysyx_22040175_top__DOT__rest_from_id;
        CData/*0:0*/ ysyx_22040175_top__DOT__id_control_rest;
        CData/*0:0*/ ysyx_22040175_top__DOT__ex_branch;
        CData/*0:0*/ ysyx_22040175_top__DOT__ex_jump;
        CData/*0:0*/ ysyx_22040175_top__DOT__ex_reg_wen;
        CData/*4:0*/ ysyx_22040175_top__DOT__ex_reg_waddr;
        CData/*4:0*/ ysyx_22040175_top__DOT__ex_alu_op;
        CData/*1:0*/ ysyx_22040175_top__DOT__ex_alu_src_sel;
        CData/*0:0*/ ysyx_22040175_top__DOT__ex_jalr;
        CData/*0:0*/ ysyx_22040175_top__DOT__ex_ebreak_flag;
        CData/*7:0*/ ysyx_22040175_top__DOT__ex_wmask;
        CData/*0:0*/ ysyx_22040175_top__DOT__ex_s_flag;
        CData/*3:0*/ ysyx_22040175_top__DOT__ex_expand_signed;
        CData/*2:0*/ ysyx_22040175_top__DOT__ex_rd_flag;
        CData/*2:0*/ ysyx_22040175_top__DOT__ex_rd_buf_flag;
        CData/*0:0*/ ysyx_22040175_top__DOT__ex_ena;
        CData/*0:0*/ ysyx_22040175_top__DOT__ex_time_set;
        CData/*0:0*/ ysyx_22040175_top__DOT__ex_no_use;
        CData/*0:0*/ ysyx_22040175_top__DOT__write_ready;
        CData/*0:0*/ ysyx_22040175_top__DOT__ex_pc_ready;
        CData/*0:0*/ ysyx_22040175_top__DOT__mem_reg_wen;
        CData/*4:0*/ ysyx_22040175_top__DOT__mem_reg_waddr;
        CData/*0:0*/ ysyx_22040175_top__DOT__mem_ebreak_flag;
        CData/*7:0*/ ysyx_22040175_top__DOT__mem_wmask;
        CData/*0:0*/ ysyx_22040175_top__DOT__mem_s_flag;
        CData/*0:0*/ ysyx_22040175_top__DOT__mem_time_set;
        CData/*3:0*/ ysyx_22040175_top__DOT__mem_expand_signed;
        CData/*2:0*/ ysyx_22040175_top__DOT__mem_rd_buf_flag;
        CData/*4:0*/ ysyx_22040175_top__DOT__mem_alu_op;
        CData/*0:0*/ ysyx_22040175_top__DOT__mem_no_use;
        CData/*0:0*/ ysyx_22040175_top__DOT__mem_pc_ready;
        CData/*0:0*/ ysyx_22040175_top__DOT__wb_reg_wen;
        CData/*4:0*/ ysyx_22040175_top__DOT__wb_reg_waddr;
        CData/*7:0*/ ysyx_22040175_top__DOT__wb_wmask;
        CData/*0:0*/ ysyx_22040175_top__DOT__wb_s_flag;
        CData/*0:0*/ ysyx_22040175_top__DOT__wb_time_set;
        CData/*3:0*/ ysyx_22040175_top__DOT__wb_expand_signed;
        CData/*0:0*/ ysyx_22040175_top__DOT__wb_ebreak_flag;
        CData/*2:0*/ ysyx_22040175_top__DOT__wb_rd_buf_flag;
        CData/*0:0*/ ysyx_22040175_top__DOT__wb_no_use;
        CData/*0:0*/ ysyx_22040175_top__DOT__wb_pc_ready;
        CData/*0:0*/ ysyx_22040175_top__DOT__ena;
        CData/*2:0*/ ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op;
        CData/*4:0*/ ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr;
        CData/*4:0*/ ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr;
    };
    struct {
        CData/*0:0*/ ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__write_1;
        CData/*0:0*/ ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__write_2;
        CData/*0:0*/ ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__write_3;
        CData/*0:0*/ ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__write_4;
        CData/*0:0*/ ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__write_5;
        CData/*0:0*/ ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__write_6;
        CData/*0:0*/ ysyx_22040175_top__DOT__u_ex_stage__DOT__zero;
        IData/*31:0*/ ysyx_22040175_top__DOT__id_inst;
        IData/*31:0*/ ysyx_22040175_top__DOT__id_s_imm;
        IData/*31:0*/ ysyx_22040175_top__DOT__ex_s_imm;
        IData/*31:0*/ ysyx_22040175_top__DOT__mem_s_imm;
        IData/*31:0*/ ysyx_22040175_top__DOT__wb_s_imm;
        QData/*63:0*/ ysyx_22040175_top__DOT__next_pc;
        QData/*63:0*/ ysyx_22040175_top__DOT__if_pc;
        QData/*63:0*/ ysyx_22040175_top__DOT__id_pc;
        QData/*63:0*/ ysyx_22040175_top__DOT__id_imm;
        QData/*63:0*/ ysyx_22040175_top__DOT__id_unknown_code;
        QData/*63:0*/ ysyx_22040175_top__DOT__ex_pc;
        QData/*63:0*/ ysyx_22040175_top__DOT__ex_imm;
        QData/*63:0*/ ysyx_22040175_top__DOT__ex_unknown_code;
        QData/*63:0*/ ysyx_22040175_top__DOT__ex_reg1_rdata;
        QData/*63:0*/ ysyx_22040175_top__DOT__ex_reg2_rdata;
        QData/*63:0*/ ysyx_22040175_top__DOT__from_ex_alu_res;
        QData/*63:0*/ ysyx_22040175_top__DOT__ex_alu_src1;
        QData/*63:0*/ ysyx_22040175_top__DOT__ex_alu_src2;
        QData/*63:0*/ ysyx_22040175_top__DOT__ex_next_pc;
        QData/*63:0*/ ysyx_22040175_top__DOT__mem_alu_src1;
        QData/*63:0*/ ysyx_22040175_top__DOT__mem_alu_src2;
        QData/*63:0*/ ysyx_22040175_top__DOT__mem_from_ex_alu_res;
        QData/*63:0*/ ysyx_22040175_top__DOT__mem_pc;
        QData/*63:0*/ ysyx_22040175_top__DOT__from_mem_alu_res;
        QData/*63:0*/ ysyx_22040175_top__DOT__wb_from_ex_alu_res;
        QData/*63:0*/ ysyx_22040175_top__DOT__wb_from_mem_alu_res;
        QData/*63:0*/ ysyx_22040175_top__DOT__wb_pc;
        QData/*63:0*/ ysyx_22040175_top__DOT__u_if_stage__DOT__rdata;
        QData/*63:0*/ ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__wb_rest_pc;
        QData/*63:0*/ ysyx_22040175_top__DOT__u_id_ex_regs__DOT__reg_wdata_id_ex_i;
        QData/*63:0*/ ysyx_22040175_top__DOT__u_id_ex_regs__DOT__reg_wdata_id_ex_o;
        QData/*63:0*/ ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1;
        QData/*63:0*/ ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2;
        QData/*63:0*/ ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw;
        QData/*63:0*/ ysyx_22040175_top__DOT__u_mem_wb_regs__DOT__reg_wdata_mem_wb_o;
        QData/*63:0*/ ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22040175_top__DOT__to_id_reg_f;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22040175_top__DOT__to_ex_reg_f;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22040175_top__DOT__from_wb_reg_f;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __VinpClk__TOP__ysyx_22040175_top__DOT__rst_n;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__rst_n;
    CData/*0:0*/ __Vchglast__TOP__ysyx_22040175_top__DOT__rst_n;
    QData/*63:0*/ __Vtask_ysyx_22040175_top__DOT__u_if_stage__DOT__pmem_read__0__rdata;
    QData/*63:0*/ __Vtask_ysyx_22040175_top__DOT__u_if_stage__DOT__pmem_read__1__rdata;
    QData/*63:0*/ __Vtask_ysyx_22040175_top__DOT__u_mem_stage__DOT__pmem_read__3__rdata;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top___024root);  ///< Copying not allowed
  public:
    Vysyx_22040175_top___024root(const char* name);
    ~Vysyx_22040175_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
