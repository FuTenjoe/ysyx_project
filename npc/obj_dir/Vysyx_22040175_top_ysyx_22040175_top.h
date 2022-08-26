// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_YSYX_22040175_TOP_H_
#define VERILATED_VYSYX_22040175_TOP_YSYX_22040175_TOP_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;
class Vysyx_22040175_top_if_stage;
class Vysyx_22040175_top_if_id_regs;
class Vysyx_22040175_top_id_stage;
class Vysyx_22040175_top_id_ex_regs;
class Vysyx_22040175_top_ex_stage;
class Vysyx_22040175_top_ex_mem_regs;
class Vysyx_22040175_top_mem_stage;
class Vysyx_22040175_top_mem_wb_regs;
class Vysyx_22040175_top_wb_stage;


//----------

VL_MODULE(Vysyx_22040175_top_ysyx_22040175_top) {
  public:
    // CELLS
    Vysyx_22040175_top_if_stage* __PVT__u_if_stage;
    Vysyx_22040175_top_if_id_regs* __PVT__u_if_id_regs;
    Vysyx_22040175_top_id_stage* __PVT__u_id_stage;
    Vysyx_22040175_top_id_ex_regs* __PVT__u_id_ex_regs;
    Vysyx_22040175_top_ex_stage* __PVT__u_ex_stage;
    Vysyx_22040175_top_ex_mem_regs* __PVT__u_ex_mem_regs;
    Vysyx_22040175_top_mem_stage* __PVT__u_mem_stage;
    Vysyx_22040175_top_mem_wb_regs* __PVT__u_mem_wb_regs;
    Vysyx_22040175_top_wb_stage* __PVT__u_wb_stage;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(time_set,0,0);
    VL_OUT8(out_mem_rd_buf_flag,0,0);
    VL_OUT(inst,31,0);
    VL_OUT(pc,31,0);
    VL_OUT(diff_pc,31,0);
    VL_OUT(diff_delay_pc,31,0);
    VL_OUT64(unknown_code,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__rst_n;
        CData/*0:0*/ __PVT__if_ena;
        CData/*0:0*/ __PVT__rest_id_mem;
        CData/*0:0*/ __PVT__div_finish;
        CData/*0:0*/ __PVT__ar_hs;
        CData/*0:0*/ __PVT__delay_r_done;
        CData/*3:0*/ __PVT__axi_ar_id_o;
        CData/*0:0*/ __PVT__mem_res_valid;
        CData/*0:0*/ __PVT__w_done;
        CData/*0:0*/ __PVT__b_hs;
        CData/*0:0*/ __PVT__id_ena;
        CData/*0:0*/ __PVT__id_time_set;
        CData/*0:0*/ __PVT__delay_sig_jalr;
        CData/*0:0*/ __PVT__id_branch;
        CData/*0:0*/ __PVT__id_jump;
        CData/*0:0*/ __PVT__id_reg_wen;
        CData/*4:0*/ __PVT__id_reg_waddr;
        CData/*4:0*/ __PVT__id_alu_op;
        CData/*2:0*/ __PVT__id_alu_src_sel;
        CData/*0:0*/ __PVT__id_jalr;
        CData/*0:0*/ __PVT__id_ebreak_flag;
        CData/*7:0*/ __PVT__id_wmask;
        CData/*0:0*/ __PVT__id_s_flag;
        CData/*3:0*/ __PVT__id_expand_signed;
        CData/*2:0*/ __PVT__id_rd_flag;
        CData/*2:0*/ __PVT__id_rd_buf_flag;
        CData/*0:0*/ __PVT__rest_from_id;
        CData/*0:0*/ __PVT__id_control_rest;
        CData/*0:0*/ __PVT__rest_wb_hazard;
        CData/*0:0*/ __PVT__sig_jalr;
        CData/*0:0*/ __PVT__id_mul;
        CData/*0:0*/ __PVT__id_div;
        CData/*0:0*/ __PVT__mret_flag;
        CData/*0:0*/ __PVT__ecall_flag;
        CData/*0:0*/ __PVT__id_cunqu_hazard;
        CData/*0:0*/ __PVT__ex_branch;
        CData/*0:0*/ __PVT__ex_jump;
        CData/*0:0*/ __PVT__ex_reg_wen;
        CData/*4:0*/ __PVT__ex_reg_waddr;
        CData/*4:0*/ __PVT__ex_alu_op;
        CData/*2:0*/ __PVT__ex_alu_src_sel;
        CData/*0:0*/ __PVT__ex_jalr;
        CData/*0:0*/ __PVT__ex_ebreak_flag;
        CData/*7:0*/ __PVT__ex_wmask;
        CData/*0:0*/ __PVT__ex_s_flag;
        CData/*3:0*/ __PVT__ex_expand_signed;
        CData/*2:0*/ __PVT__ex_rd_flag;
        CData/*2:0*/ __PVT__ex_rd_buf_flag;
        CData/*0:0*/ __PVT__ex_ena;
        CData/*0:0*/ __PVT__ex_time_set;
        CData/*0:0*/ __PVT__id_rest_no_use;
        CData/*0:0*/ __PVT__ex_rest_id_mem;
        CData/*0:0*/ __PVT__ex_cunqu_hazard;
        CData/*0:0*/ __PVT__ex_id_mul;
        CData/*0:0*/ __PVT__ex_id_div;
        CData/*0:0*/ __PVT__write_ready;
        CData/*0:0*/ __PVT__ex_pc_ready;
        CData/*0:0*/ __PVT__sh_fnsh_flag;
        CData/*0:0*/ __PVT__mem_reg_wen;
        CData/*4:0*/ __PVT__mem_reg_waddr;
        CData/*0:0*/ __PVT__mem_ebreak_flag;
        CData/*7:0*/ __PVT__mem_wmask;
        CData/*0:0*/ __PVT__mem_s_flag;
        CData/*0:0*/ __PVT__mem_time_set;
    };
    struct {
        CData/*3:0*/ __PVT__mem_expand_signed;
        CData/*2:0*/ __PVT__mem_rd_buf_flag;
        CData/*4:0*/ __PVT__mem_alu_op;
        CData/*0:0*/ __PVT__mem_pc_ready;
        CData/*0:0*/ __PVT__fr_ex_no_use;
        CData/*0:0*/ __PVT__mem_cunqu_hazard;
        CData/*3:0*/ __PVT__mem_send_id;
        CData/*0:0*/ __PVT__mem_valid;
        CData/*0:0*/ __PVT__mem_no_use;
        CData/*2:0*/ __PVT__reg_rd_buf_flag;
        CData/*0:0*/ __PVT__wb_reg_wen;
        CData/*4:0*/ __PVT__wb_reg_waddr;
        CData/*7:0*/ __PVT__wb_wmask;
        CData/*0:0*/ __PVT__wb_s_flag;
        CData/*0:0*/ __PVT__wb_time_set;
        CData/*3:0*/ __PVT__wb_expand_signed;
        CData/*0:0*/ __PVT__wb_ebreak_flag;
        CData/*2:0*/ __PVT__wb_rd_buf_flag;
        CData/*0:0*/ __PVT__wb_pc_ready;
        CData/*0:0*/ __PVT__mem_rest_id_mem;
        CData/*0:0*/ __PVT__wb_cunqu_hazard;
        CData/*0:0*/ __PVT__waxi_valid;
        CData/*7:0*/ __PVT__reg_write_wmask;
        CData/*0:0*/ __PVT__wb_res_valid;
        CData/*0:0*/ __PVT__axi_req;
        CData/*0:0*/ __PVT__w_start;
        CData/*0:0*/ __PVT__from_mem_mstatus;
        SData/*11:0*/ __PVT__id_csr_addr;
        SData/*11:0*/ __PVT__ex_csr_addr;
        SData/*11:0*/ __PVT__mem_csr_addr;
        IData/*31:0*/ __PVT__if_inst;
        IData/*31:0*/ __PVT__id_inst;
        IData/*31:0*/ __PVT__id_s_imm;
        IData/*31:0*/ __PVT__ex_s_imm;
        IData/*31:0*/ __PVT__ex_inst;
        IData/*31:0*/ __PVT__mem_s_imm;
        IData/*31:0*/ __PVT__wb_s_imm;
        QData/*63:0*/ __PVT__id_next_pc;
        QData/*63:0*/ __PVT__if_pc;
        QData/*63:0*/ __PVT__rdata;
        QData/*63:0*/ __PVT__id_pc;
        QData/*63:0*/ __PVT__id_alu_src1;
        QData/*63:0*/ __PVT__id_alu_src2;
        QData/*63:0*/ __PVT__id_imm;
        QData/*63:0*/ __PVT__id_unknown_code;
        QData/*63:0*/ __PVT__id_end_write_addr;
        QData/*63:0*/ __PVT__from_mem_mepc;
        QData/*63:0*/ __PVT__from_mem_mcause;
        QData/*63:0*/ __PVT__from_mem_mtvec;
        QData/*63:0*/ __PVT__ex_pc;
        QData/*63:0*/ __PVT__ex_imm;
        QData/*63:0*/ __PVT__ex_unknown_code;
        QData/*63:0*/ __PVT__ex_reg1_rdata;
        QData/*63:0*/ __PVT__ex_reg2_rdata;
        QData/*63:0*/ __PVT__ex_end_write_addr;
        QData/*63:0*/ __PVT__from_ex_alu_res;
        QData/*63:0*/ __PVT__ex_alu_src1;
        QData/*63:0*/ __PVT__ex_alu_src2;
        QData/*63:0*/ __PVT__ex_next_pc;
        QData/*63:0*/ __PVT__mem_alu_src1;
        QData/*63:0*/ __PVT__mem_alu_src2;
        QData/*63:0*/ __PVT__mem_from_ex_alu_res;
        QData/*63:0*/ __PVT__mem_pc;
        QData/*63:0*/ __PVT__mem_end_write_addr;
    };
    struct {
        QData/*63:0*/ __PVT__from_mem_alu_res;
        QData/*63:0*/ __PVT__wb_hazard_result;
        QData/*63:0*/ __PVT__mem_addr;
        QData/*63:0*/ __PVT__wb_from_ex_alu_res;
        QData/*63:0*/ __PVT__wb_from_mem_alu_res;
        QData/*63:0*/ __PVT__wb_pc;
        QData/*63:0*/ __PVT__wb_end_write_addr;
        QData/*63:0*/ __PVT__wb_delay_pc;
        QData/*63:0*/ __PVT__reg_write_addr;
        QData/*63:0*/ __PVT__reg_write_data;
        VlUnpacked<QData/*63:0*/, 32> __PVT__to_id_reg_f;
        VlUnpacked<QData/*63:0*/, 32> __PVT__from_wb_reg_f;
    };

    // LOCAL VARIABLES
    QData/*63:0*/ __Vcellout__u_id_stage__csr_addr;
    QData/*63:0*/ __Vcellinp__u_id_stage__inst;
    QData/*63:0*/ __Vcellout__u_id_ex_regs__ex_inst;
    QData/*63:0*/ __Vcellinp__u_id_ex_regs__id_inst;
    QData/*63:0*/ __Vcellout__u_mem_stage__mstatus;
    VlUnpacked<QData/*63:0*/, 32> __Vcellinp__u_id_stage__reg_f;
    VlUnpacked<QData/*63:0*/, 32> __Vcellout__u_wb_stage__reg_f;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_ysyx_22040175_top);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_ysyx_22040175_top(const char* name);
    ~Vysyx_22040175_top_ysyx_22040175_top();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
