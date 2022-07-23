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
        tracep->declBit(c+451,"clk", false,-1);
        tracep->declBit(c+452,"rst", false,-1);
        tracep->declBus(c+453,"inst", false,-1, 31,0);
        tracep->declBus(c+454,"pc", false,-1, 31,0);
        tracep->declQuad(c+455,"unknown_code", false,-1, 63,0);
        tracep->declBit(c+457,"time_set", false,-1);
        tracep->declBus(c+458,"diff_pc", false,-1, 31,0);
        tracep->declBus(c+459,"diff_mem_pc", false,-1, 31,0);
        tracep->declBit(c+451,"ysyx_22040175_top clk", false,-1);
        tracep->declBit(c+452,"ysyx_22040175_top rst", false,-1);
        tracep->declBus(c+453,"ysyx_22040175_top inst", false,-1, 31,0);
        tracep->declBus(c+454,"ysyx_22040175_top pc", false,-1, 31,0);
        tracep->declQuad(c+455,"ysyx_22040175_top unknown_code", false,-1, 63,0);
        tracep->declBit(c+457,"ysyx_22040175_top time_set", false,-1);
        tracep->declBus(c+458,"ysyx_22040175_top diff_pc", false,-1, 31,0);
        tracep->declBus(c+459,"ysyx_22040175_top diff_mem_pc", false,-1, 31,0);
        tracep->declBit(c+460,"ysyx_22040175_top rst_n", false,-1);
        tracep->declQuad(c+1,"ysyx_22040175_top id_next_pc", false,-1, 63,0);
        tracep->declBit(c+3,"ysyx_22040175_top if_ena", false,-1);
        tracep->declBus(c+4,"ysyx_22040175_top if_inst", false,-1, 31,0);
        tracep->declQuad(c+5,"ysyx_22040175_top if_pc", false,-1, 63,0);
        tracep->declBit(c+7,"ysyx_22040175_top rest_id_mem", false,-1);
        tracep->declBus(c+8,"ysyx_22040175_top id_inst", false,-1, 31,0);
        tracep->declQuad(c+9,"ysyx_22040175_top id_pc", false,-1, 63,0);
        tracep->declBit(c+11,"ysyx_22040175_top id_ena", false,-1);
        tracep->declBit(c+12,"ysyx_22040175_top id_time_set", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+461+i*2,"ysyx_22040175_top to_id_reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+525,"ysyx_22040175_top id_branch", false,-1);
        tracep->declBit(c+526,"ysyx_22040175_top id_jump", false,-1);
        tracep->declBit(c+13,"ysyx_22040175_top id_reg_wen", false,-1);
        tracep->declBus(c+14,"ysyx_22040175_top id_reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+15,"ysyx_22040175_top id_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22040175_top id_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22040175_top id_imm", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22040175_top id_alu_op", false,-1, 4,0);
        tracep->declBus(c+22,"ysyx_22040175_top id_alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+23,"ysyx_22040175_top id_unknown_code", false,-1, 63,0);
        tracep->declBit(c+25,"ysyx_22040175_top id_jalr", false,-1);
        tracep->declBit(c+26,"ysyx_22040175_top id_ebreak_flag", false,-1);
        tracep->declBus(c+27,"ysyx_22040175_top id_wmask", false,-1, 7,0);
        tracep->declBit(c+28,"ysyx_22040175_top id_s_flag", false,-1);
        tracep->declBus(c+29,"ysyx_22040175_top id_s_imm", false,-1, 31,0);
        tracep->declBus(c+30,"ysyx_22040175_top id_expand_signed", false,-1, 3,0);
        tracep->declBus(c+31,"ysyx_22040175_top id_rd_flag", false,-1, 2,0);
        tracep->declBus(c+32,"ysyx_22040175_top id_rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+33,"ysyx_22040175_top rest_from_id", false,-1);
        tracep->declBit(c+34,"ysyx_22040175_top id_control_rest", false,-1);
        tracep->declQuad(c+35,"ysyx_22040175_top ex_pc", false,-1, 63,0);
        tracep->declBit(c+527,"ysyx_22040175_top ex_branch", false,-1);
        tracep->declBit(c+528,"ysyx_22040175_top ex_jump", false,-1);
        tracep->declBit(c+37,"ysyx_22040175_top ex_reg_wen", false,-1);
        tracep->declBus(c+38,"ysyx_22040175_top ex_reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+529,"ysyx_22040175_top ex_imm", false,-1, 63,0);
        tracep->declBus(c+39,"ysyx_22040175_top ex_alu_op", false,-1, 4,0);
        tracep->declBus(c+531,"ysyx_22040175_top ex_alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+40,"ysyx_22040175_top ex_unknown_code", false,-1, 63,0);
        tracep->declBit(c+532,"ysyx_22040175_top ex_jalr", false,-1);
        tracep->declBit(c+42,"ysyx_22040175_top ex_ebreak_flag", false,-1);
        tracep->declBus(c+43,"ysyx_22040175_top ex_wmask", false,-1, 7,0);
        tracep->declBit(c+44,"ysyx_22040175_top ex_s_flag", false,-1);
        tracep->declBus(c+45,"ysyx_22040175_top ex_s_imm", false,-1, 31,0);
        tracep->declBus(c+46,"ysyx_22040175_top ex_expand_signed", false,-1, 3,0);
        tracep->declBus(c+533,"ysyx_22040175_top ex_rd_flag", false,-1, 2,0);
        tracep->declBus(c+47,"ysyx_22040175_top ex_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+534,"ysyx_22040175_top ex_reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+536,"ysyx_22040175_top ex_reg2_rdata", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+538+i*2,"ysyx_22040175_top to_ex_reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+48,"ysyx_22040175_top ex_ena", false,-1);
        tracep->declBit(c+602,"ysyx_22040175_top ex_time_set", false,-1);
        tracep->declBit(c+603,"ysyx_22040175_top id_rest_no_use", false,-1);
        tracep->declBit(c+49,"ysyx_22040175_top ex_rest_id_mem", false,-1);
        tracep->declQuad(c+50,"ysyx_22040175_top from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+52,"ysyx_22040175_top ex_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22040175_top ex_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+604,"ysyx_22040175_top ex_next_pc", false,-1, 63,0);
        tracep->declBit(c+606,"ysyx_22040175_top write_ready", false,-1);
        tracep->declBit(c+607,"ysyx_22040175_top ex_pc_ready", false,-1);
        tracep->declBit(c+56,"ysyx_22040175_top mem_reg_wen", false,-1);
        tracep->declBus(c+57,"ysyx_22040175_top mem_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+58,"ysyx_22040175_top mem_ebreak_flag", false,-1);
        tracep->declBus(c+59,"ysyx_22040175_top mem_wmask", false,-1, 7,0);
        tracep->declBit(c+60,"ysyx_22040175_top mem_s_flag", false,-1);
        tracep->declBit(c+61,"ysyx_22040175_top mem_time_set", false,-1);
        tracep->declBus(c+62,"ysyx_22040175_top mem_s_imm", false,-1, 31,0);
        tracep->declBus(c+63,"ysyx_22040175_top mem_expand_signed", false,-1, 3,0);
        tracep->declBus(c+64,"ysyx_22040175_top mem_rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+65,"ysyx_22040175_top mem_alu_op", false,-1, 4,0);
        tracep->declQuad(c+66,"ysyx_22040175_top mem_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+68,"ysyx_22040175_top mem_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+70,"ysyx_22040175_top mem_from_ex_alu_res", false,-1, 63,0);
        tracep->declBit(c+608,"ysyx_22040175_top mem_pc_ready", false,-1);
        tracep->declQuad(c+72,"ysyx_22040175_top mem_pc", false,-1, 63,0);
        tracep->declBit(c+609,"ysyx_22040175_top fr_ex_no_use", false,-1);
        tracep->declQuad(c+74,"ysyx_22040175_top from_mem_alu_res", false,-1, 63,0);
        tracep->declBit(c+76,"ysyx_22040175_top wb_reg_wen", false,-1);
        tracep->declBus(c+77,"ysyx_22040175_top wb_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+78,"ysyx_22040175_top wb_wmask", false,-1, 7,0);
        tracep->declBit(c+79,"ysyx_22040175_top wb_s_flag", false,-1);
        tracep->declBit(c+80,"ysyx_22040175_top wb_time_set", false,-1);
        tracep->declBus(c+81,"ysyx_22040175_top wb_s_imm", false,-1, 31,0);
        tracep->declBus(c+82,"ysyx_22040175_top wb_expand_signed", false,-1, 3,0);
        tracep->declBit(c+83,"ysyx_22040175_top wb_ebreak_flag", false,-1);
        tracep->declBus(c+84,"ysyx_22040175_top wb_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+85,"ysyx_22040175_top wb_from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22040175_top wb_from_mem_alu_res", false,-1, 63,0);
        tracep->declBit(c+610,"ysyx_22040175_top wb_pc_ready", false,-1);
        tracep->declQuad(c+89,"ysyx_22040175_top wb_pc", false,-1, 63,0);
        tracep->declBit(c+91,"ysyx_22040175_top mem_rest_id_mem", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+92+i*2,"ysyx_22040175_top from_wb_reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+611,"ysyx_22040175_top control_rest", false,-1);
        tracep->declBit(c+451,"ysyx_22040175_top u_if_stage clk", false,-1);
        tracep->declBit(c+460,"ysyx_22040175_top u_if_stage rst_n", false,-1);
        tracep->declQuad(c+1,"ysyx_22040175_top u_if_stage id_next_pc", false,-1, 63,0);
        tracep->declBit(c+3,"ysyx_22040175_top u_if_stage ena", false,-1);
        tracep->declBus(c+4,"ysyx_22040175_top u_if_stage inst", false,-1, 31,0);
        tracep->declQuad(c+5,"ysyx_22040175_top u_if_stage curr_pc", false,-1, 63,0);
        tracep->declBit(c+611,"ysyx_22040175_top u_if_stage control_rest", false,-1);
        tracep->declBit(c+7,"ysyx_22040175_top u_if_stage rest_id_mem", false,-1);
        tracep->declQuad(c+156,"ysyx_22040175_top u_if_stage rdata", false,-1, 63,0);
        tracep->declBit(c+451,"ysyx_22040175_top u_if_stage u_pc_predict clk", false,-1);
        tracep->declBit(c+460,"ysyx_22040175_top u_if_stage u_pc_predict rst_n", false,-1);
        tracep->declBit(c+611,"ysyx_22040175_top u_if_stage u_pc_predict control_rest", false,-1);
        tracep->declQuad(c+1,"ysyx_22040175_top u_if_stage u_pc_predict id_next_pc", false,-1, 63,0);
        tracep->declBit(c+3,"ysyx_22040175_top u_if_stage u_pc_predict ena", false,-1);
        tracep->declQuad(c+5,"ysyx_22040175_top u_if_stage u_pc_predict curr_pc", false,-1, 63,0);
        tracep->declBit(c+7,"ysyx_22040175_top u_if_stage u_pc_predict rest_id_mem", false,-1);
        tracep->declBit(c+451,"ysyx_22040175_top u_if_id_regs clk", false,-1);
        tracep->declBit(c+460,"ysyx_22040175_top u_if_id_regs rst_n", false,-1);
        tracep->declQuad(c+5,"ysyx_22040175_top u_if_id_regs pc_if_id_i", false,-1, 63,0);
        tracep->declBus(c+4,"ysyx_22040175_top u_if_id_regs instr_if_id_i", false,-1, 31,0);
        tracep->declBit(c+3,"ysyx_22040175_top u_if_id_regs ena_if_id_i", false,-1);
        tracep->declBit(c+457,"ysyx_22040175_top u_if_id_regs time_set_if_id_i", false,-1);
        tracep->declQuad(c+9,"ysyx_22040175_top u_if_id_regs pc_if_id_o", false,-1, 63,0);
        tracep->declBus(c+8,"ysyx_22040175_top u_if_id_regs instr_if_id_o", false,-1, 31,0);
        tracep->declBit(c+11,"ysyx_22040175_top u_if_id_regs ena_if_id_o", false,-1);
        tracep->declBit(c+12,"ysyx_22040175_top u_if_id_regs time_set_if_id_o", false,-1);
        tracep->declBit(c+451,"ysyx_22040175_top u_id_stage clk", false,-1);
        tracep->declBit(c+460,"ysyx_22040175_top u_id_stage rst_n", false,-1);
        tracep->declQuad(c+9,"ysyx_22040175_top u_id_stage id_pc", false,-1, 63,0);
        tracep->declQuad(c+1,"ysyx_22040175_top u_id_stage next_pc", false,-1, 63,0);
        tracep->declQuad(c+158,"ysyx_22040175_top u_id_stage inst", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+160+i*2,"ysyx_22040175_top u_id_stage reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+38,"ysyx_22040175_top u_id_stage ex_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+33,"ysyx_22040175_top u_id_stage rest_from_id", false,-1);
        tracep->declBit(c+224,"ysyx_22040175_top u_id_stage branch", false,-1);
        tracep->declBit(c+225,"ysyx_22040175_top u_id_stage jump", false,-1);
        tracep->declBit(c+13,"ysyx_22040175_top u_id_stage reg_wen", false,-1);
        tracep->declBus(c+14,"ysyx_22040175_top u_id_stage reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+226,"ysyx_22040175_top u_id_stage reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+228,"ysyx_22040175_top u_id_stage reg2_rdata", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22040175_top u_id_stage imm", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22040175_top u_id_stage alu_op", false,-1, 4,0);
        tracep->declBus(c+22,"ysyx_22040175_top u_id_stage alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+23,"ysyx_22040175_top u_id_stage unknown_code", false,-1, 63,0);
        tracep->declBit(c+25,"ysyx_22040175_top u_id_stage jalr", false,-1);
        tracep->declBit(c+26,"ysyx_22040175_top u_id_stage ebreak_flag", false,-1);
        tracep->declBus(c+27,"ysyx_22040175_top u_id_stage wmask", false,-1, 7,0);
        tracep->declBit(c+28,"ysyx_22040175_top u_id_stage s_flag", false,-1);
        tracep->declBus(c+29,"ysyx_22040175_top u_id_stage s_imm", false,-1, 31,0);
        tracep->declBus(c+30,"ysyx_22040175_top u_id_stage expand_signed", false,-1, 3,0);
        tracep->declBus(c+31,"ysyx_22040175_top u_id_stage rd_flag", false,-1, 2,0);
        tracep->declBus(c+32,"ysyx_22040175_top u_id_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+34,"ysyx_22040175_top u_id_stage control_rest", false,-1);
        tracep->declQuad(c+50,"ysyx_22040175_top u_id_stage from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+74,"ysyx_22040175_top u_id_stage from_mem_alu_res", false,-1, 63,0);
        tracep->declBus(c+47,"ysyx_22040175_top u_id_stage ex_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+15,"ysyx_22040175_top u_id_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22040175_top u_id_stage alu_src2", false,-1, 63,0);
        tracep->declBit(c+7,"ysyx_22040175_top u_id_stage rest_id_mem", false,-1);
        tracep->declBus(c+230,"ysyx_22040175_top u_id_stage imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+231,"ysyx_22040175_top u_id_stage reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+232,"ysyx_22040175_top u_id_stage reg2_raddr", false,-1, 4,0);
        tracep->declBit(c+612,"ysyx_22040175_top u_id_stage write_ready", false,-1);
        tracep->declBit(c+613,"ysyx_22040175_top u_id_stage no_use", false,-1);
        tracep->declBit(c+614,"ysyx_22040175_top u_id_stage ena", false,-1);
        tracep->declQuad(c+158,"ysyx_22040175_top u_id_stage u_ctrl inst", false,-1, 63,0);
        tracep->declBit(c+224,"ysyx_22040175_top u_id_stage u_ctrl branch", false,-1);
        tracep->declBit(c+225,"ysyx_22040175_top u_id_stage u_ctrl jump", false,-1);
        tracep->declBit(c+13,"ysyx_22040175_top u_id_stage u_ctrl reg_wen", false,-1);
        tracep->declBus(c+14,"ysyx_22040175_top u_id_stage u_ctrl reg_waddr", false,-1, 4,0);
        tracep->declBus(c+231,"ysyx_22040175_top u_id_stage u_ctrl reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+232,"ysyx_22040175_top u_id_stage u_ctrl reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+230,"ysyx_22040175_top u_id_stage u_ctrl imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+21,"ysyx_22040175_top u_id_stage u_ctrl alu_op", false,-1, 4,0);
        tracep->declBus(c+22,"ysyx_22040175_top u_id_stage u_ctrl alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+23,"ysyx_22040175_top u_id_stage u_ctrl unknown_code", false,-1, 63,0);
        tracep->declBit(c+25,"ysyx_22040175_top u_id_stage u_ctrl jalr", false,-1);
        tracep->declBit(c+26,"ysyx_22040175_top u_id_stage u_ctrl ebreak_flag", false,-1);
        tracep->declBus(c+27,"ysyx_22040175_top u_id_stage u_ctrl wmask", false,-1, 7,0);
        tracep->declBit(c+28,"ysyx_22040175_top u_id_stage u_ctrl s_flag", false,-1);
        tracep->declBus(c+29,"ysyx_22040175_top u_id_stage u_ctrl s_imm", false,-1, 31,0);
        tracep->declBus(c+30,"ysyx_22040175_top u_id_stage u_ctrl expand_signed", false,-1, 3,0);
        tracep->declBus(c+31,"ysyx_22040175_top u_id_stage u_ctrl rd_flag", false,-1, 2,0);
        tracep->declBus(c+32,"ysyx_22040175_top u_id_stage u_ctrl rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+233,"ysyx_22040175_top u_id_stage u_ctrl opcode", false,-1, 6,0);
        tracep->declBus(c+234,"ysyx_22040175_top u_id_stage u_ctrl funct3", false,-1, 2,0);
        tracep->declBus(c+235,"ysyx_22040175_top u_id_stage u_ctrl funct7", false,-1, 6,0);
        tracep->declBus(c+236,"ysyx_22040175_top u_id_stage u_ctrl rd", false,-1, 4,0);
        tracep->declBus(c+237,"ysyx_22040175_top u_id_stage u_ctrl rs1", false,-1, 4,0);
        tracep->declBus(c+238,"ysyx_22040175_top u_id_stage u_ctrl rs2", false,-1, 4,0);
        tracep->declQuad(c+158,"ysyx_22040175_top u_id_stage u_imm_gen inst", false,-1, 63,0);
        tracep->declBus(c+230,"ysyx_22040175_top u_id_stage u_imm_gen imm_gen_op", false,-1, 2,0);
        tracep->declQuad(c+19,"ysyx_22040175_top u_id_stage u_imm_gen imm", false,-1, 63,0);
        tracep->declBit(c+451,"ysyx_22040175_top u_id_stage u_id_rest clk", false,-1);
        tracep->declBit(c+460,"ysyx_22040175_top u_id_stage u_id_rest rst_n", false,-1);
        tracep->declArray(c+239,"ysyx_22040175_top u_id_stage u_id_rest id_pc", false,-1, 64,0);
        tracep->declBus(c+231,"ysyx_22040175_top u_id_stage u_id_rest reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+232,"ysyx_22040175_top u_id_stage u_id_rest reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+38,"ysyx_22040175_top u_id_stage u_id_rest reg_waddr", false,-1, 4,0);
        tracep->declBit(c+612,"ysyx_22040175_top u_id_stage u_id_rest write_ready", false,-1);
        tracep->declBus(c+47,"ysyx_22040175_top u_id_stage u_id_rest rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+33,"ysyx_22040175_top u_id_stage u_id_rest rest_from_id", false,-1);
        tracep->declQuad(c+158,"ysyx_22040175_top u_id_stage u_id_rest inst", false,-1, 63,0);
        tracep->declQuad(c+615,"ysyx_22040175_top u_id_stage u_id_rest from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+617,"ysyx_22040175_top u_id_stage u_id_rest from_mem_alu_res", false,-1, 63,0);
        tracep->declBit(c+7,"ysyx_22040175_top u_id_stage u_id_rest rest_id_mem", false,-1);
        tracep->declBit(c+451,"ysyx_22040175_top u_id_stage u_id_control_rest clk", false,-1);
        tracep->declBit(c+460,"ysyx_22040175_top u_id_stage u_id_control_rest rst_n", false,-1);
        tracep->declBit(c+224,"ysyx_22040175_top u_id_stage u_id_control_rest branch", false,-1);
        tracep->declBit(c+225,"ysyx_22040175_top u_id_stage u_id_control_rest jump", false,-1);
        tracep->declBit(c+34,"ysyx_22040175_top u_id_stage u_id_control_rest control_rest", false,-1);
        tracep->declBit(c+33,"ysyx_22040175_top u_id_stage u_id_control_rest rest_from_id", false,-1);
        tracep->declBit(c+451,"ysyx_22040175_top u_id_stage u_mux_dt_pipe clk", false,-1);
        tracep->declBit(c+460,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rst_n", false,-1);
        tracep->declBus(c+231,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+232,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+38,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg_waddr", false,-1, 4,0);
        tracep->declBus(c+47,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+226,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+228,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg2_rdata", false,-1, 63,0);
        tracep->declQuad(c+50,"ysyx_22040175_top u_id_stage u_mux_dt_pipe from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+74,"ysyx_22040175_top u_id_stage u_mux_dt_pipe from_mem_alu_res", false,-1, 63,0);
        tracep->declBit(c+34,"ysyx_22040175_top u_id_stage u_mux_dt_pipe control_rest", false,-1);
        tracep->declBit(c+33,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rest_from_id", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+242+i*2,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+306,"ysyx_22040175_top u_id_stage u_mux_dt_pipe test", false,-1, 2,0);
        tracep->declBus(c+22,"ysyx_22040175_top u_id_stage u_mux_alu alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+226,"ysyx_22040175_top u_id_stage u_mux_alu reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+228,"ysyx_22040175_top u_id_stage u_mux_alu reg2_rdata", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22040175_top u_id_stage u_mux_alu imm", false,-1, 63,0);
        tracep->declQuad(c+9,"ysyx_22040175_top u_id_stage u_mux_alu curr_pc", false,-1, 63,0);
        tracep->declBit(c+613,"ysyx_22040175_top u_id_stage u_mux_alu no_use", false,-1);
        tracep->declQuad(c+15,"ysyx_22040175_top u_id_stage u_mux_alu alu_src1", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22040175_top u_id_stage u_mux_alu alu_src2", false,-1, 63,0);
        tracep->declBit(c+614,"ysyx_22040175_top u_id_stage u_mux_pc ena", false,-1);
        tracep->declBit(c+224,"ysyx_22040175_top u_id_stage u_mux_pc branch", false,-1);
        tracep->declBit(c+225,"ysyx_22040175_top u_id_stage u_mux_pc jump", false,-1);
        tracep->declBit(c+25,"ysyx_22040175_top u_id_stage u_mux_pc jalr", false,-1);
        tracep->declQuad(c+19,"ysyx_22040175_top u_id_stage u_mux_pc imm", false,-1, 63,0);
        tracep->declQuad(c+9,"ysyx_22040175_top u_id_stage u_mux_pc curr_pc", false,-1, 63,0);
        tracep->declQuad(c+1,"ysyx_22040175_top u_id_stage u_mux_pc next_pc", false,-1, 63,0);
        tracep->declBit(c+26,"ysyx_22040175_top u_id_stage u_mux_pc ebreak_flag", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+307+i*2,"ysyx_22040175_top u_id_stage u_mux_pc reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+29,"ysyx_22040175_top u_id_stage u_mux_pc s_imm", false,-1, 31,0);
        tracep->declBus(c+619,"ysyx_22040175_top u_id_stage u_mux_pc alu_op", false,-1, 4,0);
        tracep->declQuad(c+15,"ysyx_22040175_top u_id_stage u_mux_pc alu_src1", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22040175_top u_id_stage u_mux_pc alu_src2", false,-1, 63,0);
        tracep->declBit(c+371,"ysyx_22040175_top u_id_stage u_mux_pc zero", false,-1);
        tracep->declQuad(c+372,"ysyx_22040175_top u_id_stage u_mux_pc signed_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+374,"ysyx_22040175_top u_id_stage u_mux_pc signed_alu_src2", false,-1, 63,0);
        tracep->declBit(c+451,"ysyx_22040175_top u_id_ex_regs clk", false,-1);
        tracep->declBit(c+460,"ysyx_22040175_top u_id_ex_regs rst_n", false,-1);
        tracep->declQuad(c+9,"ysyx_22040175_top u_id_ex_regs pc_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22040175_top u_id_ex_regs pc_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+13,"ysyx_22040175_top u_id_ex_regs reg_wen_id_ex_i", false,-1);
        tracep->declBus(c+14,"ysyx_22040175_top u_id_ex_regs reg_waddr_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+21,"ysyx_22040175_top u_id_ex_regs alu_op_id_ex_i", false,-1, 4,0);
        tracep->declQuad(c+23,"ysyx_22040175_top u_id_ex_regs unknown_code_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+26,"ysyx_22040175_top u_id_ex_regs ebreak_flag_id_ex_i", false,-1);
        tracep->declBus(c+27,"ysyx_22040175_top u_id_ex_regs wmask_id_ex_i", false,-1, 7,0);
        tracep->declBit(c+28,"ysyx_22040175_top u_id_ex_regs s_flag_id_ex_i", false,-1);
        tracep->declBus(c+29,"ysyx_22040175_top u_id_ex_regs s_imm_id_ex_i", false,-1, 31,0);
        tracep->declBus(c+30,"ysyx_22040175_top u_id_ex_regs expand_signed_id_ex_i", false,-1, 3,0);
        tracep->declBus(c+31,"ysyx_22040175_top u_id_ex_regs rd_flag_id_ex_i", false,-1, 2,0);
        tracep->declBus(c+32,"ysyx_22040175_top u_id_ex_regs rd_buf_flag_id_ex_i", false,-1, 2,0);
        tracep->declBit(c+37,"ysyx_22040175_top u_id_ex_regs reg_wen_id_ex_o", false,-1);
        tracep->declBus(c+38,"ysyx_22040175_top u_id_ex_regs reg_waddr_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+39,"ysyx_22040175_top u_id_ex_regs alu_op_id_ex_o", false,-1, 4,0);
        tracep->declQuad(c+40,"ysyx_22040175_top u_id_ex_regs unknown_code_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+42,"ysyx_22040175_top u_id_ex_regs ebreak_flag_id_ex_o", false,-1);
        tracep->declBus(c+43,"ysyx_22040175_top u_id_ex_regs wmask_id_ex_o", false,-1, 7,0);
        tracep->declBit(c+44,"ysyx_22040175_top u_id_ex_regs s_flag_id_ex_o", false,-1);
        tracep->declBus(c+45,"ysyx_22040175_top u_id_ex_regs s_imm_id_ex_o", false,-1, 31,0);
        tracep->declBus(c+46,"ysyx_22040175_top u_id_ex_regs expand_signed_id_ex_o", false,-1, 3,0);
        tracep->declBus(c+47,"ysyx_22040175_top u_id_ex_regs rd_flag_id_ex_o", false,-1, 2,0);
        tracep->declBus(c+47,"ysyx_22040175_top u_id_ex_regs rd_buf_flag_id_ex_o", false,-1, 2,0);
        tracep->declQuad(c+620,"ysyx_22040175_top u_id_ex_regs reg_wdata_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+12,"ysyx_22040175_top u_id_ex_regs time_set_id_ex_i", false,-1);
        tracep->declQuad(c+622,"ysyx_22040175_top u_id_ex_regs reg_wdata_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+602,"ysyx_22040175_top u_id_ex_regs time_set_id_ex_o", false,-1);
        tracep->declBit(c+11,"ysyx_22040175_top u_id_ex_regs ena_id_ex_i", false,-1);
        tracep->declBit(c+48,"ysyx_22040175_top u_id_ex_regs ena_id_ex_o", false,-1);
        tracep->declQuad(c+15,"ysyx_22040175_top u_id_ex_regs alu_src1_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22040175_top u_id_ex_regs alu_src2_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+7,"ysyx_22040175_top u_id_ex_regs rest_id_mem_id_ex_i", false,-1);
        tracep->declQuad(c+52,"ysyx_22040175_top u_id_ex_regs alu_src1_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22040175_top u_id_ex_regs alu_src2_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+49,"ysyx_22040175_top u_id_ex_regs rest_id_mem_id_ex_o", false,-1);
        tracep->declBus(c+39,"ysyx_22040175_top u_ex_stage alu_op", false,-1, 4,0);
        tracep->declQuad(c+52,"ysyx_22040175_top u_ex_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22040175_top u_ex_stage alu_src2", false,-1, 63,0);
        tracep->declBit(c+376,"ysyx_22040175_top u_ex_stage zero", false,-1);
        tracep->declQuad(c+50,"ysyx_22040175_top u_ex_stage alu_res", false,-1, 63,0);
        tracep->declBus(c+533,"ysyx_22040175_top u_ex_stage rd_flag", false,-1, 2,0);
        tracep->declBus(c+39,"ysyx_22040175_top u_ex_stage u_alu alu_op", false,-1, 4,0);
        tracep->declQuad(c+52,"ysyx_22040175_top u_ex_stage u_alu alu_src1", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22040175_top u_ex_stage u_alu alu_src2", false,-1, 63,0);
        tracep->declBit(c+376,"ysyx_22040175_top u_ex_stage u_alu zero", false,-1);
        tracep->declQuad(c+50,"ysyx_22040175_top u_ex_stage u_alu alu_res", false,-1, 63,0);
        tracep->declBus(c+533,"ysyx_22040175_top u_ex_stage u_alu rd_flag", false,-1, 2,0);
        tracep->declQuad(c+377,"ysyx_22040175_top u_ex_stage u_alu signed_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+379,"ysyx_22040175_top u_ex_stage u_alu signed_alu_src2", false,-1, 63,0);
        tracep->declBit(c+451,"ysyx_22040175_top u_ex_mem_regs clk", false,-1);
        tracep->declBit(c+460,"ysyx_22040175_top u_ex_mem_regs rst_n", false,-1);
        tracep->declBit(c+37,"ysyx_22040175_top u_ex_mem_regs reg_wen_ex_mem_i", false,-1);
        tracep->declBus(c+38,"ysyx_22040175_top u_ex_mem_regs reg_waddr_ex_mem_i", false,-1, 4,0);
        tracep->declQuad(c+50,"ysyx_22040175_top u_ex_mem_regs from_ex_alu_res_ex_mem_i", false,-1, 63,0);
        tracep->declBus(c+43,"ysyx_22040175_top u_ex_mem_regs wmask_ex_mem_i", false,-1, 7,0);
        tracep->declBit(c+44,"ysyx_22040175_top u_ex_mem_regs s_flag_ex_mem_i", false,-1);
        tracep->declBit(c+602,"ysyx_22040175_top u_ex_mem_regs time_set_ex_mem_i", false,-1);
        tracep->declBus(c+45,"ysyx_22040175_top u_ex_mem_regs s_imm_ex_mem_i", false,-1, 31,0);
        tracep->declBus(c+46,"ysyx_22040175_top u_ex_mem_regs expand_signed_ex_mem_i", false,-1, 3,0);
        tracep->declBit(c+42,"ysyx_22040175_top u_ex_mem_regs ebreak_flag_ex_mem_i", false,-1);
        tracep->declBus(c+47,"ysyx_22040175_top u_ex_mem_regs rd_buf_flag_ex_mem_i", false,-1, 2,0);
        tracep->declBus(c+39,"ysyx_22040175_top u_ex_mem_regs alu_op_ex_mem_i", false,-1, 4,0);
        tracep->declQuad(c+52,"ysyx_22040175_top u_ex_mem_regs alu_src1_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22040175_top u_ex_mem_regs alu_src2_ex_mem_i", false,-1, 63,0);
        tracep->declBit(c+56,"ysyx_22040175_top u_ex_mem_regs reg_wen_ex_mem_o", false,-1);
        tracep->declBus(c+57,"ysyx_22040175_top u_ex_mem_regs reg_waddr_ex_mem_o", false,-1, 4,0);
        tracep->declBit(c+58,"ysyx_22040175_top u_ex_mem_regs ebreak_flag_ex_mem_o", false,-1);
        tracep->declBus(c+59,"ysyx_22040175_top u_ex_mem_regs wmask_ex_mem_o", false,-1, 7,0);
        tracep->declBit(c+60,"ysyx_22040175_top u_ex_mem_regs s_flag_ex_mem_o", false,-1);
        tracep->declBit(c+61,"ysyx_22040175_top u_ex_mem_regs time_set_ex_mem_o", false,-1);
        tracep->declBus(c+62,"ysyx_22040175_top u_ex_mem_regs s_imm_ex_mem_o", false,-1, 31,0);
        tracep->declBus(c+63,"ysyx_22040175_top u_ex_mem_regs expand_signed_ex_mem_o", false,-1, 3,0);
        tracep->declBus(c+64,"ysyx_22040175_top u_ex_mem_regs rd_buf_flag_ex_mem_o", false,-1, 2,0);
        tracep->declBus(c+65,"ysyx_22040175_top u_ex_mem_regs alu_op_ex_mem_o", false,-1, 4,0);
        tracep->declQuad(c+66,"ysyx_22040175_top u_ex_mem_regs alu_src1_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+68,"ysyx_22040175_top u_ex_mem_regs alu_src2_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+70,"ysyx_22040175_top u_ex_mem_regs from_ex_alu_res_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22040175_top u_ex_mem_regs pc_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+72,"ysyx_22040175_top u_ex_mem_regs pc_ex_mem_o", false,-1, 63,0);
        tracep->declBit(c+49,"ysyx_22040175_top u_ex_mem_regs rest_id_mem_ex_mem_i", false,-1);
        tracep->declBit(c+91,"ysyx_22040175_top u_ex_mem_regs rest_id_mem_ex_mem_o", false,-1);
        tracep->declBus(c+64,"ysyx_22040175_top u_mem_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+65,"ysyx_22040175_top u_mem_stage alu_op", false,-1, 4,0);
        tracep->declQuad(c+66,"ysyx_22040175_top u_mem_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+68,"ysyx_22040175_top u_mem_stage alu_src2", false,-1, 63,0);
        tracep->declBit(c+624,"ysyx_22040175_top u_mem_stage no_use", false,-1);
        tracep->declQuad(c+74,"ysyx_22040175_top u_mem_stage alu_res", false,-1, 63,0);
        tracep->declQuad(c+381,"ysyx_22040175_top u_mem_stage rd_buf_lw", false,-1, 63,0);
        tracep->declBit(c+451,"ysyx_22040175_top u_mem_wb_regs clk", false,-1);
        tracep->declBit(c+460,"ysyx_22040175_top u_mem_wb_regs rst_n", false,-1);
        tracep->declBit(c+56,"ysyx_22040175_top u_mem_wb_regs reg_wen_mem_wb_i", false,-1);
        tracep->declBus(c+57,"ysyx_22040175_top u_mem_wb_regs reg_waddr_mem_wb_i", false,-1, 4,0);
        tracep->declQuad(c+70,"ysyx_22040175_top u_mem_wb_regs from_ex_alu_res_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+74,"ysyx_22040175_top u_mem_wb_regs from_mem_alu_res_mem_wb_i", false,-1, 63,0);
        tracep->declBus(c+59,"ysyx_22040175_top u_mem_wb_regs wmask_mem_wb_i", false,-1, 7,0);
        tracep->declBit(c+60,"ysyx_22040175_top u_mem_wb_regs s_flag_mem_wb_i", false,-1);
        tracep->declBit(c+61,"ysyx_22040175_top u_mem_wb_regs time_set_mem_wb_i", false,-1);
        tracep->declBus(c+62,"ysyx_22040175_top u_mem_wb_regs s_imm_mem_wb_i", false,-1, 31,0);
        tracep->declBus(c+63,"ysyx_22040175_top u_mem_wb_regs expand_signed_mem_wb_i", false,-1, 3,0);
        tracep->declBit(c+58,"ysyx_22040175_top u_mem_wb_regs ebreak_flag_mem_wb_i", false,-1);
        tracep->declBus(c+64,"ysyx_22040175_top u_mem_wb_regs rd_buf_flag_mem_wb_i", false,-1, 2,0);
        tracep->declBit(c+76,"ysyx_22040175_top u_mem_wb_regs reg_wen_mem_wb_o", false,-1);
        tracep->declBus(c+77,"ysyx_22040175_top u_mem_wb_regs reg_waddr_mem_wb_o", false,-1, 4,0);
        tracep->declQuad(c+625,"ysyx_22040175_top u_mem_wb_regs reg_wdata_mem_wb_o", false,-1, 63,0);
        tracep->declBus(c+78,"ysyx_22040175_top u_mem_wb_regs wmask_mem_wb_o", false,-1, 7,0);
        tracep->declBit(c+79,"ysyx_22040175_top u_mem_wb_regs s_flag_mem_wb_o", false,-1);
        tracep->declBit(c+80,"ysyx_22040175_top u_mem_wb_regs time_set_mem_wb_o", false,-1);
        tracep->declBus(c+81,"ysyx_22040175_top u_mem_wb_regs s_imm_mem_wb_o", false,-1, 31,0);
        tracep->declBus(c+82,"ysyx_22040175_top u_mem_wb_regs expand_signed_mem_wb_o", false,-1, 3,0);
        tracep->declBit(c+83,"ysyx_22040175_top u_mem_wb_regs ebreak_flag_mem_wb_o", false,-1);
        tracep->declBus(c+84,"ysyx_22040175_top u_mem_wb_regs rd_buf_flag_mem_wb_o", false,-1, 2,0);
        tracep->declQuad(c+85,"ysyx_22040175_top u_mem_wb_regs from_ex_alu_res_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22040175_top u_mem_wb_regs from_mem_alu_res_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+627,"ysyx_22040175_top u_mem_wb_regs ex_pc_ready_mem_wb_i", false,-1);
        tracep->declBit(c+383,"ysyx_22040175_top u_mem_wb_regs ex_pc_ready_mem_wb_o", false,-1);
        tracep->declQuad(c+72,"ysyx_22040175_top u_mem_wb_regs pc_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_22040175_top u_mem_wb_regs pc_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+91,"ysyx_22040175_top u_mem_wb_regs rest_id_mem_ex_mem_o", false,-1);
        tracep->declBit(c+451,"ysyx_22040175_top u_wb_stage clk", false,-1);
        tracep->declBit(c+460,"ysyx_22040175_top u_wb_stage rst_n", false,-1);
        tracep->declBit(c+76,"ysyx_22040175_top u_wb_stage reg_wen", false,-1);
        tracep->declBus(c+77,"ysyx_22040175_top u_wb_stage reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+85,"ysyx_22040175_top u_wb_stage from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22040175_top u_wb_stage from_mem_alu_res", false,-1, 63,0);
        tracep->declBus(c+78,"ysyx_22040175_top u_wb_stage wmask", false,-1, 7,0);
        tracep->declBit(c+79,"ysyx_22040175_top u_wb_stage s_flag", false,-1);
        tracep->declBit(c+80,"ysyx_22040175_top u_wb_stage time_set", false,-1);
        tracep->declBus(c+81,"ysyx_22040175_top u_wb_stage s_imm", false,-1, 31,0);
        tracep->declBus(c+82,"ysyx_22040175_top u_wb_stage expand_signed", false,-1, 3,0);
        tracep->declBus(c+84,"ysyx_22040175_top u_wb_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+83,"ysyx_22040175_top u_wb_stage ebreak_flag", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+384+i*2,"ysyx_22040175_top u_wb_stage reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+448,"ysyx_22040175_top u_wb_stage write_ready", false,-1);
        tracep->declBit(c+628,"ysyx_22040175_top u_wb_stage wb_no_use", false,-1);
        tracep->declQuad(c+449,"ysyx_22040175_top u_wb_stage reg_wdata", false,-1, 63,0);
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
    VlWide<3>/*95:0*/ __Vtemp21;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__ena)
                                    ? (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch) 
                                        & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero)))
                                        ? (vlSelf->ysyx_22040175_top__DOT__id_pc 
                                           + vlSelf->ysyx_22040175_top__DOT__id_imm)
                                        : (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch) 
                                            & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero))
                                            ? (4ULL 
                                               + vlSelf->ysyx_22040175_top__DOT__id_pc)
                                            : (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump) 
                                                & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__id_jalr)))
                                                ? (vlSelf->ysyx_22040175_top__DOT__id_pc 
                                                   + vlSelf->ysyx_22040175_top__DOT__id_imm)
                                                : (
                                                   ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump) 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__id_jalr))
                                                    ? 
                                                   (vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f
                                                    [
                                                    (0x1fU 
                                                     & vlSelf->ysyx_22040175_top__DOT__id_s_imm)] 
                                                    + vlSelf->ysyx_22040175_top__DOT__id_imm)
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag)
                                                     ? 0x80000000ULL
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->ysyx_22040175_top__DOT__id_pc))))))
                                    : vlSelf->ysyx_22040175_top__DOT__id_pc)),64);
        tracep->fullBit(oldp+3,(vlSelf->ysyx_22040175_top__DOT__if_ena));
        tracep->fullIData(oldp+4,((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata)),32);
        tracep->fullQData(oldp+5,(vlSelf->ysyx_22040175_top__DOT__if_pc),64);
        tracep->fullBit(oldp+7,(vlSelf->ysyx_22040175_top__DOT__rest_id_mem));
        tracep->fullIData(oldp+8,(vlSelf->ysyx_22040175_top__DOT__id_inst),32);
        tracep->fullQData(oldp+9,(vlSelf->ysyx_22040175_top__DOT__id_pc),64);
        tracep->fullBit(oldp+11,(vlSelf->ysyx_22040175_top__DOT__id_ena));
        tracep->fullBit(oldp+12,(vlSelf->ysyx_22040175_top__DOT__id_time_set));
        tracep->fullBit(oldp+13,(vlSelf->ysyx_22040175_top__DOT__id_reg_wen));
        tracep->fullCData(oldp+14,(vlSelf->ysyx_22040175_top__DOT__id_reg_waddr),5);
        tracep->fullQData(oldp+15,(vlSelf->ysyx_22040175_top__DOT__id_alu_src1),64);
        tracep->fullQData(oldp+17,(vlSelf->ysyx_22040175_top__DOT__id_alu_src2),64);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22040175_top__DOT__id_imm),64);
        tracep->fullCData(oldp+21,(vlSelf->ysyx_22040175_top__DOT__id_alu_op),5);
        tracep->fullCData(oldp+22,(vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel),2);
        tracep->fullQData(oldp+23,(vlSelf->ysyx_22040175_top__DOT__id_unknown_code),64);
        tracep->fullBit(oldp+25,(vlSelf->ysyx_22040175_top__DOT__id_jalr));
        tracep->fullBit(oldp+26,(vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag));
        tracep->fullCData(oldp+27,(vlSelf->ysyx_22040175_top__DOT__id_wmask),8);
        tracep->fullBit(oldp+28,(vlSelf->ysyx_22040175_top__DOT__id_s_flag));
        tracep->fullIData(oldp+29,(vlSelf->ysyx_22040175_top__DOT__id_s_imm),32);
        tracep->fullCData(oldp+30,(vlSelf->ysyx_22040175_top__DOT__id_expand_signed),4);
        tracep->fullCData(oldp+31,(vlSelf->ysyx_22040175_top__DOT__id_rd_flag),3);
        tracep->fullCData(oldp+32,(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag),3);
        tracep->fullBit(oldp+33,(vlSelf->ysyx_22040175_top__DOT__rest_from_id));
        tracep->fullBit(oldp+34,(((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch) 
                                  | (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump))));
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22040175_top__DOT__ex_pc),64);
        tracep->fullBit(oldp+37,(vlSelf->ysyx_22040175_top__DOT__ex_reg_wen));
        tracep->fullCData(oldp+38,(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr),5);
        tracep->fullCData(oldp+39,(vlSelf->ysyx_22040175_top__DOT__ex_alu_op),5);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22040175_top__DOT__ex_unknown_code),64);
        tracep->fullBit(oldp+42,(vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag));
        tracep->fullCData(oldp+43,(vlSelf->ysyx_22040175_top__DOT__ex_wmask),8);
        tracep->fullBit(oldp+44,(vlSelf->ysyx_22040175_top__DOT__ex_s_flag));
        tracep->fullIData(oldp+45,(vlSelf->ysyx_22040175_top__DOT__ex_s_imm),32);
        tracep->fullCData(oldp+46,(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed),4);
        tracep->fullCData(oldp+47,(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag),3);
        tracep->fullBit(oldp+48,(vlSelf->ysyx_22040175_top__DOT__ex_ena));
        tracep->fullBit(oldp+49,(vlSelf->ysyx_22040175_top__DOT__ex_rest_id_mem));
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2),64);
        tracep->fullBit(oldp+56,(vlSelf->ysyx_22040175_top__DOT__mem_reg_wen));
        tracep->fullCData(oldp+57,(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr),5);
        tracep->fullBit(oldp+58,(vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag));
        tracep->fullCData(oldp+59,(vlSelf->ysyx_22040175_top__DOT__mem_wmask),8);
        tracep->fullBit(oldp+60,(vlSelf->ysyx_22040175_top__DOT__mem_s_flag));
        tracep->fullBit(oldp+61,(vlSelf->ysyx_22040175_top__DOT__mem_time_set));
        tracep->fullIData(oldp+62,(vlSelf->ysyx_22040175_top__DOT__mem_s_imm),32);
        tracep->fullCData(oldp+63,(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed),4);
        tracep->fullCData(oldp+64,(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag),3);
        tracep->fullCData(oldp+65,(vlSelf->ysyx_22040175_top__DOT__mem_alu_op),5);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src1),64);
        tracep->fullQData(oldp+68,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src2),64);
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res),64);
        tracep->fullQData(oldp+72,(vlSelf->ysyx_22040175_top__DOT__mem_pc),64);
        tracep->fullQData(oldp+74,(vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res),64);
        tracep->fullBit(oldp+76,(vlSelf->ysyx_22040175_top__DOT__wb_reg_wen));
        tracep->fullCData(oldp+77,(vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr),5);
        tracep->fullCData(oldp+78,(vlSelf->ysyx_22040175_top__DOT__wb_wmask),8);
        tracep->fullBit(oldp+79,(vlSelf->ysyx_22040175_top__DOT__wb_s_flag));
        tracep->fullBit(oldp+80,(vlSelf->ysyx_22040175_top__DOT__wb_time_set));
        tracep->fullIData(oldp+81,(vlSelf->ysyx_22040175_top__DOT__wb_s_imm),32);
        tracep->fullCData(oldp+82,(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed),4);
        tracep->fullBit(oldp+83,(vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag));
        tracep->fullCData(oldp+84,(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag),3);
        tracep->fullQData(oldp+85,(vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res),64);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22040175_top__DOT__wb_pc),64);
        tracep->fullBit(oldp+91,(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem));
        tracep->fullQData(oldp+92,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0]),64);
        tracep->fullQData(oldp+94,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[1]),64);
        tracep->fullQData(oldp+96,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[2]),64);
        tracep->fullQData(oldp+98,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[3]),64);
        tracep->fullQData(oldp+100,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[4]),64);
        tracep->fullQData(oldp+102,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[5]),64);
        tracep->fullQData(oldp+104,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[6]),64);
        tracep->fullQData(oldp+106,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[7]),64);
        tracep->fullQData(oldp+108,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[8]),64);
        tracep->fullQData(oldp+110,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[9]),64);
        tracep->fullQData(oldp+112,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[10]),64);
        tracep->fullQData(oldp+114,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[11]),64);
        tracep->fullQData(oldp+116,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[12]),64);
        tracep->fullQData(oldp+118,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[13]),64);
        tracep->fullQData(oldp+120,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[14]),64);
        tracep->fullQData(oldp+122,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[15]),64);
        tracep->fullQData(oldp+124,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[16]),64);
        tracep->fullQData(oldp+126,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[17]),64);
        tracep->fullQData(oldp+128,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[18]),64);
        tracep->fullQData(oldp+130,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[19]),64);
        tracep->fullQData(oldp+132,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[20]),64);
        tracep->fullQData(oldp+134,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[21]),64);
        tracep->fullQData(oldp+136,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[22]),64);
        tracep->fullQData(oldp+138,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[23]),64);
        tracep->fullQData(oldp+140,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[24]),64);
        tracep->fullQData(oldp+142,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[25]),64);
        tracep->fullQData(oldp+144,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[26]),64);
        tracep->fullQData(oldp+146,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[27]),64);
        tracep->fullQData(oldp+148,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[28]),64);
        tracep->fullQData(oldp+150,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[29]),64);
        tracep->fullQData(oldp+152,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[30]),64);
        tracep->fullQData(oldp+154,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[31]),64);
        tracep->fullQData(oldp+156,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata),64);
        tracep->fullQData(oldp+158,((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))),64);
        tracep->fullQData(oldp+160,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0]),64);
        tracep->fullQData(oldp+162,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[1]),64);
        tracep->fullQData(oldp+164,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[2]),64);
        tracep->fullQData(oldp+166,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[3]),64);
        tracep->fullQData(oldp+168,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[4]),64);
        tracep->fullQData(oldp+170,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[5]),64);
        tracep->fullQData(oldp+172,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[6]),64);
        tracep->fullQData(oldp+174,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[7]),64);
        tracep->fullQData(oldp+176,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[8]),64);
        tracep->fullQData(oldp+178,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[9]),64);
        tracep->fullQData(oldp+180,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[10]),64);
        tracep->fullQData(oldp+182,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[11]),64);
        tracep->fullQData(oldp+184,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[12]),64);
        tracep->fullQData(oldp+186,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[13]),64);
        tracep->fullQData(oldp+188,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[14]),64);
        tracep->fullQData(oldp+190,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[15]),64);
        tracep->fullQData(oldp+192,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[16]),64);
        tracep->fullQData(oldp+194,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[17]),64);
        tracep->fullQData(oldp+196,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[18]),64);
        tracep->fullQData(oldp+198,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[19]),64);
        tracep->fullQData(oldp+200,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[20]),64);
        tracep->fullQData(oldp+202,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[21]),64);
        tracep->fullQData(oldp+204,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[22]),64);
        tracep->fullQData(oldp+206,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[23]),64);
        tracep->fullQData(oldp+208,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[24]),64);
        tracep->fullQData(oldp+210,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[25]),64);
        tracep->fullQData(oldp+212,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[26]),64);
        tracep->fullQData(oldp+214,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[27]),64);
        tracep->fullQData(oldp+216,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[28]),64);
        tracep->fullQData(oldp+218,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[29]),64);
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[30]),64);
        tracep->fullQData(oldp+222,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[31]),64);
        tracep->fullBit(oldp+224,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch));
        tracep->fullBit(oldp+225,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump));
        tracep->fullQData(oldp+226,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata),64);
        tracep->fullQData(oldp+228,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata),64);
        tracep->fullCData(oldp+230,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op),3);
        tracep->fullCData(oldp+231,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr),5);
        tracep->fullCData(oldp+232,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr),5);
        tracep->fullCData(oldp+233,((0x7fU & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))),7);
        tracep->fullCData(oldp+234,((7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))),3);
        tracep->fullCData(oldp+235,((0x7fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x19U)))),7);
        tracep->fullCData(oldp+236,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 7U)))),5);
        tracep->fullCData(oldp+237,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xfU)))),5);
        tracep->fullCData(oldp+238,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x14U)))),5);
        VL_EXTEND_WQ(65,64, __Vtemp21, vlSelf->ysyx_22040175_top__DOT__id_pc);
        tracep->fullWData(oldp+239,(__Vtemp21),65);
        tracep->fullQData(oldp+242,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0]),64);
        tracep->fullQData(oldp+244,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[1]),64);
        tracep->fullQData(oldp+246,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[2]),64);
        tracep->fullQData(oldp+248,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[3]),64);
        tracep->fullQData(oldp+250,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[4]),64);
        tracep->fullQData(oldp+252,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[5]),64);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[6]),64);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[7]),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[8]),64);
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[9]),64);
        tracep->fullQData(oldp+262,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[10]),64);
        tracep->fullQData(oldp+264,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[11]),64);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[12]),64);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[13]),64);
        tracep->fullQData(oldp+270,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[14]),64);
        tracep->fullQData(oldp+272,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[15]),64);
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[16]),64);
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[17]),64);
        tracep->fullQData(oldp+278,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[18]),64);
        tracep->fullQData(oldp+280,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[19]),64);
        tracep->fullQData(oldp+282,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[20]),64);
        tracep->fullQData(oldp+284,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[21]),64);
        tracep->fullQData(oldp+286,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[22]),64);
        tracep->fullQData(oldp+288,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[23]),64);
        tracep->fullQData(oldp+290,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[24]),64);
        tracep->fullQData(oldp+292,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[25]),64);
        tracep->fullQData(oldp+294,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[26]),64);
        tracep->fullQData(oldp+296,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[27]),64);
        tracep->fullQData(oldp+298,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[28]),64);
        tracep->fullQData(oldp+300,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[29]),64);
        tracep->fullQData(oldp+302,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[30]),64);
        tracep->fullQData(oldp+304,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[31]),64);
        tracep->fullCData(oldp+306,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__test),3);
        tracep->fullQData(oldp+307,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0]),64);
        tracep->fullQData(oldp+309,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[1]),64);
        tracep->fullQData(oldp+311,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[2]),64);
        tracep->fullQData(oldp+313,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[3]),64);
        tracep->fullQData(oldp+315,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[4]),64);
        tracep->fullQData(oldp+317,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[5]),64);
        tracep->fullQData(oldp+319,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[6]),64);
        tracep->fullQData(oldp+321,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[7]),64);
        tracep->fullQData(oldp+323,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[8]),64);
        tracep->fullQData(oldp+325,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[9]),64);
        tracep->fullQData(oldp+327,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[10]),64);
        tracep->fullQData(oldp+329,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[11]),64);
        tracep->fullQData(oldp+331,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[12]),64);
        tracep->fullQData(oldp+333,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[13]),64);
        tracep->fullQData(oldp+335,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[14]),64);
        tracep->fullQData(oldp+337,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[15]),64);
        tracep->fullQData(oldp+339,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[16]),64);
        tracep->fullQData(oldp+341,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[17]),64);
        tracep->fullQData(oldp+343,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[18]),64);
        tracep->fullQData(oldp+345,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[19]),64);
        tracep->fullQData(oldp+347,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[20]),64);
        tracep->fullQData(oldp+349,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[21]),64);
        tracep->fullQData(oldp+351,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[22]),64);
        tracep->fullQData(oldp+353,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[23]),64);
        tracep->fullQData(oldp+355,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[24]),64);
        tracep->fullQData(oldp+357,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[25]),64);
        tracep->fullQData(oldp+359,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[26]),64);
        tracep->fullQData(oldp+361,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[27]),64);
        tracep->fullQData(oldp+363,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[28]),64);
        tracep->fullQData(oldp+365,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[29]),64);
        tracep->fullQData(oldp+367,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[30]),64);
        tracep->fullQData(oldp+369,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[31]),64);
        tracep->fullBit(oldp+371,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero));
        tracep->fullQData(oldp+372,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1),64);
        tracep->fullQData(oldp+374,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2),64);
        tracep->fullBit(oldp+376,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__zero));
        tracep->fullQData(oldp+377,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1),64);
        tracep->fullQData(oldp+379,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2),64);
        tracep->fullQData(oldp+381,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw),64);
        tracep->fullBit(oldp+383,(vlSelf->ysyx_22040175_top__DOT__u_mem_wb_regs__DOT__ex_pc_ready_mem_wb_o));
        tracep->fullQData(oldp+384,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[0]),64);
        tracep->fullQData(oldp+386,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[1]),64);
        tracep->fullQData(oldp+388,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[2]),64);
        tracep->fullQData(oldp+390,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[3]),64);
        tracep->fullQData(oldp+392,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[4]),64);
        tracep->fullQData(oldp+394,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[5]),64);
        tracep->fullQData(oldp+396,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[6]),64);
        tracep->fullQData(oldp+398,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[7]),64);
        tracep->fullQData(oldp+400,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[8]),64);
        tracep->fullQData(oldp+402,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[9]),64);
        tracep->fullQData(oldp+404,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[10]),64);
        tracep->fullQData(oldp+406,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[11]),64);
        tracep->fullQData(oldp+408,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[12]),64);
        tracep->fullQData(oldp+410,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[13]),64);
        tracep->fullQData(oldp+412,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[14]),64);
        tracep->fullQData(oldp+414,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[15]),64);
        tracep->fullQData(oldp+416,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[16]),64);
        tracep->fullQData(oldp+418,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[17]),64);
        tracep->fullQData(oldp+420,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[18]),64);
        tracep->fullQData(oldp+422,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[19]),64);
        tracep->fullQData(oldp+424,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[20]),64);
        tracep->fullQData(oldp+426,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[21]),64);
        tracep->fullQData(oldp+428,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[22]),64);
        tracep->fullQData(oldp+430,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[23]),64);
        tracep->fullQData(oldp+432,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[24]),64);
        tracep->fullQData(oldp+434,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[25]),64);
        tracep->fullQData(oldp+436,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[26]),64);
        tracep->fullQData(oldp+438,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[27]),64);
        tracep->fullQData(oldp+440,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[28]),64);
        tracep->fullQData(oldp+442,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[29]),64);
        tracep->fullQData(oldp+444,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[30]),64);
        tracep->fullQData(oldp+446,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[31]),64);
        tracep->fullBit(oldp+448,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__write_ready));
        tracep->fullQData(oldp+449,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata),64);
        tracep->fullBit(oldp+451,(vlSelf->clk));
        tracep->fullBit(oldp+452,(vlSelf->rst));
        tracep->fullIData(oldp+453,(vlSelf->inst),32);
        tracep->fullIData(oldp+454,(vlSelf->pc),32);
        tracep->fullQData(oldp+455,(vlSelf->unknown_code),64);
        tracep->fullBit(oldp+457,(vlSelf->time_set));
        tracep->fullIData(oldp+458,(vlSelf->diff_pc),32);
        tracep->fullIData(oldp+459,(vlSelf->diff_mem_pc),32);
        tracep->fullBit(oldp+460,(vlSelf->ysyx_22040175_top__DOT__rst_n));
        tracep->fullQData(oldp+461,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[0]),64);
        tracep->fullQData(oldp+463,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[1]),64);
        tracep->fullQData(oldp+465,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[2]),64);
        tracep->fullQData(oldp+467,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[3]),64);
        tracep->fullQData(oldp+469,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[4]),64);
        tracep->fullQData(oldp+471,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[5]),64);
        tracep->fullQData(oldp+473,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[6]),64);
        tracep->fullQData(oldp+475,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[7]),64);
        tracep->fullQData(oldp+477,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[8]),64);
        tracep->fullQData(oldp+479,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[9]),64);
        tracep->fullQData(oldp+481,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[10]),64);
        tracep->fullQData(oldp+483,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[11]),64);
        tracep->fullQData(oldp+485,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[12]),64);
        tracep->fullQData(oldp+487,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[13]),64);
        tracep->fullQData(oldp+489,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[14]),64);
        tracep->fullQData(oldp+491,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[15]),64);
        tracep->fullQData(oldp+493,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[16]),64);
        tracep->fullQData(oldp+495,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[17]),64);
        tracep->fullQData(oldp+497,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[18]),64);
        tracep->fullQData(oldp+499,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[19]),64);
        tracep->fullQData(oldp+501,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[20]),64);
        tracep->fullQData(oldp+503,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[21]),64);
        tracep->fullQData(oldp+505,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[22]),64);
        tracep->fullQData(oldp+507,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[23]),64);
        tracep->fullQData(oldp+509,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[24]),64);
        tracep->fullQData(oldp+511,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[25]),64);
        tracep->fullQData(oldp+513,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[26]),64);
        tracep->fullQData(oldp+515,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[27]),64);
        tracep->fullQData(oldp+517,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[28]),64);
        tracep->fullQData(oldp+519,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[29]),64);
        tracep->fullQData(oldp+521,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[30]),64);
        tracep->fullQData(oldp+523,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[31]),64);
        tracep->fullBit(oldp+525,(vlSelf->ysyx_22040175_top__DOT__id_branch));
        tracep->fullBit(oldp+526,(vlSelf->ysyx_22040175_top__DOT__id_jump));
        tracep->fullBit(oldp+527,(vlSelf->ysyx_22040175_top__DOT__ex_branch));
        tracep->fullBit(oldp+528,(vlSelf->ysyx_22040175_top__DOT__ex_jump));
        tracep->fullQData(oldp+529,(vlSelf->ysyx_22040175_top__DOT__ex_imm),64);
        tracep->fullCData(oldp+531,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src_sel),2);
        tracep->fullBit(oldp+532,(vlSelf->ysyx_22040175_top__DOT__ex_jalr));
        tracep->fullCData(oldp+533,(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag),3);
        tracep->fullQData(oldp+534,(vlSelf->ysyx_22040175_top__DOT__ex_reg1_rdata),64);
        tracep->fullQData(oldp+536,(vlSelf->ysyx_22040175_top__DOT__ex_reg2_rdata),64);
        tracep->fullQData(oldp+538,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[0]),64);
        tracep->fullQData(oldp+540,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[1]),64);
        tracep->fullQData(oldp+542,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[2]),64);
        tracep->fullQData(oldp+544,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[3]),64);
        tracep->fullQData(oldp+546,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[4]),64);
        tracep->fullQData(oldp+548,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[5]),64);
        tracep->fullQData(oldp+550,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[6]),64);
        tracep->fullQData(oldp+552,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[7]),64);
        tracep->fullQData(oldp+554,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[8]),64);
        tracep->fullQData(oldp+556,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[9]),64);
        tracep->fullQData(oldp+558,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[10]),64);
        tracep->fullQData(oldp+560,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[11]),64);
        tracep->fullQData(oldp+562,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[12]),64);
        tracep->fullQData(oldp+564,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[13]),64);
        tracep->fullQData(oldp+566,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[14]),64);
        tracep->fullQData(oldp+568,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[15]),64);
        tracep->fullQData(oldp+570,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[16]),64);
        tracep->fullQData(oldp+572,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[17]),64);
        tracep->fullQData(oldp+574,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[18]),64);
        tracep->fullQData(oldp+576,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[19]),64);
        tracep->fullQData(oldp+578,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[20]),64);
        tracep->fullQData(oldp+580,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[21]),64);
        tracep->fullQData(oldp+582,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[22]),64);
        tracep->fullQData(oldp+584,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[23]),64);
        tracep->fullQData(oldp+586,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[24]),64);
        tracep->fullQData(oldp+588,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[25]),64);
        tracep->fullQData(oldp+590,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[26]),64);
        tracep->fullQData(oldp+592,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[27]),64);
        tracep->fullQData(oldp+594,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[28]),64);
        tracep->fullQData(oldp+596,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[29]),64);
        tracep->fullQData(oldp+598,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[30]),64);
        tracep->fullQData(oldp+600,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[31]),64);
        tracep->fullBit(oldp+602,(vlSelf->ysyx_22040175_top__DOT__ex_time_set));
        tracep->fullBit(oldp+603,(vlSelf->ysyx_22040175_top__DOT__id_rest_no_use));
        tracep->fullQData(oldp+604,(vlSelf->ysyx_22040175_top__DOT__ex_next_pc),64);
        tracep->fullBit(oldp+606,(vlSelf->ysyx_22040175_top__DOT__write_ready));
        tracep->fullBit(oldp+607,(vlSelf->ysyx_22040175_top__DOT__ex_pc_ready));
        tracep->fullBit(oldp+608,(vlSelf->ysyx_22040175_top__DOT__mem_pc_ready));
        tracep->fullBit(oldp+609,(vlSelf->ysyx_22040175_top__DOT__fr_ex_no_use));
        tracep->fullBit(oldp+610,(vlSelf->ysyx_22040175_top__DOT__wb_pc_ready));
        tracep->fullBit(oldp+611,(vlSelf->ysyx_22040175_top__DOT__control_rest));
        tracep->fullBit(oldp+612,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__write_ready));
        tracep->fullBit(oldp+613,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__no_use));
        tracep->fullBit(oldp+614,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__ena));
        tracep->fullQData(oldp+615,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__from_ex_alu_res),64);
        tracep->fullQData(oldp+617,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__from_mem_alu_res),64);
        tracep->fullCData(oldp+619,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__alu_op),5);
        tracep->fullQData(oldp+620,(vlSelf->ysyx_22040175_top__DOT__u_id_ex_regs__DOT__reg_wdata_id_ex_i),64);
        tracep->fullQData(oldp+622,(vlSelf->ysyx_22040175_top__DOT__u_id_ex_regs__DOT__reg_wdata_id_ex_o),64);
        tracep->fullBit(oldp+624,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__no_use));
        tracep->fullQData(oldp+625,(vlSelf->ysyx_22040175_top__DOT__u_mem_wb_regs__DOT__reg_wdata_mem_wb_o),64);
        tracep->fullBit(oldp+627,(vlSelf->ysyx_22040175_top__DOT__u_mem_wb_regs__DOT__ex_pc_ready_mem_wb_i));
        tracep->fullBit(oldp+628,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_no_use));
    }
}
