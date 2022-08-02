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
        tracep->declBit(c+582,"clk", false,-1);
        tracep->declBit(c+583,"rst", false,-1);
        tracep->declBus(c+584,"inst", false,-1, 31,0);
        tracep->declBus(c+585,"pc", false,-1, 31,0);
        tracep->declQuad(c+586,"unknown_code", false,-1, 63,0);
        tracep->declBit(c+588,"time_set", false,-1);
        tracep->declBus(c+589,"diff_pc", false,-1, 31,0);
        tracep->declBus(c+590,"diff_delay_pc", false,-1, 31,0);
        tracep->declBit(c+591,"out_mem_rd_buf_flag", false,-1);
        tracep->declBit(c+582,"ysyx_22040175_top clk", false,-1);
        tracep->declBit(c+583,"ysyx_22040175_top rst", false,-1);
        tracep->declBus(c+584,"ysyx_22040175_top inst", false,-1, 31,0);
        tracep->declBus(c+585,"ysyx_22040175_top pc", false,-1, 31,0);
        tracep->declQuad(c+586,"ysyx_22040175_top unknown_code", false,-1, 63,0);
        tracep->declBit(c+588,"ysyx_22040175_top time_set", false,-1);
        tracep->declBus(c+589,"ysyx_22040175_top diff_pc", false,-1, 31,0);
        tracep->declBus(c+590,"ysyx_22040175_top diff_delay_pc", false,-1, 31,0);
        tracep->declBit(c+591,"ysyx_22040175_top out_mem_rd_buf_flag", false,-1);
        tracep->declBit(c+244,"ysyx_22040175_top rst_n", false,-1);
        tracep->declQuad(c+245,"ysyx_22040175_top id_next_pc", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22040175_top if_ena", false,-1);
        tracep->declBus(c+2,"ysyx_22040175_top if_inst", false,-1, 31,0);
        tracep->declQuad(c+3,"ysyx_22040175_top if_pc", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top rest_id_mem", false,-1);
        tracep->declBit(c+6,"ysyx_22040175_top mul_stop", false,-1);
        tracep->declBus(c+7,"ysyx_22040175_top id_inst", false,-1, 31,0);
        tracep->declQuad(c+8,"ysyx_22040175_top id_pc", false,-1, 63,0);
        tracep->declBit(c+10,"ysyx_22040175_top id_ena", false,-1);
        tracep->declBit(c+11,"ysyx_22040175_top id_time_set", false,-1);
        tracep->declBit(c+12,"ysyx_22040175_top delay_sig_jalr", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+594+i*2,"ysyx_22040175_top to_id_reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+658,"ysyx_22040175_top id_branch", false,-1);
        tracep->declBit(c+659,"ysyx_22040175_top id_jump", false,-1);
        tracep->declBit(c+13,"ysyx_22040175_top id_reg_wen", false,-1);
        tracep->declBus(c+14,"ysyx_22040175_top id_reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+247,"ysyx_22040175_top id_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+249,"ysyx_22040175_top id_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+15,"ysyx_22040175_top id_imm", false,-1, 63,0);
        tracep->declBus(c+17,"ysyx_22040175_top id_alu_op", false,-1, 4,0);
        tracep->declBus(c+18,"ysyx_22040175_top id_alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+19,"ysyx_22040175_top id_unknown_code", false,-1, 63,0);
        tracep->declBit(c+21,"ysyx_22040175_top id_jalr", false,-1);
        tracep->declBit(c+22,"ysyx_22040175_top id_ebreak_flag", false,-1);
        tracep->declBus(c+23,"ysyx_22040175_top id_wmask", false,-1, 7,0);
        tracep->declBit(c+24,"ysyx_22040175_top id_s_flag", false,-1);
        tracep->declBus(c+25,"ysyx_22040175_top id_s_imm", false,-1, 31,0);
        tracep->declBus(c+26,"ysyx_22040175_top id_expand_signed", false,-1, 3,0);
        tracep->declBus(c+27,"ysyx_22040175_top id_rd_flag", false,-1, 2,0);
        tracep->declBus(c+28,"ysyx_22040175_top id_rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+29,"ysyx_22040175_top rest_from_id", false,-1);
        tracep->declBit(c+30,"ysyx_22040175_top id_control_rest", false,-1);
        tracep->declQuad(c+660,"ysyx_22040175_top id_end_write_addr", false,-1, 63,0);
        tracep->declBit(c+31,"ysyx_22040175_top rest_wb_hazard", false,-1);
        tracep->declBit(c+251,"ysyx_22040175_top sig_jalr", false,-1);
        tracep->declBit(c+32,"ysyx_22040175_top id_cunqu_hazard", false,-1);
        tracep->declQuad(c+33,"ysyx_22040175_top ex_pc", false,-1, 63,0);
        tracep->declBit(c+662,"ysyx_22040175_top ex_branch", false,-1);
        tracep->declBit(c+663,"ysyx_22040175_top ex_jump", false,-1);
        tracep->declBit(c+35,"ysyx_22040175_top ex_reg_wen", false,-1);
        tracep->declBus(c+36,"ysyx_22040175_top ex_reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+664,"ysyx_22040175_top ex_imm", false,-1, 63,0);
        tracep->declBus(c+37,"ysyx_22040175_top ex_alu_op", false,-1, 4,0);
        tracep->declBus(c+666,"ysyx_22040175_top ex_alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+38,"ysyx_22040175_top ex_unknown_code", false,-1, 63,0);
        tracep->declBit(c+667,"ysyx_22040175_top ex_jalr", false,-1);
        tracep->declBit(c+40,"ysyx_22040175_top ex_ebreak_flag", false,-1);
        tracep->declBus(c+41,"ysyx_22040175_top ex_wmask", false,-1, 7,0);
        tracep->declBit(c+42,"ysyx_22040175_top ex_s_flag", false,-1);
        tracep->declBus(c+43,"ysyx_22040175_top ex_s_imm", false,-1, 31,0);
        tracep->declBus(c+44,"ysyx_22040175_top ex_expand_signed", false,-1, 3,0);
        tracep->declBus(c+45,"ysyx_22040175_top ex_rd_flag", false,-1, 2,0);
        tracep->declBus(c+46,"ysyx_22040175_top ex_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+668,"ysyx_22040175_top ex_reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+670,"ysyx_22040175_top ex_reg2_rdata", false,-1, 63,0);
        tracep->declBit(c+47,"ysyx_22040175_top ex_ena", false,-1);
        tracep->declBit(c+672,"ysyx_22040175_top ex_time_set", false,-1);
        tracep->declBit(c+673,"ysyx_22040175_top id_rest_no_use", false,-1);
        tracep->declBit(c+48,"ysyx_22040175_top ex_rest_id_mem", false,-1);
        tracep->declBus(c+49,"ysyx_22040175_top ex_inst", false,-1, 31,0);
        tracep->declQuad(c+674,"ysyx_22040175_top ex_end_write_addr", false,-1, 63,0);
        tracep->declBit(c+50,"ysyx_22040175_top ex_cunqu_hazard", false,-1);
        tracep->declQuad(c+51,"ysyx_22040175_top from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+53,"ysyx_22040175_top ex_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+55,"ysyx_22040175_top ex_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+676,"ysyx_22040175_top ex_next_pc", false,-1, 63,0);
        tracep->declBit(c+678,"ysyx_22040175_top write_ready", false,-1);
        tracep->declBit(c+679,"ysyx_22040175_top ex_pc_ready", false,-1);
        tracep->declBit(c+57,"ysyx_22040175_top mem_reg_wen", false,-1);
        tracep->declBus(c+58,"ysyx_22040175_top mem_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+59,"ysyx_22040175_top mem_ebreak_flag", false,-1);
        tracep->declBus(c+60,"ysyx_22040175_top mem_wmask", false,-1, 7,0);
        tracep->declBit(c+61,"ysyx_22040175_top mem_s_flag", false,-1);
        tracep->declBit(c+62,"ysyx_22040175_top mem_time_set", false,-1);
        tracep->declBus(c+63,"ysyx_22040175_top mem_s_imm", false,-1, 31,0);
        tracep->declBus(c+64,"ysyx_22040175_top mem_expand_signed", false,-1, 3,0);
        tracep->declBus(c+65,"ysyx_22040175_top mem_rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+66,"ysyx_22040175_top mem_alu_op", false,-1, 4,0);
        tracep->declQuad(c+67,"ysyx_22040175_top mem_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+69,"ysyx_22040175_top mem_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+71,"ysyx_22040175_top mem_from_ex_alu_res", false,-1, 63,0);
        tracep->declBit(c+680,"ysyx_22040175_top mem_pc_ready", false,-1);
        tracep->declQuad(c+73,"ysyx_22040175_top mem_pc", false,-1, 63,0);
        tracep->declBit(c+681,"ysyx_22040175_top fr_ex_no_use", false,-1);
        tracep->declQuad(c+682,"ysyx_22040175_top mem_end_write_addr", false,-1, 63,0);
        tracep->declBit(c+75,"ysyx_22040175_top mem_cunqu_hazard", false,-1);
        tracep->declQuad(c+76,"ysyx_22040175_top from_mem_alu_res", false,-1, 63,0);
        tracep->declQuad(c+78,"ysyx_22040175_top wb_hazard_result", false,-1, 63,0);
        tracep->declBit(c+80,"ysyx_22040175_top wb_reg_wen", false,-1);
        tracep->declBus(c+81,"ysyx_22040175_top wb_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+82,"ysyx_22040175_top wb_wmask", false,-1, 7,0);
        tracep->declBit(c+83,"ysyx_22040175_top wb_s_flag", false,-1);
        tracep->declBit(c+84,"ysyx_22040175_top wb_time_set", false,-1);
        tracep->declBus(c+85,"ysyx_22040175_top wb_s_imm", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22040175_top wb_expand_signed", false,-1, 3,0);
        tracep->declBit(c+87,"ysyx_22040175_top wb_ebreak_flag", false,-1);
        tracep->declBus(c+88,"ysyx_22040175_top wb_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+89,"ysyx_22040175_top wb_from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+91,"ysyx_22040175_top wb_from_mem_alu_res", false,-1, 63,0);
        tracep->declBit(c+684,"ysyx_22040175_top wb_pc_ready", false,-1);
        tracep->declQuad(c+93,"ysyx_22040175_top wb_pc", false,-1, 63,0);
        tracep->declBit(c+95,"ysyx_22040175_top mem_rest_id_mem", false,-1);
        tracep->declQuad(c+685,"ysyx_22040175_top wb_end_write_addr", false,-1, 63,0);
        tracep->declBit(c+96,"ysyx_22040175_top wb_cunqu_hazard", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+252+i*2,"ysyx_22040175_top from_wb_reg_f", true,(i+0), 63,0);}}
        tracep->declQuad(c+97,"ysyx_22040175_top wb_delay_pc", false,-1, 63,0);
        tracep->declBit(c+582,"ysyx_22040175_top u_if_stage clk", false,-1);
        tracep->declBit(c+244,"ysyx_22040175_top u_if_stage rst_n", false,-1);
        tracep->declQuad(c+245,"ysyx_22040175_top u_if_stage id_next_pc", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22040175_top u_if_stage ena", false,-1);
        tracep->declBus(c+2,"ysyx_22040175_top u_if_stage inst", false,-1, 31,0);
        tracep->declQuad(c+3,"ysyx_22040175_top u_if_stage curr_pc", false,-1, 63,0);
        tracep->declBit(c+30,"ysyx_22040175_top u_if_stage control_rest", false,-1);
        tracep->declBit(c+5,"ysyx_22040175_top u_if_stage rest_id_mem", false,-1);
        tracep->declQuad(c+8,"ysyx_22040175_top u_if_stage id_pc", false,-1, 63,0);
        tracep->declBit(c+251,"ysyx_22040175_top u_if_stage sig_jalr", false,-1);
        tracep->declBit(c+6,"ysyx_22040175_top u_if_stage mul_stop", false,-1);
        tracep->declQuad(c+99,"ysyx_22040175_top u_if_stage rdata", false,-1, 63,0);
        tracep->declBit(c+582,"ysyx_22040175_top u_if_stage u_pc_predict clk", false,-1);
        tracep->declBit(c+244,"ysyx_22040175_top u_if_stage u_pc_predict rst_n", false,-1);
        tracep->declBit(c+30,"ysyx_22040175_top u_if_stage u_pc_predict control_rest", false,-1);
        tracep->declQuad(c+245,"ysyx_22040175_top u_if_stage u_pc_predict id_next_pc", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22040175_top u_if_stage u_pc_predict ena", false,-1);
        tracep->declQuad(c+3,"ysyx_22040175_top u_if_stage u_pc_predict curr_pc", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_if_stage u_pc_predict rest_id_mem", false,-1);
        tracep->declQuad(c+8,"ysyx_22040175_top u_if_stage u_pc_predict id_curr_pc", false,-1, 63,0);
        tracep->declBit(c+251,"ysyx_22040175_top u_if_stage u_pc_predict sig_jalr", false,-1);
        tracep->declBit(c+6,"ysyx_22040175_top u_if_stage u_pc_predict mul_stop", false,-1);
        tracep->declBit(c+101,"ysyx_22040175_top u_if_stage u_pc_predict delay_sig_jalr", false,-1);
        tracep->declBit(c+582,"ysyx_22040175_top u_if_id_regs clk", false,-1);
        tracep->declBit(c+244,"ysyx_22040175_top u_if_id_regs rst_n", false,-1);
        tracep->declQuad(c+3,"ysyx_22040175_top u_if_id_regs pc_if_id_i", false,-1, 63,0);
        tracep->declBus(c+2,"ysyx_22040175_top u_if_id_regs instr_if_id_i", false,-1, 31,0);
        tracep->declBit(c+1,"ysyx_22040175_top u_if_id_regs ena_if_id_i", false,-1);
        tracep->declBit(c+588,"ysyx_22040175_top u_if_id_regs time_set_if_id_i", false,-1);
        tracep->declQuad(c+8,"ysyx_22040175_top u_if_id_regs pc_if_id_o", false,-1, 63,0);
        tracep->declBus(c+7,"ysyx_22040175_top u_if_id_regs instr_if_id_o", false,-1, 31,0);
        tracep->declBit(c+10,"ysyx_22040175_top u_if_id_regs ena_if_id_o", false,-1);
        tracep->declBit(c+11,"ysyx_22040175_top u_if_id_regs time_set_if_id_o", false,-1);
        tracep->declBit(c+30,"ysyx_22040175_top u_if_id_regs control_rest", false,-1);
        tracep->declQuad(c+8,"ysyx_22040175_top u_if_id_regs id_pc", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_if_id_regs rest_id_mem", false,-1);
        tracep->declBit(c+12,"ysyx_22040175_top u_if_id_regs delay_sig_jalr", false,-1);
        tracep->declBit(c+6,"ysyx_22040175_top u_if_id_regs mul_stop", false,-1);
        tracep->declBit(c+582,"ysyx_22040175_top u_id_stage clk", false,-1);
        tracep->declBit(c+244,"ysyx_22040175_top u_id_stage rst_n", false,-1);
        tracep->declQuad(c+8,"ysyx_22040175_top u_id_stage id_pc", false,-1, 63,0);
        tracep->declQuad(c+245,"ysyx_22040175_top u_id_stage next_pc", false,-1, 63,0);
        tracep->declQuad(c+102,"ysyx_22040175_top u_id_stage inst", false,-1, 63,0);
        tracep->declBus(c+49,"ysyx_22040175_top u_id_stage ex_inst", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+316+i*2,"ysyx_22040175_top u_id_stage reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+36,"ysyx_22040175_top u_id_stage ex_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+29,"ysyx_22040175_top u_id_stage rest_from_id", false,-1);
        tracep->declBit(c+13,"ysyx_22040175_top u_id_stage reg_wen", false,-1);
        tracep->declBus(c+14,"ysyx_22040175_top u_id_stage reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+15,"ysyx_22040175_top u_id_stage imm", false,-1, 63,0);
        tracep->declBus(c+17,"ysyx_22040175_top u_id_stage alu_op", false,-1, 4,0);
        tracep->declBus(c+18,"ysyx_22040175_top u_id_stage alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+19,"ysyx_22040175_top u_id_stage unknown_code", false,-1, 63,0);
        tracep->declBit(c+21,"ysyx_22040175_top u_id_stage jalr", false,-1);
        tracep->declBit(c+22,"ysyx_22040175_top u_id_stage ebreak_flag", false,-1);
        tracep->declBus(c+23,"ysyx_22040175_top u_id_stage wmask", false,-1, 7,0);
        tracep->declBit(c+24,"ysyx_22040175_top u_id_stage s_flag", false,-1);
        tracep->declBus(c+25,"ysyx_22040175_top u_id_stage s_imm", false,-1, 31,0);
        tracep->declBus(c+26,"ysyx_22040175_top u_id_stage expand_signed", false,-1, 3,0);
        tracep->declBus(c+27,"ysyx_22040175_top u_id_stage rd_flag", false,-1, 2,0);
        tracep->declBus(c+28,"ysyx_22040175_top u_id_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+30,"ysyx_22040175_top u_id_stage control_rest", false,-1);
        tracep->declQuad(c+51,"ysyx_22040175_top u_id_stage from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22040175_top u_id_stage from_mem_alu_res", false,-1, 63,0);
        tracep->declBus(c+46,"ysyx_22040175_top u_id_stage ex_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+247,"ysyx_22040175_top u_id_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+249,"ysyx_22040175_top u_id_stage alu_src2", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_id_stage rest_id_mem", false,-1);
        tracep->declQuad(c+78,"ysyx_22040175_top u_id_stage wb_hazard_result", false,-1, 63,0);
        tracep->declBus(c+58,"ysyx_22040175_top u_id_stage mem_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+42,"ysyx_22040175_top u_id_stage ex_s_flag", false,-1);
        tracep->declBit(c+61,"ysyx_22040175_top u_id_stage mem_s_flag", false,-1);
        tracep->declBit(c+31,"ysyx_22040175_top u_id_stage rest_wb_hazard", false,-1);
        tracep->declBit(c+251,"ysyx_22040175_top u_id_stage sig_jalr", false,-1);
        tracep->declBit(c+12,"ysyx_22040175_top u_id_stage delay_sig_jalr", false,-1);
        tracep->declBus(c+43,"ysyx_22040175_top u_id_stage ex_s_imm", false,-1, 31,0);
        tracep->declBit(c+32,"ysyx_22040175_top u_id_stage cunqu_hazard", false,-1);
        tracep->declBit(c+75,"ysyx_22040175_top u_id_stage mem_cunqu_hazard", false,-1);
        tracep->declQuad(c+71,"ysyx_22040175_top u_id_stage mem_from_ex_alu_res", false,-1, 63,0);
        tracep->declBit(c+104,"ysyx_22040175_top u_id_stage branch", false,-1);
        tracep->declBit(c+105,"ysyx_22040175_top u_id_stage jump", false,-1);
        tracep->declQuad(c+380,"ysyx_22040175_top u_id_stage reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+382,"ysyx_22040175_top u_id_stage reg2_rdata", false,-1, 63,0);
        tracep->declBus(c+106,"ysyx_22040175_top u_id_stage imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+107,"ysyx_22040175_top u_id_stage reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+108,"ysyx_22040175_top u_id_stage reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+384,"ysyx_22040175_top u_id_stage data_rest_cond", false,-1, 2,0);
        tracep->declQuad(c+109,"ysyx_22040175_top u_id_stage delay_reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+102,"ysyx_22040175_top u_id_stage u_ctrl inst", false,-1, 63,0);
        tracep->declBit(c+104,"ysyx_22040175_top u_id_stage u_ctrl branch", false,-1);
        tracep->declBit(c+105,"ysyx_22040175_top u_id_stage u_ctrl jump", false,-1);
        tracep->declBit(c+13,"ysyx_22040175_top u_id_stage u_ctrl reg_wen", false,-1);
        tracep->declBus(c+14,"ysyx_22040175_top u_id_stage u_ctrl reg_waddr", false,-1, 4,0);
        tracep->declBus(c+107,"ysyx_22040175_top u_id_stage u_ctrl reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+108,"ysyx_22040175_top u_id_stage u_ctrl reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+106,"ysyx_22040175_top u_id_stage u_ctrl imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+17,"ysyx_22040175_top u_id_stage u_ctrl alu_op", false,-1, 4,0);
        tracep->declBus(c+18,"ysyx_22040175_top u_id_stage u_ctrl alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+19,"ysyx_22040175_top u_id_stage u_ctrl unknown_code", false,-1, 63,0);
        tracep->declBit(c+21,"ysyx_22040175_top u_id_stage u_ctrl jalr", false,-1);
        tracep->declBit(c+22,"ysyx_22040175_top u_id_stage u_ctrl ebreak_flag", false,-1);
        tracep->declBus(c+23,"ysyx_22040175_top u_id_stage u_ctrl wmask", false,-1, 7,0);
        tracep->declBit(c+24,"ysyx_22040175_top u_id_stage u_ctrl s_flag", false,-1);
        tracep->declBus(c+25,"ysyx_22040175_top u_id_stage u_ctrl s_imm", false,-1, 31,0);
        tracep->declBus(c+26,"ysyx_22040175_top u_id_stage u_ctrl expand_signed", false,-1, 3,0);
        tracep->declBus(c+27,"ysyx_22040175_top u_id_stage u_ctrl rd_flag", false,-1, 2,0);
        tracep->declBus(c+28,"ysyx_22040175_top u_id_stage u_ctrl rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+111,"ysyx_22040175_top u_id_stage u_ctrl opcode", false,-1, 6,0);
        tracep->declBus(c+112,"ysyx_22040175_top u_id_stage u_ctrl funct3", false,-1, 2,0);
        tracep->declBus(c+113,"ysyx_22040175_top u_id_stage u_ctrl funct7", false,-1, 6,0);
        tracep->declBus(c+114,"ysyx_22040175_top u_id_stage u_ctrl rd", false,-1, 4,0);
        tracep->declBus(c+115,"ysyx_22040175_top u_id_stage u_ctrl rs1", false,-1, 4,0);
        tracep->declBus(c+116,"ysyx_22040175_top u_id_stage u_ctrl rs2", false,-1, 4,0);
        tracep->declQuad(c+102,"ysyx_22040175_top u_id_stage u_imm_gen inst", false,-1, 63,0);
        tracep->declBus(c+106,"ysyx_22040175_top u_id_stage u_imm_gen imm_gen_op", false,-1, 2,0);
        tracep->declQuad(c+15,"ysyx_22040175_top u_id_stage u_imm_gen imm", false,-1, 63,0);
        tracep->declBit(c+582,"ysyx_22040175_top u_id_stage u_id_rest clk", false,-1);
        tracep->declBit(c+244,"ysyx_22040175_top u_id_stage u_id_rest rst_n", false,-1);
        tracep->declQuad(c+8,"ysyx_22040175_top u_id_stage u_id_rest id_pc", false,-1, 63,0);
        tracep->declBus(c+107,"ysyx_22040175_top u_id_stage u_id_rest reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+108,"ysyx_22040175_top u_id_stage u_id_rest reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+36,"ysyx_22040175_top u_id_stage u_id_rest reg_waddr", false,-1, 4,0);
        tracep->declBus(c+46,"ysyx_22040175_top u_id_stage u_id_rest rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+29,"ysyx_22040175_top u_id_stage u_id_rest rest_from_id", false,-1);
        tracep->declBus(c+49,"ysyx_22040175_top u_id_stage u_id_rest ex_inst", false,-1, 31,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_id_stage u_id_rest rest_id_mem", false,-1);
        tracep->declBus(c+58,"ysyx_22040175_top u_id_stage u_id_rest wb_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+31,"ysyx_22040175_top u_id_stage u_id_rest rest_wb_hazard", false,-1);
        tracep->declBus(c+25,"ysyx_22040175_top u_id_stage u_id_rest s_imm", false,-1, 31,0);
        tracep->declBit(c+42,"ysyx_22040175_top u_id_stage u_id_rest ex_s_flag", false,-1);
        tracep->declBit(c+61,"ysyx_22040175_top u_id_stage u_id_rest mem_s_flag", false,-1);
        tracep->declBus(c+43,"ysyx_22040175_top u_id_stage u_id_rest ex_s_imm", false,-1, 31,0);
        tracep->declBit(c+32,"ysyx_22040175_top u_id_stage u_id_rest cunqu_hazard", false,-1);
        tracep->declQuad(c+15,"ysyx_22040175_top u_id_stage u_id_rest imm", false,-1, 63,0);
        tracep->declBus(c+28,"ysyx_22040175_top u_id_stage u_id_rest curr_rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+117,"ysyx_22040175_top u_id_stage u_id_rest delay_rest_id_mem", false,-1);
        tracep->declBit(c+582,"ysyx_22040175_top u_id_stage u_id_control_rest clk", false,-1);
        tracep->declBit(c+244,"ysyx_22040175_top u_id_stage u_id_control_rest rst_n", false,-1);
        tracep->declBit(c+104,"ysyx_22040175_top u_id_stage u_id_control_rest branch", false,-1);
        tracep->declBit(c+105,"ysyx_22040175_top u_id_stage u_id_control_rest jump", false,-1);
        tracep->declBit(c+30,"ysyx_22040175_top u_id_stage u_id_control_rest control_rest", false,-1);
        tracep->declBit(c+29,"ysyx_22040175_top u_id_stage u_id_control_rest rest_from_id", false,-1);
        tracep->declBit(c+582,"ysyx_22040175_top u_id_stage u_mux_dt_pipe clk", false,-1);
        tracep->declBit(c+244,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rst_n", false,-1);
        tracep->declBus(c+107,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+108,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+36,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg_waddr", false,-1, 4,0);
        tracep->declBus(c+46,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+380,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+382,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg2_rdata", false,-1, 63,0);
        tracep->declQuad(c+51,"ysyx_22040175_top u_id_stage u_mux_dt_pipe from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22040175_top u_id_stage u_mux_dt_pipe from_mem_alu_res", false,-1, 63,0);
        tracep->declBit(c+30,"ysyx_22040175_top u_id_stage u_mux_dt_pipe control_rest", false,-1);
        tracep->declBit(c+29,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rest_from_id", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+385+i*2,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+24,"ysyx_22040175_top u_id_stage u_mux_dt_pipe s_flag", false,-1);
        tracep->declQuad(c+78,"ysyx_22040175_top u_id_stage u_mux_dt_pipe wb_hazard_result", false,-1, 63,0);
        tracep->declBus(c+58,"ysyx_22040175_top u_id_stage u_mux_dt_pipe mem_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rest_id_mem", false,-1);
        tracep->declBit(c+31,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rest_wb_hazard", false,-1);
        tracep->declBus(c+384,"ysyx_22040175_top u_id_stage u_mux_dt_pipe data_rest_cond", false,-1, 2,0);
        tracep->declQuad(c+109,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_reg1_rdata", false,-1, 63,0);
        tracep->declBit(c+32,"ysyx_22040175_top u_id_stage u_mux_dt_pipe cunqu_hazard", false,-1);
        tracep->declBit(c+75,"ysyx_22040175_top u_id_stage u_mux_dt_pipe mem_cunqu_hazard", false,-1);
        tracep->declQuad(c+71,"ysyx_22040175_top u_id_stage u_mux_dt_pipe mem_from_ex_alu_res", false,-1, 63,0);
        tracep->declBus(c+26,"ysyx_22040175_top u_id_stage u_mux_dt_pipe expand_signed", false,-1, 3,0);
        tracep->declBus(c+687,"ysyx_22040175_top u_id_stage u_mux_dt_pipe test", false,-1, 2,0);
        tracep->declBit(c+118,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_rest_id_mem", false,-1);
        tracep->declBit(c+119,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_control_rest", false,-1);
        tracep->declBus(c+120,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+121,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_data_rest_cond", false,-1, 2,0);
        tracep->declQuad(c+122,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_reg2_rdata", false,-1, 63,0);
        tracep->declBus(c+18,"ysyx_22040175_top u_id_stage u_mux_alu alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+380,"ysyx_22040175_top u_id_stage u_mux_alu reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+382,"ysyx_22040175_top u_id_stage u_mux_alu reg2_rdata", false,-1, 63,0);
        tracep->declQuad(c+15,"ysyx_22040175_top u_id_stage u_mux_alu imm", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22040175_top u_id_stage u_mux_alu curr_pc", false,-1, 63,0);
        tracep->declQuad(c+247,"ysyx_22040175_top u_id_stage u_mux_alu alu_src1", false,-1, 63,0);
        tracep->declQuad(c+249,"ysyx_22040175_top u_id_stage u_mux_alu alu_src2", false,-1, 63,0);
        tracep->declBit(c+32,"ysyx_22040175_top u_id_stage u_mux_alu cunqu_hazard", false,-1);
        tracep->declBit(c+582,"ysyx_22040175_top u_id_stage u_mux_pc clk", false,-1);
        tracep->declBit(c+244,"ysyx_22040175_top u_id_stage u_mux_pc rst_n", false,-1);
        tracep->declBit(c+104,"ysyx_22040175_top u_id_stage u_mux_pc branch", false,-1);
        tracep->declBit(c+105,"ysyx_22040175_top u_id_stage u_mux_pc jump", false,-1);
        tracep->declBit(c+21,"ysyx_22040175_top u_id_stage u_mux_pc jalr", false,-1);
        tracep->declQuad(c+15,"ysyx_22040175_top u_id_stage u_mux_pc imm", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22040175_top u_id_stage u_mux_pc curr_pc", false,-1, 63,0);
        tracep->declQuad(c+245,"ysyx_22040175_top u_id_stage u_mux_pc next_pc", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_22040175_top u_id_stage u_mux_pc ebreak_flag", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+449+i*2,"ysyx_22040175_top u_id_stage u_mux_pc reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+25,"ysyx_22040175_top u_id_stage u_mux_pc s_imm", false,-1, 31,0);
        tracep->declBus(c+17,"ysyx_22040175_top u_id_stage u_mux_pc alu_op", false,-1, 4,0);
        tracep->declQuad(c+247,"ysyx_22040175_top u_id_stage u_mux_pc alu_src1", false,-1, 63,0);
        tracep->declQuad(c+249,"ysyx_22040175_top u_id_stage u_mux_pc alu_src2", false,-1, 63,0);
        tracep->declBus(c+384,"ysyx_22040175_top u_id_stage u_mux_pc data_rest_cond", false,-1, 2,0);
        tracep->declQuad(c+109,"ysyx_22040175_top u_id_stage u_mux_pc reg1_rdata", false,-1, 63,0);
        tracep->declBit(c+251,"ysyx_22040175_top u_id_stage u_mux_pc sig_jalr", false,-1);
        tracep->declBit(c+12,"ysyx_22040175_top u_id_stage u_mux_pc delay_sig_jalr", false,-1);
        tracep->declBit(c+513,"ysyx_22040175_top u_id_stage u_mux_pc zero", false,-1);
        tracep->declQuad(c+514,"ysyx_22040175_top u_id_stage u_mux_pc signed_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+516,"ysyx_22040175_top u_id_stage u_mux_pc signed_alu_src2", false,-1, 63,0);
        tracep->declBit(c+582,"ysyx_22040175_top u_id_ex_regs clk", false,-1);
        tracep->declBit(c+244,"ysyx_22040175_top u_id_ex_regs rst_n", false,-1);
        tracep->declQuad(c+8,"ysyx_22040175_top u_id_ex_regs pc_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+33,"ysyx_22040175_top u_id_ex_regs pc_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+13,"ysyx_22040175_top u_id_ex_regs reg_wen_id_ex_i", false,-1);
        tracep->declBus(c+14,"ysyx_22040175_top u_id_ex_regs reg_waddr_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+17,"ysyx_22040175_top u_id_ex_regs alu_op_id_ex_i", false,-1, 4,0);
        tracep->declQuad(c+19,"ysyx_22040175_top u_id_ex_regs unknown_code_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_22040175_top u_id_ex_regs ebreak_flag_id_ex_i", false,-1);
        tracep->declBus(c+23,"ysyx_22040175_top u_id_ex_regs wmask_id_ex_i", false,-1, 7,0);
        tracep->declBit(c+24,"ysyx_22040175_top u_id_ex_regs s_flag_id_ex_i", false,-1);
        tracep->declBus(c+25,"ysyx_22040175_top u_id_ex_regs s_imm_id_ex_i", false,-1, 31,0);
        tracep->declBus(c+26,"ysyx_22040175_top u_id_ex_regs expand_signed_id_ex_i", false,-1, 3,0);
        tracep->declBus(c+27,"ysyx_22040175_top u_id_ex_regs rd_flag_id_ex_i", false,-1, 2,0);
        tracep->declBus(c+28,"ysyx_22040175_top u_id_ex_regs rd_buf_flag_id_ex_i", false,-1, 2,0);
        tracep->declBit(c+35,"ysyx_22040175_top u_id_ex_regs reg_wen_id_ex_o", false,-1);
        tracep->declBus(c+36,"ysyx_22040175_top u_id_ex_regs reg_waddr_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+37,"ysyx_22040175_top u_id_ex_regs alu_op_id_ex_o", false,-1, 4,0);
        tracep->declQuad(c+38,"ysyx_22040175_top u_id_ex_regs unknown_code_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+40,"ysyx_22040175_top u_id_ex_regs ebreak_flag_id_ex_o", false,-1);
        tracep->declBus(c+41,"ysyx_22040175_top u_id_ex_regs wmask_id_ex_o", false,-1, 7,0);
        tracep->declBit(c+42,"ysyx_22040175_top u_id_ex_regs s_flag_id_ex_o", false,-1);
        tracep->declBus(c+43,"ysyx_22040175_top u_id_ex_regs s_imm_id_ex_o", false,-1, 31,0);
        tracep->declBus(c+44,"ysyx_22040175_top u_id_ex_regs expand_signed_id_ex_o", false,-1, 3,0);
        tracep->declBus(c+45,"ysyx_22040175_top u_id_ex_regs rd_flag_id_ex_o", false,-1, 2,0);
        tracep->declBus(c+46,"ysyx_22040175_top u_id_ex_regs rd_buf_flag_id_ex_o", false,-1, 2,0);
        tracep->declBit(c+11,"ysyx_22040175_top u_id_ex_regs time_set_id_ex_i", false,-1);
        tracep->declBit(c+672,"ysyx_22040175_top u_id_ex_regs time_set_id_ex_o", false,-1);
        tracep->declBit(c+10,"ysyx_22040175_top u_id_ex_regs ena_id_ex_i", false,-1);
        tracep->declBit(c+47,"ysyx_22040175_top u_id_ex_regs ena_id_ex_o", false,-1);
        tracep->declQuad(c+247,"ysyx_22040175_top u_id_ex_regs alu_src1_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+249,"ysyx_22040175_top u_id_ex_regs alu_src2_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_id_ex_regs rest_id_mem_id_ex_i", false,-1);
        tracep->declQuad(c+53,"ysyx_22040175_top u_id_ex_regs alu_src1_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+55,"ysyx_22040175_top u_id_ex_regs alu_src2_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+48,"ysyx_22040175_top u_id_ex_regs rest_id_mem_id_ex_o", false,-1);
        tracep->declQuad(c+102,"ysyx_22040175_top u_id_ex_regs id_inst", false,-1, 63,0);
        tracep->declQuad(c+124,"ysyx_22040175_top u_id_ex_regs ex_inst", false,-1, 63,0);
        tracep->declBit(c+32,"ysyx_22040175_top u_id_ex_regs cunqu_hazard_id_ex_i", false,-1);
        tracep->declBit(c+50,"ysyx_22040175_top u_id_ex_regs cunqu_hazard_id_ex_o", false,-1);
        tracep->declBit(c+6,"ysyx_22040175_top u_id_ex_regs mul_stop", false,-1);
        tracep->declBit(c+582,"ysyx_22040175_top u_ex_stage clk", false,-1);
        tracep->declBit(c+244,"ysyx_22040175_top u_ex_stage rst_n", false,-1);
        tracep->declBus(c+37,"ysyx_22040175_top u_ex_stage alu_op", false,-1, 4,0);
        tracep->declQuad(c+53,"ysyx_22040175_top u_ex_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+55,"ysyx_22040175_top u_ex_stage alu_src2", false,-1, 63,0);
        tracep->declQuad(c+51,"ysyx_22040175_top u_ex_stage alu_res", false,-1, 63,0);
        tracep->declBus(c+45,"ysyx_22040175_top u_ex_stage rd_flag", false,-1, 2,0);
        tracep->declBus(c+44,"ysyx_22040175_top u_ex_stage expand_signed", false,-1, 3,0);
        tracep->declBit(c+6,"ysyx_22040175_top u_ex_stage mul_stop", false,-1);
        tracep->declBit(c+582,"ysyx_22040175_top u_ex_stage u_alu clk", false,-1);
        tracep->declBit(c+244,"ysyx_22040175_top u_ex_stage u_alu rst_n", false,-1);
        tracep->declBus(c+37,"ysyx_22040175_top u_ex_stage u_alu alu_op", false,-1, 4,0);
        tracep->declQuad(c+53,"ysyx_22040175_top u_ex_stage u_alu alu_src1", false,-1, 63,0);
        tracep->declQuad(c+55,"ysyx_22040175_top u_ex_stage u_alu alu_src2", false,-1, 63,0);
        tracep->declQuad(c+51,"ysyx_22040175_top u_ex_stage u_alu alu_res_ex_sign", false,-1, 63,0);
        tracep->declBus(c+45,"ysyx_22040175_top u_ex_stage u_alu rd_flag", false,-1, 2,0);
        tracep->declBus(c+44,"ysyx_22040175_top u_ex_stage u_alu expand_signed", false,-1, 3,0);
        tracep->declBit(c+6,"ysyx_22040175_top u_ex_stage u_alu mul_stop", false,-1);
        tracep->declBit(c+126,"ysyx_22040175_top u_ex_stage u_alu zero", false,-1);
        tracep->declQuad(c+127,"ysyx_22040175_top u_ex_stage u_alu alu_res", false,-1, 63,0);
        tracep->declQuad(c+129,"ysyx_22040175_top u_ex_stage u_alu signed_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+131,"ysyx_22040175_top u_ex_stage u_alu signed_alu_src2", false,-1, 63,0);
        tracep->declBit(c+133,"ysyx_22040175_top u_ex_stage u_alu mul_valid", false,-1);
        tracep->declArray(c+134,"ysyx_22040175_top u_ex_stage u_alu mul_res", false,-1, 129,0);
        tracep->declBit(c+139,"ysyx_22040175_top u_ex_stage u_alu sh_fnsh_flag", false,-1);
        tracep->declBit(c+140,"ysyx_22040175_top u_ex_stage u_alu mul_expand_signed", false,-1);
        tracep->declQuad(c+141,"ysyx_22040175_top u_ex_stage u_alu alu_res2", false,-1, 63,0);
        tracep->declBus(c+688,"ysyx_22040175_top u_ex_stage u_alu mul_signed", false,-1, 1,0);
        tracep->declBit(c+582,"ysyx_22040175_top u_ex_stage u_alu u_mul clk", false,-1);
        tracep->declBit(c+244,"ysyx_22040175_top u_ex_stage u_alu u_mul rst_n", false,-1);
        tracep->declQuad(c+53,"ysyx_22040175_top u_ex_stage u_alu u_mul alu_src1", false,-1, 63,0);
        tracep->declQuad(c+55,"ysyx_22040175_top u_ex_stage u_alu u_mul alu_src2", false,-1, 63,0);
        tracep->declBit(c+133,"ysyx_22040175_top u_ex_stage u_alu u_mul mul_valid", false,-1);
        tracep->declBus(c+688,"ysyx_22040175_top u_ex_stage u_alu u_mul mul_signed", false,-1, 1,0);
        tracep->declArray(c+134,"ysyx_22040175_top u_ex_stage u_alu u_mul mul_res", false,-1, 129,0);
        tracep->declBit(c+139,"ysyx_22040175_top u_ex_stage u_alu u_mul sh_fnsh_flag", false,-1);
        tracep->declBit(c+6,"ysyx_22040175_top u_ex_stage u_alu u_mul stop", false,-1);
        tracep->declArray(c+143,"ysyx_22040175_top u_ex_stage u_alu u_mul alu_x", false,-1, 129,0);
        tracep->declArray(c+148,"ysyx_22040175_top u_ex_stage u_alu u_mul alu_y", false,-1, 65,0);
        tracep->declBus(c+689,"ysyx_22040175_top u_ex_stage u_alu u_mul IDLE", false,-1, 2,0);
        tracep->declBus(c+690,"ysyx_22040175_top u_ex_stage u_alu u_mul NEXT", false,-1, 2,0);
        tracep->declBus(c+691,"ysyx_22040175_top u_ex_stage u_alu u_mul SHIFT", false,-1, 2,0);
        tracep->declBus(c+692,"ysyx_22040175_top u_ex_stage u_alu u_mul LAST", false,-1, 2,0);
        tracep->declBus(c+151,"ysyx_22040175_top u_ex_stage u_alu u_mul present_state", false,-1, 2,0);
        tracep->declBus(c+152,"ysyx_22040175_top u_ex_stage u_alu u_mul next_state", false,-1, 2,0);
        tracep->declArray(c+153,"ysyx_22040175_top u_ex_stage u_alu u_mul x", false,-1, 129,0);
        tracep->declBus(c+158,"ysyx_22040175_top u_ex_stage u_alu u_mul y", false,-1, 2,0);
        tracep->declArray(c+159,"ysyx_22040175_top u_ex_stage u_alu u_mul add_p", false,-1, 129,0);
        tracep->declArray(c+164,"ysyx_22040175_top u_ex_stage u_alu u_mul reg_alu_y", false,-1, 129,0);
        tracep->declArray(c+169,"ysyx_22040175_top u_ex_stage u_alu u_mul delay_alu_y", false,-1, 129,0);
        tracep->declArray(c+134,"ysyx_22040175_top u_ex_stage u_alu u_mul p", false,-1, 129,0);
        tracep->declBit(c+582,"ysyx_22040175_top u_ex_mem_regs clk", false,-1);
        tracep->declBit(c+244,"ysyx_22040175_top u_ex_mem_regs rst_n", false,-1);
        tracep->declBit(c+35,"ysyx_22040175_top u_ex_mem_regs reg_wen_ex_mem_i", false,-1);
        tracep->declBus(c+36,"ysyx_22040175_top u_ex_mem_regs reg_waddr_ex_mem_i", false,-1, 4,0);
        tracep->declQuad(c+51,"ysyx_22040175_top u_ex_mem_regs from_ex_alu_res_ex_mem_i", false,-1, 63,0);
        tracep->declBus(c+41,"ysyx_22040175_top u_ex_mem_regs wmask_ex_mem_i", false,-1, 7,0);
        tracep->declBit(c+42,"ysyx_22040175_top u_ex_mem_regs s_flag_ex_mem_i", false,-1);
        tracep->declBit(c+672,"ysyx_22040175_top u_ex_mem_regs time_set_ex_mem_i", false,-1);
        tracep->declBus(c+43,"ysyx_22040175_top u_ex_mem_regs s_imm_ex_mem_i", false,-1, 31,0);
        tracep->declBus(c+44,"ysyx_22040175_top u_ex_mem_regs expand_signed_ex_mem_i", false,-1, 3,0);
        tracep->declBit(c+40,"ysyx_22040175_top u_ex_mem_regs ebreak_flag_ex_mem_i", false,-1);
        tracep->declBus(c+46,"ysyx_22040175_top u_ex_mem_regs rd_buf_flag_ex_mem_i", false,-1, 2,0);
        tracep->declBus(c+37,"ysyx_22040175_top u_ex_mem_regs alu_op_ex_mem_i", false,-1, 4,0);
        tracep->declQuad(c+53,"ysyx_22040175_top u_ex_mem_regs alu_src1_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+55,"ysyx_22040175_top u_ex_mem_regs alu_src2_ex_mem_i", false,-1, 63,0);
        tracep->declBit(c+57,"ysyx_22040175_top u_ex_mem_regs reg_wen_ex_mem_o", false,-1);
        tracep->declBus(c+58,"ysyx_22040175_top u_ex_mem_regs reg_waddr_ex_mem_o", false,-1, 4,0);
        tracep->declBit(c+59,"ysyx_22040175_top u_ex_mem_regs ebreak_flag_ex_mem_o", false,-1);
        tracep->declBus(c+60,"ysyx_22040175_top u_ex_mem_regs wmask_ex_mem_o", false,-1, 7,0);
        tracep->declBit(c+61,"ysyx_22040175_top u_ex_mem_regs s_flag_ex_mem_o", false,-1);
        tracep->declBit(c+62,"ysyx_22040175_top u_ex_mem_regs time_set_ex_mem_o", false,-1);
        tracep->declBus(c+63,"ysyx_22040175_top u_ex_mem_regs s_imm_ex_mem_o", false,-1, 31,0);
        tracep->declBus(c+64,"ysyx_22040175_top u_ex_mem_regs expand_signed_ex_mem_o", false,-1, 3,0);
        tracep->declBus(c+65,"ysyx_22040175_top u_ex_mem_regs rd_buf_flag_ex_mem_o", false,-1, 2,0);
        tracep->declBus(c+66,"ysyx_22040175_top u_ex_mem_regs alu_op_ex_mem_o", false,-1, 4,0);
        tracep->declQuad(c+67,"ysyx_22040175_top u_ex_mem_regs alu_src1_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+69,"ysyx_22040175_top u_ex_mem_regs alu_src2_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+71,"ysyx_22040175_top u_ex_mem_regs from_ex_alu_res_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+33,"ysyx_22040175_top u_ex_mem_regs pc_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+73,"ysyx_22040175_top u_ex_mem_regs pc_ex_mem_o", false,-1, 63,0);
        tracep->declBit(c+48,"ysyx_22040175_top u_ex_mem_regs rest_id_mem_ex_mem_i", false,-1);
        tracep->declBit(c+95,"ysyx_22040175_top u_ex_mem_regs rest_id_mem_ex_mem_o", false,-1);
        tracep->declBit(c+50,"ysyx_22040175_top u_ex_mem_regs cunqu_hazard_ex_mem_i", false,-1);
        tracep->declBit(c+75,"ysyx_22040175_top u_ex_mem_regs cunqu_hazard_ex_mem_o", false,-1);
        tracep->declBus(c+65,"ysyx_22040175_top u_mem_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+66,"ysyx_22040175_top u_mem_stage alu_op", false,-1, 4,0);
        tracep->declQuad(c+67,"ysyx_22040175_top u_mem_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+69,"ysyx_22040175_top u_mem_stage alu_src2", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22040175_top u_mem_stage sign_alu_res", false,-1, 63,0);
        tracep->declQuad(c+71,"ysyx_22040175_top u_mem_stage mem_from_ex_alu_res", false,-1, 63,0);
        tracep->declBus(c+64,"ysyx_22040175_top u_mem_stage mem_expand_signed", false,-1, 3,0);
        tracep->declQuad(c+78,"ysyx_22040175_top u_mem_stage wb_hazard_result", false,-1, 63,0);
        tracep->declBit(c+75,"ysyx_22040175_top u_mem_stage mem_cunqu_hazard", false,-1);
        tracep->declQuad(c+174,"ysyx_22040175_top u_mem_stage rd_buf_lw", false,-1, 63,0);
        tracep->declQuad(c+176,"ysyx_22040175_top u_mem_stage alu_res", false,-1, 63,0);
        tracep->declBit(c+582,"ysyx_22040175_top u_mem_wb_regs clk", false,-1);
        tracep->declBit(c+244,"ysyx_22040175_top u_mem_wb_regs rst_n", false,-1);
        tracep->declBit(c+57,"ysyx_22040175_top u_mem_wb_regs reg_wen_mem_wb_i", false,-1);
        tracep->declBus(c+58,"ysyx_22040175_top u_mem_wb_regs reg_waddr_mem_wb_i", false,-1, 4,0);
        tracep->declQuad(c+71,"ysyx_22040175_top u_mem_wb_regs from_ex_alu_res_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22040175_top u_mem_wb_regs from_mem_alu_res_mem_wb_i", false,-1, 63,0);
        tracep->declBus(c+60,"ysyx_22040175_top u_mem_wb_regs wmask_mem_wb_i", false,-1, 7,0);
        tracep->declBit(c+61,"ysyx_22040175_top u_mem_wb_regs s_flag_mem_wb_i", false,-1);
        tracep->declBit(c+62,"ysyx_22040175_top u_mem_wb_regs time_set_mem_wb_i", false,-1);
        tracep->declBus(c+63,"ysyx_22040175_top u_mem_wb_regs s_imm_mem_wb_i", false,-1, 31,0);
        tracep->declBus(c+64,"ysyx_22040175_top u_mem_wb_regs expand_signed_mem_wb_i", false,-1, 3,0);
        tracep->declBit(c+59,"ysyx_22040175_top u_mem_wb_regs ebreak_flag_mem_wb_i", false,-1);
        tracep->declBus(c+65,"ysyx_22040175_top u_mem_wb_regs rd_buf_flag_mem_wb_i", false,-1, 2,0);
        tracep->declBit(c+80,"ysyx_22040175_top u_mem_wb_regs reg_wen_mem_wb_o", false,-1);
        tracep->declBus(c+81,"ysyx_22040175_top u_mem_wb_regs reg_waddr_mem_wb_o", false,-1, 4,0);
        tracep->declBus(c+82,"ysyx_22040175_top u_mem_wb_regs wmask_mem_wb_o", false,-1, 7,0);
        tracep->declBit(c+83,"ysyx_22040175_top u_mem_wb_regs s_flag_mem_wb_o", false,-1);
        tracep->declBit(c+84,"ysyx_22040175_top u_mem_wb_regs time_set_mem_wb_o", false,-1);
        tracep->declBus(c+85,"ysyx_22040175_top u_mem_wb_regs s_imm_mem_wb_o", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22040175_top u_mem_wb_regs expand_signed_mem_wb_o", false,-1, 3,0);
        tracep->declBit(c+87,"ysyx_22040175_top u_mem_wb_regs ebreak_flag_mem_wb_o", false,-1);
        tracep->declBus(c+88,"ysyx_22040175_top u_mem_wb_regs rd_buf_flag_mem_wb_o", false,-1, 2,0);
        tracep->declQuad(c+89,"ysyx_22040175_top u_mem_wb_regs from_ex_alu_res_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+91,"ysyx_22040175_top u_mem_wb_regs from_mem_alu_res_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+73,"ysyx_22040175_top u_mem_wb_regs pc_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22040175_top u_mem_wb_regs pc_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+95,"ysyx_22040175_top u_mem_wb_regs rest_id_mem_ex_mem_o", false,-1);
        tracep->declBit(c+75,"ysyx_22040175_top u_mem_wb_regs cunqu_hazard_mem_wb_i", false,-1);
        tracep->declBit(c+96,"ysyx_22040175_top u_mem_wb_regs cunqu_hazard_mem_wb_o", false,-1);
        tracep->declBit(c+582,"ysyx_22040175_top u_wb_stage clk", false,-1);
        tracep->declBit(c+244,"ysyx_22040175_top u_wb_stage rst_n", false,-1);
        tracep->declBit(c+80,"ysyx_22040175_top u_wb_stage reg_wen", false,-1);
        tracep->declBus(c+81,"ysyx_22040175_top u_wb_stage reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+89,"ysyx_22040175_top u_wb_stage from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+91,"ysyx_22040175_top u_wb_stage from_mem_alu_res", false,-1, 63,0);
        tracep->declBus(c+82,"ysyx_22040175_top u_wb_stage wmask", false,-1, 7,0);
        tracep->declBit(c+83,"ysyx_22040175_top u_wb_stage s_flag", false,-1);
        tracep->declBit(c+588,"ysyx_22040175_top u_wb_stage time_set", false,-1);
        tracep->declBus(c+85,"ysyx_22040175_top u_wb_stage s_imm", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22040175_top u_wb_stage expand_signed", false,-1, 3,0);
        tracep->declBus(c+88,"ysyx_22040175_top u_wb_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+87,"ysyx_22040175_top u_wb_stage ebreak_flag", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+518+i*2,"ysyx_22040175_top u_wb_stage reg_f", true,(i+0), 63,0);}}
        tracep->declQuad(c+93,"ysyx_22040175_top u_wb_stage wb_pc", false,-1, 63,0);
        tracep->declQuad(c+97,"ysyx_22040175_top u_wb_stage wb_delay_pc", false,-1, 63,0);
        tracep->declBit(c+96,"ysyx_22040175_top u_wb_stage cunqu_hazard", false,-1);
        tracep->declQuad(c+178,"ysyx_22040175_top u_wb_stage reg_wdata", false,-1, 63,0);
        tracep->declQuad(c+592,"ysyx_22040175_top u_wb_stage end_wb_waddr", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+180+i*2,"ysyx_22040175_top u_wb_stage wb_delay_reg_f", true,(i+0), 63,0);}}
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
        tracep->fullBit(oldp+1,(vlSelf->ysyx_22040175_top__DOT__if_ena));
        tracep->fullIData(oldp+2,((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata)),32);
        tracep->fullQData(oldp+3,(vlSelf->ysyx_22040175_top__DOT__if_pc),64);
        tracep->fullBit(oldp+5,(vlSelf->ysyx_22040175_top__DOT__rest_id_mem));
        tracep->fullBit(oldp+6,(vlSelf->ysyx_22040175_top__DOT__mul_stop));
        tracep->fullIData(oldp+7,(vlSelf->ysyx_22040175_top__DOT__id_inst),32);
        tracep->fullQData(oldp+8,(vlSelf->ysyx_22040175_top__DOT__id_pc),64);
        tracep->fullBit(oldp+10,(vlSelf->ysyx_22040175_top__DOT__id_ena));
        tracep->fullBit(oldp+11,(vlSelf->ysyx_22040175_top__DOT__id_time_set));
        tracep->fullBit(oldp+12,(vlSelf->ysyx_22040175_top__DOT__delay_sig_jalr));
        tracep->fullBit(oldp+13,(vlSelf->ysyx_22040175_top__DOT__id_reg_wen));
        tracep->fullCData(oldp+14,(vlSelf->ysyx_22040175_top__DOT__id_reg_waddr),5);
        tracep->fullQData(oldp+15,(vlSelf->ysyx_22040175_top__DOT__id_imm),64);
        tracep->fullCData(oldp+17,(vlSelf->ysyx_22040175_top__DOT__id_alu_op),5);
        tracep->fullCData(oldp+18,(vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel),2);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22040175_top__DOT__id_unknown_code),64);
        tracep->fullBit(oldp+21,(vlSelf->ysyx_22040175_top__DOT__id_jalr));
        tracep->fullBit(oldp+22,(vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag));
        tracep->fullCData(oldp+23,(vlSelf->ysyx_22040175_top__DOT__id_wmask),8);
        tracep->fullBit(oldp+24,(vlSelf->ysyx_22040175_top__DOT__id_s_flag));
        tracep->fullIData(oldp+25,(vlSelf->ysyx_22040175_top__DOT__id_s_imm),32);
        tracep->fullCData(oldp+26,(vlSelf->ysyx_22040175_top__DOT__id_expand_signed),4);
        tracep->fullCData(oldp+27,(vlSelf->ysyx_22040175_top__DOT__id_rd_flag),3);
        tracep->fullCData(oldp+28,(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag),3);
        tracep->fullBit(oldp+29,(vlSelf->ysyx_22040175_top__DOT__rest_from_id));
        tracep->fullBit(oldp+30,(vlSelf->ysyx_22040175_top__DOT__id_control_rest));
        tracep->fullBit(oldp+31,(vlSelf->ysyx_22040175_top__DOT__rest_wb_hazard));
        tracep->fullBit(oldp+32,(vlSelf->ysyx_22040175_top__DOT__id_cunqu_hazard));
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22040175_top__DOT__ex_pc),64);
        tracep->fullBit(oldp+35,(vlSelf->ysyx_22040175_top__DOT__ex_reg_wen));
        tracep->fullCData(oldp+36,(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr),5);
        tracep->fullCData(oldp+37,(vlSelf->ysyx_22040175_top__DOT__ex_alu_op),5);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22040175_top__DOT__ex_unknown_code),64);
        tracep->fullBit(oldp+40,(vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag));
        tracep->fullCData(oldp+41,(vlSelf->ysyx_22040175_top__DOT__ex_wmask),8);
        tracep->fullBit(oldp+42,(vlSelf->ysyx_22040175_top__DOT__ex_s_flag));
        tracep->fullIData(oldp+43,(vlSelf->ysyx_22040175_top__DOT__ex_s_imm),32);
        tracep->fullCData(oldp+44,(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed),4);
        tracep->fullCData(oldp+45,(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag),3);
        tracep->fullCData(oldp+46,(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag),3);
        tracep->fullBit(oldp+47,(vlSelf->ysyx_22040175_top__DOT__ex_ena));
        tracep->fullBit(oldp+48,(vlSelf->ysyx_22040175_top__DOT__ex_rest_id_mem));
        tracep->fullIData(oldp+49,((IData)(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst)),32);
        tracep->fullBit(oldp+50,(vlSelf->ysyx_22040175_top__DOT__ex_cunqu_hazard));
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2),64);
        tracep->fullBit(oldp+57,(vlSelf->ysyx_22040175_top__DOT__mem_reg_wen));
        tracep->fullCData(oldp+58,(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr),5);
        tracep->fullBit(oldp+59,(vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag));
        tracep->fullCData(oldp+60,(vlSelf->ysyx_22040175_top__DOT__mem_wmask),8);
        tracep->fullBit(oldp+61,(vlSelf->ysyx_22040175_top__DOT__mem_s_flag));
        tracep->fullBit(oldp+62,(vlSelf->ysyx_22040175_top__DOT__mem_time_set));
        tracep->fullIData(oldp+63,(vlSelf->ysyx_22040175_top__DOT__mem_s_imm),32);
        tracep->fullCData(oldp+64,(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed),4);
        tracep->fullCData(oldp+65,(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag),3);
        tracep->fullCData(oldp+66,(vlSelf->ysyx_22040175_top__DOT__mem_alu_op),5);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src1),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src2),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22040175_top__DOT__mem_pc),64);
        tracep->fullBit(oldp+75,(vlSelf->ysyx_22040175_top__DOT__mem_cunqu_hazard));
        tracep->fullQData(oldp+76,(vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res),64);
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22040175_top__DOT__wb_hazard_result),64);
        tracep->fullBit(oldp+80,(vlSelf->ysyx_22040175_top__DOT__wb_reg_wen));
        tracep->fullCData(oldp+81,(vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr),5);
        tracep->fullCData(oldp+82,(vlSelf->ysyx_22040175_top__DOT__wb_wmask),8);
        tracep->fullBit(oldp+83,(vlSelf->ysyx_22040175_top__DOT__wb_s_flag));
        tracep->fullBit(oldp+84,(vlSelf->ysyx_22040175_top__DOT__wb_time_set));
        tracep->fullIData(oldp+85,(vlSelf->ysyx_22040175_top__DOT__wb_s_imm),32);
        tracep->fullCData(oldp+86,(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed),4);
        tracep->fullBit(oldp+87,(vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag));
        tracep->fullCData(oldp+88,(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag),3);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res),64);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res),64);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22040175_top__DOT__wb_pc),64);
        tracep->fullBit(oldp+95,(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem));
        tracep->fullBit(oldp+96,(vlSelf->ysyx_22040175_top__DOT__wb_cunqu_hazard));
        tracep->fullQData(oldp+97,(vlSelf->ysyx_22040175_top__DOT__wb_delay_pc),64);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata),64);
        tracep->fullBit(oldp+101,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_pc_predict__DOT__delay_sig_jalr));
        tracep->fullQData(oldp+102,((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))),64);
        tracep->fullBit(oldp+104,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch));
        tracep->fullBit(oldp+105,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump));
        tracep->fullCData(oldp+106,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op),3);
        tracep->fullCData(oldp+107,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr),5);
        tracep->fullCData(oldp+108,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr),5);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__delay_reg1_rdata),64);
        tracep->fullCData(oldp+111,((0x7fU & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))),7);
        tracep->fullCData(oldp+112,((7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))),3);
        tracep->fullCData(oldp+113,((0x7fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x19U)))),7);
        tracep->fullCData(oldp+114,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 7U)))),5);
        tracep->fullCData(oldp+115,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xfU)))),5);
        tracep->fullCData(oldp+116,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x14U)))),5);
        tracep->fullBit(oldp+117,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem));
        tracep->fullBit(oldp+118,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_rest_id_mem));
        tracep->fullBit(oldp+119,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_control_rest));
        tracep->fullCData(oldp+120,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr),5);
        tracep->fullCData(oldp+121,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond),3);
        tracep->fullQData(oldp+122,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg2_rdata),64);
        tracep->fullQData(oldp+124,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst),64);
        tracep->fullBit(oldp+126,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero));
        tracep->fullQData(oldp+127,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res),64);
        tracep->fullQData(oldp+129,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1),64);
        tracep->fullQData(oldp+131,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2),64);
        tracep->fullBit(oldp+133,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid));
        tracep->fullWData(oldp+134,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p),130);
        tracep->fullBit(oldp+139,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__sh_fnsh_flag));
        tracep->fullBit(oldp+140,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed));
        tracep->fullQData(oldp+141,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2),64);
        tracep->fullWData(oldp+143,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x),130);
        tracep->fullWData(oldp+148,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y),66);
        tracep->fullCData(oldp+151,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state),3);
        tracep->fullCData(oldp+152,(((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                                      ? 0U : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                                                   ? 0U
                                                   : 
                                                  (((0U 
                                                     == 
                                                     (((((7U 
                                                          ^ 
                                                          vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U]) 
                                                         | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U]) 
                                                        | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U]) 
                                                       | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U]) 
                                                      | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U])) 
                                                    | (0U 
                                                       == 
                                                       ((((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U] 
                                                           | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U]) 
                                                          | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U]) 
                                                         | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U]) 
                                                        | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U])))
                                                    ? 3U
                                                    : 2U))
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (((((7U 
                                                          ^ 
                                                          vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U]) 
                                                         | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U]) 
                                                        | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U]) 
                                                       | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U]) 
                                                      | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U])) 
                                                    | (0U 
                                                       == 
                                                       ((((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U] 
                                                           | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U]) 
                                                          | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U]) 
                                                         | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U]) 
                                                        | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U])))
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid)
                                                    ? 1U
                                                    : 0U))))),3);
        tracep->fullWData(oldp+153,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x),130);
        tracep->fullCData(oldp+158,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y),3);
        tracep->fullWData(oldp+159,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p),130);
        tracep->fullWData(oldp+164,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y),130);
        tracep->fullWData(oldp+169,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y),130);
        tracep->fullQData(oldp+174,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw),64);
        tracep->fullQData(oldp+176,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res),64);
        tracep->fullQData(oldp+178,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata),64);
        tracep->fullQData(oldp+180,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0]),64);
        tracep->fullQData(oldp+182,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[1]),64);
        tracep->fullQData(oldp+184,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[2]),64);
        tracep->fullQData(oldp+186,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[3]),64);
        tracep->fullQData(oldp+188,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[4]),64);
        tracep->fullQData(oldp+190,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[5]),64);
        tracep->fullQData(oldp+192,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[6]),64);
        tracep->fullQData(oldp+194,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[7]),64);
        tracep->fullQData(oldp+196,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[8]),64);
        tracep->fullQData(oldp+198,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[9]),64);
        tracep->fullQData(oldp+200,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[10]),64);
        tracep->fullQData(oldp+202,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[11]),64);
        tracep->fullQData(oldp+204,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[12]),64);
        tracep->fullQData(oldp+206,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[13]),64);
        tracep->fullQData(oldp+208,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[14]),64);
        tracep->fullQData(oldp+210,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[15]),64);
        tracep->fullQData(oldp+212,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[16]),64);
        tracep->fullQData(oldp+214,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[17]),64);
        tracep->fullQData(oldp+216,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[18]),64);
        tracep->fullQData(oldp+218,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[19]),64);
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[20]),64);
        tracep->fullQData(oldp+222,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[21]),64);
        tracep->fullQData(oldp+224,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[22]),64);
        tracep->fullQData(oldp+226,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[23]),64);
        tracep->fullQData(oldp+228,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[24]),64);
        tracep->fullQData(oldp+230,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[25]),64);
        tracep->fullQData(oldp+232,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[26]),64);
        tracep->fullQData(oldp+234,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[27]),64);
        tracep->fullQData(oldp+236,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[28]),64);
        tracep->fullQData(oldp+238,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[29]),64);
        tracep->fullQData(oldp+240,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[30]),64);
        tracep->fullQData(oldp+242,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[31]),64);
        tracep->fullBit(oldp+244,(vlSelf->ysyx_22040175_top__DOT__rst_n));
        tracep->fullQData(oldp+245,(vlSelf->ysyx_22040175_top__DOT__id_next_pc),64);
        tracep->fullQData(oldp+247,(vlSelf->ysyx_22040175_top__DOT__id_alu_src1),64);
        tracep->fullQData(oldp+249,(vlSelf->ysyx_22040175_top__DOT__id_alu_src2),64);
        tracep->fullBit(oldp+251,(vlSelf->ysyx_22040175_top__DOT__sig_jalr));
        tracep->fullQData(oldp+252,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0]),64);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[1]),64);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[2]),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[3]),64);
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[4]),64);
        tracep->fullQData(oldp+262,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[5]),64);
        tracep->fullQData(oldp+264,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[6]),64);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[7]),64);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[8]),64);
        tracep->fullQData(oldp+270,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[9]),64);
        tracep->fullQData(oldp+272,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[10]),64);
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[11]),64);
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[12]),64);
        tracep->fullQData(oldp+278,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[13]),64);
        tracep->fullQData(oldp+280,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[14]),64);
        tracep->fullQData(oldp+282,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[15]),64);
        tracep->fullQData(oldp+284,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[16]),64);
        tracep->fullQData(oldp+286,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[17]),64);
        tracep->fullQData(oldp+288,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[18]),64);
        tracep->fullQData(oldp+290,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[19]),64);
        tracep->fullQData(oldp+292,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[20]),64);
        tracep->fullQData(oldp+294,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[21]),64);
        tracep->fullQData(oldp+296,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[22]),64);
        tracep->fullQData(oldp+298,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[23]),64);
        tracep->fullQData(oldp+300,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[24]),64);
        tracep->fullQData(oldp+302,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[25]),64);
        tracep->fullQData(oldp+304,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[26]),64);
        tracep->fullQData(oldp+306,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[27]),64);
        tracep->fullQData(oldp+308,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[28]),64);
        tracep->fullQData(oldp+310,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[29]),64);
        tracep->fullQData(oldp+312,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[30]),64);
        tracep->fullQData(oldp+314,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[31]),64);
        tracep->fullQData(oldp+316,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0]),64);
        tracep->fullQData(oldp+318,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[1]),64);
        tracep->fullQData(oldp+320,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[2]),64);
        tracep->fullQData(oldp+322,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[3]),64);
        tracep->fullQData(oldp+324,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[4]),64);
        tracep->fullQData(oldp+326,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[5]),64);
        tracep->fullQData(oldp+328,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[6]),64);
        tracep->fullQData(oldp+330,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[7]),64);
        tracep->fullQData(oldp+332,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[8]),64);
        tracep->fullQData(oldp+334,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[9]),64);
        tracep->fullQData(oldp+336,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[10]),64);
        tracep->fullQData(oldp+338,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[11]),64);
        tracep->fullQData(oldp+340,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[12]),64);
        tracep->fullQData(oldp+342,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[13]),64);
        tracep->fullQData(oldp+344,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[14]),64);
        tracep->fullQData(oldp+346,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[15]),64);
        tracep->fullQData(oldp+348,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[16]),64);
        tracep->fullQData(oldp+350,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[17]),64);
        tracep->fullQData(oldp+352,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[18]),64);
        tracep->fullQData(oldp+354,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[19]),64);
        tracep->fullQData(oldp+356,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[20]),64);
        tracep->fullQData(oldp+358,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[21]),64);
        tracep->fullQData(oldp+360,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[22]),64);
        tracep->fullQData(oldp+362,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[23]),64);
        tracep->fullQData(oldp+364,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[24]),64);
        tracep->fullQData(oldp+366,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[25]),64);
        tracep->fullQData(oldp+368,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[26]),64);
        tracep->fullQData(oldp+370,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[27]),64);
        tracep->fullQData(oldp+372,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[28]),64);
        tracep->fullQData(oldp+374,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[29]),64);
        tracep->fullQData(oldp+376,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[30]),64);
        tracep->fullQData(oldp+378,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[31]),64);
        tracep->fullQData(oldp+380,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata),64);
        tracep->fullQData(oldp+382,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata),64);
        tracep->fullCData(oldp+384,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond),3);
        tracep->fullQData(oldp+385,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0]),64);
        tracep->fullQData(oldp+387,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[1]),64);
        tracep->fullQData(oldp+389,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[2]),64);
        tracep->fullQData(oldp+391,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[3]),64);
        tracep->fullQData(oldp+393,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[4]),64);
        tracep->fullQData(oldp+395,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[5]),64);
        tracep->fullQData(oldp+397,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[6]),64);
        tracep->fullQData(oldp+399,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[7]),64);
        tracep->fullQData(oldp+401,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[8]),64);
        tracep->fullQData(oldp+403,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[9]),64);
        tracep->fullQData(oldp+405,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[10]),64);
        tracep->fullQData(oldp+407,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[11]),64);
        tracep->fullQData(oldp+409,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[12]),64);
        tracep->fullQData(oldp+411,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[13]),64);
        tracep->fullQData(oldp+413,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[14]),64);
        tracep->fullQData(oldp+415,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[15]),64);
        tracep->fullQData(oldp+417,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[16]),64);
        tracep->fullQData(oldp+419,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[17]),64);
        tracep->fullQData(oldp+421,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[18]),64);
        tracep->fullQData(oldp+423,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[19]),64);
        tracep->fullQData(oldp+425,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[20]),64);
        tracep->fullQData(oldp+427,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[21]),64);
        tracep->fullQData(oldp+429,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[22]),64);
        tracep->fullQData(oldp+431,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[23]),64);
        tracep->fullQData(oldp+433,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[24]),64);
        tracep->fullQData(oldp+435,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[25]),64);
        tracep->fullQData(oldp+437,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[26]),64);
        tracep->fullQData(oldp+439,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[27]),64);
        tracep->fullQData(oldp+441,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[28]),64);
        tracep->fullQData(oldp+443,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[29]),64);
        tracep->fullQData(oldp+445,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[30]),64);
        tracep->fullQData(oldp+447,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[31]),64);
        tracep->fullQData(oldp+449,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0]),64);
        tracep->fullQData(oldp+451,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[1]),64);
        tracep->fullQData(oldp+453,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[2]),64);
        tracep->fullQData(oldp+455,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[3]),64);
        tracep->fullQData(oldp+457,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[4]),64);
        tracep->fullQData(oldp+459,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[5]),64);
        tracep->fullQData(oldp+461,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[6]),64);
        tracep->fullQData(oldp+463,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[7]),64);
        tracep->fullQData(oldp+465,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[8]),64);
        tracep->fullQData(oldp+467,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[9]),64);
        tracep->fullQData(oldp+469,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[10]),64);
        tracep->fullQData(oldp+471,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[11]),64);
        tracep->fullQData(oldp+473,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[12]),64);
        tracep->fullQData(oldp+475,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[13]),64);
        tracep->fullQData(oldp+477,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[14]),64);
        tracep->fullQData(oldp+479,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[15]),64);
        tracep->fullQData(oldp+481,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[16]),64);
        tracep->fullQData(oldp+483,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[17]),64);
        tracep->fullQData(oldp+485,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[18]),64);
        tracep->fullQData(oldp+487,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[19]),64);
        tracep->fullQData(oldp+489,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[20]),64);
        tracep->fullQData(oldp+491,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[21]),64);
        tracep->fullQData(oldp+493,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[22]),64);
        tracep->fullQData(oldp+495,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[23]),64);
        tracep->fullQData(oldp+497,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[24]),64);
        tracep->fullQData(oldp+499,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[25]),64);
        tracep->fullQData(oldp+501,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[26]),64);
        tracep->fullQData(oldp+503,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[27]),64);
        tracep->fullQData(oldp+505,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[28]),64);
        tracep->fullQData(oldp+507,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[29]),64);
        tracep->fullQData(oldp+509,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[30]),64);
        tracep->fullQData(oldp+511,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[31]),64);
        tracep->fullBit(oldp+513,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero));
        tracep->fullQData(oldp+514,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1),64);
        tracep->fullQData(oldp+516,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2),64);
        tracep->fullQData(oldp+518,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[0]),64);
        tracep->fullQData(oldp+520,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[1]),64);
        tracep->fullQData(oldp+522,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[2]),64);
        tracep->fullQData(oldp+524,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[3]),64);
        tracep->fullQData(oldp+526,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[4]),64);
        tracep->fullQData(oldp+528,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[5]),64);
        tracep->fullQData(oldp+530,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[6]),64);
        tracep->fullQData(oldp+532,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[7]),64);
        tracep->fullQData(oldp+534,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[8]),64);
        tracep->fullQData(oldp+536,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[9]),64);
        tracep->fullQData(oldp+538,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[10]),64);
        tracep->fullQData(oldp+540,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[11]),64);
        tracep->fullQData(oldp+542,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[12]),64);
        tracep->fullQData(oldp+544,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[13]),64);
        tracep->fullQData(oldp+546,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[14]),64);
        tracep->fullQData(oldp+548,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[15]),64);
        tracep->fullQData(oldp+550,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[16]),64);
        tracep->fullQData(oldp+552,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[17]),64);
        tracep->fullQData(oldp+554,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[18]),64);
        tracep->fullQData(oldp+556,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[19]),64);
        tracep->fullQData(oldp+558,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[20]),64);
        tracep->fullQData(oldp+560,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[21]),64);
        tracep->fullQData(oldp+562,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[22]),64);
        tracep->fullQData(oldp+564,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[23]),64);
        tracep->fullQData(oldp+566,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[24]),64);
        tracep->fullQData(oldp+568,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[25]),64);
        tracep->fullQData(oldp+570,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[26]),64);
        tracep->fullQData(oldp+572,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[27]),64);
        tracep->fullQData(oldp+574,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[28]),64);
        tracep->fullQData(oldp+576,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[29]),64);
        tracep->fullQData(oldp+578,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[30]),64);
        tracep->fullQData(oldp+580,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[31]),64);
        tracep->fullBit(oldp+582,(vlSelf->clk));
        tracep->fullBit(oldp+583,(vlSelf->rst));
        tracep->fullIData(oldp+584,(vlSelf->inst),32);
        tracep->fullIData(oldp+585,(vlSelf->pc),32);
        tracep->fullQData(oldp+586,(vlSelf->unknown_code),64);
        tracep->fullBit(oldp+588,(vlSelf->time_set));
        tracep->fullIData(oldp+589,(vlSelf->diff_pc),32);
        tracep->fullIData(oldp+590,(vlSelf->diff_delay_pc),32);
        tracep->fullBit(oldp+591,(vlSelf->out_mem_rd_buf_flag));
        tracep->fullQData(oldp+592,((vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
                                     [vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr] 
                                     + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__wb_s_imm)))),64);
        tracep->fullQData(oldp+594,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[0]),64);
        tracep->fullQData(oldp+596,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[1]),64);
        tracep->fullQData(oldp+598,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[2]),64);
        tracep->fullQData(oldp+600,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[3]),64);
        tracep->fullQData(oldp+602,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[4]),64);
        tracep->fullQData(oldp+604,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[5]),64);
        tracep->fullQData(oldp+606,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[6]),64);
        tracep->fullQData(oldp+608,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[7]),64);
        tracep->fullQData(oldp+610,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[8]),64);
        tracep->fullQData(oldp+612,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[9]),64);
        tracep->fullQData(oldp+614,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[10]),64);
        tracep->fullQData(oldp+616,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[11]),64);
        tracep->fullQData(oldp+618,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[12]),64);
        tracep->fullQData(oldp+620,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[13]),64);
        tracep->fullQData(oldp+622,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[14]),64);
        tracep->fullQData(oldp+624,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[15]),64);
        tracep->fullQData(oldp+626,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[16]),64);
        tracep->fullQData(oldp+628,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[17]),64);
        tracep->fullQData(oldp+630,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[18]),64);
        tracep->fullQData(oldp+632,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[19]),64);
        tracep->fullQData(oldp+634,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[20]),64);
        tracep->fullQData(oldp+636,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[21]),64);
        tracep->fullQData(oldp+638,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[22]),64);
        tracep->fullQData(oldp+640,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[23]),64);
        tracep->fullQData(oldp+642,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[24]),64);
        tracep->fullQData(oldp+644,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[25]),64);
        tracep->fullQData(oldp+646,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[26]),64);
        tracep->fullQData(oldp+648,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[27]),64);
        tracep->fullQData(oldp+650,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[28]),64);
        tracep->fullQData(oldp+652,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[29]),64);
        tracep->fullQData(oldp+654,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[30]),64);
        tracep->fullQData(oldp+656,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[31]),64);
        tracep->fullBit(oldp+658,(vlSelf->ysyx_22040175_top__DOT__id_branch));
        tracep->fullBit(oldp+659,(vlSelf->ysyx_22040175_top__DOT__id_jump));
        tracep->fullQData(oldp+660,(vlSelf->ysyx_22040175_top__DOT__id_end_write_addr),64);
        tracep->fullBit(oldp+662,(vlSelf->ysyx_22040175_top__DOT__ex_branch));
        tracep->fullBit(oldp+663,(vlSelf->ysyx_22040175_top__DOT__ex_jump));
        tracep->fullQData(oldp+664,(vlSelf->ysyx_22040175_top__DOT__ex_imm),64);
        tracep->fullCData(oldp+666,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src_sel),2);
        tracep->fullBit(oldp+667,(vlSelf->ysyx_22040175_top__DOT__ex_jalr));
        tracep->fullQData(oldp+668,(vlSelf->ysyx_22040175_top__DOT__ex_reg1_rdata),64);
        tracep->fullQData(oldp+670,(vlSelf->ysyx_22040175_top__DOT__ex_reg2_rdata),64);
        tracep->fullBit(oldp+672,(vlSelf->ysyx_22040175_top__DOT__ex_time_set));
        tracep->fullBit(oldp+673,(vlSelf->ysyx_22040175_top__DOT__id_rest_no_use));
        tracep->fullQData(oldp+674,(vlSelf->ysyx_22040175_top__DOT__ex_end_write_addr),64);
        tracep->fullQData(oldp+676,(vlSelf->ysyx_22040175_top__DOT__ex_next_pc),64);
        tracep->fullBit(oldp+678,(vlSelf->ysyx_22040175_top__DOT__write_ready));
        tracep->fullBit(oldp+679,(vlSelf->ysyx_22040175_top__DOT__ex_pc_ready));
        tracep->fullBit(oldp+680,(vlSelf->ysyx_22040175_top__DOT__mem_pc_ready));
        tracep->fullBit(oldp+681,(vlSelf->ysyx_22040175_top__DOT__fr_ex_no_use));
        tracep->fullQData(oldp+682,(vlSelf->ysyx_22040175_top__DOT__mem_end_write_addr),64);
        tracep->fullBit(oldp+684,(vlSelf->ysyx_22040175_top__DOT__wb_pc_ready));
        tracep->fullQData(oldp+685,(vlSelf->ysyx_22040175_top__DOT__wb_end_write_addr),64);
        tracep->fullCData(oldp+687,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__test),3);
        tracep->fullCData(oldp+688,(3U),2);
        tracep->fullCData(oldp+689,(0U),3);
        tracep->fullCData(oldp+690,(1U),3);
        tracep->fullCData(oldp+691,(2U),3);
        tracep->fullCData(oldp+692,(3U),3);
    }
}
