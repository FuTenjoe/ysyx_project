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
        tracep->declBit(c+546,"clk", false,-1);
        tracep->declBit(c+547,"rst", false,-1);
        tracep->declBus(c+548,"inst", false,-1, 31,0);
        tracep->declBus(c+549,"pc", false,-1, 31,0);
        tracep->declQuad(c+550,"unknown_code", false,-1, 63,0);
        tracep->declBit(c+552,"time_set", false,-1);
        tracep->declBus(c+553,"diff_pc", false,-1, 31,0);
        tracep->declBus(c+554,"diff_delay_pc", false,-1, 31,0);
        tracep->declBit(c+546,"ysyx_22040175_top clk", false,-1);
        tracep->declBit(c+547,"ysyx_22040175_top rst", false,-1);
        tracep->declBus(c+548,"ysyx_22040175_top inst", false,-1, 31,0);
        tracep->declBus(c+549,"ysyx_22040175_top pc", false,-1, 31,0);
        tracep->declQuad(c+550,"ysyx_22040175_top unknown_code", false,-1, 63,0);
        tracep->declBit(c+552,"ysyx_22040175_top time_set", false,-1);
        tracep->declBus(c+553,"ysyx_22040175_top diff_pc", false,-1, 31,0);
        tracep->declBus(c+554,"ysyx_22040175_top diff_delay_pc", false,-1, 31,0);
        tracep->declBit(c+207,"ysyx_22040175_top rst_n", false,-1);
        tracep->declQuad(c+555,"ysyx_22040175_top id_next_pc", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22040175_top if_ena", false,-1);
        tracep->declBus(c+2,"ysyx_22040175_top if_inst", false,-1, 31,0);
        tracep->declQuad(c+3,"ysyx_22040175_top if_pc", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top rest_id_mem", false,-1);
        tracep->declBus(c+6,"ysyx_22040175_top id_inst", false,-1, 31,0);
        tracep->declQuad(c+7,"ysyx_22040175_top id_pc", false,-1, 63,0);
        tracep->declBit(c+9,"ysyx_22040175_top id_ena", false,-1);
        tracep->declBit(c+10,"ysyx_22040175_top id_time_set", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+559+i*2,"ysyx_22040175_top to_id_reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+623,"ysyx_22040175_top id_branch", false,-1);
        tracep->declBit(c+624,"ysyx_22040175_top id_jump", false,-1);
        tracep->declBit(c+11,"ysyx_22040175_top id_reg_wen", false,-1);
        tracep->declBus(c+12,"ysyx_22040175_top id_reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+208,"ysyx_22040175_top id_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+210,"ysyx_22040175_top id_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22040175_top id_imm", false,-1, 63,0);
        tracep->declBus(c+15,"ysyx_22040175_top id_alu_op", false,-1, 4,0);
        tracep->declBus(c+16,"ysyx_22040175_top id_alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+17,"ysyx_22040175_top id_unknown_code", false,-1, 63,0);
        tracep->declBit(c+19,"ysyx_22040175_top id_jalr", false,-1);
        tracep->declBit(c+20,"ysyx_22040175_top id_ebreak_flag", false,-1);
        tracep->declBus(c+21,"ysyx_22040175_top id_wmask", false,-1, 7,0);
        tracep->declBit(c+22,"ysyx_22040175_top id_s_flag", false,-1);
        tracep->declBus(c+23,"ysyx_22040175_top id_s_imm", false,-1, 31,0);
        tracep->declBus(c+24,"ysyx_22040175_top id_expand_signed", false,-1, 3,0);
        tracep->declBus(c+25,"ysyx_22040175_top id_rd_flag", false,-1, 2,0);
        tracep->declBus(c+26,"ysyx_22040175_top id_rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+27,"ysyx_22040175_top rest_from_id", false,-1);
        tracep->declBit(c+28,"ysyx_22040175_top id_control_rest", false,-1);
        tracep->declQuad(c+557,"ysyx_22040175_top id_end_write_addr", false,-1, 63,0);
        tracep->declBit(c+29,"ysyx_22040175_top rest_wb_hazard", false,-1);
        tracep->declQuad(c+30,"ysyx_22040175_top ex_pc", false,-1, 63,0);
        tracep->declBit(c+625,"ysyx_22040175_top ex_branch", false,-1);
        tracep->declBit(c+626,"ysyx_22040175_top ex_jump", false,-1);
        tracep->declBit(c+32,"ysyx_22040175_top ex_reg_wen", false,-1);
        tracep->declBus(c+33,"ysyx_22040175_top ex_reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+627,"ysyx_22040175_top ex_imm", false,-1, 63,0);
        tracep->declBus(c+34,"ysyx_22040175_top ex_alu_op", false,-1, 4,0);
        tracep->declBus(c+629,"ysyx_22040175_top ex_alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+35,"ysyx_22040175_top ex_unknown_code", false,-1, 63,0);
        tracep->declBit(c+630,"ysyx_22040175_top ex_jalr", false,-1);
        tracep->declBit(c+37,"ysyx_22040175_top ex_ebreak_flag", false,-1);
        tracep->declBus(c+38,"ysyx_22040175_top ex_wmask", false,-1, 7,0);
        tracep->declBit(c+39,"ysyx_22040175_top ex_s_flag", false,-1);
        tracep->declBus(c+40,"ysyx_22040175_top ex_s_imm", false,-1, 31,0);
        tracep->declBus(c+41,"ysyx_22040175_top ex_expand_signed", false,-1, 3,0);
        tracep->declBus(c+42,"ysyx_22040175_top ex_rd_flag", false,-1, 2,0);
        tracep->declBus(c+43,"ysyx_22040175_top ex_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+631,"ysyx_22040175_top ex_reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+633,"ysyx_22040175_top ex_reg2_rdata", false,-1, 63,0);
        tracep->declBit(c+44,"ysyx_22040175_top ex_ena", false,-1);
        tracep->declBit(c+635,"ysyx_22040175_top ex_time_set", false,-1);
        tracep->declBit(c+636,"ysyx_22040175_top id_rest_no_use", false,-1);
        tracep->declBit(c+45,"ysyx_22040175_top ex_rest_id_mem", false,-1);
        tracep->declBus(c+46,"ysyx_22040175_top ex_inst", false,-1, 31,0);
        tracep->declQuad(c+47,"ysyx_22040175_top ex_end_write_addr", false,-1, 63,0);
        tracep->declQuad(c+49,"ysyx_22040175_top from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+51,"ysyx_22040175_top ex_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+53,"ysyx_22040175_top ex_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+637,"ysyx_22040175_top ex_next_pc", false,-1, 63,0);
        tracep->declBit(c+639,"ysyx_22040175_top write_ready", false,-1);
        tracep->declBit(c+640,"ysyx_22040175_top ex_pc_ready", false,-1);
        tracep->declBit(c+55,"ysyx_22040175_top mem_reg_wen", false,-1);
        tracep->declBus(c+56,"ysyx_22040175_top mem_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+57,"ysyx_22040175_top mem_ebreak_flag", false,-1);
        tracep->declBus(c+58,"ysyx_22040175_top mem_wmask", false,-1, 7,0);
        tracep->declBit(c+59,"ysyx_22040175_top mem_s_flag", false,-1);
        tracep->declBit(c+60,"ysyx_22040175_top mem_time_set", false,-1);
        tracep->declBus(c+61,"ysyx_22040175_top mem_s_imm", false,-1, 31,0);
        tracep->declBus(c+62,"ysyx_22040175_top mem_expand_signed", false,-1, 3,0);
        tracep->declBus(c+63,"ysyx_22040175_top mem_rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+64,"ysyx_22040175_top mem_alu_op", false,-1, 4,0);
        tracep->declQuad(c+65,"ysyx_22040175_top mem_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+67,"ysyx_22040175_top mem_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+69,"ysyx_22040175_top mem_from_ex_alu_res", false,-1, 63,0);
        tracep->declBit(c+641,"ysyx_22040175_top mem_pc_ready", false,-1);
        tracep->declQuad(c+71,"ysyx_22040175_top mem_pc", false,-1, 63,0);
        tracep->declBit(c+642,"ysyx_22040175_top fr_ex_no_use", false,-1);
        tracep->declQuad(c+73,"ysyx_22040175_top mem_end_write_addr", false,-1, 63,0);
        tracep->declQuad(c+75,"ysyx_22040175_top from_mem_alu_res", false,-1, 63,0);
        tracep->declQuad(c+77,"ysyx_22040175_top wb_hazard_result", false,-1, 63,0);
        tracep->declBit(c+79,"ysyx_22040175_top wb_reg_wen", false,-1);
        tracep->declBus(c+80,"ysyx_22040175_top wb_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+81,"ysyx_22040175_top wb_wmask", false,-1, 7,0);
        tracep->declBit(c+82,"ysyx_22040175_top wb_s_flag", false,-1);
        tracep->declBit(c+83,"ysyx_22040175_top wb_time_set", false,-1);
        tracep->declBus(c+84,"ysyx_22040175_top wb_s_imm", false,-1, 31,0);
        tracep->declBus(c+85,"ysyx_22040175_top wb_expand_signed", false,-1, 3,0);
        tracep->declBit(c+86,"ysyx_22040175_top wb_ebreak_flag", false,-1);
        tracep->declBus(c+87,"ysyx_22040175_top wb_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+88,"ysyx_22040175_top wb_from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22040175_top wb_from_mem_alu_res", false,-1, 63,0);
        tracep->declBit(c+643,"ysyx_22040175_top wb_pc_ready", false,-1);
        tracep->declQuad(c+92,"ysyx_22040175_top wb_pc", false,-1, 63,0);
        tracep->declBit(c+94,"ysyx_22040175_top mem_rest_id_mem", false,-1);
        tracep->declQuad(c+95,"ysyx_22040175_top wb_end_write_addr", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+212+i*2,"ysyx_22040175_top from_wb_reg_f", true,(i+0), 63,0);}}
        tracep->declQuad(c+97,"ysyx_22040175_top wb_delay_pc", false,-1, 63,0);
        tracep->declBit(c+546,"ysyx_22040175_top u_if_stage clk", false,-1);
        tracep->declBit(c+207,"ysyx_22040175_top u_if_stage rst_n", false,-1);
        tracep->declQuad(c+555,"ysyx_22040175_top u_if_stage id_next_pc", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22040175_top u_if_stage ena", false,-1);
        tracep->declBus(c+2,"ysyx_22040175_top u_if_stage inst", false,-1, 31,0);
        tracep->declQuad(c+3,"ysyx_22040175_top u_if_stage curr_pc", false,-1, 63,0);
        tracep->declBit(c+28,"ysyx_22040175_top u_if_stage control_rest", false,-1);
        tracep->declBit(c+644,"ysyx_22040175_top u_if_stage ex_pc_ready", false,-1);
        tracep->declBit(c+645,"ysyx_22040175_top u_if_stage pc_no_use", false,-1);
        tracep->declBit(c+5,"ysyx_22040175_top u_if_stage rest_id_mem", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_if_stage id_pc", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx_22040175_top u_if_stage rdata", false,-1, 63,0);
        tracep->declBit(c+546,"ysyx_22040175_top u_if_stage u_pc_predict clk", false,-1);
        tracep->declBit(c+207,"ysyx_22040175_top u_if_stage u_pc_predict rst_n", false,-1);
        tracep->declBit(c+28,"ysyx_22040175_top u_if_stage u_pc_predict control_rest", false,-1);
        tracep->declQuad(c+555,"ysyx_22040175_top u_if_stage u_pc_predict id_next_pc", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22040175_top u_if_stage u_pc_predict ena", false,-1);
        tracep->declQuad(c+3,"ysyx_22040175_top u_if_stage u_pc_predict curr_pc", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_if_stage u_pc_predict rest_id_mem", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_if_stage u_pc_predict id_curr_pc", false,-1, 63,0);
        tracep->declBit(c+546,"ysyx_22040175_top u_if_id_regs clk", false,-1);
        tracep->declBit(c+207,"ysyx_22040175_top u_if_id_regs rst_n", false,-1);
        tracep->declQuad(c+3,"ysyx_22040175_top u_if_id_regs pc_if_id_i", false,-1, 63,0);
        tracep->declBus(c+2,"ysyx_22040175_top u_if_id_regs instr_if_id_i", false,-1, 31,0);
        tracep->declBit(c+1,"ysyx_22040175_top u_if_id_regs ena_if_id_i", false,-1);
        tracep->declBit(c+552,"ysyx_22040175_top u_if_id_regs time_set_if_id_i", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_if_id_regs pc_if_id_o", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22040175_top u_if_id_regs instr_if_id_o", false,-1, 31,0);
        tracep->declBit(c+9,"ysyx_22040175_top u_if_id_regs ena_if_id_o", false,-1);
        tracep->declBit(c+10,"ysyx_22040175_top u_if_id_regs time_set_if_id_o", false,-1);
        tracep->declBit(c+28,"ysyx_22040175_top u_if_id_regs control_rest", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_if_id_regs id_pc", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_if_id_regs rest_id_mem", false,-1);
        tracep->declBit(c+546,"ysyx_22040175_top u_id_stage clk", false,-1);
        tracep->declBit(c+207,"ysyx_22040175_top u_id_stage rst_n", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_id_stage id_pc", false,-1, 63,0);
        tracep->declQuad(c+555,"ysyx_22040175_top u_id_stage next_pc", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22040175_top u_id_stage inst", false,-1, 63,0);
        tracep->declBus(c+46,"ysyx_22040175_top u_id_stage ex_inst", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+276+i*2,"ysyx_22040175_top u_id_stage reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+33,"ysyx_22040175_top u_id_stage ex_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+27,"ysyx_22040175_top u_id_stage rest_from_id", false,-1);
        tracep->declBit(c+103,"ysyx_22040175_top u_id_stage branch", false,-1);
        tracep->declBit(c+104,"ysyx_22040175_top u_id_stage jump", false,-1);
        tracep->declBit(c+11,"ysyx_22040175_top u_id_stage reg_wen", false,-1);
        tracep->declBus(c+12,"ysyx_22040175_top u_id_stage reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+340,"ysyx_22040175_top u_id_stage reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+342,"ysyx_22040175_top u_id_stage reg2_rdata", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22040175_top u_id_stage imm", false,-1, 63,0);
        tracep->declBus(c+15,"ysyx_22040175_top u_id_stage alu_op", false,-1, 4,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_id_stage alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+17,"ysyx_22040175_top u_id_stage unknown_code", false,-1, 63,0);
        tracep->declBit(c+19,"ysyx_22040175_top u_id_stage jalr", false,-1);
        tracep->declBit(c+20,"ysyx_22040175_top u_id_stage ebreak_flag", false,-1);
        tracep->declBus(c+21,"ysyx_22040175_top u_id_stage wmask", false,-1, 7,0);
        tracep->declBit(c+22,"ysyx_22040175_top u_id_stage s_flag", false,-1);
        tracep->declBus(c+23,"ysyx_22040175_top u_id_stage s_imm", false,-1, 31,0);
        tracep->declBus(c+24,"ysyx_22040175_top u_id_stage expand_signed", false,-1, 3,0);
        tracep->declBus(c+25,"ysyx_22040175_top u_id_stage rd_flag", false,-1, 2,0);
        tracep->declBus(c+26,"ysyx_22040175_top u_id_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+28,"ysyx_22040175_top u_id_stage control_rest", false,-1);
        tracep->declQuad(c+49,"ysyx_22040175_top u_id_stage from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+75,"ysyx_22040175_top u_id_stage from_mem_alu_res", false,-1, 63,0);
        tracep->declBus(c+43,"ysyx_22040175_top u_id_stage ex_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+208,"ysyx_22040175_top u_id_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+210,"ysyx_22040175_top u_id_stage alu_src2", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_id_stage rest_id_mem", false,-1);
        tracep->declQuad(c+557,"ysyx_22040175_top u_id_stage end_write_addr", false,-1, 63,0);
        tracep->declQuad(c+77,"ysyx_22040175_top u_id_stage wb_hazard_result", false,-1, 63,0);
        tracep->declBus(c+56,"ysyx_22040175_top u_id_stage mem_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+39,"ysyx_22040175_top u_id_stage ex_s_flag", false,-1);
        tracep->declBit(c+59,"ysyx_22040175_top u_id_stage mem_s_flag", false,-1);
        tracep->declBit(c+29,"ysyx_22040175_top u_id_stage rest_wb_hazard", false,-1);
        tracep->declBus(c+105,"ysyx_22040175_top u_id_stage imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+106,"ysyx_22040175_top u_id_stage reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+107,"ysyx_22040175_top u_id_stage reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+646,"ysyx_22040175_top u_id_stage data_rest_cond", false,-1, 3,0);
        tracep->declBit(c+647,"ysyx_22040175_top u_id_stage write_ready", false,-1);
        tracep->declBit(c+648,"ysyx_22040175_top u_id_stage no_use", false,-1);
        tracep->declBit(c+649,"ysyx_22040175_top u_id_stage ena", false,-1);
        tracep->declQuad(c+101,"ysyx_22040175_top u_id_stage u_ctrl inst", false,-1, 63,0);
        tracep->declBit(c+103,"ysyx_22040175_top u_id_stage u_ctrl branch", false,-1);
        tracep->declBit(c+104,"ysyx_22040175_top u_id_stage u_ctrl jump", false,-1);
        tracep->declBit(c+11,"ysyx_22040175_top u_id_stage u_ctrl reg_wen", false,-1);
        tracep->declBus(c+12,"ysyx_22040175_top u_id_stage u_ctrl reg_waddr", false,-1, 4,0);
        tracep->declBus(c+106,"ysyx_22040175_top u_id_stage u_ctrl reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+107,"ysyx_22040175_top u_id_stage u_ctrl reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+105,"ysyx_22040175_top u_id_stage u_ctrl imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+15,"ysyx_22040175_top u_id_stage u_ctrl alu_op", false,-1, 4,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_id_stage u_ctrl alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+17,"ysyx_22040175_top u_id_stage u_ctrl unknown_code", false,-1, 63,0);
        tracep->declBit(c+19,"ysyx_22040175_top u_id_stage u_ctrl jalr", false,-1);
        tracep->declBit(c+20,"ysyx_22040175_top u_id_stage u_ctrl ebreak_flag", false,-1);
        tracep->declBus(c+21,"ysyx_22040175_top u_id_stage u_ctrl wmask", false,-1, 7,0);
        tracep->declBit(c+22,"ysyx_22040175_top u_id_stage u_ctrl s_flag", false,-1);
        tracep->declBus(c+23,"ysyx_22040175_top u_id_stage u_ctrl s_imm", false,-1, 31,0);
        tracep->declBus(c+24,"ysyx_22040175_top u_id_stage u_ctrl expand_signed", false,-1, 3,0);
        tracep->declBus(c+25,"ysyx_22040175_top u_id_stage u_ctrl rd_flag", false,-1, 2,0);
        tracep->declBus(c+26,"ysyx_22040175_top u_id_stage u_ctrl rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+108,"ysyx_22040175_top u_id_stage u_ctrl opcode", false,-1, 6,0);
        tracep->declBus(c+109,"ysyx_22040175_top u_id_stage u_ctrl funct3", false,-1, 2,0);
        tracep->declBus(c+110,"ysyx_22040175_top u_id_stage u_ctrl funct7", false,-1, 6,0);
        tracep->declBus(c+111,"ysyx_22040175_top u_id_stage u_ctrl rd", false,-1, 4,0);
        tracep->declBus(c+112,"ysyx_22040175_top u_id_stage u_ctrl rs1", false,-1, 4,0);
        tracep->declBus(c+113,"ysyx_22040175_top u_id_stage u_ctrl rs2", false,-1, 4,0);
        tracep->declQuad(c+101,"ysyx_22040175_top u_id_stage u_imm_gen inst", false,-1, 63,0);
        tracep->declBus(c+105,"ysyx_22040175_top u_id_stage u_imm_gen imm_gen_op", false,-1, 2,0);
        tracep->declQuad(c+13,"ysyx_22040175_top u_id_stage u_imm_gen imm", false,-1, 63,0);
        tracep->declBit(c+546,"ysyx_22040175_top u_id_stage u_id_rest clk", false,-1);
        tracep->declBit(c+207,"ysyx_22040175_top u_id_stage u_id_rest rst_n", false,-1);
        tracep->declArray(c+114,"ysyx_22040175_top u_id_stage u_id_rest id_pc", false,-1, 64,0);
        tracep->declBus(c+106,"ysyx_22040175_top u_id_stage u_id_rest reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+107,"ysyx_22040175_top u_id_stage u_id_rest reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+33,"ysyx_22040175_top u_id_stage u_id_rest reg_waddr", false,-1, 4,0);
        tracep->declBit(c+647,"ysyx_22040175_top u_id_stage u_id_rest write_ready", false,-1);
        tracep->declBus(c+43,"ysyx_22040175_top u_id_stage u_id_rest rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+27,"ysyx_22040175_top u_id_stage u_id_rest rest_from_id", false,-1);
        tracep->declBus(c+46,"ysyx_22040175_top u_id_stage u_id_rest ex_inst", false,-1, 31,0);
        tracep->declQuad(c+650,"ysyx_22040175_top u_id_stage u_id_rest from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+652,"ysyx_22040175_top u_id_stage u_id_rest from_mem_alu_res", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_id_stage u_id_rest rest_id_mem", false,-1);
        tracep->declBus(c+56,"ysyx_22040175_top u_id_stage u_id_rest wb_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+29,"ysyx_22040175_top u_id_stage u_id_rest rest_wb_hazard", false,-1);
        tracep->declBus(c+23,"ysyx_22040175_top u_id_stage u_id_rest s_imm", false,-1, 31,0);
        tracep->declBit(c+39,"ysyx_22040175_top u_id_stage u_id_rest ex_s_flag", false,-1);
        tracep->declBit(c+59,"ysyx_22040175_top u_id_stage u_id_rest mem_s_flag", false,-1);
        tracep->declBit(c+117,"ysyx_22040175_top u_id_stage u_id_rest delay_rest_id_mem", false,-1);
        tracep->declBit(c+546,"ysyx_22040175_top u_id_stage u_id_control_rest clk", false,-1);
        tracep->declBit(c+207,"ysyx_22040175_top u_id_stage u_id_control_rest rst_n", false,-1);
        tracep->declBit(c+103,"ysyx_22040175_top u_id_stage u_id_control_rest branch", false,-1);
        tracep->declBit(c+104,"ysyx_22040175_top u_id_stage u_id_control_rest jump", false,-1);
        tracep->declBit(c+28,"ysyx_22040175_top u_id_stage u_id_control_rest control_rest", false,-1);
        tracep->declBit(c+27,"ysyx_22040175_top u_id_stage u_id_control_rest rest_from_id", false,-1);
        tracep->declBit(c+546,"ysyx_22040175_top u_id_stage u_mux_dt_pipe clk", false,-1);
        tracep->declBit(c+207,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rst_n", false,-1);
        tracep->declBus(c+106,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+107,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+33,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg_waddr", false,-1, 4,0);
        tracep->declBus(c+43,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+340,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+342,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg2_rdata", false,-1, 63,0);
        tracep->declQuad(c+49,"ysyx_22040175_top u_id_stage u_mux_dt_pipe from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+75,"ysyx_22040175_top u_id_stage u_mux_dt_pipe from_mem_alu_res", false,-1, 63,0);
        tracep->declBit(c+28,"ysyx_22040175_top u_id_stage u_mux_dt_pipe control_rest", false,-1);
        tracep->declBit(c+27,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rest_from_id", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+344+i*2,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+22,"ysyx_22040175_top u_id_stage u_mux_dt_pipe s_flag", false,-1);
        tracep->declQuad(c+557,"ysyx_22040175_top u_id_stage u_mux_dt_pipe end_write_addr", false,-1, 63,0);
        tracep->declQuad(c+77,"ysyx_22040175_top u_id_stage u_mux_dt_pipe wb_hazard_result", false,-1, 63,0);
        tracep->declBus(c+56,"ysyx_22040175_top u_id_stage u_mux_dt_pipe mem_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rest_id_mem", false,-1);
        tracep->declBit(c+29,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rest_wb_hazard", false,-1);
        tracep->declBus(c+408,"ysyx_22040175_top u_id_stage u_mux_dt_pipe data_rest_cond", false,-1, 2,0);
        tracep->declBus(c+654,"ysyx_22040175_top u_id_stage u_mux_dt_pipe test", false,-1, 2,0);
        tracep->declBit(c+118,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_rest_id_mem", false,-1);
        tracep->declBit(c+119,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_control_rest", false,-1);
        tracep->declBus(c+120,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+121,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_data_rest_cond", false,-1, 2,0);
        tracep->declQuad(c+122,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+124,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_reg2_rdata", false,-1, 63,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_id_stage u_mux_alu alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+340,"ysyx_22040175_top u_id_stage u_mux_alu reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+342,"ysyx_22040175_top u_id_stage u_mux_alu reg2_rdata", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22040175_top u_id_stage u_mux_alu imm", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22040175_top u_id_stage u_mux_alu curr_pc", false,-1, 63,0);
        tracep->declBit(c+648,"ysyx_22040175_top u_id_stage u_mux_alu no_use", false,-1);
        tracep->declQuad(c+208,"ysyx_22040175_top u_id_stage u_mux_alu alu_src1", false,-1, 63,0);
        tracep->declQuad(c+210,"ysyx_22040175_top u_id_stage u_mux_alu alu_src2", false,-1, 63,0);
        tracep->declBit(c+649,"ysyx_22040175_top u_id_stage u_mux_pc ena", false,-1);
        tracep->declBit(c+103,"ysyx_22040175_top u_id_stage u_mux_pc branch", false,-1);
        tracep->declBit(c+104,"ysyx_22040175_top u_id_stage u_mux_pc jump", false,-1);
        tracep->declBit(c+19,"ysyx_22040175_top u_id_stage u_mux_pc jalr", false,-1);
        tracep->declQuad(c+13,"ysyx_22040175_top u_id_stage u_mux_pc imm", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22040175_top u_id_stage u_mux_pc curr_pc", false,-1, 63,0);
        tracep->declQuad(c+555,"ysyx_22040175_top u_id_stage u_mux_pc next_pc", false,-1, 63,0);
        tracep->declBit(c+20,"ysyx_22040175_top u_id_stage u_mux_pc ebreak_flag", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+409+i*2,"ysyx_22040175_top u_id_stage u_mux_pc reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+23,"ysyx_22040175_top u_id_stage u_mux_pc s_imm", false,-1, 31,0);
        tracep->declBus(c+15,"ysyx_22040175_top u_id_stage u_mux_pc alu_op", false,-1, 4,0);
        tracep->declQuad(c+208,"ysyx_22040175_top u_id_stage u_mux_pc alu_src1", false,-1, 63,0);
        tracep->declQuad(c+210,"ysyx_22040175_top u_id_stage u_mux_pc alu_src2", false,-1, 63,0);
        tracep->declBus(c+655,"ysyx_22040175_top u_id_stage u_mux_pc data_rest_cond", false,-1, 2,0);
        tracep->declQuad(c+340,"ysyx_22040175_top u_id_stage u_mux_pc reg1_rdata", false,-1, 63,0);
        tracep->declBit(c+473,"ysyx_22040175_top u_id_stage u_mux_pc zero", false,-1);
        tracep->declQuad(c+474,"ysyx_22040175_top u_id_stage u_mux_pc signed_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+476,"ysyx_22040175_top u_id_stage u_mux_pc signed_alu_src2", false,-1, 63,0);
        tracep->declBus(c+478,"ysyx_22040175_top u_id_stage u_mux_pc test", false,-1, 2,0);
        tracep->declBit(c+546,"ysyx_22040175_top u_id_ex_regs clk", false,-1);
        tracep->declBit(c+207,"ysyx_22040175_top u_id_ex_regs rst_n", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_id_ex_regs pc_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_22040175_top u_id_ex_regs pc_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+11,"ysyx_22040175_top u_id_ex_regs reg_wen_id_ex_i", false,-1);
        tracep->declBus(c+12,"ysyx_22040175_top u_id_ex_regs reg_waddr_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+15,"ysyx_22040175_top u_id_ex_regs alu_op_id_ex_i", false,-1, 4,0);
        tracep->declQuad(c+17,"ysyx_22040175_top u_id_ex_regs unknown_code_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+20,"ysyx_22040175_top u_id_ex_regs ebreak_flag_id_ex_i", false,-1);
        tracep->declBus(c+21,"ysyx_22040175_top u_id_ex_regs wmask_id_ex_i", false,-1, 7,0);
        tracep->declBit(c+22,"ysyx_22040175_top u_id_ex_regs s_flag_id_ex_i", false,-1);
        tracep->declBus(c+23,"ysyx_22040175_top u_id_ex_regs s_imm_id_ex_i", false,-1, 31,0);
        tracep->declBus(c+24,"ysyx_22040175_top u_id_ex_regs expand_signed_id_ex_i", false,-1, 3,0);
        tracep->declBus(c+25,"ysyx_22040175_top u_id_ex_regs rd_flag_id_ex_i", false,-1, 2,0);
        tracep->declBus(c+26,"ysyx_22040175_top u_id_ex_regs rd_buf_flag_id_ex_i", false,-1, 2,0);
        tracep->declBit(c+32,"ysyx_22040175_top u_id_ex_regs reg_wen_id_ex_o", false,-1);
        tracep->declBus(c+33,"ysyx_22040175_top u_id_ex_regs reg_waddr_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+34,"ysyx_22040175_top u_id_ex_regs alu_op_id_ex_o", false,-1, 4,0);
        tracep->declQuad(c+35,"ysyx_22040175_top u_id_ex_regs unknown_code_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+37,"ysyx_22040175_top u_id_ex_regs ebreak_flag_id_ex_o", false,-1);
        tracep->declBus(c+38,"ysyx_22040175_top u_id_ex_regs wmask_id_ex_o", false,-1, 7,0);
        tracep->declBit(c+39,"ysyx_22040175_top u_id_ex_regs s_flag_id_ex_o", false,-1);
        tracep->declBus(c+40,"ysyx_22040175_top u_id_ex_regs s_imm_id_ex_o", false,-1, 31,0);
        tracep->declBus(c+41,"ysyx_22040175_top u_id_ex_regs expand_signed_id_ex_o", false,-1, 3,0);
        tracep->declBus(c+42,"ysyx_22040175_top u_id_ex_regs rd_flag_id_ex_o", false,-1, 2,0);
        tracep->declBus(c+43,"ysyx_22040175_top u_id_ex_regs rd_buf_flag_id_ex_o", false,-1, 2,0);
        tracep->declQuad(c+656,"ysyx_22040175_top u_id_ex_regs reg_wdata_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+10,"ysyx_22040175_top u_id_ex_regs time_set_id_ex_i", false,-1);
        tracep->declQuad(c+658,"ysyx_22040175_top u_id_ex_regs reg_wdata_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+635,"ysyx_22040175_top u_id_ex_regs time_set_id_ex_o", false,-1);
        tracep->declBit(c+9,"ysyx_22040175_top u_id_ex_regs ena_id_ex_i", false,-1);
        tracep->declBit(c+44,"ysyx_22040175_top u_id_ex_regs ena_id_ex_o", false,-1);
        tracep->declQuad(c+208,"ysyx_22040175_top u_id_ex_regs alu_src1_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+210,"ysyx_22040175_top u_id_ex_regs alu_src2_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_id_ex_regs rest_id_mem_id_ex_i", false,-1);
        tracep->declQuad(c+51,"ysyx_22040175_top u_id_ex_regs alu_src1_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+53,"ysyx_22040175_top u_id_ex_regs alu_src2_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+45,"ysyx_22040175_top u_id_ex_regs rest_id_mem_id_ex_o", false,-1);
        tracep->declQuad(c+101,"ysyx_22040175_top u_id_ex_regs id_inst", false,-1, 63,0);
        tracep->declQuad(c+126,"ysyx_22040175_top u_id_ex_regs ex_inst", false,-1, 63,0);
        tracep->declQuad(c+557,"ysyx_22040175_top u_id_ex_regs end_write_addr_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+47,"ysyx_22040175_top u_id_ex_regs end_write_addr_id_ex_o", false,-1, 63,0);
        tracep->declBus(c+34,"ysyx_22040175_top u_ex_stage alu_op", false,-1, 4,0);
        tracep->declQuad(c+51,"ysyx_22040175_top u_ex_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+53,"ysyx_22040175_top u_ex_stage alu_src2", false,-1, 63,0);
        tracep->declBit(c+128,"ysyx_22040175_top u_ex_stage zero", false,-1);
        tracep->declQuad(c+49,"ysyx_22040175_top u_ex_stage alu_res", false,-1, 63,0);
        tracep->declBus(c+42,"ysyx_22040175_top u_ex_stage rd_flag", false,-1, 2,0);
        tracep->declBus(c+41,"ysyx_22040175_top u_ex_stage expand_signed", false,-1, 3,0);
        tracep->declBus(c+34,"ysyx_22040175_top u_ex_stage u_alu alu_op", false,-1, 4,0);
        tracep->declQuad(c+51,"ysyx_22040175_top u_ex_stage u_alu alu_src1", false,-1, 63,0);
        tracep->declQuad(c+53,"ysyx_22040175_top u_ex_stage u_alu alu_src2", false,-1, 63,0);
        tracep->declBit(c+128,"ysyx_22040175_top u_ex_stage u_alu zero", false,-1);
        tracep->declQuad(c+49,"ysyx_22040175_top u_ex_stage u_alu alu_res_ex_sign", false,-1, 63,0);
        tracep->declBus(c+42,"ysyx_22040175_top u_ex_stage u_alu rd_flag", false,-1, 2,0);
        tracep->declBus(c+41,"ysyx_22040175_top u_ex_stage u_alu expand_signed", false,-1, 3,0);
        tracep->declBus(c+129,"ysyx_22040175_top u_ex_stage u_alu test", false,-1, 2,0);
        tracep->declQuad(c+130,"ysyx_22040175_top u_ex_stage u_alu alu_res", false,-1, 63,0);
        tracep->declQuad(c+132,"ysyx_22040175_top u_ex_stage u_alu signed_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+134,"ysyx_22040175_top u_ex_stage u_alu signed_alu_src2", false,-1, 63,0);
        tracep->declBit(c+546,"ysyx_22040175_top u_ex_mem_regs clk", false,-1);
        tracep->declBit(c+207,"ysyx_22040175_top u_ex_mem_regs rst_n", false,-1);
        tracep->declBit(c+32,"ysyx_22040175_top u_ex_mem_regs reg_wen_ex_mem_i", false,-1);
        tracep->declBus(c+33,"ysyx_22040175_top u_ex_mem_regs reg_waddr_ex_mem_i", false,-1, 4,0);
        tracep->declQuad(c+49,"ysyx_22040175_top u_ex_mem_regs from_ex_alu_res_ex_mem_i", false,-1, 63,0);
        tracep->declBus(c+38,"ysyx_22040175_top u_ex_mem_regs wmask_ex_mem_i", false,-1, 7,0);
        tracep->declBit(c+39,"ysyx_22040175_top u_ex_mem_regs s_flag_ex_mem_i", false,-1);
        tracep->declBit(c+635,"ysyx_22040175_top u_ex_mem_regs time_set_ex_mem_i", false,-1);
        tracep->declBus(c+40,"ysyx_22040175_top u_ex_mem_regs s_imm_ex_mem_i", false,-1, 31,0);
        tracep->declBus(c+41,"ysyx_22040175_top u_ex_mem_regs expand_signed_ex_mem_i", false,-1, 3,0);
        tracep->declBit(c+37,"ysyx_22040175_top u_ex_mem_regs ebreak_flag_ex_mem_i", false,-1);
        tracep->declBus(c+43,"ysyx_22040175_top u_ex_mem_regs rd_buf_flag_ex_mem_i", false,-1, 2,0);
        tracep->declBus(c+34,"ysyx_22040175_top u_ex_mem_regs alu_op_ex_mem_i", false,-1, 4,0);
        tracep->declQuad(c+51,"ysyx_22040175_top u_ex_mem_regs alu_src1_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+53,"ysyx_22040175_top u_ex_mem_regs alu_src2_ex_mem_i", false,-1, 63,0);
        tracep->declBit(c+55,"ysyx_22040175_top u_ex_mem_regs reg_wen_ex_mem_o", false,-1);
        tracep->declBus(c+56,"ysyx_22040175_top u_ex_mem_regs reg_waddr_ex_mem_o", false,-1, 4,0);
        tracep->declBit(c+57,"ysyx_22040175_top u_ex_mem_regs ebreak_flag_ex_mem_o", false,-1);
        tracep->declBus(c+58,"ysyx_22040175_top u_ex_mem_regs wmask_ex_mem_o", false,-1, 7,0);
        tracep->declBit(c+59,"ysyx_22040175_top u_ex_mem_regs s_flag_ex_mem_o", false,-1);
        tracep->declBit(c+60,"ysyx_22040175_top u_ex_mem_regs time_set_ex_mem_o", false,-1);
        tracep->declBus(c+61,"ysyx_22040175_top u_ex_mem_regs s_imm_ex_mem_o", false,-1, 31,0);
        tracep->declBus(c+62,"ysyx_22040175_top u_ex_mem_regs expand_signed_ex_mem_o", false,-1, 3,0);
        tracep->declBus(c+63,"ysyx_22040175_top u_ex_mem_regs rd_buf_flag_ex_mem_o", false,-1, 2,0);
        tracep->declBus(c+64,"ysyx_22040175_top u_ex_mem_regs alu_op_ex_mem_o", false,-1, 4,0);
        tracep->declQuad(c+65,"ysyx_22040175_top u_ex_mem_regs alu_src1_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+67,"ysyx_22040175_top u_ex_mem_regs alu_src2_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+69,"ysyx_22040175_top u_ex_mem_regs from_ex_alu_res_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_22040175_top u_ex_mem_regs pc_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+71,"ysyx_22040175_top u_ex_mem_regs pc_ex_mem_o", false,-1, 63,0);
        tracep->declBit(c+45,"ysyx_22040175_top u_ex_mem_regs rest_id_mem_ex_mem_i", false,-1);
        tracep->declBit(c+94,"ysyx_22040175_top u_ex_mem_regs rest_id_mem_ex_mem_o", false,-1);
        tracep->declQuad(c+47,"ysyx_22040175_top u_ex_mem_regs end_write_addr_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+73,"ysyx_22040175_top u_ex_mem_regs end_write_addr_ex_mem_o", false,-1, 63,0);
        tracep->declBus(c+63,"ysyx_22040175_top u_mem_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+64,"ysyx_22040175_top u_mem_stage alu_op", false,-1, 4,0);
        tracep->declQuad(c+65,"ysyx_22040175_top u_mem_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+67,"ysyx_22040175_top u_mem_stage alu_src2", false,-1, 63,0);
        tracep->declBit(c+660,"ysyx_22040175_top u_mem_stage no_use", false,-1);
        tracep->declQuad(c+75,"ysyx_22040175_top u_mem_stage sign_alu_res", false,-1, 63,0);
        tracep->declQuad(c+69,"ysyx_22040175_top u_mem_stage mem_from_ex_alu_res", false,-1, 63,0);
        tracep->declBus(c+62,"ysyx_22040175_top u_mem_stage mem_expand_signed", false,-1, 3,0);
        tracep->declQuad(c+77,"ysyx_22040175_top u_mem_stage wb_hazard_result", false,-1, 63,0);
        tracep->declQuad(c+136,"ysyx_22040175_top u_mem_stage rd_buf_lw", false,-1, 63,0);
        tracep->declQuad(c+138,"ysyx_22040175_top u_mem_stage alu_res", false,-1, 63,0);
        tracep->declBit(c+546,"ysyx_22040175_top u_mem_wb_regs clk", false,-1);
        tracep->declBit(c+207,"ysyx_22040175_top u_mem_wb_regs rst_n", false,-1);
        tracep->declBit(c+55,"ysyx_22040175_top u_mem_wb_regs reg_wen_mem_wb_i", false,-1);
        tracep->declBus(c+56,"ysyx_22040175_top u_mem_wb_regs reg_waddr_mem_wb_i", false,-1, 4,0);
        tracep->declQuad(c+69,"ysyx_22040175_top u_mem_wb_regs from_ex_alu_res_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+75,"ysyx_22040175_top u_mem_wb_regs from_mem_alu_res_mem_wb_i", false,-1, 63,0);
        tracep->declBus(c+58,"ysyx_22040175_top u_mem_wb_regs wmask_mem_wb_i", false,-1, 7,0);
        tracep->declBit(c+59,"ysyx_22040175_top u_mem_wb_regs s_flag_mem_wb_i", false,-1);
        tracep->declBit(c+60,"ysyx_22040175_top u_mem_wb_regs time_set_mem_wb_i", false,-1);
        tracep->declBus(c+61,"ysyx_22040175_top u_mem_wb_regs s_imm_mem_wb_i", false,-1, 31,0);
        tracep->declBus(c+62,"ysyx_22040175_top u_mem_wb_regs expand_signed_mem_wb_i", false,-1, 3,0);
        tracep->declBit(c+57,"ysyx_22040175_top u_mem_wb_regs ebreak_flag_mem_wb_i", false,-1);
        tracep->declBus(c+63,"ysyx_22040175_top u_mem_wb_regs rd_buf_flag_mem_wb_i", false,-1, 2,0);
        tracep->declBit(c+79,"ysyx_22040175_top u_mem_wb_regs reg_wen_mem_wb_o", false,-1);
        tracep->declBus(c+80,"ysyx_22040175_top u_mem_wb_regs reg_waddr_mem_wb_o", false,-1, 4,0);
        tracep->declQuad(c+661,"ysyx_22040175_top u_mem_wb_regs reg_wdata_mem_wb_o", false,-1, 63,0);
        tracep->declBus(c+81,"ysyx_22040175_top u_mem_wb_regs wmask_mem_wb_o", false,-1, 7,0);
        tracep->declBit(c+82,"ysyx_22040175_top u_mem_wb_regs s_flag_mem_wb_o", false,-1);
        tracep->declBit(c+83,"ysyx_22040175_top u_mem_wb_regs time_set_mem_wb_o", false,-1);
        tracep->declBus(c+84,"ysyx_22040175_top u_mem_wb_regs s_imm_mem_wb_o", false,-1, 31,0);
        tracep->declBus(c+85,"ysyx_22040175_top u_mem_wb_regs expand_signed_mem_wb_o", false,-1, 3,0);
        tracep->declBit(c+86,"ysyx_22040175_top u_mem_wb_regs ebreak_flag_mem_wb_o", false,-1);
        tracep->declBus(c+87,"ysyx_22040175_top u_mem_wb_regs rd_buf_flag_mem_wb_o", false,-1, 2,0);
        tracep->declQuad(c+88,"ysyx_22040175_top u_mem_wb_regs from_ex_alu_res_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22040175_top u_mem_wb_regs from_mem_alu_res_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+663,"ysyx_22040175_top u_mem_wb_regs ex_pc_ready_mem_wb_i", false,-1);
        tracep->declBit(c+140,"ysyx_22040175_top u_mem_wb_regs ex_pc_ready_mem_wb_o", false,-1);
        tracep->declQuad(c+71,"ysyx_22040175_top u_mem_wb_regs pc_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+92,"ysyx_22040175_top u_mem_wb_regs pc_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+94,"ysyx_22040175_top u_mem_wb_regs rest_id_mem_ex_mem_o", false,-1);
        tracep->declQuad(c+73,"ysyx_22040175_top u_mem_wb_regs end_write_add_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+95,"ysyx_22040175_top u_mem_wb_regs end_write_add_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+546,"ysyx_22040175_top u_wb_stage clk", false,-1);
        tracep->declBit(c+207,"ysyx_22040175_top u_wb_stage rst_n", false,-1);
        tracep->declBit(c+79,"ysyx_22040175_top u_wb_stage reg_wen", false,-1);
        tracep->declBus(c+80,"ysyx_22040175_top u_wb_stage reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+88,"ysyx_22040175_top u_wb_stage from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22040175_top u_wb_stage from_mem_alu_res", false,-1, 63,0);
        tracep->declBus(c+81,"ysyx_22040175_top u_wb_stage wmask", false,-1, 7,0);
        tracep->declBit(c+82,"ysyx_22040175_top u_wb_stage s_flag", false,-1);
        tracep->declBit(c+552,"ysyx_22040175_top u_wb_stage time_set", false,-1);
        tracep->declBus(c+84,"ysyx_22040175_top u_wb_stage s_imm", false,-1, 31,0);
        tracep->declBus(c+85,"ysyx_22040175_top u_wb_stage expand_signed", false,-1, 3,0);
        tracep->declBus(c+87,"ysyx_22040175_top u_wb_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+86,"ysyx_22040175_top u_wb_stage ebreak_flag", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+479+i*2,"ysyx_22040175_top u_wb_stage reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+543,"ysyx_22040175_top u_wb_stage write_ready", false,-1);
        tracep->declBit(c+664,"ysyx_22040175_top u_wb_stage wb_no_use", false,-1);
        tracep->declQuad(c+92,"ysyx_22040175_top u_wb_stage wb_pc", false,-1, 63,0);
        tracep->declQuad(c+97,"ysyx_22040175_top u_wb_stage wb_delay_pc", false,-1, 63,0);
        tracep->declQuad(c+95,"ysyx_22040175_top u_wb_stage end_write_addr", false,-1, 63,0);
        tracep->declQuad(c+141,"ysyx_22040175_top u_wb_stage reg_wdata", false,-1, 63,0);
        tracep->declQuad(c+544,"ysyx_22040175_top u_wb_stage end_wb_waddr", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+143+i*2,"ysyx_22040175_top u_wb_stage wb_delay_reg_f", true,(i+0), 63,0);}}
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
        tracep->fullBit(oldp+1,(vlSelf->ysyx_22040175_top__DOT__if_ena));
        tracep->fullIData(oldp+2,((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata)),32);
        tracep->fullQData(oldp+3,(vlSelf->ysyx_22040175_top__DOT__if_pc),64);
        tracep->fullBit(oldp+5,(vlSelf->ysyx_22040175_top__DOT__rest_id_mem));
        tracep->fullIData(oldp+6,(vlSelf->ysyx_22040175_top__DOT__id_inst),32);
        tracep->fullQData(oldp+7,(vlSelf->ysyx_22040175_top__DOT__id_pc),64);
        tracep->fullBit(oldp+9,(vlSelf->ysyx_22040175_top__DOT__id_ena));
        tracep->fullBit(oldp+10,(vlSelf->ysyx_22040175_top__DOT__id_time_set));
        tracep->fullBit(oldp+11,(vlSelf->ysyx_22040175_top__DOT__id_reg_wen));
        tracep->fullCData(oldp+12,(vlSelf->ysyx_22040175_top__DOT__id_reg_waddr),5);
        tracep->fullQData(oldp+13,(vlSelf->ysyx_22040175_top__DOT__id_imm),64);
        tracep->fullCData(oldp+15,(vlSelf->ysyx_22040175_top__DOT__id_alu_op),5);
        tracep->fullCData(oldp+16,(vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel),2);
        tracep->fullQData(oldp+17,(vlSelf->ysyx_22040175_top__DOT__id_unknown_code),64);
        tracep->fullBit(oldp+19,(vlSelf->ysyx_22040175_top__DOT__id_jalr));
        tracep->fullBit(oldp+20,(vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag));
        tracep->fullCData(oldp+21,(vlSelf->ysyx_22040175_top__DOT__id_wmask),8);
        tracep->fullBit(oldp+22,(vlSelf->ysyx_22040175_top__DOT__id_s_flag));
        tracep->fullIData(oldp+23,(vlSelf->ysyx_22040175_top__DOT__id_s_imm),32);
        tracep->fullCData(oldp+24,(vlSelf->ysyx_22040175_top__DOT__id_expand_signed),4);
        tracep->fullCData(oldp+25,(vlSelf->ysyx_22040175_top__DOT__id_rd_flag),3);
        tracep->fullCData(oldp+26,(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag),3);
        tracep->fullBit(oldp+27,(vlSelf->ysyx_22040175_top__DOT__rest_from_id));
        tracep->fullBit(oldp+28,(vlSelf->ysyx_22040175_top__DOT__id_control_rest));
        tracep->fullBit(oldp+29,(vlSelf->ysyx_22040175_top__DOT__rest_wb_hazard));
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22040175_top__DOT__ex_pc),64);
        tracep->fullBit(oldp+32,(vlSelf->ysyx_22040175_top__DOT__ex_reg_wen));
        tracep->fullCData(oldp+33,(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr),5);
        tracep->fullCData(oldp+34,(vlSelf->ysyx_22040175_top__DOT__ex_alu_op),5);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22040175_top__DOT__ex_unknown_code),64);
        tracep->fullBit(oldp+37,(vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag));
        tracep->fullCData(oldp+38,(vlSelf->ysyx_22040175_top__DOT__ex_wmask),8);
        tracep->fullBit(oldp+39,(vlSelf->ysyx_22040175_top__DOT__ex_s_flag));
        tracep->fullIData(oldp+40,(vlSelf->ysyx_22040175_top__DOT__ex_s_imm),32);
        tracep->fullCData(oldp+41,(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed),4);
        tracep->fullCData(oldp+42,(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag),3);
        tracep->fullCData(oldp+43,(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag),3);
        tracep->fullBit(oldp+44,(vlSelf->ysyx_22040175_top__DOT__ex_ena));
        tracep->fullBit(oldp+45,(vlSelf->ysyx_22040175_top__DOT__ex_rest_id_mem));
        tracep->fullIData(oldp+46,((IData)(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst)),32);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22040175_top__DOT__ex_end_write_addr),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2),64);
        tracep->fullBit(oldp+55,(vlSelf->ysyx_22040175_top__DOT__mem_reg_wen));
        tracep->fullCData(oldp+56,(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr),5);
        tracep->fullBit(oldp+57,(vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag));
        tracep->fullCData(oldp+58,(vlSelf->ysyx_22040175_top__DOT__mem_wmask),8);
        tracep->fullBit(oldp+59,(vlSelf->ysyx_22040175_top__DOT__mem_s_flag));
        tracep->fullBit(oldp+60,(vlSelf->ysyx_22040175_top__DOT__mem_time_set));
        tracep->fullIData(oldp+61,(vlSelf->ysyx_22040175_top__DOT__mem_s_imm),32);
        tracep->fullCData(oldp+62,(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed),4);
        tracep->fullCData(oldp+63,(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag),3);
        tracep->fullCData(oldp+64,(vlSelf->ysyx_22040175_top__DOT__mem_alu_op),5);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src1),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src2),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22040175_top__DOT__mem_pc),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22040175_top__DOT__mem_end_write_addr),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22040175_top__DOT__wb_hazard_result),64);
        tracep->fullBit(oldp+79,(vlSelf->ysyx_22040175_top__DOT__wb_reg_wen));
        tracep->fullCData(oldp+80,(vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr),5);
        tracep->fullCData(oldp+81,(vlSelf->ysyx_22040175_top__DOT__wb_wmask),8);
        tracep->fullBit(oldp+82,(vlSelf->ysyx_22040175_top__DOT__wb_s_flag));
        tracep->fullBit(oldp+83,(vlSelf->ysyx_22040175_top__DOT__wb_time_set));
        tracep->fullIData(oldp+84,(vlSelf->ysyx_22040175_top__DOT__wb_s_imm),32);
        tracep->fullCData(oldp+85,(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed),4);
        tracep->fullBit(oldp+86,(vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag));
        tracep->fullCData(oldp+87,(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag),3);
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res),64);
        tracep->fullQData(oldp+90,(vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res),64);
        tracep->fullQData(oldp+92,(vlSelf->ysyx_22040175_top__DOT__wb_pc),64);
        tracep->fullBit(oldp+94,(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem));
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22040175_top__DOT__wb_end_write_addr),64);
        tracep->fullQData(oldp+97,(vlSelf->ysyx_22040175_top__DOT__wb_delay_pc),64);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata),64);
        tracep->fullQData(oldp+101,((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))),64);
        tracep->fullBit(oldp+103,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch));
        tracep->fullBit(oldp+104,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump));
        tracep->fullCData(oldp+105,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op),3);
        tracep->fullCData(oldp+106,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr),5);
        tracep->fullCData(oldp+107,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr),5);
        tracep->fullCData(oldp+108,((0x7fU & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))),7);
        tracep->fullCData(oldp+109,((7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))),3);
        tracep->fullCData(oldp+110,((0x7fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x19U)))),7);
        tracep->fullCData(oldp+111,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 7U)))),5);
        tracep->fullCData(oldp+112,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xfU)))),5);
        tracep->fullCData(oldp+113,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x14U)))),5);
        VL_EXTEND_WQ(65,64, __Vtemp21, vlSelf->ysyx_22040175_top__DOT__id_pc);
        tracep->fullWData(oldp+114,(__Vtemp21),65);
        tracep->fullBit(oldp+117,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem));
        tracep->fullBit(oldp+118,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_rest_id_mem));
        tracep->fullBit(oldp+119,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_control_rest));
        tracep->fullCData(oldp+120,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr),5);
        tracep->fullCData(oldp+121,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond),3);
        tracep->fullQData(oldp+122,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg1_rdata),64);
        tracep->fullQData(oldp+124,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg2_rdata),64);
        tracep->fullQData(oldp+126,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst),64);
        tracep->fullBit(oldp+128,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__zero));
        tracep->fullCData(oldp+129,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__test),3);
        tracep->fullQData(oldp+130,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res),64);
        tracep->fullQData(oldp+132,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1),64);
        tracep->fullQData(oldp+134,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2),64);
        tracep->fullQData(oldp+136,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw),64);
        tracep->fullQData(oldp+138,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res),64);
        tracep->fullBit(oldp+140,(vlSelf->ysyx_22040175_top__DOT__u_mem_wb_regs__DOT__ex_pc_ready_mem_wb_o));
        tracep->fullQData(oldp+141,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata),64);
        tracep->fullQData(oldp+143,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0]),64);
        tracep->fullQData(oldp+145,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[1]),64);
        tracep->fullQData(oldp+147,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[2]),64);
        tracep->fullQData(oldp+149,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[3]),64);
        tracep->fullQData(oldp+151,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[4]),64);
        tracep->fullQData(oldp+153,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[5]),64);
        tracep->fullQData(oldp+155,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[6]),64);
        tracep->fullQData(oldp+157,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[7]),64);
        tracep->fullQData(oldp+159,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[8]),64);
        tracep->fullQData(oldp+161,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[9]),64);
        tracep->fullQData(oldp+163,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[10]),64);
        tracep->fullQData(oldp+165,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[11]),64);
        tracep->fullQData(oldp+167,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[12]),64);
        tracep->fullQData(oldp+169,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[13]),64);
        tracep->fullQData(oldp+171,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[14]),64);
        tracep->fullQData(oldp+173,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[15]),64);
        tracep->fullQData(oldp+175,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[16]),64);
        tracep->fullQData(oldp+177,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[17]),64);
        tracep->fullQData(oldp+179,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[18]),64);
        tracep->fullQData(oldp+181,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[19]),64);
        tracep->fullQData(oldp+183,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[20]),64);
        tracep->fullQData(oldp+185,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[21]),64);
        tracep->fullQData(oldp+187,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[22]),64);
        tracep->fullQData(oldp+189,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[23]),64);
        tracep->fullQData(oldp+191,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[24]),64);
        tracep->fullQData(oldp+193,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[25]),64);
        tracep->fullQData(oldp+195,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[26]),64);
        tracep->fullQData(oldp+197,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[27]),64);
        tracep->fullQData(oldp+199,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[28]),64);
        tracep->fullQData(oldp+201,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[29]),64);
        tracep->fullQData(oldp+203,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[30]),64);
        tracep->fullQData(oldp+205,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[31]),64);
        tracep->fullBit(oldp+207,(vlSelf->ysyx_22040175_top__DOT__rst_n));
        tracep->fullQData(oldp+208,(vlSelf->ysyx_22040175_top__DOT__id_alu_src1),64);
        tracep->fullQData(oldp+210,(vlSelf->ysyx_22040175_top__DOT__id_alu_src2),64);
        tracep->fullQData(oldp+212,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0]),64);
        tracep->fullQData(oldp+214,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[1]),64);
        tracep->fullQData(oldp+216,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[2]),64);
        tracep->fullQData(oldp+218,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[3]),64);
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[4]),64);
        tracep->fullQData(oldp+222,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[5]),64);
        tracep->fullQData(oldp+224,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[6]),64);
        tracep->fullQData(oldp+226,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[7]),64);
        tracep->fullQData(oldp+228,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[8]),64);
        tracep->fullQData(oldp+230,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[9]),64);
        tracep->fullQData(oldp+232,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[10]),64);
        tracep->fullQData(oldp+234,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[11]),64);
        tracep->fullQData(oldp+236,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[12]),64);
        tracep->fullQData(oldp+238,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[13]),64);
        tracep->fullQData(oldp+240,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[14]),64);
        tracep->fullQData(oldp+242,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[15]),64);
        tracep->fullQData(oldp+244,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[16]),64);
        tracep->fullQData(oldp+246,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[17]),64);
        tracep->fullQData(oldp+248,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[18]),64);
        tracep->fullQData(oldp+250,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[19]),64);
        tracep->fullQData(oldp+252,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[20]),64);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[21]),64);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[22]),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[23]),64);
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[24]),64);
        tracep->fullQData(oldp+262,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[25]),64);
        tracep->fullQData(oldp+264,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[26]),64);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[27]),64);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[28]),64);
        tracep->fullQData(oldp+270,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[29]),64);
        tracep->fullQData(oldp+272,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[30]),64);
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[31]),64);
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0]),64);
        tracep->fullQData(oldp+278,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[1]),64);
        tracep->fullQData(oldp+280,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[2]),64);
        tracep->fullQData(oldp+282,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[3]),64);
        tracep->fullQData(oldp+284,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[4]),64);
        tracep->fullQData(oldp+286,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[5]),64);
        tracep->fullQData(oldp+288,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[6]),64);
        tracep->fullQData(oldp+290,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[7]),64);
        tracep->fullQData(oldp+292,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[8]),64);
        tracep->fullQData(oldp+294,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[9]),64);
        tracep->fullQData(oldp+296,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[10]),64);
        tracep->fullQData(oldp+298,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[11]),64);
        tracep->fullQData(oldp+300,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[12]),64);
        tracep->fullQData(oldp+302,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[13]),64);
        tracep->fullQData(oldp+304,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[14]),64);
        tracep->fullQData(oldp+306,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[15]),64);
        tracep->fullQData(oldp+308,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[16]),64);
        tracep->fullQData(oldp+310,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[17]),64);
        tracep->fullQData(oldp+312,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[18]),64);
        tracep->fullQData(oldp+314,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[19]),64);
        tracep->fullQData(oldp+316,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[20]),64);
        tracep->fullQData(oldp+318,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[21]),64);
        tracep->fullQData(oldp+320,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[22]),64);
        tracep->fullQData(oldp+322,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[23]),64);
        tracep->fullQData(oldp+324,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[24]),64);
        tracep->fullQData(oldp+326,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[25]),64);
        tracep->fullQData(oldp+328,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[26]),64);
        tracep->fullQData(oldp+330,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[27]),64);
        tracep->fullQData(oldp+332,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[28]),64);
        tracep->fullQData(oldp+334,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[29]),64);
        tracep->fullQData(oldp+336,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[30]),64);
        tracep->fullQData(oldp+338,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[31]),64);
        tracep->fullQData(oldp+340,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata),64);
        tracep->fullQData(oldp+342,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata),64);
        tracep->fullQData(oldp+344,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0]),64);
        tracep->fullQData(oldp+346,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[1]),64);
        tracep->fullQData(oldp+348,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[2]),64);
        tracep->fullQData(oldp+350,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[3]),64);
        tracep->fullQData(oldp+352,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[4]),64);
        tracep->fullQData(oldp+354,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[5]),64);
        tracep->fullQData(oldp+356,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[6]),64);
        tracep->fullQData(oldp+358,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[7]),64);
        tracep->fullQData(oldp+360,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[8]),64);
        tracep->fullQData(oldp+362,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[9]),64);
        tracep->fullQData(oldp+364,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[10]),64);
        tracep->fullQData(oldp+366,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[11]),64);
        tracep->fullQData(oldp+368,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[12]),64);
        tracep->fullQData(oldp+370,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[13]),64);
        tracep->fullQData(oldp+372,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[14]),64);
        tracep->fullQData(oldp+374,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[15]),64);
        tracep->fullQData(oldp+376,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[16]),64);
        tracep->fullQData(oldp+378,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[17]),64);
        tracep->fullQData(oldp+380,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[18]),64);
        tracep->fullQData(oldp+382,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[19]),64);
        tracep->fullQData(oldp+384,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[20]),64);
        tracep->fullQData(oldp+386,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[21]),64);
        tracep->fullQData(oldp+388,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[22]),64);
        tracep->fullQData(oldp+390,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[23]),64);
        tracep->fullQData(oldp+392,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[24]),64);
        tracep->fullQData(oldp+394,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[25]),64);
        tracep->fullQData(oldp+396,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[26]),64);
        tracep->fullQData(oldp+398,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[27]),64);
        tracep->fullQData(oldp+400,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[28]),64);
        tracep->fullQData(oldp+402,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[29]),64);
        tracep->fullQData(oldp+404,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[30]),64);
        tracep->fullQData(oldp+406,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[31]),64);
        tracep->fullCData(oldp+408,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__data_rest_cond),3);
        tracep->fullQData(oldp+409,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0]),64);
        tracep->fullQData(oldp+411,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[1]),64);
        tracep->fullQData(oldp+413,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[2]),64);
        tracep->fullQData(oldp+415,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[3]),64);
        tracep->fullQData(oldp+417,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[4]),64);
        tracep->fullQData(oldp+419,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[5]),64);
        tracep->fullQData(oldp+421,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[6]),64);
        tracep->fullQData(oldp+423,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[7]),64);
        tracep->fullQData(oldp+425,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[8]),64);
        tracep->fullQData(oldp+427,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[9]),64);
        tracep->fullQData(oldp+429,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[10]),64);
        tracep->fullQData(oldp+431,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[11]),64);
        tracep->fullQData(oldp+433,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[12]),64);
        tracep->fullQData(oldp+435,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[13]),64);
        tracep->fullQData(oldp+437,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[14]),64);
        tracep->fullQData(oldp+439,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[15]),64);
        tracep->fullQData(oldp+441,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[16]),64);
        tracep->fullQData(oldp+443,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[17]),64);
        tracep->fullQData(oldp+445,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[18]),64);
        tracep->fullQData(oldp+447,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[19]),64);
        tracep->fullQData(oldp+449,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[20]),64);
        tracep->fullQData(oldp+451,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[21]),64);
        tracep->fullQData(oldp+453,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[22]),64);
        tracep->fullQData(oldp+455,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[23]),64);
        tracep->fullQData(oldp+457,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[24]),64);
        tracep->fullQData(oldp+459,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[25]),64);
        tracep->fullQData(oldp+461,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[26]),64);
        tracep->fullQData(oldp+463,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[27]),64);
        tracep->fullQData(oldp+465,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[28]),64);
        tracep->fullQData(oldp+467,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[29]),64);
        tracep->fullQData(oldp+469,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[30]),64);
        tracep->fullQData(oldp+471,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[31]),64);
        tracep->fullBit(oldp+473,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero));
        tracep->fullQData(oldp+474,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1),64);
        tracep->fullQData(oldp+476,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2),64);
        tracep->fullCData(oldp+478,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__test),3);
        tracep->fullQData(oldp+479,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[0]),64);
        tracep->fullQData(oldp+481,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[1]),64);
        tracep->fullQData(oldp+483,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[2]),64);
        tracep->fullQData(oldp+485,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[3]),64);
        tracep->fullQData(oldp+487,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[4]),64);
        tracep->fullQData(oldp+489,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[5]),64);
        tracep->fullQData(oldp+491,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[6]),64);
        tracep->fullQData(oldp+493,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[7]),64);
        tracep->fullQData(oldp+495,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[8]),64);
        tracep->fullQData(oldp+497,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[9]),64);
        tracep->fullQData(oldp+499,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[10]),64);
        tracep->fullQData(oldp+501,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[11]),64);
        tracep->fullQData(oldp+503,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[12]),64);
        tracep->fullQData(oldp+505,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[13]),64);
        tracep->fullQData(oldp+507,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[14]),64);
        tracep->fullQData(oldp+509,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[15]),64);
        tracep->fullQData(oldp+511,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[16]),64);
        tracep->fullQData(oldp+513,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[17]),64);
        tracep->fullQData(oldp+515,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[18]),64);
        tracep->fullQData(oldp+517,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[19]),64);
        tracep->fullQData(oldp+519,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[20]),64);
        tracep->fullQData(oldp+521,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[21]),64);
        tracep->fullQData(oldp+523,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[22]),64);
        tracep->fullQData(oldp+525,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[23]),64);
        tracep->fullQData(oldp+527,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[24]),64);
        tracep->fullQData(oldp+529,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[25]),64);
        tracep->fullQData(oldp+531,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[26]),64);
        tracep->fullQData(oldp+533,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[27]),64);
        tracep->fullQData(oldp+535,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[28]),64);
        tracep->fullQData(oldp+537,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[29]),64);
        tracep->fullQData(oldp+539,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[30]),64);
        tracep->fullQData(oldp+541,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[31]),64);
        tracep->fullBit(oldp+543,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__write_ready));
        tracep->fullQData(oldp+544,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__end_wb_waddr),64);
        tracep->fullBit(oldp+546,(vlSelf->clk));
        tracep->fullBit(oldp+547,(vlSelf->rst));
        tracep->fullIData(oldp+548,(vlSelf->inst),32);
        tracep->fullIData(oldp+549,(vlSelf->pc),32);
        tracep->fullQData(oldp+550,(vlSelf->unknown_code),64);
        tracep->fullBit(oldp+552,(vlSelf->time_set));
        tracep->fullIData(oldp+553,(vlSelf->diff_pc),32);
        tracep->fullIData(oldp+554,(vlSelf->diff_delay_pc),32);
        tracep->fullQData(oldp+555,((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch) 
                                      & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero)))
                                      ? (vlSelf->ysyx_22040175_top__DOT__id_pc 
                                         + vlSelf->ysyx_22040175_top__DOT__id_imm)
                                      : (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch) 
                                          & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero))
                                          ? (4ULL + vlSelf->ysyx_22040175_top__DOT__id_pc)
                                          : (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump) 
                                              & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__id_jalr)))
                                              ? (vlSelf->ysyx_22040175_top__DOT__id_pc 
                                                 + vlSelf->ysyx_22040175_top__DOT__id_imm)
                                              : (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump) 
                                                  & (IData)(vlSelf->ysyx_22040175_top__DOT__id_jalr))
                                                  ? 
                                                 ((0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond)))
                                                   ? 
                                                  (vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata 
                                                   + vlSelf->ysyx_22040175_top__DOT__id_imm)
                                                   : 
                                                  (vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f
                                                   [
                                                   (0x1fU 
                                                    & vlSelf->ysyx_22040175_top__DOT__id_s_imm)] 
                                                   + vlSelf->ysyx_22040175_top__DOT__id_imm))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag)
                                                   ? 0x80000000ULL
                                                   : vlSelf->ysyx_22040175_top__DOT__id_pc)))))),64);
        tracep->fullQData(oldp+557,(((IData)(vlSelf->ysyx_22040175_top__DOT__id_s_flag)
                                      ? vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                                     [vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr]
                                      : 0ULL)),64);
        tracep->fullQData(oldp+559,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[0]),64);
        tracep->fullQData(oldp+561,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[1]),64);
        tracep->fullQData(oldp+563,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[2]),64);
        tracep->fullQData(oldp+565,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[3]),64);
        tracep->fullQData(oldp+567,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[4]),64);
        tracep->fullQData(oldp+569,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[5]),64);
        tracep->fullQData(oldp+571,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[6]),64);
        tracep->fullQData(oldp+573,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[7]),64);
        tracep->fullQData(oldp+575,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[8]),64);
        tracep->fullQData(oldp+577,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[9]),64);
        tracep->fullQData(oldp+579,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[10]),64);
        tracep->fullQData(oldp+581,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[11]),64);
        tracep->fullQData(oldp+583,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[12]),64);
        tracep->fullQData(oldp+585,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[13]),64);
        tracep->fullQData(oldp+587,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[14]),64);
        tracep->fullQData(oldp+589,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[15]),64);
        tracep->fullQData(oldp+591,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[16]),64);
        tracep->fullQData(oldp+593,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[17]),64);
        tracep->fullQData(oldp+595,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[18]),64);
        tracep->fullQData(oldp+597,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[19]),64);
        tracep->fullQData(oldp+599,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[20]),64);
        tracep->fullQData(oldp+601,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[21]),64);
        tracep->fullQData(oldp+603,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[22]),64);
        tracep->fullQData(oldp+605,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[23]),64);
        tracep->fullQData(oldp+607,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[24]),64);
        tracep->fullQData(oldp+609,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[25]),64);
        tracep->fullQData(oldp+611,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[26]),64);
        tracep->fullQData(oldp+613,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[27]),64);
        tracep->fullQData(oldp+615,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[28]),64);
        tracep->fullQData(oldp+617,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[29]),64);
        tracep->fullQData(oldp+619,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[30]),64);
        tracep->fullQData(oldp+621,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[31]),64);
        tracep->fullBit(oldp+623,(vlSelf->ysyx_22040175_top__DOT__id_branch));
        tracep->fullBit(oldp+624,(vlSelf->ysyx_22040175_top__DOT__id_jump));
        tracep->fullBit(oldp+625,(vlSelf->ysyx_22040175_top__DOT__ex_branch));
        tracep->fullBit(oldp+626,(vlSelf->ysyx_22040175_top__DOT__ex_jump));
        tracep->fullQData(oldp+627,(vlSelf->ysyx_22040175_top__DOT__ex_imm),64);
        tracep->fullCData(oldp+629,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src_sel),2);
        tracep->fullBit(oldp+630,(vlSelf->ysyx_22040175_top__DOT__ex_jalr));
        tracep->fullQData(oldp+631,(vlSelf->ysyx_22040175_top__DOT__ex_reg1_rdata),64);
        tracep->fullQData(oldp+633,(vlSelf->ysyx_22040175_top__DOT__ex_reg2_rdata),64);
        tracep->fullBit(oldp+635,(vlSelf->ysyx_22040175_top__DOT__ex_time_set));
        tracep->fullBit(oldp+636,(vlSelf->ysyx_22040175_top__DOT__id_rest_no_use));
        tracep->fullQData(oldp+637,(vlSelf->ysyx_22040175_top__DOT__ex_next_pc),64);
        tracep->fullBit(oldp+639,(vlSelf->ysyx_22040175_top__DOT__write_ready));
        tracep->fullBit(oldp+640,(vlSelf->ysyx_22040175_top__DOT__ex_pc_ready));
        tracep->fullBit(oldp+641,(vlSelf->ysyx_22040175_top__DOT__mem_pc_ready));
        tracep->fullBit(oldp+642,(vlSelf->ysyx_22040175_top__DOT__fr_ex_no_use));
        tracep->fullBit(oldp+643,(vlSelf->ysyx_22040175_top__DOT__wb_pc_ready));
        tracep->fullBit(oldp+644,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__ex_pc_ready));
        tracep->fullBit(oldp+645,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__pc_no_use));
        tracep->fullCData(oldp+646,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond),4);
        tracep->fullBit(oldp+647,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__write_ready));
        tracep->fullBit(oldp+648,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__no_use));
        tracep->fullBit(oldp+649,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__ena));
        tracep->fullQData(oldp+650,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__from_ex_alu_res),64);
        tracep->fullQData(oldp+652,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__from_mem_alu_res),64);
        tracep->fullCData(oldp+654,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__test),3);
        tracep->fullCData(oldp+655,((7U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond))),3);
        tracep->fullQData(oldp+656,(vlSelf->ysyx_22040175_top__DOT__u_id_ex_regs__DOT__reg_wdata_id_ex_i),64);
        tracep->fullQData(oldp+658,(vlSelf->ysyx_22040175_top__DOT__u_id_ex_regs__DOT__reg_wdata_id_ex_o),64);
        tracep->fullBit(oldp+660,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__no_use));
        tracep->fullQData(oldp+661,(vlSelf->ysyx_22040175_top__DOT__u_mem_wb_regs__DOT__reg_wdata_mem_wb_o),64);
        tracep->fullBit(oldp+663,(vlSelf->ysyx_22040175_top__DOT__u_mem_wb_regs__DOT__ex_pc_ready_mem_wb_i));
        tracep->fullBit(oldp+664,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_no_use));
    }
}
