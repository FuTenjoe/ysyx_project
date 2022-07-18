// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040175_top__Syms.h"


void Vysyx_22040175_top___024root__traceInitSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040175_top___024root__traceInitTop(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040175_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22040175_top___024root__traceInitSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+629,"clk", false,-1);
        tracep->declBit(c+630,"rst", false,-1);
        tracep->declBus(c+631,"inst", false,-1, 31,0);
        tracep->declBus(c+632,"pc", false,-1, 31,0);
        tracep->declQuad(c+633,"unknown_code", false,-1, 63,0);
        tracep->declBit(c+635,"time_set", false,-1);
        tracep->declBit(c+629,"ysyx_22040175_top clk", false,-1);
        tracep->declBit(c+630,"ysyx_22040175_top rst", false,-1);
        tracep->declBus(c+631,"ysyx_22040175_top inst", false,-1, 31,0);
        tracep->declBus(c+632,"ysyx_22040175_top pc", false,-1, 31,0);
        tracep->declQuad(c+633,"ysyx_22040175_top unknown_code", false,-1, 63,0);
        tracep->declBit(c+635,"ysyx_22040175_top time_set", false,-1);
        tracep->declBit(c+636,"ysyx_22040175_top rst_n", false,-1);
        tracep->declQuad(c+637,"ysyx_22040175_top next_pc", false,-1, 63,0);
        tracep->declBit(c+639,"ysyx_22040175_top if_ena", false,-1);
        tracep->declBus(c+385,"ysyx_22040175_top if_inst", false,-1, 31,0);
        tracep->declQuad(c+640,"ysyx_22040175_top if_pc", false,-1, 63,0);
        tracep->declBus(c+386,"ysyx_22040175_top id_inst", false,-1, 31,0);
        tracep->declQuad(c+387,"ysyx_22040175_top id_pc", false,-1, 63,0);
        tracep->declBit(c+389,"ysyx_22040175_top id_ena", false,-1);
        tracep->declBit(c+390,"ysyx_22040175_top id_time_set", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+642+i*2,"ysyx_22040175_top to_id_reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+391,"ysyx_22040175_top id_branch", false,-1);
        tracep->declBit(c+392,"ysyx_22040175_top id_jump", false,-1);
        tracep->declBit(c+393,"ysyx_22040175_top id_reg_wen", false,-1);
        tracep->declBus(c+394,"ysyx_22040175_top id_reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+395,"ysyx_22040175_top id_reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+397,"ysyx_22040175_top id_reg2_rdata", false,-1, 63,0);
        tracep->declQuad(c+399,"ysyx_22040175_top id_imm", false,-1, 63,0);
        tracep->declBus(c+401,"ysyx_22040175_top id_alu_op", false,-1, 4,0);
        tracep->declBus(c+402,"ysyx_22040175_top id_alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+403,"ysyx_22040175_top id_unknown_code", false,-1, 63,0);
        tracep->declBit(c+405,"ysyx_22040175_top id_jalr", false,-1);
        tracep->declBit(c+406,"ysyx_22040175_top id_ebreak_flag", false,-1);
        tracep->declBus(c+407,"ysyx_22040175_top id_wmask", false,-1, 7,0);
        tracep->declBit(c+408,"ysyx_22040175_top id_s_flag", false,-1);
        tracep->declBus(c+409,"ysyx_22040175_top id_s_imm", false,-1, 31,0);
        tracep->declBus(c+410,"ysyx_22040175_top id_expand_signed", false,-1, 3,0);
        tracep->declBus(c+411,"ysyx_22040175_top id_rd_flag", false,-1, 2,0);
        tracep->declBus(c+412,"ysyx_22040175_top id_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+413,"ysyx_22040175_top ex_pc", false,-1, 63,0);
        tracep->declBit(c+415,"ysyx_22040175_top ex_branch", false,-1);
        tracep->declBit(c+416,"ysyx_22040175_top ex_jump", false,-1);
        tracep->declBit(c+417,"ysyx_22040175_top ex_reg_wen", false,-1);
        tracep->declBus(c+706,"ysyx_22040175_top ex_reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+418,"ysyx_22040175_top ex_imm", false,-1, 63,0);
        tracep->declBus(c+420,"ysyx_22040175_top ex_alu_op", false,-1, 4,0);
        tracep->declBus(c+421,"ysyx_22040175_top ex_alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+422,"ysyx_22040175_top ex_unknown_code", false,-1, 63,0);
        tracep->declBit(c+424,"ysyx_22040175_top ex_jalr", false,-1);
        tracep->declBit(c+425,"ysyx_22040175_top ex_ebreak_flag", false,-1);
        tracep->declBus(c+426,"ysyx_22040175_top ex_wmask", false,-1, 7,0);
        tracep->declBit(c+427,"ysyx_22040175_top ex_s_flag", false,-1);
        tracep->declBus(c+428,"ysyx_22040175_top ex_s_imm", false,-1, 31,0);
        tracep->declBus(c+429,"ysyx_22040175_top ex_expand_signed", false,-1, 3,0);
        tracep->declBus(c+430,"ysyx_22040175_top ex_rd_flag", false,-1, 2,0);
        tracep->declBus(c+431,"ysyx_22040175_top ex_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+707,"ysyx_22040175_top ex_reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+432,"ysyx_22040175_top ex_reg2_rdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1+i*2,"ysyx_22040175_top to_ex_reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+434,"ysyx_22040175_top ex_ena", false,-1);
        tracep->declBit(c+709,"ysyx_22040175_top ex_time_set", false,-1);
        tracep->declQuad(c+435,"ysyx_22040175_top from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+437,"ysyx_22040175_top ex_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+439,"ysyx_22040175_top ex_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+441,"ysyx_22040175_top ex_next_pc", false,-1, 63,0);
        tracep->declBit(c+443,"ysyx_22040175_top mem_reg_wen", false,-1);
        tracep->declBus(c+444,"ysyx_22040175_top mem_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+445,"ysyx_22040175_top mem_ebreak_flag", false,-1);
        tracep->declBus(c+446,"ysyx_22040175_top mem_wmask", false,-1, 7,0);
        tracep->declBit(c+447,"ysyx_22040175_top mem_s_flag", false,-1);
        tracep->declBit(c+448,"ysyx_22040175_top mem_time_set", false,-1);
        tracep->declBus(c+449,"ysyx_22040175_top mem_s_imm", false,-1, 31,0);
        tracep->declBus(c+450,"ysyx_22040175_top mem_expand_signed", false,-1, 3,0);
        tracep->declBus(c+451,"ysyx_22040175_top mem_rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+452,"ysyx_22040175_top mem_alu_op", false,-1, 4,0);
        tracep->declQuad(c+453,"ysyx_22040175_top mem_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+455,"ysyx_22040175_top mem_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+457,"ysyx_22040175_top mem_from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+459,"ysyx_22040175_top from_mem_alu_res", false,-1, 63,0);
        tracep->declBit(c+461,"ysyx_22040175_top wb_reg_wen", false,-1);
        tracep->declBus(c+462,"ysyx_22040175_top wb_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+463,"ysyx_22040175_top wb_wmask", false,-1, 7,0);
        tracep->declBit(c+464,"ysyx_22040175_top wb_s_flag", false,-1);
        tracep->declBit(c+465,"ysyx_22040175_top wb_time_set", false,-1);
        tracep->declBus(c+466,"ysyx_22040175_top wb_s_imm", false,-1, 31,0);
        tracep->declBus(c+467,"ysyx_22040175_top wb_expand_signed", false,-1, 3,0);
        tracep->declBit(c+468,"ysyx_22040175_top wb_ebreak_flag", false,-1);
        tracep->declBus(c+469,"ysyx_22040175_top wb_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+470,"ysyx_22040175_top wb_from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+472,"ysyx_22040175_top wb_from_mem_alu_res", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+474+i*2,"ysyx_22040175_top from_wb_reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+538,"ysyx_22040175_top ena", false,-1);
        tracep->declBit(c+539,"ysyx_22040175_top ex_reg", false,-1);
        tracep->declBit(c+629,"ysyx_22040175_top u_if_stage clk", false,-1);
        tracep->declBit(c+636,"ysyx_22040175_top u_if_stage rst_n", false,-1);
        tracep->declQuad(c+441,"ysyx_22040175_top u_if_stage next_pc", false,-1, 63,0);
        tracep->declBit(c+538,"ysyx_22040175_top u_if_stage ena", false,-1);
        tracep->declBus(c+385,"ysyx_22040175_top u_if_stage inst", false,-1, 31,0);
        tracep->declQuad(c+640,"ysyx_22040175_top u_if_stage pc", false,-1, 63,0);
        tracep->declQuad(c+540,"ysyx_22040175_top u_if_stage curr_pc", false,-1, 63,0);
        tracep->declQuad(c+542,"ysyx_22040175_top u_if_stage rdata", false,-1, 63,0);
        tracep->declBit(c+629,"ysyx_22040175_top u_if_stage u_pc_reg clk", false,-1);
        tracep->declBit(c+636,"ysyx_22040175_top u_if_stage u_pc_reg rst_n", false,-1);
        tracep->declBit(c+538,"ysyx_22040175_top u_if_stage u_pc_reg ena", false,-1);
        tracep->declQuad(c+441,"ysyx_22040175_top u_if_stage u_pc_reg next_pc", false,-1, 63,0);
        tracep->declQuad(c+540,"ysyx_22040175_top u_if_stage u_pc_reg curr_pc", false,-1, 63,0);
        tracep->declBit(c+629,"ysyx_22040175_top u_if_id_regs clk", false,-1);
        tracep->declBit(c+636,"ysyx_22040175_top u_if_id_regs rst_n", false,-1);
        tracep->declQuad(c+640,"ysyx_22040175_top u_if_id_regs pc_if_id_i", false,-1, 63,0);
        tracep->declBus(c+385,"ysyx_22040175_top u_if_id_regs instr_if_id_i", false,-1, 31,0);
        tracep->declBit(c+639,"ysyx_22040175_top u_if_id_regs ena_if_id_i", false,-1);
        tracep->declBit(c+635,"ysyx_22040175_top u_if_id_regs time_set_if_id_i", false,-1);
        tracep->declQuad(c+387,"ysyx_22040175_top u_if_id_regs pc_if_id_o", false,-1, 63,0);
        tracep->declBus(c+386,"ysyx_22040175_top u_if_id_regs instr_if_id_o", false,-1, 31,0);
        tracep->declBit(c+389,"ysyx_22040175_top u_if_id_regs ena_if_id_o", false,-1);
        tracep->declBit(c+390,"ysyx_22040175_top u_if_id_regs time_set_if_id_o", false,-1);
        tracep->declQuad(c+544,"ysyx_22040175_top u_id_stage inst", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+65+i*2,"ysyx_22040175_top u_id_stage reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+391,"ysyx_22040175_top u_id_stage branch", false,-1);
        tracep->declBit(c+392,"ysyx_22040175_top u_id_stage jump", false,-1);
        tracep->declBit(c+393,"ysyx_22040175_top u_id_stage reg_wen", false,-1);
        tracep->declBus(c+394,"ysyx_22040175_top u_id_stage reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+395,"ysyx_22040175_top u_id_stage reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+397,"ysyx_22040175_top u_id_stage reg2_rdata", false,-1, 63,0);
        tracep->declQuad(c+399,"ysyx_22040175_top u_id_stage imm", false,-1, 63,0);
        tracep->declBus(c+401,"ysyx_22040175_top u_id_stage alu_op", false,-1, 4,0);
        tracep->declBus(c+402,"ysyx_22040175_top u_id_stage alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+403,"ysyx_22040175_top u_id_stage unknown_code", false,-1, 63,0);
        tracep->declBit(c+405,"ysyx_22040175_top u_id_stage jalr", false,-1);
        tracep->declBit(c+406,"ysyx_22040175_top u_id_stage ebreak_flag", false,-1);
        tracep->declBus(c+407,"ysyx_22040175_top u_id_stage wmask", false,-1, 7,0);
        tracep->declBit(c+408,"ysyx_22040175_top u_id_stage s_flag", false,-1);
        tracep->declBus(c+409,"ysyx_22040175_top u_id_stage s_imm", false,-1, 31,0);
        tracep->declBus(c+410,"ysyx_22040175_top u_id_stage expand_signed", false,-1, 3,0);
        tracep->declBus(c+411,"ysyx_22040175_top u_id_stage rd_flag", false,-1, 2,0);
        tracep->declBus(c+412,"ysyx_22040175_top u_id_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+546,"ysyx_22040175_top u_id_stage imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+547,"ysyx_22040175_top u_id_stage reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+548,"ysyx_22040175_top u_id_stage reg2_raddr", false,-1, 4,0);
        tracep->declBit(c+710,"ysyx_22040175_top u_id_stage clk", false,-1);
        tracep->declBit(c+711,"ysyx_22040175_top u_id_stage rst_n", false,-1);
        tracep->declQuad(c+544,"ysyx_22040175_top u_id_stage u_ctrl inst", false,-1, 63,0);
        tracep->declBit(c+391,"ysyx_22040175_top u_id_stage u_ctrl branch", false,-1);
        tracep->declBit(c+392,"ysyx_22040175_top u_id_stage u_ctrl jump", false,-1);
        tracep->declBit(c+393,"ysyx_22040175_top u_id_stage u_ctrl reg_wen", false,-1);
        tracep->declBus(c+394,"ysyx_22040175_top u_id_stage u_ctrl reg_waddr", false,-1, 4,0);
        tracep->declBus(c+547,"ysyx_22040175_top u_id_stage u_ctrl reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+548,"ysyx_22040175_top u_id_stage u_ctrl reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+546,"ysyx_22040175_top u_id_stage u_ctrl imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+401,"ysyx_22040175_top u_id_stage u_ctrl alu_op", false,-1, 4,0);
        tracep->declBus(c+402,"ysyx_22040175_top u_id_stage u_ctrl alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+403,"ysyx_22040175_top u_id_stage u_ctrl unknown_code", false,-1, 63,0);
        tracep->declBit(c+405,"ysyx_22040175_top u_id_stage u_ctrl jalr", false,-1);
        tracep->declBit(c+406,"ysyx_22040175_top u_id_stage u_ctrl ebreak_flag", false,-1);
        tracep->declBus(c+407,"ysyx_22040175_top u_id_stage u_ctrl wmask", false,-1, 7,0);
        tracep->declBit(c+408,"ysyx_22040175_top u_id_stage u_ctrl s_flag", false,-1);
        tracep->declBus(c+409,"ysyx_22040175_top u_id_stage u_ctrl s_imm", false,-1, 31,0);
        tracep->declBus(c+410,"ysyx_22040175_top u_id_stage u_ctrl expand_signed", false,-1, 3,0);
        tracep->declBus(c+411,"ysyx_22040175_top u_id_stage u_ctrl rd_flag", false,-1, 2,0);
        tracep->declBus(c+412,"ysyx_22040175_top u_id_stage u_ctrl rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+549,"ysyx_22040175_top u_id_stage u_ctrl opcode", false,-1, 6,0);
        tracep->declBus(c+550,"ysyx_22040175_top u_id_stage u_ctrl funct3", false,-1, 2,0);
        tracep->declBus(c+551,"ysyx_22040175_top u_id_stage u_ctrl funct7", false,-1, 6,0);
        tracep->declBus(c+552,"ysyx_22040175_top u_id_stage u_ctrl rd", false,-1, 4,0);
        tracep->declBus(c+553,"ysyx_22040175_top u_id_stage u_ctrl rs1", false,-1, 4,0);
        tracep->declBus(c+554,"ysyx_22040175_top u_id_stage u_ctrl rs2", false,-1, 4,0);
        tracep->declQuad(c+544,"ysyx_22040175_top u_id_stage u_imm_gen inst", false,-1, 63,0);
        tracep->declBus(c+546,"ysyx_22040175_top u_id_stage u_imm_gen imm_gen_op", false,-1, 2,0);
        tracep->declQuad(c+399,"ysyx_22040175_top u_id_stage u_imm_gen imm", false,-1, 63,0);
        tracep->declBit(c+710,"ysyx_22040175_top u_id_stage u_reg_read clk", false,-1);
        tracep->declBit(c+711,"ysyx_22040175_top u_id_stage u_reg_read rst_n", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+129+i*2,"ysyx_22040175_top u_id_stage u_reg_read reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+547,"ysyx_22040175_top u_id_stage u_reg_read reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+548,"ysyx_22040175_top u_id_stage u_reg_read reg2_raddr", false,-1, 4,0);
        tracep->declQuad(c+395,"ysyx_22040175_top u_id_stage u_reg_read reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+397,"ysyx_22040175_top u_id_stage u_reg_read reg2_rdata", false,-1, 63,0);
        tracep->declBit(c+629,"ysyx_22040175_top u_id_ex_regs clk", false,-1);
        tracep->declBit(c+636,"ysyx_22040175_top u_id_ex_regs rst_n", false,-1);
        tracep->declQuad(c+387,"ysyx_22040175_top u_id_ex_regs pc_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+413,"ysyx_22040175_top u_id_ex_regs pc_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+391,"ysyx_22040175_top u_id_ex_regs branch_id_ex_i", false,-1);
        tracep->declBit(c+392,"ysyx_22040175_top u_id_ex_regs jump_id_ex_i", false,-1);
        tracep->declBit(c+393,"ysyx_22040175_top u_id_ex_regs reg_wen_id_ex_i", false,-1);
        tracep->declBus(c+394,"ysyx_22040175_top u_id_ex_regs reg_waddr_id_ex_i", false,-1, 4,0);
        tracep->declQuad(c+395,"ysyx_22040175_top u_id_ex_regs reg1_rdata_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+397,"ysyx_22040175_top u_id_ex_regs reg2_rdata_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+399,"ysyx_22040175_top u_id_ex_regs imm_id_ex_i", false,-1, 63,0);
        tracep->declBus(c+401,"ysyx_22040175_top u_id_ex_regs alu_op_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+402,"ysyx_22040175_top u_id_ex_regs alu_src_sel_id_ex_i", false,-1, 1,0);
        tracep->declQuad(c+403,"ysyx_22040175_top u_id_ex_regs unknown_code_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+405,"ysyx_22040175_top u_id_ex_regs jalr_id_ex_i", false,-1);
        tracep->declBit(c+406,"ysyx_22040175_top u_id_ex_regs ebreak_flag_id_ex_i", false,-1);
        tracep->declBus(c+407,"ysyx_22040175_top u_id_ex_regs wmask_id_ex_i", false,-1, 7,0);
        tracep->declBit(c+408,"ysyx_22040175_top u_id_ex_regs s_flag_id_ex_i", false,-1);
        tracep->declBus(c+409,"ysyx_22040175_top u_id_ex_regs s_imm_id_ex_i", false,-1, 31,0);
        tracep->declBus(c+410,"ysyx_22040175_top u_id_ex_regs expand_signed_id_ex_i", false,-1, 3,0);
        tracep->declBus(c+411,"ysyx_22040175_top u_id_ex_regs rd_flag_id_ex_i", false,-1, 2,0);
        tracep->declBus(c+412,"ysyx_22040175_top u_id_ex_regs rd_buf_flag_id_ex_i", false,-1, 2,0);
        tracep->declBit(c+415,"ysyx_22040175_top u_id_ex_regs branch_id_ex_o", false,-1);
        tracep->declBit(c+416,"ysyx_22040175_top u_id_ex_regs jump_id_ex_o", false,-1);
        tracep->declBit(c+417,"ysyx_22040175_top u_id_ex_regs reg_wen_id_ex_o", false,-1);
        tracep->declBus(c+555,"ysyx_22040175_top u_id_ex_regs reg_waddr_id_ex_o", false,-1, 4,0);
        tracep->declQuad(c+418,"ysyx_22040175_top u_id_ex_regs imm_id_ex_o", false,-1, 63,0);
        tracep->declBus(c+420,"ysyx_22040175_top u_id_ex_regs alu_op_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+421,"ysyx_22040175_top u_id_ex_regs alu_src_sel_id_ex_o", false,-1, 1,0);
        tracep->declQuad(c+422,"ysyx_22040175_top u_id_ex_regs unknown_code_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+424,"ysyx_22040175_top u_id_ex_regs jalr_id_ex_o", false,-1);
        tracep->declBit(c+425,"ysyx_22040175_top u_id_ex_regs ebreak_flag_id_ex_o", false,-1);
        tracep->declBus(c+426,"ysyx_22040175_top u_id_ex_regs wmask_id_ex_o", false,-1, 7,0);
        tracep->declBit(c+427,"ysyx_22040175_top u_id_ex_regs s_flag_id_ex_o", false,-1);
        tracep->declBus(c+428,"ysyx_22040175_top u_id_ex_regs s_imm_id_ex_o", false,-1, 31,0);
        tracep->declBus(c+429,"ysyx_22040175_top u_id_ex_regs expand_signed_id_ex_o", false,-1, 3,0);
        tracep->declBus(c+430,"ysyx_22040175_top u_id_ex_regs rd_flag_id_ex_o", false,-1, 2,0);
        tracep->declBus(c+431,"ysyx_22040175_top u_id_ex_regs rd_buf_flag_id_ex_o", false,-1, 2,0);
        tracep->declQuad(c+707,"ysyx_22040175_top u_id_ex_regs reg1_rdata_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+432,"ysyx_22040175_top u_id_ex_regs reg2_rdata_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+712,"ysyx_22040175_top u_id_ex_regs reg_wdata_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+390,"ysyx_22040175_top u_id_ex_regs time_set_id_ex_i", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+193+i*2,"ysyx_22040175_top u_id_ex_regs reg_f_id_ex_i", true,(i+0), 63,0);}}
        tracep->declQuad(c+714,"ysyx_22040175_top u_id_ex_regs reg_wdata_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+709,"ysyx_22040175_top u_id_ex_regs time_set_id_ex_o", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+716+i*2,"ysyx_22040175_top u_id_ex_regs reg_f_id_ex_o", true,(i+0), 63,0);}}
        tracep->declBit(c+389,"ysyx_22040175_top u_id_ex_regs ena_id_ex_i", false,-1);
        tracep->declBit(c+434,"ysyx_22040175_top u_id_ex_regs ena_id_ex_o", false,-1);
        tracep->declBus(c+420,"ysyx_22040175_top u_ex_stage alu_op", false,-1, 4,0);
        tracep->declQuad(c+435,"ysyx_22040175_top u_ex_stage alu_res", false,-1, 63,0);
        tracep->declQuad(c+437,"ysyx_22040175_top u_ex_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+439,"ysyx_22040175_top u_ex_stage alu_src2", false,-1, 63,0);
        tracep->declBus(c+430,"ysyx_22040175_top u_ex_stage rd_flag", false,-1, 2,0);
        tracep->declBit(c+434,"ysyx_22040175_top u_ex_stage ena", false,-1);
        tracep->declBit(c+415,"ysyx_22040175_top u_ex_stage branch", false,-1);
        tracep->declBit(c+416,"ysyx_22040175_top u_ex_stage jump", false,-1);
        tracep->declBit(c+424,"ysyx_22040175_top u_ex_stage jalr", false,-1);
        tracep->declQuad(c+418,"ysyx_22040175_top u_ex_stage imm", false,-1, 63,0);
        tracep->declQuad(c+413,"ysyx_22040175_top u_ex_stage curr_pc", false,-1, 63,0);
        tracep->declQuad(c+707,"ysyx_22040175_top u_ex_stage reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+432,"ysyx_22040175_top u_ex_stage reg2_rdata", false,-1, 63,0);
        tracep->declBit(c+425,"ysyx_22040175_top u_ex_stage ebreak_flag", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+257+i*2,"ysyx_22040175_top u_ex_stage reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+428,"ysyx_22040175_top u_ex_stage s_imm", false,-1, 31,0);
        tracep->declQuad(c+441,"ysyx_22040175_top u_ex_stage next_pc", false,-1, 63,0);
        tracep->declBit(c+556,"ysyx_22040175_top u_ex_stage zero", false,-1);
        tracep->declBit(c+780,"ysyx_22040175_top u_ex_stage alu_src_sel", false,-1);
        tracep->declBus(c+420,"ysyx_22040175_top u_ex_stage u_alu alu_op", false,-1, 4,0);
        tracep->declQuad(c+437,"ysyx_22040175_top u_ex_stage u_alu alu_src1", false,-1, 63,0);
        tracep->declQuad(c+439,"ysyx_22040175_top u_ex_stage u_alu alu_src2", false,-1, 63,0);
        tracep->declBit(c+556,"ysyx_22040175_top u_ex_stage u_alu zero", false,-1);
        tracep->declQuad(c+435,"ysyx_22040175_top u_ex_stage u_alu alu_res", false,-1, 63,0);
        tracep->declBus(c+430,"ysyx_22040175_top u_ex_stage u_alu rd_flag", false,-1, 2,0);
        tracep->declQuad(c+557,"ysyx_22040175_top u_ex_stage u_alu signed_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+559,"ysyx_22040175_top u_ex_stage u_alu signed_alu_src2", false,-1, 63,0);
        tracep->declBit(c+434,"ysyx_22040175_top u_ex_stage u_muxpc ena", false,-1);
        tracep->declBit(c+415,"ysyx_22040175_top u_ex_stage u_muxpc branch", false,-1);
        tracep->declBit(c+556,"ysyx_22040175_top u_ex_stage u_muxpc zero", false,-1);
        tracep->declBit(c+416,"ysyx_22040175_top u_ex_stage u_muxpc jump", false,-1);
        tracep->declBit(c+424,"ysyx_22040175_top u_ex_stage u_muxpc jalr", false,-1);
        tracep->declQuad(c+418,"ysyx_22040175_top u_ex_stage u_muxpc imm", false,-1, 63,0);
        tracep->declQuad(c+413,"ysyx_22040175_top u_ex_stage u_muxpc curr_pc", false,-1, 63,0);
        tracep->declQuad(c+441,"ysyx_22040175_top u_ex_stage u_muxpc next_pc", false,-1, 63,0);
        tracep->declBit(c+425,"ysyx_22040175_top u_ex_stage u_muxpc ebreak_flag", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+321+i*2,"ysyx_22040175_top u_ex_stage u_muxpc reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+428,"ysyx_22040175_top u_ex_stage u_muxpc s_imm", false,-1, 31,0);
        tracep->declBus(c+781,"ysyx_22040175_top u_ex_stage u_mux_alu alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+707,"ysyx_22040175_top u_ex_stage u_mux_alu reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+432,"ysyx_22040175_top u_ex_stage u_mux_alu reg2_rdata", false,-1, 63,0);
        tracep->declQuad(c+418,"ysyx_22040175_top u_ex_stage u_mux_alu imm", false,-1, 63,0);
        tracep->declQuad(c+413,"ysyx_22040175_top u_ex_stage u_mux_alu curr_pc", false,-1, 63,0);
        tracep->declQuad(c+437,"ysyx_22040175_top u_ex_stage u_mux_alu alu_src1", false,-1, 63,0);
        tracep->declQuad(c+439,"ysyx_22040175_top u_ex_stage u_mux_alu alu_src2", false,-1, 63,0);
        tracep->declBit(c+629,"ysyx_22040175_top u_ex_mem_regs clk", false,-1);
        tracep->declBit(c+636,"ysyx_22040175_top u_ex_mem_regs rst_n", false,-1);
        tracep->declBit(c+417,"ysyx_22040175_top u_ex_mem_regs reg_wen_ex_mem_i", false,-1);
        tracep->declBus(c+706,"ysyx_22040175_top u_ex_mem_regs reg_waddr_ex_mem_i", false,-1, 4,0);
        tracep->declQuad(c+435,"ysyx_22040175_top u_ex_mem_regs from_ex_alu_res_ex_mem_i", false,-1, 63,0);
        tracep->declBus(c+426,"ysyx_22040175_top u_ex_mem_regs wmask_ex_mem_i", false,-1, 7,0);
        tracep->declBit(c+427,"ysyx_22040175_top u_ex_mem_regs s_flag_ex_mem_i", false,-1);
        tracep->declBit(c+709,"ysyx_22040175_top u_ex_mem_regs time_set_ex_mem_i", false,-1);
        tracep->declBus(c+428,"ysyx_22040175_top u_ex_mem_regs s_imm_ex_mem_i", false,-1, 31,0);
        tracep->declBus(c+429,"ysyx_22040175_top u_ex_mem_regs expand_signed_ex_mem_i", false,-1, 3,0);
        tracep->declBit(c+425,"ysyx_22040175_top u_ex_mem_regs ebreak_flag_ex_mem_i", false,-1);
        tracep->declBus(c+431,"ysyx_22040175_top u_ex_mem_regs rd_buf_flag_ex_mem_i", false,-1, 2,0);
        tracep->declBus(c+420,"ysyx_22040175_top u_ex_mem_regs alu_op_ex_mem_i", false,-1, 4,0);
        tracep->declQuad(c+437,"ysyx_22040175_top u_ex_mem_regs alu_src1_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+439,"ysyx_22040175_top u_ex_mem_regs alu_src2_ex_mem_i", false,-1, 63,0);
        tracep->declBit(c+443,"ysyx_22040175_top u_ex_mem_regs reg_wen_ex_mem_o", false,-1);
        tracep->declBus(c+444,"ysyx_22040175_top u_ex_mem_regs reg_waddr_ex_mem_o", false,-1, 4,0);
        tracep->declBit(c+445,"ysyx_22040175_top u_ex_mem_regs ebreak_flag_ex_mem_o", false,-1);
        tracep->declBus(c+446,"ysyx_22040175_top u_ex_mem_regs wmask_ex_mem_o", false,-1, 7,0);
        tracep->declBit(c+447,"ysyx_22040175_top u_ex_mem_regs s_flag_ex_mem_o", false,-1);
        tracep->declBit(c+448,"ysyx_22040175_top u_ex_mem_regs time_set_ex_mem_o", false,-1);
        tracep->declBus(c+449,"ysyx_22040175_top u_ex_mem_regs s_imm_ex_mem_o", false,-1, 31,0);
        tracep->declBus(c+450,"ysyx_22040175_top u_ex_mem_regs expand_signed_ex_mem_o", false,-1, 3,0);
        tracep->declBus(c+451,"ysyx_22040175_top u_ex_mem_regs rd_buf_flag_ex_mem_o", false,-1, 2,0);
        tracep->declBus(c+452,"ysyx_22040175_top u_ex_mem_regs alu_op_ex_mem_o", false,-1, 4,0);
        tracep->declQuad(c+453,"ysyx_22040175_top u_ex_mem_regs alu_src1_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+455,"ysyx_22040175_top u_ex_mem_regs alu_src2_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+457,"ysyx_22040175_top u_ex_mem_regs from_ex_alu_res_ex_mem_o", false,-1, 63,0);
        tracep->declBus(c+451,"ysyx_22040175_top u_mem_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+452,"ysyx_22040175_top u_mem_stage alu_op", false,-1, 4,0);
        tracep->declQuad(c+453,"ysyx_22040175_top u_mem_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+455,"ysyx_22040175_top u_mem_stage alu_src2", false,-1, 63,0);
        tracep->declQuad(c+459,"ysyx_22040175_top u_mem_stage alu_res", false,-1, 63,0);
        tracep->declQuad(c+561,"ysyx_22040175_top u_mem_stage rd_buf_lw", false,-1, 63,0);
        tracep->declBit(c+629,"ysyx_22040175_top u_mem_wb_regs clk", false,-1);
        tracep->declBit(c+636,"ysyx_22040175_top u_mem_wb_regs rst_n", false,-1);
        tracep->declBit(c+443,"ysyx_22040175_top u_mem_wb_regs reg_wen_mem_wb_i", false,-1);
        tracep->declBus(c+444,"ysyx_22040175_top u_mem_wb_regs reg_waddr_mem_wb_i", false,-1, 4,0);
        tracep->declQuad(c+457,"ysyx_22040175_top u_mem_wb_regs from_ex_alu_res_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+459,"ysyx_22040175_top u_mem_wb_regs from_mem_alu_res_mem_wb_i", false,-1, 63,0);
        tracep->declBus(c+446,"ysyx_22040175_top u_mem_wb_regs wmask_mem_wb_i", false,-1, 7,0);
        tracep->declBit(c+447,"ysyx_22040175_top u_mem_wb_regs s_flag_mem_wb_i", false,-1);
        tracep->declBit(c+448,"ysyx_22040175_top u_mem_wb_regs time_set_mem_wb_i", false,-1);
        tracep->declBus(c+449,"ysyx_22040175_top u_mem_wb_regs s_imm_mem_wb_i", false,-1, 31,0);
        tracep->declBus(c+450,"ysyx_22040175_top u_mem_wb_regs expand_signed_mem_wb_i", false,-1, 3,0);
        tracep->declBit(c+445,"ysyx_22040175_top u_mem_wb_regs ebreak_flag_mem_wb_i", false,-1);
        tracep->declBus(c+451,"ysyx_22040175_top u_mem_wb_regs rd_buf_flag_mem_wb_i", false,-1, 2,0);
        tracep->declBit(c+461,"ysyx_22040175_top u_mem_wb_regs reg_wen_mem_wb_o", false,-1);
        tracep->declBus(c+462,"ysyx_22040175_top u_mem_wb_regs reg_waddr_mem_wb_o", false,-1, 4,0);
        tracep->declQuad(c+782,"ysyx_22040175_top u_mem_wb_regs reg_wdata_mem_wb_o", false,-1, 63,0);
        tracep->declBus(c+463,"ysyx_22040175_top u_mem_wb_regs wmask_mem_wb_o", false,-1, 7,0);
        tracep->declBit(c+464,"ysyx_22040175_top u_mem_wb_regs s_flag_mem_wb_o", false,-1);
        tracep->declBit(c+465,"ysyx_22040175_top u_mem_wb_regs time_set_mem_wb_o", false,-1);
        tracep->declBus(c+466,"ysyx_22040175_top u_mem_wb_regs s_imm_mem_wb_o", false,-1, 31,0);
        tracep->declBus(c+467,"ysyx_22040175_top u_mem_wb_regs expand_signed_mem_wb_o", false,-1, 3,0);
        tracep->declBit(c+468,"ysyx_22040175_top u_mem_wb_regs ebreak_flag_mem_wb_o", false,-1);
        tracep->declBus(c+469,"ysyx_22040175_top u_mem_wb_regs rd_buf_flag_mem_wb_o", false,-1, 2,0);
        tracep->declQuad(c+470,"ysyx_22040175_top u_mem_wb_regs from_ex_alu_res_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+472,"ysyx_22040175_top u_mem_wb_regs from_mem_alu_res_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+629,"ysyx_22040175_top u_wb_stage clk", false,-1);
        tracep->declBit(c+636,"ysyx_22040175_top u_wb_stage rst_n", false,-1);
        tracep->declBit(c+461,"ysyx_22040175_top u_wb_stage reg_wen", false,-1);
        tracep->declBus(c+462,"ysyx_22040175_top u_wb_stage reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+470,"ysyx_22040175_top u_wb_stage from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+472,"ysyx_22040175_top u_wb_stage from_mem_alu_res", false,-1, 63,0);
        tracep->declBus(c+463,"ysyx_22040175_top u_wb_stage wmask", false,-1, 7,0);
        tracep->declBit(c+464,"ysyx_22040175_top u_wb_stage s_flag", false,-1);
        tracep->declBit(c+465,"ysyx_22040175_top u_wb_stage time_set", false,-1);
        tracep->declBus(c+466,"ysyx_22040175_top u_wb_stage s_imm", false,-1, 31,0);
        tracep->declBus(c+467,"ysyx_22040175_top u_wb_stage expand_signed", false,-1, 3,0);
        tracep->declBus(c+469,"ysyx_22040175_top u_wb_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+468,"ysyx_22040175_top u_wb_stage ebreak_flag", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+563+i*2,"ysyx_22040175_top u_wb_stage reg_f", true,(i+0), 63,0);}}
        tracep->declQuad(c+627,"ysyx_22040175_top u_wb_stage reg_wdata", false,-1, 63,0);
    }
}

void Vysyx_22040175_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22040175_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040175_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22040175_top___024root__traceRegister(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22040175_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22040175_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22040175_top___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22040175_top___024root__traceFullSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040175_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040175_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040175_top___024root*>(voidSelf);
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040175_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22040175_top___024root__traceFullSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[0]),64);
        tracep->fullQData(oldp+3,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[1]),64);
        tracep->fullQData(oldp+5,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[2]),64);
        tracep->fullQData(oldp+7,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[3]),64);
        tracep->fullQData(oldp+9,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[4]),64);
        tracep->fullQData(oldp+11,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[5]),64);
        tracep->fullQData(oldp+13,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[6]),64);
        tracep->fullQData(oldp+15,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[7]),64);
        tracep->fullQData(oldp+17,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[8]),64);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[9]),64);
        tracep->fullQData(oldp+21,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[10]),64);
        tracep->fullQData(oldp+23,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[11]),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[12]),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[13]),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[14]),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[15]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[16]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[17]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[18]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[19]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[20]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[21]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[22]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[23]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[24]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[25]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[26]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[27]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[28]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[29]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[30]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[31]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[1]),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[2]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[3]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[4]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[5]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[6]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[7]),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[8]),64);
        tracep->fullQData(oldp+83,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[9]),64);
        tracep->fullQData(oldp+85,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[10]),64);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[11]),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[12]),64);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[13]),64);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[14]),64);
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[15]),64);
        tracep->fullQData(oldp+97,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[16]),64);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[17]),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[18]),64);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[19]),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[20]),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[21]),64);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[22]),64);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[23]),64);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[24]),64);
        tracep->fullQData(oldp+115,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[25]),64);
        tracep->fullQData(oldp+117,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[26]),64);
        tracep->fullQData(oldp+119,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[27]),64);
        tracep->fullQData(oldp+121,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[28]),64);
        tracep->fullQData(oldp+123,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[29]),64);
        tracep->fullQData(oldp+125,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[30]),64);
        tracep->fullQData(oldp+127,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[31]),64);
        tracep->fullQData(oldp+129,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[0]),64);
        tracep->fullQData(oldp+131,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[1]),64);
        tracep->fullQData(oldp+133,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[2]),64);
        tracep->fullQData(oldp+135,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[3]),64);
        tracep->fullQData(oldp+137,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[4]),64);
        tracep->fullQData(oldp+139,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[5]),64);
        tracep->fullQData(oldp+141,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[6]),64);
        tracep->fullQData(oldp+143,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[7]),64);
        tracep->fullQData(oldp+145,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[8]),64);
        tracep->fullQData(oldp+147,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[9]),64);
        tracep->fullQData(oldp+149,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[10]),64);
        tracep->fullQData(oldp+151,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[11]),64);
        tracep->fullQData(oldp+153,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[12]),64);
        tracep->fullQData(oldp+155,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[13]),64);
        tracep->fullQData(oldp+157,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[14]),64);
        tracep->fullQData(oldp+159,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[15]),64);
        tracep->fullQData(oldp+161,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[16]),64);
        tracep->fullQData(oldp+163,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[17]),64);
        tracep->fullQData(oldp+165,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[18]),64);
        tracep->fullQData(oldp+167,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[19]),64);
        tracep->fullQData(oldp+169,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[20]),64);
        tracep->fullQData(oldp+171,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[21]),64);
        tracep->fullQData(oldp+173,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[22]),64);
        tracep->fullQData(oldp+175,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[23]),64);
        tracep->fullQData(oldp+177,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[24]),64);
        tracep->fullQData(oldp+179,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[25]),64);
        tracep->fullQData(oldp+181,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[26]),64);
        tracep->fullQData(oldp+183,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[27]),64);
        tracep->fullQData(oldp+185,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[28]),64);
        tracep->fullQData(oldp+187,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[29]),64);
        tracep->fullQData(oldp+189,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[30]),64);
        tracep->fullQData(oldp+191,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[31]),64);
        tracep->fullQData(oldp+193,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[0]),64);
        tracep->fullQData(oldp+195,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[1]),64);
        tracep->fullQData(oldp+197,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[2]),64);
        tracep->fullQData(oldp+199,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[3]),64);
        tracep->fullQData(oldp+201,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[4]),64);
        tracep->fullQData(oldp+203,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[5]),64);
        tracep->fullQData(oldp+205,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[6]),64);
        tracep->fullQData(oldp+207,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[7]),64);
        tracep->fullQData(oldp+209,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[8]),64);
        tracep->fullQData(oldp+211,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[9]),64);
        tracep->fullQData(oldp+213,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[10]),64);
        tracep->fullQData(oldp+215,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[11]),64);
        tracep->fullQData(oldp+217,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[12]),64);
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[13]),64);
        tracep->fullQData(oldp+221,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[14]),64);
        tracep->fullQData(oldp+223,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[15]),64);
        tracep->fullQData(oldp+225,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[16]),64);
        tracep->fullQData(oldp+227,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[17]),64);
        tracep->fullQData(oldp+229,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[18]),64);
        tracep->fullQData(oldp+231,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[19]),64);
        tracep->fullQData(oldp+233,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[20]),64);
        tracep->fullQData(oldp+235,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[21]),64);
        tracep->fullQData(oldp+237,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[22]),64);
        tracep->fullQData(oldp+239,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[23]),64);
        tracep->fullQData(oldp+241,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[24]),64);
        tracep->fullQData(oldp+243,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[25]),64);
        tracep->fullQData(oldp+245,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[26]),64);
        tracep->fullQData(oldp+247,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[27]),64);
        tracep->fullQData(oldp+249,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[28]),64);
        tracep->fullQData(oldp+251,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[29]),64);
        tracep->fullQData(oldp+253,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[30]),64);
        tracep->fullQData(oldp+255,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[31]),64);
        tracep->fullQData(oldp+257,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[0]),64);
        tracep->fullQData(oldp+259,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[1]),64);
        tracep->fullQData(oldp+261,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[2]),64);
        tracep->fullQData(oldp+263,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[3]),64);
        tracep->fullQData(oldp+265,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[4]),64);
        tracep->fullQData(oldp+267,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[5]),64);
        tracep->fullQData(oldp+269,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[6]),64);
        tracep->fullQData(oldp+271,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[7]),64);
        tracep->fullQData(oldp+273,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[8]),64);
        tracep->fullQData(oldp+275,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[9]),64);
        tracep->fullQData(oldp+277,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[10]),64);
        tracep->fullQData(oldp+279,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[11]),64);
        tracep->fullQData(oldp+281,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[12]),64);
        tracep->fullQData(oldp+283,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[13]),64);
        tracep->fullQData(oldp+285,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[14]),64);
        tracep->fullQData(oldp+287,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[15]),64);
        tracep->fullQData(oldp+289,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[16]),64);
        tracep->fullQData(oldp+291,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[17]),64);
        tracep->fullQData(oldp+293,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[18]),64);
        tracep->fullQData(oldp+295,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[19]),64);
        tracep->fullQData(oldp+297,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[20]),64);
        tracep->fullQData(oldp+299,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[21]),64);
        tracep->fullQData(oldp+301,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[22]),64);
        tracep->fullQData(oldp+303,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[23]),64);
        tracep->fullQData(oldp+305,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[24]),64);
        tracep->fullQData(oldp+307,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[25]),64);
        tracep->fullQData(oldp+309,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[26]),64);
        tracep->fullQData(oldp+311,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[27]),64);
        tracep->fullQData(oldp+313,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[28]),64);
        tracep->fullQData(oldp+315,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[29]),64);
        tracep->fullQData(oldp+317,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[30]),64);
        tracep->fullQData(oldp+319,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[31]),64);
        tracep->fullQData(oldp+321,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[0]),64);
        tracep->fullQData(oldp+323,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[1]),64);
        tracep->fullQData(oldp+325,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[2]),64);
        tracep->fullQData(oldp+327,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[3]),64);
        tracep->fullQData(oldp+329,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[4]),64);
        tracep->fullQData(oldp+331,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[5]),64);
        tracep->fullQData(oldp+333,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[6]),64);
        tracep->fullQData(oldp+335,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[7]),64);
        tracep->fullQData(oldp+337,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[8]),64);
        tracep->fullQData(oldp+339,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[9]),64);
        tracep->fullQData(oldp+341,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[10]),64);
        tracep->fullQData(oldp+343,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[11]),64);
        tracep->fullQData(oldp+345,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[12]),64);
        tracep->fullQData(oldp+347,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[13]),64);
        tracep->fullQData(oldp+349,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[14]),64);
        tracep->fullQData(oldp+351,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[15]),64);
        tracep->fullQData(oldp+353,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[16]),64);
        tracep->fullQData(oldp+355,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[17]),64);
        tracep->fullQData(oldp+357,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[18]),64);
        tracep->fullQData(oldp+359,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[19]),64);
        tracep->fullQData(oldp+361,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[20]),64);
        tracep->fullQData(oldp+363,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[21]),64);
        tracep->fullQData(oldp+365,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[22]),64);
        tracep->fullQData(oldp+367,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[23]),64);
        tracep->fullQData(oldp+369,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[24]),64);
        tracep->fullQData(oldp+371,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[25]),64);
        tracep->fullQData(oldp+373,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[26]),64);
        tracep->fullQData(oldp+375,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[27]),64);
        tracep->fullQData(oldp+377,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[28]),64);
        tracep->fullQData(oldp+379,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[29]),64);
        tracep->fullQData(oldp+381,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[30]),64);
        tracep->fullQData(oldp+383,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[31]),64);
        tracep->fullIData(oldp+385,((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata)),32);
        tracep->fullIData(oldp+386,(vlSelf->ysyx_22040175_top__DOT__id_inst),32);
        tracep->fullQData(oldp+387,(vlSelf->ysyx_22040175_top__DOT__id_pc),64);
        tracep->fullBit(oldp+389,(vlSelf->ysyx_22040175_top__DOT__id_ena));
        tracep->fullBit(oldp+390,(vlSelf->ysyx_22040175_top__DOT__id_time_set));
        tracep->fullBit(oldp+391,(vlSelf->ysyx_22040175_top__DOT__id_branch));
        tracep->fullBit(oldp+392,(vlSelf->ysyx_22040175_top__DOT__id_jump));
        tracep->fullBit(oldp+393,(vlSelf->ysyx_22040175_top__DOT__id_reg_wen));
        tracep->fullCData(oldp+394,(vlSelf->ysyx_22040175_top__DOT__id_reg_waddr),5);
        tracep->fullQData(oldp+395,(((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr))
                                      ? 0ULL : vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f
                                     [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr])),64);
        tracep->fullQData(oldp+397,(((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr))
                                      ? 0ULL : vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f
                                     [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr])),64);
        tracep->fullQData(oldp+399,(vlSelf->ysyx_22040175_top__DOT__id_imm),64);
        tracep->fullCData(oldp+401,(vlSelf->ysyx_22040175_top__DOT__id_alu_op),5);
        tracep->fullCData(oldp+402,(vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel),2);
        tracep->fullQData(oldp+403,(vlSelf->ysyx_22040175_top__DOT__id_unknown_code),64);
        tracep->fullBit(oldp+405,(vlSelf->ysyx_22040175_top__DOT__id_jalr));
        tracep->fullBit(oldp+406,(vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag));
        tracep->fullCData(oldp+407,(vlSelf->ysyx_22040175_top__DOT__id_wmask),8);
        tracep->fullBit(oldp+408,(vlSelf->ysyx_22040175_top__DOT__id_s_flag));
        tracep->fullIData(oldp+409,(vlSelf->ysyx_22040175_top__DOT__id_s_imm),32);
        tracep->fullCData(oldp+410,(vlSelf->ysyx_22040175_top__DOT__id_expand_signed),4);
        tracep->fullCData(oldp+411,(vlSelf->ysyx_22040175_top__DOT__id_rd_flag),3);
        tracep->fullCData(oldp+412,(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag),3);
        tracep->fullQData(oldp+413,(vlSelf->ysyx_22040175_top__DOT__ex_pc),64);
        tracep->fullBit(oldp+415,(vlSelf->ysyx_22040175_top__DOT__ex_branch));
        tracep->fullBit(oldp+416,(vlSelf->ysyx_22040175_top__DOT__ex_jump));
        tracep->fullBit(oldp+417,(vlSelf->ysyx_22040175_top__DOT__ex_reg_wen));
        tracep->fullQData(oldp+418,(vlSelf->ysyx_22040175_top__DOT__ex_imm),64);
        tracep->fullCData(oldp+420,(vlSelf->ysyx_22040175_top__DOT__ex_alu_op),5);
        tracep->fullCData(oldp+421,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src_sel),2);
        tracep->fullQData(oldp+422,(vlSelf->ysyx_22040175_top__DOT__ex_unknown_code),64);
        tracep->fullBit(oldp+424,(vlSelf->ysyx_22040175_top__DOT__ex_jalr));
        tracep->fullBit(oldp+425,(vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag));
        tracep->fullCData(oldp+426,(vlSelf->ysyx_22040175_top__DOT__ex_wmask),8);
        tracep->fullBit(oldp+427,(vlSelf->ysyx_22040175_top__DOT__ex_s_flag));
        tracep->fullIData(oldp+428,(vlSelf->ysyx_22040175_top__DOT__ex_s_imm),32);
        tracep->fullCData(oldp+429,(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed),4);
        tracep->fullCData(oldp+430,(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag),3);
        tracep->fullCData(oldp+431,(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag),3);
        tracep->fullQData(oldp+432,(vlSelf->ysyx_22040175_top__DOT__ex_reg2_rdata),64);
        tracep->fullBit(oldp+434,(vlSelf->ysyx_22040175_top__DOT__ex_ena));
        tracep->fullQData(oldp+435,(vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res),64);
        tracep->fullQData(oldp+437,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1),64);
        tracep->fullQData(oldp+439,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2),64);
        tracep->fullQData(oldp+441,((((IData)(vlSelf->ysyx_22040175_top__DOT__ex_branch) 
                                      & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__zero)))
                                      ? (vlSelf->ysyx_22040175_top__DOT__ex_pc 
                                         + vlSelf->ysyx_22040175_top__DOT__ex_imm)
                                      : (((IData)(vlSelf->ysyx_22040175_top__DOT__ex_jump) 
                                          & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_jalr)))
                                          ? (vlSelf->ysyx_22040175_top__DOT__ex_pc 
                                             + vlSelf->ysyx_22040175_top__DOT__ex_imm)
                                          : (((IData)(vlSelf->ysyx_22040175_top__DOT__ex_jump) 
                                              & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_jalr))
                                              ? (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f
                                                 [(0x1fU 
                                                   & vlSelf->ysyx_22040175_top__DOT__ex_s_imm)] 
                                                 + vlSelf->ysyx_22040175_top__DOT__ex_imm)
                                              : ((IData)(vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag)
                                                  ? 0x80000000ULL
                                                  : 
                                                 (4ULL 
                                                  + vlSelf->ysyx_22040175_top__DOT__ex_pc)))))),64);
        tracep->fullBit(oldp+443,(vlSelf->ysyx_22040175_top__DOT__mem_reg_wen));
        tracep->fullCData(oldp+444,(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr),5);
        tracep->fullBit(oldp+445,(vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag));
        tracep->fullCData(oldp+446,(vlSelf->ysyx_22040175_top__DOT__mem_wmask),8);
        tracep->fullBit(oldp+447,(vlSelf->ysyx_22040175_top__DOT__mem_s_flag));
        tracep->fullBit(oldp+448,(vlSelf->ysyx_22040175_top__DOT__mem_time_set));
        tracep->fullIData(oldp+449,(vlSelf->ysyx_22040175_top__DOT__mem_s_imm),32);
        tracep->fullCData(oldp+450,(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed),4);
        tracep->fullCData(oldp+451,(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag),3);
        tracep->fullCData(oldp+452,(vlSelf->ysyx_22040175_top__DOT__mem_alu_op),5);
        tracep->fullQData(oldp+453,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src1),64);
        tracep->fullQData(oldp+455,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src2),64);
        tracep->fullQData(oldp+457,(vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res),64);
        tracep->fullQData(oldp+459,(vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res),64);
        tracep->fullBit(oldp+461,(vlSelf->ysyx_22040175_top__DOT__wb_reg_wen));
        tracep->fullCData(oldp+462,(vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr),5);
        tracep->fullCData(oldp+463,(vlSelf->ysyx_22040175_top__DOT__wb_wmask),8);
        tracep->fullBit(oldp+464,(vlSelf->ysyx_22040175_top__DOT__wb_s_flag));
        tracep->fullBit(oldp+465,(vlSelf->ysyx_22040175_top__DOT__wb_time_set));
        tracep->fullIData(oldp+466,(vlSelf->ysyx_22040175_top__DOT__wb_s_imm),32);
        tracep->fullCData(oldp+467,(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed),4);
        tracep->fullBit(oldp+468,(vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag));
        tracep->fullCData(oldp+469,(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag),3);
        tracep->fullQData(oldp+470,(vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res),64);
        tracep->fullQData(oldp+472,(vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res),64);
        tracep->fullQData(oldp+474,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0]),64);
        tracep->fullQData(oldp+476,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[1]),64);
        tracep->fullQData(oldp+478,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[2]),64);
        tracep->fullQData(oldp+480,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[3]),64);
        tracep->fullQData(oldp+482,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[4]),64);
        tracep->fullQData(oldp+484,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[5]),64);
        tracep->fullQData(oldp+486,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[6]),64);
        tracep->fullQData(oldp+488,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[7]),64);
        tracep->fullQData(oldp+490,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[8]),64);
        tracep->fullQData(oldp+492,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[9]),64);
        tracep->fullQData(oldp+494,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[10]),64);
        tracep->fullQData(oldp+496,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[11]),64);
        tracep->fullQData(oldp+498,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[12]),64);
        tracep->fullQData(oldp+500,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[13]),64);
        tracep->fullQData(oldp+502,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[14]),64);
        tracep->fullQData(oldp+504,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[15]),64);
        tracep->fullQData(oldp+506,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[16]),64);
        tracep->fullQData(oldp+508,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[17]),64);
        tracep->fullQData(oldp+510,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[18]),64);
        tracep->fullQData(oldp+512,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[19]),64);
        tracep->fullQData(oldp+514,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[20]),64);
        tracep->fullQData(oldp+516,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[21]),64);
        tracep->fullQData(oldp+518,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[22]),64);
        tracep->fullQData(oldp+520,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[23]),64);
        tracep->fullQData(oldp+522,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[24]),64);
        tracep->fullQData(oldp+524,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[25]),64);
        tracep->fullQData(oldp+526,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[26]),64);
        tracep->fullQData(oldp+528,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[27]),64);
        tracep->fullQData(oldp+530,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[28]),64);
        tracep->fullQData(oldp+532,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[29]),64);
        tracep->fullQData(oldp+534,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[30]),64);
        tracep->fullQData(oldp+536,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[31]),64);
        tracep->fullBit(oldp+538,(vlSelf->ysyx_22040175_top__DOT__ena));
        tracep->fullBit(oldp+539,((1U & (IData)(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_waddr_id_ex_o))));
        tracep->fullQData(oldp+540,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__curr_pc),64);
        tracep->fullQData(oldp+542,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata),64);
        tracep->fullQData(oldp+544,((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))),64);
        tracep->fullCData(oldp+546,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op),3);
        tracep->fullCData(oldp+547,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr),5);
        tracep->fullCData(oldp+548,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr),5);
        tracep->fullCData(oldp+549,((0x7fU & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))),7);
        tracep->fullCData(oldp+550,((7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))),3);
        tracep->fullCData(oldp+551,((0x7fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x19U)))),7);
        tracep->fullCData(oldp+552,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 7U)))),5);
        tracep->fullCData(oldp+553,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xfU)))),5);
        tracep->fullCData(oldp+554,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x14U)))),5);
        tracep->fullCData(oldp+555,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_waddr_id_ex_o),5);
        tracep->fullBit(oldp+556,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__zero));
        tracep->fullQData(oldp+557,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1),64);
        tracep->fullQData(oldp+559,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2),64);
        tracep->fullQData(oldp+561,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw),64);
        tracep->fullQData(oldp+563,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[0]),64);
        tracep->fullQData(oldp+565,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[1]),64);
        tracep->fullQData(oldp+567,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[2]),64);
        tracep->fullQData(oldp+569,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[3]),64);
        tracep->fullQData(oldp+571,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[4]),64);
        tracep->fullQData(oldp+573,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[5]),64);
        tracep->fullQData(oldp+575,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[6]),64);
        tracep->fullQData(oldp+577,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[7]),64);
        tracep->fullQData(oldp+579,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[8]),64);
        tracep->fullQData(oldp+581,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[9]),64);
        tracep->fullQData(oldp+583,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[10]),64);
        tracep->fullQData(oldp+585,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[11]),64);
        tracep->fullQData(oldp+587,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[12]),64);
        tracep->fullQData(oldp+589,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[13]),64);
        tracep->fullQData(oldp+591,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[14]),64);
        tracep->fullQData(oldp+593,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[15]),64);
        tracep->fullQData(oldp+595,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[16]),64);
        tracep->fullQData(oldp+597,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[17]),64);
        tracep->fullQData(oldp+599,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[18]),64);
        tracep->fullQData(oldp+601,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[19]),64);
        tracep->fullQData(oldp+603,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[20]),64);
        tracep->fullQData(oldp+605,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[21]),64);
        tracep->fullQData(oldp+607,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[22]),64);
        tracep->fullQData(oldp+609,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[23]),64);
        tracep->fullQData(oldp+611,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[24]),64);
        tracep->fullQData(oldp+613,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[25]),64);
        tracep->fullQData(oldp+615,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[26]),64);
        tracep->fullQData(oldp+617,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[27]),64);
        tracep->fullQData(oldp+619,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[28]),64);
        tracep->fullQData(oldp+621,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[29]),64);
        tracep->fullQData(oldp+623,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[30]),64);
        tracep->fullQData(oldp+625,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[31]),64);
        tracep->fullQData(oldp+627,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata),64);
        tracep->fullBit(oldp+629,(vlSelf->clk));
        tracep->fullBit(oldp+630,(vlSelf->rst));
        tracep->fullIData(oldp+631,(vlSelf->inst),32);
        tracep->fullIData(oldp+632,(vlSelf->pc),32);
        tracep->fullQData(oldp+633,(vlSelf->unknown_code),64);
        tracep->fullBit(oldp+635,(vlSelf->time_set));
        tracep->fullBit(oldp+636,(vlSelf->ysyx_22040175_top__DOT__rst_n));
        tracep->fullQData(oldp+637,(vlSelf->ysyx_22040175_top__DOT__next_pc),64);
        tracep->fullBit(oldp+639,(vlSelf->ysyx_22040175_top__DOT__if_ena));
        tracep->fullQData(oldp+640,(vlSelf->ysyx_22040175_top__DOT__if_pc),64);
        tracep->fullQData(oldp+642,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[0]),64);
        tracep->fullQData(oldp+644,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[1]),64);
        tracep->fullQData(oldp+646,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[2]),64);
        tracep->fullQData(oldp+648,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[3]),64);
        tracep->fullQData(oldp+650,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[4]),64);
        tracep->fullQData(oldp+652,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[5]),64);
        tracep->fullQData(oldp+654,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[6]),64);
        tracep->fullQData(oldp+656,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[7]),64);
        tracep->fullQData(oldp+658,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[8]),64);
        tracep->fullQData(oldp+660,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[9]),64);
        tracep->fullQData(oldp+662,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[10]),64);
        tracep->fullQData(oldp+664,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[11]),64);
        tracep->fullQData(oldp+666,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[12]),64);
        tracep->fullQData(oldp+668,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[13]),64);
        tracep->fullQData(oldp+670,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[14]),64);
        tracep->fullQData(oldp+672,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[15]),64);
        tracep->fullQData(oldp+674,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[16]),64);
        tracep->fullQData(oldp+676,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[17]),64);
        tracep->fullQData(oldp+678,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[18]),64);
        tracep->fullQData(oldp+680,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[19]),64);
        tracep->fullQData(oldp+682,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[20]),64);
        tracep->fullQData(oldp+684,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[21]),64);
        tracep->fullQData(oldp+686,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[22]),64);
        tracep->fullQData(oldp+688,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[23]),64);
        tracep->fullQData(oldp+690,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[24]),64);
        tracep->fullQData(oldp+692,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[25]),64);
        tracep->fullQData(oldp+694,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[26]),64);
        tracep->fullQData(oldp+696,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[27]),64);
        tracep->fullQData(oldp+698,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[28]),64);
        tracep->fullQData(oldp+700,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[29]),64);
        tracep->fullQData(oldp+702,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[30]),64);
        tracep->fullQData(oldp+704,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[31]),64);
        tracep->fullCData(oldp+706,(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr),5);
        tracep->fullQData(oldp+707,(vlSelf->ysyx_22040175_top__DOT__ex_reg1_rdata),64);
        tracep->fullBit(oldp+709,(vlSelf->ysyx_22040175_top__DOT__ex_time_set));
        tracep->fullBit(oldp+710,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__clk));
        tracep->fullBit(oldp+711,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__rst_n));
        tracep->fullQData(oldp+712,(vlSelf->ysyx_22040175_top__DOT__u_id_ex_regs__DOT__reg_wdata_id_ex_i),64);
        tracep->fullQData(oldp+714,(vlSelf->ysyx_22040175_top__DOT__u_id_ex_regs__DOT__reg_wdata_id_ex_o),64);
        tracep->fullQData(oldp+716,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[0]),64);
        tracep->fullQData(oldp+718,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[1]),64);
        tracep->fullQData(oldp+720,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[2]),64);
        tracep->fullQData(oldp+722,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[3]),64);
        tracep->fullQData(oldp+724,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[4]),64);
        tracep->fullQData(oldp+726,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[5]),64);
        tracep->fullQData(oldp+728,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[6]),64);
        tracep->fullQData(oldp+730,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[7]),64);
        tracep->fullQData(oldp+732,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[8]),64);
        tracep->fullQData(oldp+734,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[9]),64);
        tracep->fullQData(oldp+736,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[10]),64);
        tracep->fullQData(oldp+738,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[11]),64);
        tracep->fullQData(oldp+740,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[12]),64);
        tracep->fullQData(oldp+742,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[13]),64);
        tracep->fullQData(oldp+744,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[14]),64);
        tracep->fullQData(oldp+746,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[15]),64);
        tracep->fullQData(oldp+748,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[16]),64);
        tracep->fullQData(oldp+750,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[17]),64);
        tracep->fullQData(oldp+752,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[18]),64);
        tracep->fullQData(oldp+754,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[19]),64);
        tracep->fullQData(oldp+756,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[20]),64);
        tracep->fullQData(oldp+758,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[21]),64);
        tracep->fullQData(oldp+760,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[22]),64);
        tracep->fullQData(oldp+762,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[23]),64);
        tracep->fullQData(oldp+764,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[24]),64);
        tracep->fullQData(oldp+766,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[25]),64);
        tracep->fullQData(oldp+768,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[26]),64);
        tracep->fullQData(oldp+770,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[27]),64);
        tracep->fullQData(oldp+772,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[28]),64);
        tracep->fullQData(oldp+774,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[29]),64);
        tracep->fullQData(oldp+776,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[30]),64);
        tracep->fullQData(oldp+778,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_f_id_ex_o[31]),64);
        tracep->fullBit(oldp+780,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__alu_src_sel));
        tracep->fullCData(oldp+781,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__alu_src_sel),2);
        tracep->fullQData(oldp+782,(vlSelf->ysyx_22040175_top__DOT__u_mem_wb_regs__DOT__reg_wdata_mem_wb_o),64);
    }
}
