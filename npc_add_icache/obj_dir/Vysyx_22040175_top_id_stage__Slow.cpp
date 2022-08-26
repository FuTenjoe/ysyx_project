// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_id_stage.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_id_stage___ctor_var_reset(Vysyx_22040175_top_id_stage* vlSelf);

Vysyx_22040175_top_id_stage::Vysyx_22040175_top_id_stage(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_id_stage___ctor_var_reset(this);
}

void Vysyx_22040175_top_id_stage::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_id_stage::~Vysyx_22040175_top_id_stage() {
}

void Vysyx_22040175_top_id_stage___settle__TOP__ysyx_22040175_top__u_id_stage__1(Vysyx_22040175_top_id_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_id_stage___settle__TOP__ysyx_22040175_top__u_id_stage__1\n"); );
    // Body
    vlSelf->__Vcellinp__u_mux_alu__mstatus = VL_EXTEND_QI(64,1, (IData)(vlSelf->__PVT__mstatus));
    vlSelf->__PVT__delay_sig_jalr = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__delay_sig_jalr;
    vlSelf->__PVT__delay_reg1_rdata = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__delay_reg1_rdata;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_control_rest.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__mem_cunqu_hazard 
        = vlSelf->__PVT__mem_cunqu_hazard;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__mem_from_ex_alu_res 
        = vlSelf->__PVT__mem_from_ex_alu_res;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__ex_s_imm 
        = vlSelf->__PVT__ex_s_imm;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__ex_s_flag 
        = vlSelf->__PVT__ex_s_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__mem_s_flag 
        = vlSelf->__PVT__mem_s_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__rd_buf_flag 
        = vlSelf->__PVT__ex_rd_buf_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__rd_buf_flag 
        = vlSelf->__PVT__ex_rd_buf_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_waddr 
        = vlSelf->__PVT__ex_reg_waddr;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__reg_waddr 
        = vlSelf->__PVT__ex_reg_waddr;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__mem_reg_waddr 
        = vlSelf->__PVT__mem_reg_waddr;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__wb_reg_waddr 
        = vlSelf->__PVT__mem_reg_waddr;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__curr_pc 
        = vlSelf->__PVT__id_pc;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_alu.__PVT__curr_pc 
        = vlSelf->__PVT__id_pc;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__id_pc 
        = vlSelf->__PVT__id_pc;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__id_pc 
        = vlSelf->__PVT__id_pc;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_control_rest.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__rst_n 
        = vlSelf->__PVT__rst_n;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__ex_inst 
        = vlSelf->__PVT__ex_inst;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_imm_gen.__PVT__inst 
        = vlSelf->__PVT__inst;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__inst 
        = vlSelf->__PVT__inst;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_alu.__PVT__mstatus 
        = vlSelf->__Vcellinp__u_mux_alu__mstatus;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_alu.__PVT__mstatus 
        = vlSelf->__Vcellinp__u_mux_alu__mstatus;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg1_rdata 
        = vlSelf->__PVT__delay_reg1_rdata;
}

void Vysyx_22040175_top_id_stage___settle__TOP__ysyx_22040175_top__u_id_stage__2(Vysyx_22040175_top_id_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_id_stage___settle__TOP__ysyx_22040175_top__u_id_stage__2\n"); );
    // Body
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0U] = vlSelf->__PVT__reg_f
        [0U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[1U] = vlSelf->__PVT__reg_f
        [1U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[2U] = vlSelf->__PVT__reg_f
        [2U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[3U] = vlSelf->__PVT__reg_f
        [3U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[4U] = vlSelf->__PVT__reg_f
        [4U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[5U] = vlSelf->__PVT__reg_f
        [5U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[6U] = vlSelf->__PVT__reg_f
        [6U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[7U] = vlSelf->__PVT__reg_f
        [7U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[8U] = vlSelf->__PVT__reg_f
        [8U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[9U] = vlSelf->__PVT__reg_f
        [9U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0xaU] = vlSelf->__PVT__reg_f
        [0xaU];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0xbU] = vlSelf->__PVT__reg_f
        [0xbU];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0xcU] = vlSelf->__PVT__reg_f
        [0xcU];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0xdU] = vlSelf->__PVT__reg_f
        [0xdU];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0xeU] = vlSelf->__PVT__reg_f
        [0xeU];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0xfU] = vlSelf->__PVT__reg_f
        [0xfU];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0x10U] = vlSelf->__PVT__reg_f
        [0x10U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0x11U] = vlSelf->__PVT__reg_f
        [0x11U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0x12U] = vlSelf->__PVT__reg_f
        [0x12U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0x13U] = vlSelf->__PVT__reg_f
        [0x13U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0x14U] = vlSelf->__PVT__reg_f
        [0x14U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0x15U] = vlSelf->__PVT__reg_f
        [0x15U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0x16U] = vlSelf->__PVT__reg_f
        [0x16U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0x17U] = vlSelf->__PVT__reg_f
        [0x17U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0x18U] = vlSelf->__PVT__reg_f
        [0x18U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0x19U] = vlSelf->__PVT__reg_f
        [0x19U];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0x1aU] = vlSelf->__PVT__reg_f
        [0x1aU];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0x1bU] = vlSelf->__PVT__reg_f
        [0x1bU];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0x1cU] = vlSelf->__PVT__reg_f
        [0x1cU];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0x1dU] = vlSelf->__PVT__reg_f
        [0x1dU];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0x1eU] = vlSelf->__PVT__reg_f
        [0x1eU];
    vlSelf->__Vcellinp__u_mux_pc__reg_f[0x1fU] = vlSelf->__PVT__reg_f
        [0x1fU];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0U] = 
        vlSelf->__PVT__reg_f[0U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[1U] = 
        vlSelf->__PVT__reg_f[1U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[2U] = 
        vlSelf->__PVT__reg_f[2U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[3U] = 
        vlSelf->__PVT__reg_f[3U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[4U] = 
        vlSelf->__PVT__reg_f[4U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[5U] = 
        vlSelf->__PVT__reg_f[5U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[6U] = 
        vlSelf->__PVT__reg_f[6U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[7U] = 
        vlSelf->__PVT__reg_f[7U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[8U] = 
        vlSelf->__PVT__reg_f[8U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[9U] = 
        vlSelf->__PVT__reg_f[9U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0xaU] 
        = vlSelf->__PVT__reg_f[0xaU];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0xbU] 
        = vlSelf->__PVT__reg_f[0xbU];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0xcU] 
        = vlSelf->__PVT__reg_f[0xcU];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0xdU] 
        = vlSelf->__PVT__reg_f[0xdU];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0xeU] 
        = vlSelf->__PVT__reg_f[0xeU];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0xfU] 
        = vlSelf->__PVT__reg_f[0xfU];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x10U] 
        = vlSelf->__PVT__reg_f[0x10U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x11U] 
        = vlSelf->__PVT__reg_f[0x11U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x12U] 
        = vlSelf->__PVT__reg_f[0x12U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x13U] 
        = vlSelf->__PVT__reg_f[0x13U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x14U] 
        = vlSelf->__PVT__reg_f[0x14U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x15U] 
        = vlSelf->__PVT__reg_f[0x15U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x16U] 
        = vlSelf->__PVT__reg_f[0x16U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x17U] 
        = vlSelf->__PVT__reg_f[0x17U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x18U] 
        = vlSelf->__PVT__reg_f[0x18U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x19U] 
        = vlSelf->__PVT__reg_f[0x19U];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x1aU] 
        = vlSelf->__PVT__reg_f[0x1aU];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x1bU] 
        = vlSelf->__PVT__reg_f[0x1bU];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x1cU] 
        = vlSelf->__PVT__reg_f[0x1cU];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x1dU] 
        = vlSelf->__PVT__reg_f[0x1dU];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x1eU] 
        = vlSelf->__PVT__reg_f[0x1eU];
    vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x1fU] 
        = vlSelf->__PVT__reg_f[0x1fU];
    vlSelf->__PVT__unnormal_pc = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__unnormal_pc;
    vlSelf->__PVT__reg_wen = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__reg_wen;
    vlSelf->__PVT__reg_waddr = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__reg_waddr;
    vlSelf->__PVT__wmask = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__wmask;
    vlSelf->__PVT__rd_flag = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__rd_flag;
    vlSelf->__PVT__unknown_code = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__unknown_code;
    vlSelf->__PVT__s_flag = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__s_flag;
    vlSelf->__PVT__id_mul = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__id_mul;
    vlSelf->__PVT__id_div = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__id_div;
    vlSelf->__PVT__jalr = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__jalr;
    vlSelf->__PVT__ebreak_flag = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__ebreak_flag;
    vlSelf->__PVT__branch = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__branch;
    vlSelf->__PVT__jump = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__jump;
    vlSelf->__PVT__ecall_flag = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__ecall_flag;
    vlSelf->__PVT__mret_flag = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__mret_flag;
    vlSelf->__PVT__alu_op = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__alu_op;
    vlSelf->__PVT__alu_src_sel = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__alu_src_sel;
    vlSelf->__Vcellout__u_ctrl__csr_addr = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__csr_addr;
    vlSelf->__PVT__expand_signed = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__expand_signed;
    vlSelf->__PVT__rd_buf_flag = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__rd_buf_flag;
    vlSelf->__PVT__s_imm = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__s_imm;
    vlSelf->__PVT__reg1_raddr = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__reg1_raddr;
    vlSelf->__PVT__reg2_raddr = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__reg2_raddr;
    vlSelf->__PVT__imm_gen_op = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_ctrl.__PVT__imm_gen_op;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[1U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[1U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[2U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[2U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[3U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[3U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[4U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[4U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[5U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[5U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[6U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[6U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[7U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[7U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[8U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[8U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[9U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[9U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0xaU] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0xaU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0xbU] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0xbU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0xcU] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0xcU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0xdU] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0xdU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0xeU] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0xeU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0xfU] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0xfU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0x10U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0x10U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0x11U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0x11U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0x12U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0x12U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0x13U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0x13U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0x14U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0x14U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0x15U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0x15U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0x16U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0x16U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0x17U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0x17U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0x18U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0x18U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0x19U] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0x19U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0x1aU] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0x1aU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0x1bU] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0x1bU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0x1cU] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0x1cU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0x1dU] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0x1dU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0x1eU] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0x1eU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__reg_f[0x1fU] 
        = vlSelf->__Vcellinp__u_mux_pc__reg_f[0x1fU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[1U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[1U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[2U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[2U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[3U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[3U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[4U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[4U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[5U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[5U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[6U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[6U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[7U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[7U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[8U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[8U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[9U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[9U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0xaU] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0xaU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0xbU] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0xbU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0xcU] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0xcU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0xdU] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0xdU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0xeU] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0xeU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0xfU] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0xfU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0x10U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x10U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0x11U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x11U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0x12U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x12U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0x13U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x13U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0x14U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x14U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0x15U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x15U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0x16U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x16U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0x17U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x17U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0x18U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x18U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0x19U] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x19U];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0x1aU] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x1aU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0x1bU] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x1bU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0x1cU] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x1cU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0x1dU] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x1dU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0x1eU] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x1eU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg_f[0x1fU] 
        = vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[0x1fU];
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__unnormal_pc 
        = vlSelf->__PVT__unnormal_pc;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__s_flag 
        = vlSelf->__PVT__s_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__jalr 
        = vlSelf->__PVT__jalr;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__ebreak_flag 
        = vlSelf->__PVT__ebreak_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_control_rest.__PVT__branch 
        = vlSelf->__PVT__branch;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__branch 
        = vlSelf->__PVT__branch;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_control_rest.__PVT__jump 
        = vlSelf->__PVT__jump;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__jump 
        = vlSelf->__PVT__jump;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_control_rest.__PVT__ecall_flag 
        = vlSelf->__PVT__ecall_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__ecall_flag 
        = vlSelf->__PVT__ecall_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_control_rest.__PVT__mret_flag 
        = vlSelf->__PVT__mret_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__mret_flag 
        = vlSelf->__PVT__mret_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__alu_op 
        = vlSelf->__PVT__alu_op;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_alu.__PVT__alu_src_sel 
        = vlSelf->__PVT__alu_src_sel;
    vlSelf->__PVT__csr_addr = VL_EXTEND_QI(64,12, (IData)(vlSelf->__Vcellout__u_ctrl__csr_addr));
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__expand_signed 
        = vlSelf->__PVT__expand_signed;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__curr_rd_buf_flag 
        = vlSelf->__PVT__rd_buf_flag;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__s_imm 
        = vlSelf->__PVT__s_imm;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__s_imm 
        = vlSelf->__PVT__s_imm;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg1_raddr 
        = vlSelf->__PVT__reg1_raddr;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__reg1_raddr 
        = vlSelf->__PVT__reg1_raddr;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg2_raddr 
        = vlSelf->__PVT__reg2_raddr;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__reg2_raddr 
        = vlSelf->__PVT__reg2_raddr;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_imm_gen.__PVT__imm_gen_op 
        = vlSelf->__PVT__imm_gen_op;
    vlSelf->__Vcellinp__u_mux_alu__csr_addr = (0xfffU 
                                               & VL_SEL_IQII(12,64,32,32, vlSelf->__PVT__csr_addr, 0U, 0xcU));
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_alu.__PVT__csr_addr 
        = vlSelf->__Vcellinp__u_mux_alu__csr_addr;
}

void Vysyx_22040175_top_id_stage___settle__TOP__ysyx_22040175_top__u_id_stage__3(Vysyx_22040175_top_id_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_id_stage___settle__TOP__ysyx_22040175_top__u_id_stage__3\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_alu.__PVT__mcause 
        = vlSelf->__PVT__mcause;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__mepc 
        = vlSelf->__PVT__mepc;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_alu.__PVT__mepc 
        = vlSelf->__PVT__mepc;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__mtvec 
        = vlSelf->__PVT__mtvec;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_alu.__PVT__mtvec 
        = vlSelf->__PVT__mtvec;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__from_mem_alu_res 
        = vlSelf->__PVT__from_mem_alu_res;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__wb_hazard_result 
        = vlSelf->__PVT__wb_hazard_result;
    vlSelf->__PVT__control_rest = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_control_rest.__PVT__control_rest;
    vlSelf->__PVT__imm = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_imm_gen.__PVT__imm;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__control_rest 
        = vlSelf->__PVT__control_rest;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__imm 
        = vlSelf->__PVT__imm;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_alu.__PVT__imm 
        = vlSelf->__PVT__imm;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__imm 
        = vlSelf->__PVT__imm;
}

void Vysyx_22040175_top_id_stage___settle__TOP__ysyx_22040175_top__u_id_stage__4(Vysyx_22040175_top_id_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_id_stage___settle__TOP__ysyx_22040175_top__u_id_stage__4\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__from_ex_alu_res 
        = vlSelf->__PVT__from_ex_alu_res;
    vlSelf->__PVT__rest_id_mem = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__rest_id_mem;
    vlSelf->__PVT__rest_wb_hazard = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__rest_wb_hazard;
    vlSelf->__PVT__rest_from_id = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__rest_from_id;
    vlSelf->__PVT__cunqu_hazard = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_rest.__PVT__cunqu_hazard;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__rest_id_mem 
        = vlSelf->__PVT__rest_id_mem;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__rest_wb_hazard 
        = vlSelf->__PVT__rest_wb_hazard;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_id_control_rest.__PVT__rest_from_id 
        = vlSelf->__PVT__rest_from_id;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__rest_from_id 
        = vlSelf->__PVT__rest_from_id;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_alu.__PVT__cunqu_hazard 
        = vlSelf->__PVT__cunqu_hazard;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__cunqu_hazard 
        = vlSelf->__PVT__cunqu_hazard;
}

void Vysyx_22040175_top_id_stage___settle__TOP__ysyx_22040175_top__u_id_stage__5(Vysyx_22040175_top_id_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_id_stage___settle__TOP__ysyx_22040175_top__u_id_stage__5\n"); );
    // Body
    vlSelf->__PVT__data_rest_cond = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__data_rest_cond;
    vlSelf->__PVT__reg1_rdata = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg1_rdata;
    vlSelf->__PVT__reg2_rdata = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_dt_pipe.__PVT__reg2_rdata;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__data_rest_cond 
        = vlSelf->__PVT__data_rest_cond;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_alu.__PVT__reg1_rdata 
        = vlSelf->__PVT__reg1_rdata;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_alu.__PVT__reg2_rdata 
        = vlSelf->__PVT__reg2_rdata;
}

void Vysyx_22040175_top_id_stage___settle__TOP__ysyx_22040175_top__u_id_stage__6(Vysyx_22040175_top_id_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_id_stage___settle__TOP__ysyx_22040175_top__u_id_stage__6\n"); );
    // Body
    vlSelf->__PVT__alu_src1 = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_alu.__PVT__alu_src1;
    vlSelf->__PVT__alu_src2 = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_alu.__PVT__alu_src2;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__alu_src1 
        = vlSelf->__PVT__alu_src1;
    vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__alu_src2 
        = vlSelf->__PVT__alu_src2;
}

void Vysyx_22040175_top_id_stage___settle__TOP__ysyx_22040175_top__u_id_stage__7(Vysyx_22040175_top_id_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_id_stage___settle__TOP__ysyx_22040175_top__u_id_stage__7\n"); );
    // Body
    vlSelf->__PVT__next_pc = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__next_pc;
    vlSelf->__PVT__sig_jalr = vlSymsp->TOP__ysyx_22040175_top__u_id_stage__u_mux_pc.__PVT__sig_jalr;
}

void Vysyx_22040175_top_id_stage___ctor_var_reset(Vysyx_22040175_top_id_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_id_stage___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__next_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__inst = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_inst = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__ex_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rest_from_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reg_wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__imm = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_op = VL_RAND_RESET_I(5);
    vlSelf->__PVT__alu_src_sel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__unknown_code = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__jalr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ebreak_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wmask = VL_RAND_RESET_I(8);
    vlSelf->__PVT__s_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__expand_signed = VL_RAND_RESET_I(4);
    vlSelf->__PVT__rd_flag = VL_RAND_RESET_I(3);
    vlSelf->__PVT__rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->__PVT__control_rest = VL_RAND_RESET_I(1);
    vlSelf->__PVT__from_ex_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__from_mem_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->__PVT__alu_src1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_src2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__rest_id_mem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_hazard_result = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mem_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ex_s_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_s_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rest_wb_hazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sig_jalr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__delay_sig_jalr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_s_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cunqu_hazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_cunqu_hazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_from_ex_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__id_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr_addr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mret_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ecall_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__jump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reg1_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__reg2_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__imm_gen_op = VL_RAND_RESET_I(3);
    vlSelf->__PVT__reg1_raddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__reg2_raddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__data_rest_cond = VL_RAND_RESET_I(3);
    vlSelf->__PVT__unnormal_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__u_ctrl__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__delay_reg1_rdata = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__Vcellinp__u_mux_dt_pipe__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__Vcellinp__u_mux_alu__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__u_mux_alu__csr_addr = VL_RAND_RESET_I(12);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__Vcellinp__u_mux_pc__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__mstatus = VL_RAND_RESET_I(1);
}
