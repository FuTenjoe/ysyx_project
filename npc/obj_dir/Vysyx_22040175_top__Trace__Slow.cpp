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
        tracep->declBit(c+611,"clk", false,-1);
        tracep->declBit(c+612,"rst", false,-1);
        tracep->declBus(c+613,"inst", false,-1, 31,0);
        tracep->declBus(c+614,"pc", false,-1, 31,0);
        tracep->declQuad(c+615,"unknown_code", false,-1, 63,0);
        tracep->declBit(c+617,"time_set", false,-1);
        tracep->declBus(c+618,"diff_pc", false,-1, 31,0);
        tracep->declBus(c+619,"diff_delay_pc", false,-1, 31,0);
        tracep->declBit(c+620,"out_mem_rd_buf_flag", false,-1);
        tracep->declBit(c+611,"ysyx_22040175_top clk", false,-1);
        tracep->declBit(c+612,"ysyx_22040175_top rst", false,-1);
        tracep->declBus(c+613,"ysyx_22040175_top inst", false,-1, 31,0);
        tracep->declBus(c+614,"ysyx_22040175_top pc", false,-1, 31,0);
        tracep->declQuad(c+615,"ysyx_22040175_top unknown_code", false,-1, 63,0);
        tracep->declBit(c+617,"ysyx_22040175_top time_set", false,-1);
        tracep->declBus(c+618,"ysyx_22040175_top diff_pc", false,-1, 31,0);
        tracep->declBus(c+619,"ysyx_22040175_top diff_delay_pc", false,-1, 31,0);
        tracep->declBit(c+620,"ysyx_22040175_top out_mem_rd_buf_flag", false,-1);
        tracep->declBit(c+273,"ysyx_22040175_top rst_n", false,-1);
        tracep->declQuad(c+274,"ysyx_22040175_top id_next_pc", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22040175_top if_ena", false,-1);
        tracep->declBus(c+2,"ysyx_22040175_top if_inst", false,-1, 31,0);
        tracep->declQuad(c+3,"ysyx_22040175_top if_pc", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top rest_id_mem", false,-1);
        tracep->declBus(c+6,"ysyx_22040175_top id_inst", false,-1, 31,0);
        tracep->declQuad(c+7,"ysyx_22040175_top id_pc", false,-1, 63,0);
        tracep->declBit(c+9,"ysyx_22040175_top id_ena", false,-1);
        tracep->declBit(c+10,"ysyx_22040175_top id_time_set", false,-1);
        tracep->declBit(c+11,"ysyx_22040175_top delay_sig_jalr", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+623+i*2,"ysyx_22040175_top to_id_reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+687,"ysyx_22040175_top id_branch", false,-1);
        tracep->declBit(c+688,"ysyx_22040175_top id_jump", false,-1);
        tracep->declBit(c+12,"ysyx_22040175_top id_reg_wen", false,-1);
        tracep->declBus(c+13,"ysyx_22040175_top id_reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+276,"ysyx_22040175_top id_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+278,"ysyx_22040175_top id_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+14,"ysyx_22040175_top id_imm", false,-1, 63,0);
        tracep->declBus(c+16,"ysyx_22040175_top id_alu_op", false,-1, 4,0);
        tracep->declBus(c+17,"ysyx_22040175_top id_alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+18,"ysyx_22040175_top id_unknown_code", false,-1, 63,0);
        tracep->declBit(c+20,"ysyx_22040175_top id_jalr", false,-1);
        tracep->declBit(c+21,"ysyx_22040175_top id_ebreak_flag", false,-1);
        tracep->declBus(c+22,"ysyx_22040175_top id_wmask", false,-1, 7,0);
        tracep->declBit(c+23,"ysyx_22040175_top id_s_flag", false,-1);
        tracep->declBus(c+24,"ysyx_22040175_top id_s_imm", false,-1, 31,0);
        tracep->declBus(c+25,"ysyx_22040175_top id_expand_signed", false,-1, 3,0);
        tracep->declBus(c+26,"ysyx_22040175_top id_rd_flag", false,-1, 2,0);
        tracep->declBus(c+27,"ysyx_22040175_top id_rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+28,"ysyx_22040175_top rest_from_id", false,-1);
        tracep->declBit(c+29,"ysyx_22040175_top id_control_rest", false,-1);
        tracep->declQuad(c+689,"ysyx_22040175_top id_end_write_addr", false,-1, 63,0);
        tracep->declBit(c+30,"ysyx_22040175_top rest_wb_hazard", false,-1);
        tracep->declBit(c+280,"ysyx_22040175_top sig_jalr", false,-1);
        tracep->declBit(c+31,"ysyx_22040175_top id_mul", false,-1);
        tracep->declBit(c+32,"ysyx_22040175_top id_cunqu_hazard", false,-1);
        tracep->declQuad(c+33,"ysyx_22040175_top ex_pc", false,-1, 63,0);
        tracep->declBit(c+691,"ysyx_22040175_top ex_branch", false,-1);
        tracep->declBit(c+692,"ysyx_22040175_top ex_jump", false,-1);
        tracep->declBit(c+35,"ysyx_22040175_top ex_reg_wen", false,-1);
        tracep->declBus(c+36,"ysyx_22040175_top ex_reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+693,"ysyx_22040175_top ex_imm", false,-1, 63,0);
        tracep->declBus(c+37,"ysyx_22040175_top ex_alu_op", false,-1, 4,0);
        tracep->declBus(c+695,"ysyx_22040175_top ex_alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+38,"ysyx_22040175_top ex_unknown_code", false,-1, 63,0);
        tracep->declBit(c+696,"ysyx_22040175_top ex_jalr", false,-1);
        tracep->declBit(c+40,"ysyx_22040175_top ex_ebreak_flag", false,-1);
        tracep->declBus(c+41,"ysyx_22040175_top ex_wmask", false,-1, 7,0);
        tracep->declBit(c+42,"ysyx_22040175_top ex_s_flag", false,-1);
        tracep->declBus(c+43,"ysyx_22040175_top ex_s_imm", false,-1, 31,0);
        tracep->declBus(c+44,"ysyx_22040175_top ex_expand_signed", false,-1, 3,0);
        tracep->declBus(c+45,"ysyx_22040175_top ex_rd_flag", false,-1, 2,0);
        tracep->declBus(c+46,"ysyx_22040175_top ex_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+697,"ysyx_22040175_top ex_reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+699,"ysyx_22040175_top ex_reg2_rdata", false,-1, 63,0);
        tracep->declBit(c+47,"ysyx_22040175_top ex_ena", false,-1);
        tracep->declBit(c+701,"ysyx_22040175_top ex_time_set", false,-1);
        tracep->declBit(c+702,"ysyx_22040175_top id_rest_no_use", false,-1);
        tracep->declBit(c+48,"ysyx_22040175_top ex_rest_id_mem", false,-1);
        tracep->declBus(c+49,"ysyx_22040175_top ex_inst", false,-1, 31,0);
        tracep->declQuad(c+703,"ysyx_22040175_top ex_end_write_addr", false,-1, 63,0);
        tracep->declBit(c+50,"ysyx_22040175_top ex_cunqu_hazard", false,-1);
        tracep->declBit(c+51,"ysyx_22040175_top ex_id_mul", false,-1);
        tracep->declQuad(c+52,"ysyx_22040175_top from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22040175_top ex_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+56,"ysyx_22040175_top ex_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+705,"ysyx_22040175_top ex_next_pc", false,-1, 63,0);
        tracep->declBit(c+707,"ysyx_22040175_top write_ready", false,-1);
        tracep->declBit(c+708,"ysyx_22040175_top ex_pc_ready", false,-1);
        tracep->declBit(c+58,"ysyx_22040175_top sh_fnsh_flag", false,-1);
        tracep->declBit(c+59,"ysyx_22040175_top mem_reg_wen", false,-1);
        tracep->declBus(c+60,"ysyx_22040175_top mem_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+61,"ysyx_22040175_top mem_ebreak_flag", false,-1);
        tracep->declBus(c+62,"ysyx_22040175_top mem_wmask", false,-1, 7,0);
        tracep->declBit(c+63,"ysyx_22040175_top mem_s_flag", false,-1);
        tracep->declBit(c+64,"ysyx_22040175_top mem_time_set", false,-1);
        tracep->declBus(c+65,"ysyx_22040175_top mem_s_imm", false,-1, 31,0);
        tracep->declBus(c+66,"ysyx_22040175_top mem_expand_signed", false,-1, 3,0);
        tracep->declBus(c+67,"ysyx_22040175_top mem_rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+68,"ysyx_22040175_top mem_alu_op", false,-1, 4,0);
        tracep->declQuad(c+69,"ysyx_22040175_top mem_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+71,"ysyx_22040175_top mem_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+73,"ysyx_22040175_top mem_from_ex_alu_res", false,-1, 63,0);
        tracep->declBit(c+709,"ysyx_22040175_top mem_pc_ready", false,-1);
        tracep->declQuad(c+75,"ysyx_22040175_top mem_pc", false,-1, 63,0);
        tracep->declBit(c+710,"ysyx_22040175_top fr_ex_no_use", false,-1);
        tracep->declQuad(c+711,"ysyx_22040175_top mem_end_write_addr", false,-1, 63,0);
        tracep->declBit(c+77,"ysyx_22040175_top mem_cunqu_hazard", false,-1);
        tracep->declQuad(c+78,"ysyx_22040175_top from_mem_alu_res", false,-1, 63,0);
        tracep->declQuad(c+80,"ysyx_22040175_top wb_hazard_result", false,-1, 63,0);
        tracep->declBit(c+82,"ysyx_22040175_top wb_reg_wen", false,-1);
        tracep->declBus(c+83,"ysyx_22040175_top wb_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+84,"ysyx_22040175_top wb_wmask", false,-1, 7,0);
        tracep->declBit(c+85,"ysyx_22040175_top wb_s_flag", false,-1);
        tracep->declBit(c+86,"ysyx_22040175_top wb_time_set", false,-1);
        tracep->declBus(c+87,"ysyx_22040175_top wb_s_imm", false,-1, 31,0);
        tracep->declBus(c+88,"ysyx_22040175_top wb_expand_signed", false,-1, 3,0);
        tracep->declBit(c+89,"ysyx_22040175_top wb_ebreak_flag", false,-1);
        tracep->declBus(c+90,"ysyx_22040175_top wb_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+91,"ysyx_22040175_top wb_from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22040175_top wb_from_mem_alu_res", false,-1, 63,0);
        tracep->declBit(c+713,"ysyx_22040175_top wb_pc_ready", false,-1);
        tracep->declQuad(c+95,"ysyx_22040175_top wb_pc", false,-1, 63,0);
        tracep->declBit(c+97,"ysyx_22040175_top mem_rest_id_mem", false,-1);
        tracep->declQuad(c+714,"ysyx_22040175_top wb_end_write_addr", false,-1, 63,0);
        tracep->declBit(c+98,"ysyx_22040175_top wb_cunqu_hazard", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+281+i*2,"ysyx_22040175_top from_wb_reg_f", true,(i+0), 63,0);}}
        tracep->declQuad(c+99,"ysyx_22040175_top wb_delay_pc", false,-1, 63,0);
        tracep->declBit(c+611,"ysyx_22040175_top u_if_stage clk", false,-1);
        tracep->declBit(c+273,"ysyx_22040175_top u_if_stage rst_n", false,-1);
        tracep->declQuad(c+274,"ysyx_22040175_top u_if_stage id_next_pc", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22040175_top u_if_stage ena", false,-1);
        tracep->declBus(c+2,"ysyx_22040175_top u_if_stage inst", false,-1, 31,0);
        tracep->declQuad(c+3,"ysyx_22040175_top u_if_stage curr_pc", false,-1, 63,0);
        tracep->declBit(c+29,"ysyx_22040175_top u_if_stage control_rest", false,-1);
        tracep->declBit(c+5,"ysyx_22040175_top u_if_stage rest_id_mem", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_if_stage id_pc", false,-1, 63,0);
        tracep->declBit(c+280,"ysyx_22040175_top u_if_stage sig_jalr", false,-1);
        tracep->declBit(c+31,"ysyx_22040175_top u_if_stage id_mul", false,-1);
        tracep->declBit(c+58,"ysyx_22040175_top u_if_stage sh_fnsh_flag", false,-1);
        tracep->declQuad(c+101,"ysyx_22040175_top u_if_stage rdata", false,-1, 63,0);
        tracep->declBit(c+611,"ysyx_22040175_top u_if_stage u_pc_predict clk", false,-1);
        tracep->declBit(c+273,"ysyx_22040175_top u_if_stage u_pc_predict rst_n", false,-1);
        tracep->declBit(c+29,"ysyx_22040175_top u_if_stage u_pc_predict control_rest", false,-1);
        tracep->declQuad(c+274,"ysyx_22040175_top u_if_stage u_pc_predict id_next_pc", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22040175_top u_if_stage u_pc_predict ena", false,-1);
        tracep->declQuad(c+3,"ysyx_22040175_top u_if_stage u_pc_predict curr_pc", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_if_stage u_pc_predict rest_id_mem", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_if_stage u_pc_predict id_curr_pc", false,-1, 63,0);
        tracep->declBit(c+280,"ysyx_22040175_top u_if_stage u_pc_predict sig_jalr", false,-1);
        tracep->declBit(c+31,"ysyx_22040175_top u_if_stage u_pc_predict id_mul", false,-1);
        tracep->declBit(c+58,"ysyx_22040175_top u_if_stage u_pc_predict sh_fnsh_flag", false,-1);
        tracep->declBit(c+103,"ysyx_22040175_top u_if_stage u_pc_predict delay_sig_jalr", false,-1);
        tracep->declBit(c+611,"ysyx_22040175_top u_if_id_regs clk", false,-1);
        tracep->declBit(c+273,"ysyx_22040175_top u_if_id_regs rst_n", false,-1);
        tracep->declQuad(c+3,"ysyx_22040175_top u_if_id_regs pc_if_id_i", false,-1, 63,0);
        tracep->declBus(c+2,"ysyx_22040175_top u_if_id_regs instr_if_id_i", false,-1, 31,0);
        tracep->declBit(c+1,"ysyx_22040175_top u_if_id_regs ena_if_id_i", false,-1);
        tracep->declBit(c+617,"ysyx_22040175_top u_if_id_regs time_set_if_id_i", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_if_id_regs pc_if_id_o", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22040175_top u_if_id_regs instr_if_id_o", false,-1, 31,0);
        tracep->declBit(c+9,"ysyx_22040175_top u_if_id_regs ena_if_id_o", false,-1);
        tracep->declBit(c+10,"ysyx_22040175_top u_if_id_regs time_set_if_id_o", false,-1);
        tracep->declBit(c+29,"ysyx_22040175_top u_if_id_regs control_rest", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_if_id_regs id_pc", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_if_id_regs rest_id_mem", false,-1);
        tracep->declBit(c+11,"ysyx_22040175_top u_if_id_regs delay_sig_jalr", false,-1);
        tracep->declBit(c+31,"ysyx_22040175_top u_if_id_regs id_mul", false,-1);
        tracep->declBit(c+58,"ysyx_22040175_top u_if_id_regs sh_fnsh_flag", false,-1);
        tracep->declBit(c+611,"ysyx_22040175_top u_id_stage clk", false,-1);
        tracep->declBit(c+273,"ysyx_22040175_top u_id_stage rst_n", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_id_stage id_pc", false,-1, 63,0);
        tracep->declQuad(c+274,"ysyx_22040175_top u_id_stage next_pc", false,-1, 63,0);
        tracep->declQuad(c+104,"ysyx_22040175_top u_id_stage inst", false,-1, 63,0);
        tracep->declBus(c+49,"ysyx_22040175_top u_id_stage ex_inst", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+345+i*2,"ysyx_22040175_top u_id_stage reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+36,"ysyx_22040175_top u_id_stage ex_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+28,"ysyx_22040175_top u_id_stage rest_from_id", false,-1);
        tracep->declBit(c+12,"ysyx_22040175_top u_id_stage reg_wen", false,-1);
        tracep->declBus(c+13,"ysyx_22040175_top u_id_stage reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+14,"ysyx_22040175_top u_id_stage imm", false,-1, 63,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_id_stage alu_op", false,-1, 4,0);
        tracep->declBus(c+17,"ysyx_22040175_top u_id_stage alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+18,"ysyx_22040175_top u_id_stage unknown_code", false,-1, 63,0);
        tracep->declBit(c+20,"ysyx_22040175_top u_id_stage jalr", false,-1);
        tracep->declBit(c+21,"ysyx_22040175_top u_id_stage ebreak_flag", false,-1);
        tracep->declBus(c+22,"ysyx_22040175_top u_id_stage wmask", false,-1, 7,0);
        tracep->declBit(c+23,"ysyx_22040175_top u_id_stage s_flag", false,-1);
        tracep->declBus(c+24,"ysyx_22040175_top u_id_stage s_imm", false,-1, 31,0);
        tracep->declBus(c+25,"ysyx_22040175_top u_id_stage expand_signed", false,-1, 3,0);
        tracep->declBus(c+26,"ysyx_22040175_top u_id_stage rd_flag", false,-1, 2,0);
        tracep->declBus(c+27,"ysyx_22040175_top u_id_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+29,"ysyx_22040175_top u_id_stage control_rest", false,-1);
        tracep->declQuad(c+52,"ysyx_22040175_top u_id_stage from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+78,"ysyx_22040175_top u_id_stage from_mem_alu_res", false,-1, 63,0);
        tracep->declBus(c+46,"ysyx_22040175_top u_id_stage ex_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+276,"ysyx_22040175_top u_id_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+278,"ysyx_22040175_top u_id_stage alu_src2", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_id_stage rest_id_mem", false,-1);
        tracep->declQuad(c+80,"ysyx_22040175_top u_id_stage wb_hazard_result", false,-1, 63,0);
        tracep->declBus(c+60,"ysyx_22040175_top u_id_stage mem_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+42,"ysyx_22040175_top u_id_stage ex_s_flag", false,-1);
        tracep->declBit(c+63,"ysyx_22040175_top u_id_stage mem_s_flag", false,-1);
        tracep->declBit(c+30,"ysyx_22040175_top u_id_stage rest_wb_hazard", false,-1);
        tracep->declBit(c+280,"ysyx_22040175_top u_id_stage sig_jalr", false,-1);
        tracep->declBit(c+11,"ysyx_22040175_top u_id_stage delay_sig_jalr", false,-1);
        tracep->declBus(c+43,"ysyx_22040175_top u_id_stage ex_s_imm", false,-1, 31,0);
        tracep->declBit(c+32,"ysyx_22040175_top u_id_stage cunqu_hazard", false,-1);
        tracep->declBit(c+77,"ysyx_22040175_top u_id_stage mem_cunqu_hazard", false,-1);
        tracep->declQuad(c+73,"ysyx_22040175_top u_id_stage mem_from_ex_alu_res", false,-1, 63,0);
        tracep->declBit(c+31,"ysyx_22040175_top u_id_stage id_mul", false,-1);
        tracep->declBit(c+106,"ysyx_22040175_top u_id_stage branch", false,-1);
        tracep->declBit(c+107,"ysyx_22040175_top u_id_stage jump", false,-1);
        tracep->declQuad(c+409,"ysyx_22040175_top u_id_stage reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+411,"ysyx_22040175_top u_id_stage reg2_rdata", false,-1, 63,0);
        tracep->declBus(c+108,"ysyx_22040175_top u_id_stage imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+109,"ysyx_22040175_top u_id_stage reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+110,"ysyx_22040175_top u_id_stage reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+413,"ysyx_22040175_top u_id_stage data_rest_cond", false,-1, 2,0);
        tracep->declQuad(c+111,"ysyx_22040175_top u_id_stage delay_reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+104,"ysyx_22040175_top u_id_stage u_ctrl inst", false,-1, 63,0);
        tracep->declBit(c+106,"ysyx_22040175_top u_id_stage u_ctrl branch", false,-1);
        tracep->declBit(c+107,"ysyx_22040175_top u_id_stage u_ctrl jump", false,-1);
        tracep->declBit(c+12,"ysyx_22040175_top u_id_stage u_ctrl reg_wen", false,-1);
        tracep->declBus(c+13,"ysyx_22040175_top u_id_stage u_ctrl reg_waddr", false,-1, 4,0);
        tracep->declBus(c+109,"ysyx_22040175_top u_id_stage u_ctrl reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+110,"ysyx_22040175_top u_id_stage u_ctrl reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+108,"ysyx_22040175_top u_id_stage u_ctrl imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_id_stage u_ctrl alu_op", false,-1, 4,0);
        tracep->declBus(c+17,"ysyx_22040175_top u_id_stage u_ctrl alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+18,"ysyx_22040175_top u_id_stage u_ctrl unknown_code", false,-1, 63,0);
        tracep->declBit(c+20,"ysyx_22040175_top u_id_stage u_ctrl jalr", false,-1);
        tracep->declBit(c+21,"ysyx_22040175_top u_id_stage u_ctrl ebreak_flag", false,-1);
        tracep->declBus(c+22,"ysyx_22040175_top u_id_stage u_ctrl wmask", false,-1, 7,0);
        tracep->declBit(c+23,"ysyx_22040175_top u_id_stage u_ctrl s_flag", false,-1);
        tracep->declBus(c+24,"ysyx_22040175_top u_id_stage u_ctrl s_imm", false,-1, 31,0);
        tracep->declBus(c+25,"ysyx_22040175_top u_id_stage u_ctrl expand_signed", false,-1, 3,0);
        tracep->declBus(c+26,"ysyx_22040175_top u_id_stage u_ctrl rd_flag", false,-1, 2,0);
        tracep->declBus(c+27,"ysyx_22040175_top u_id_stage u_ctrl rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+31,"ysyx_22040175_top u_id_stage u_ctrl id_mul", false,-1);
        tracep->declBus(c+113,"ysyx_22040175_top u_id_stage u_ctrl opcode", false,-1, 6,0);
        tracep->declBus(c+114,"ysyx_22040175_top u_id_stage u_ctrl funct3", false,-1, 2,0);
        tracep->declBus(c+115,"ysyx_22040175_top u_id_stage u_ctrl funct7", false,-1, 6,0);
        tracep->declBus(c+116,"ysyx_22040175_top u_id_stage u_ctrl rd", false,-1, 4,0);
        tracep->declBus(c+117,"ysyx_22040175_top u_id_stage u_ctrl rs1", false,-1, 4,0);
        tracep->declBus(c+118,"ysyx_22040175_top u_id_stage u_ctrl rs2", false,-1, 4,0);
        tracep->declQuad(c+104,"ysyx_22040175_top u_id_stage u_imm_gen inst", false,-1, 63,0);
        tracep->declBus(c+108,"ysyx_22040175_top u_id_stage u_imm_gen imm_gen_op", false,-1, 2,0);
        tracep->declQuad(c+14,"ysyx_22040175_top u_id_stage u_imm_gen imm", false,-1, 63,0);
        tracep->declBit(c+611,"ysyx_22040175_top u_id_stage u_id_rest clk", false,-1);
        tracep->declBit(c+273,"ysyx_22040175_top u_id_stage u_id_rest rst_n", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_id_stage u_id_rest id_pc", false,-1, 63,0);
        tracep->declBus(c+109,"ysyx_22040175_top u_id_stage u_id_rest reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+110,"ysyx_22040175_top u_id_stage u_id_rest reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+36,"ysyx_22040175_top u_id_stage u_id_rest reg_waddr", false,-1, 4,0);
        tracep->declBus(c+46,"ysyx_22040175_top u_id_stage u_id_rest rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+28,"ysyx_22040175_top u_id_stage u_id_rest rest_from_id", false,-1);
        tracep->declBus(c+49,"ysyx_22040175_top u_id_stage u_id_rest ex_inst", false,-1, 31,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_id_stage u_id_rest rest_id_mem", false,-1);
        tracep->declBus(c+60,"ysyx_22040175_top u_id_stage u_id_rest wb_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+30,"ysyx_22040175_top u_id_stage u_id_rest rest_wb_hazard", false,-1);
        tracep->declBus(c+24,"ysyx_22040175_top u_id_stage u_id_rest s_imm", false,-1, 31,0);
        tracep->declBit(c+42,"ysyx_22040175_top u_id_stage u_id_rest ex_s_flag", false,-1);
        tracep->declBit(c+63,"ysyx_22040175_top u_id_stage u_id_rest mem_s_flag", false,-1);
        tracep->declBus(c+43,"ysyx_22040175_top u_id_stage u_id_rest ex_s_imm", false,-1, 31,0);
        tracep->declBit(c+32,"ysyx_22040175_top u_id_stage u_id_rest cunqu_hazard", false,-1);
        tracep->declQuad(c+14,"ysyx_22040175_top u_id_stage u_id_rest imm", false,-1, 63,0);
        tracep->declBus(c+27,"ysyx_22040175_top u_id_stage u_id_rest curr_rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+119,"ysyx_22040175_top u_id_stage u_id_rest delay_rest_id_mem", false,-1);
        tracep->declBit(c+611,"ysyx_22040175_top u_id_stage u_id_control_rest clk", false,-1);
        tracep->declBit(c+273,"ysyx_22040175_top u_id_stage u_id_control_rest rst_n", false,-1);
        tracep->declBit(c+106,"ysyx_22040175_top u_id_stage u_id_control_rest branch", false,-1);
        tracep->declBit(c+107,"ysyx_22040175_top u_id_stage u_id_control_rest jump", false,-1);
        tracep->declBit(c+29,"ysyx_22040175_top u_id_stage u_id_control_rest control_rest", false,-1);
        tracep->declBit(c+28,"ysyx_22040175_top u_id_stage u_id_control_rest rest_from_id", false,-1);
        tracep->declBit(c+611,"ysyx_22040175_top u_id_stage u_mux_dt_pipe clk", false,-1);
        tracep->declBit(c+273,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rst_n", false,-1);
        tracep->declBus(c+109,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+110,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+36,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg_waddr", false,-1, 4,0);
        tracep->declBus(c+46,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+409,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+411,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg2_rdata", false,-1, 63,0);
        tracep->declQuad(c+52,"ysyx_22040175_top u_id_stage u_mux_dt_pipe from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+78,"ysyx_22040175_top u_id_stage u_mux_dt_pipe from_mem_alu_res", false,-1, 63,0);
        tracep->declBit(c+29,"ysyx_22040175_top u_id_stage u_mux_dt_pipe control_rest", false,-1);
        tracep->declBit(c+28,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rest_from_id", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+414+i*2,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+23,"ysyx_22040175_top u_id_stage u_mux_dt_pipe s_flag", false,-1);
        tracep->declQuad(c+80,"ysyx_22040175_top u_id_stage u_mux_dt_pipe wb_hazard_result", false,-1, 63,0);
        tracep->declBus(c+60,"ysyx_22040175_top u_id_stage u_mux_dt_pipe mem_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rest_id_mem", false,-1);
        tracep->declBit(c+30,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rest_wb_hazard", false,-1);
        tracep->declBus(c+413,"ysyx_22040175_top u_id_stage u_mux_dt_pipe data_rest_cond", false,-1, 2,0);
        tracep->declQuad(c+111,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_reg1_rdata", false,-1, 63,0);
        tracep->declBit(c+32,"ysyx_22040175_top u_id_stage u_mux_dt_pipe cunqu_hazard", false,-1);
        tracep->declBit(c+77,"ysyx_22040175_top u_id_stage u_mux_dt_pipe mem_cunqu_hazard", false,-1);
        tracep->declQuad(c+73,"ysyx_22040175_top u_id_stage u_mux_dt_pipe mem_from_ex_alu_res", false,-1, 63,0);
        tracep->declBus(c+25,"ysyx_22040175_top u_id_stage u_mux_dt_pipe expand_signed", false,-1, 3,0);
        tracep->declBus(c+716,"ysyx_22040175_top u_id_stage u_mux_dt_pipe test", false,-1, 2,0);
        tracep->declBit(c+120,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_rest_id_mem", false,-1);
        tracep->declBit(c+121,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_control_rest", false,-1);
        tracep->declBus(c+122,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+123,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_data_rest_cond", false,-1, 2,0);
        tracep->declQuad(c+124,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_reg2_rdata", false,-1, 63,0);
        tracep->declBus(c+17,"ysyx_22040175_top u_id_stage u_mux_alu alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+409,"ysyx_22040175_top u_id_stage u_mux_alu reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+411,"ysyx_22040175_top u_id_stage u_mux_alu reg2_rdata", false,-1, 63,0);
        tracep->declQuad(c+14,"ysyx_22040175_top u_id_stage u_mux_alu imm", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22040175_top u_id_stage u_mux_alu curr_pc", false,-1, 63,0);
        tracep->declQuad(c+276,"ysyx_22040175_top u_id_stage u_mux_alu alu_src1", false,-1, 63,0);
        tracep->declQuad(c+278,"ysyx_22040175_top u_id_stage u_mux_alu alu_src2", false,-1, 63,0);
        tracep->declBit(c+32,"ysyx_22040175_top u_id_stage u_mux_alu cunqu_hazard", false,-1);
        tracep->declBit(c+611,"ysyx_22040175_top u_id_stage u_mux_pc clk", false,-1);
        tracep->declBit(c+273,"ysyx_22040175_top u_id_stage u_mux_pc rst_n", false,-1);
        tracep->declBit(c+106,"ysyx_22040175_top u_id_stage u_mux_pc branch", false,-1);
        tracep->declBit(c+107,"ysyx_22040175_top u_id_stage u_mux_pc jump", false,-1);
        tracep->declBit(c+20,"ysyx_22040175_top u_id_stage u_mux_pc jalr", false,-1);
        tracep->declQuad(c+14,"ysyx_22040175_top u_id_stage u_mux_pc imm", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22040175_top u_id_stage u_mux_pc curr_pc", false,-1, 63,0);
        tracep->declQuad(c+274,"ysyx_22040175_top u_id_stage u_mux_pc next_pc", false,-1, 63,0);
        tracep->declBit(c+21,"ysyx_22040175_top u_id_stage u_mux_pc ebreak_flag", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+478+i*2,"ysyx_22040175_top u_id_stage u_mux_pc reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+24,"ysyx_22040175_top u_id_stage u_mux_pc s_imm", false,-1, 31,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_id_stage u_mux_pc alu_op", false,-1, 4,0);
        tracep->declQuad(c+276,"ysyx_22040175_top u_id_stage u_mux_pc alu_src1", false,-1, 63,0);
        tracep->declQuad(c+278,"ysyx_22040175_top u_id_stage u_mux_pc alu_src2", false,-1, 63,0);
        tracep->declBus(c+413,"ysyx_22040175_top u_id_stage u_mux_pc data_rest_cond", false,-1, 2,0);
        tracep->declQuad(c+111,"ysyx_22040175_top u_id_stage u_mux_pc reg1_rdata", false,-1, 63,0);
        tracep->declBit(c+280,"ysyx_22040175_top u_id_stage u_mux_pc sig_jalr", false,-1);
        tracep->declBit(c+11,"ysyx_22040175_top u_id_stage u_mux_pc delay_sig_jalr", false,-1);
        tracep->declBit(c+542,"ysyx_22040175_top u_id_stage u_mux_pc zero", false,-1);
        tracep->declQuad(c+543,"ysyx_22040175_top u_id_stage u_mux_pc signed_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+545,"ysyx_22040175_top u_id_stage u_mux_pc signed_alu_src2", false,-1, 63,0);
        tracep->declBit(c+611,"ysyx_22040175_top u_id_ex_regs clk", false,-1);
        tracep->declBit(c+273,"ysyx_22040175_top u_id_ex_regs rst_n", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_id_ex_regs pc_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+33,"ysyx_22040175_top u_id_ex_regs pc_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+12,"ysyx_22040175_top u_id_ex_regs reg_wen_id_ex_i", false,-1);
        tracep->declBus(c+13,"ysyx_22040175_top u_id_ex_regs reg_waddr_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_id_ex_regs alu_op_id_ex_i", false,-1, 4,0);
        tracep->declQuad(c+18,"ysyx_22040175_top u_id_ex_regs unknown_code_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+21,"ysyx_22040175_top u_id_ex_regs ebreak_flag_id_ex_i", false,-1);
        tracep->declBus(c+22,"ysyx_22040175_top u_id_ex_regs wmask_id_ex_i", false,-1, 7,0);
        tracep->declBit(c+23,"ysyx_22040175_top u_id_ex_regs s_flag_id_ex_i", false,-1);
        tracep->declBus(c+24,"ysyx_22040175_top u_id_ex_regs s_imm_id_ex_i", false,-1, 31,0);
        tracep->declBus(c+25,"ysyx_22040175_top u_id_ex_regs expand_signed_id_ex_i", false,-1, 3,0);
        tracep->declBus(c+26,"ysyx_22040175_top u_id_ex_regs rd_flag_id_ex_i", false,-1, 2,0);
        tracep->declBus(c+27,"ysyx_22040175_top u_id_ex_regs rd_buf_flag_id_ex_i", false,-1, 2,0);
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
        tracep->declBit(c+10,"ysyx_22040175_top u_id_ex_regs time_set_id_ex_i", false,-1);
        tracep->declBit(c+701,"ysyx_22040175_top u_id_ex_regs time_set_id_ex_o", false,-1);
        tracep->declBit(c+9,"ysyx_22040175_top u_id_ex_regs ena_id_ex_i", false,-1);
        tracep->declBit(c+47,"ysyx_22040175_top u_id_ex_regs ena_id_ex_o", false,-1);
        tracep->declQuad(c+276,"ysyx_22040175_top u_id_ex_regs alu_src1_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+278,"ysyx_22040175_top u_id_ex_regs alu_src2_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_id_ex_regs rest_id_mem_id_ex_i", false,-1);
        tracep->declQuad(c+54,"ysyx_22040175_top u_id_ex_regs alu_src1_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+56,"ysyx_22040175_top u_id_ex_regs alu_src2_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+48,"ysyx_22040175_top u_id_ex_regs rest_id_mem_id_ex_o", false,-1);
        tracep->declQuad(c+104,"ysyx_22040175_top u_id_ex_regs id_inst", false,-1, 63,0);
        tracep->declQuad(c+126,"ysyx_22040175_top u_id_ex_regs ex_inst", false,-1, 63,0);
        tracep->declBit(c+32,"ysyx_22040175_top u_id_ex_regs cunqu_hazard_id_ex_i", false,-1);
        tracep->declBit(c+50,"ysyx_22040175_top u_id_ex_regs cunqu_hazard_id_ex_o", false,-1);
        tracep->declBit(c+31,"ysyx_22040175_top u_id_ex_regs id_mul_id_ex_i", false,-1);
        tracep->declBit(c+51,"ysyx_22040175_top u_id_ex_regs id_mul_id_ex_o", false,-1);
        tracep->declBit(c+611,"ysyx_22040175_top u_ex_stage clk", false,-1);
        tracep->declBit(c+273,"ysyx_22040175_top u_ex_stage rst_n", false,-1);
        tracep->declBus(c+37,"ysyx_22040175_top u_ex_stage alu_op", false,-1, 4,0);
        tracep->declQuad(c+54,"ysyx_22040175_top u_ex_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+56,"ysyx_22040175_top u_ex_stage alu_src2", false,-1, 63,0);
        tracep->declQuad(c+52,"ysyx_22040175_top u_ex_stage alu_res", false,-1, 63,0);
        tracep->declBus(c+45,"ysyx_22040175_top u_ex_stage rd_flag", false,-1, 2,0);
        tracep->declBus(c+44,"ysyx_22040175_top u_ex_stage expand_signed", false,-1, 3,0);
        tracep->declBit(c+58,"ysyx_22040175_top u_ex_stage sh_fnsh_flag", false,-1);
        tracep->declBit(c+611,"ysyx_22040175_top u_ex_stage u_alu clk", false,-1);
        tracep->declBit(c+273,"ysyx_22040175_top u_ex_stage u_alu rst_n", false,-1);
        tracep->declBus(c+37,"ysyx_22040175_top u_ex_stage u_alu alu_op", false,-1, 4,0);
        tracep->declQuad(c+54,"ysyx_22040175_top u_ex_stage u_alu alu_src1", false,-1, 63,0);
        tracep->declQuad(c+56,"ysyx_22040175_top u_ex_stage u_alu alu_src2", false,-1, 63,0);
        tracep->declQuad(c+52,"ysyx_22040175_top u_ex_stage u_alu alu_res_ex_sign", false,-1, 63,0);
        tracep->declBus(c+45,"ysyx_22040175_top u_ex_stage u_alu rd_flag", false,-1, 2,0);
        tracep->declBus(c+44,"ysyx_22040175_top u_ex_stage u_alu expand_signed", false,-1, 3,0);
        tracep->declBit(c+58,"ysyx_22040175_top u_ex_stage u_alu sh_fnsh_flag", false,-1);
        tracep->declBit(c+128,"ysyx_22040175_top u_ex_stage u_alu zero", false,-1);
        tracep->declQuad(c+129,"ysyx_22040175_top u_ex_stage u_alu alu_res", false,-1, 63,0);
        tracep->declQuad(c+131,"ysyx_22040175_top u_ex_stage u_alu signed_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+133,"ysyx_22040175_top u_ex_stage u_alu signed_alu_src2", false,-1, 63,0);
        tracep->declBit(c+135,"ysyx_22040175_top u_ex_stage u_alu mul_valid", false,-1);
        tracep->declArray(c+136,"ysyx_22040175_top u_ex_stage u_alu mul_res", false,-1, 129,0);
        tracep->declBit(c+141,"ysyx_22040175_top u_ex_stage u_alu mul_expand_signed", false,-1);
        tracep->declQuad(c+142,"ysyx_22040175_top u_ex_stage u_alu alu_res2", false,-1, 63,0);
        tracep->declArray(c+144,"ysyx_22040175_top u_ex_stage u_alu delay_mul_res", false,-1, 129,0);
        tracep->declBit(c+149,"ysyx_22040175_top u_ex_stage u_alu delay_sh_fg", false,-1);
        tracep->declBus(c+717,"ysyx_22040175_top u_ex_stage u_alu mul_signed", false,-1, 1,0);
        tracep->declBit(c+611,"ysyx_22040175_top u_ex_stage u_alu u_mul clk", false,-1);
        tracep->declBit(c+273,"ysyx_22040175_top u_ex_stage u_alu u_mul rst_n", false,-1);
        tracep->declQuad(c+54,"ysyx_22040175_top u_ex_stage u_alu u_mul alu_src1", false,-1, 63,0);
        tracep->declQuad(c+56,"ysyx_22040175_top u_ex_stage u_alu u_mul alu_src2", false,-1, 63,0);
        tracep->declBit(c+135,"ysyx_22040175_top u_ex_stage u_alu u_mul mul_valid", false,-1);
        tracep->declBus(c+717,"ysyx_22040175_top u_ex_stage u_alu u_mul mul_signed", false,-1, 1,0);
        tracep->declBus(c+150,"ysyx_22040175_top u_ex_stage u_alu u_mul mul_expand_signed", false,-1, 3,0);
        tracep->declArray(c+136,"ysyx_22040175_top u_ex_stage u_alu u_mul mul_res", false,-1, 129,0);
        tracep->declBit(c+58,"ysyx_22040175_top u_ex_stage u_alu u_mul sh_fnsh_flag", false,-1);
        tracep->declArray(c+151,"ysyx_22040175_top u_ex_stage u_alu u_mul alu_x", false,-1, 129,0);
        tracep->declArray(c+156,"ysyx_22040175_top u_ex_stage u_alu u_mul alu_y", false,-1, 65,0);
        tracep->declArray(c+159,"ysyx_22040175_top u_ex_stage u_alu u_mul no_latch_x", false,-1, 129,0);
        tracep->declArray(c+164,"ysyx_22040175_top u_ex_stage u_alu u_mul no_latch_y", false,-1, 65,0);
        tracep->declBit(c+167,"ysyx_22040175_top u_ex_stage u_alu u_mul delay_mul_valid", false,-1);
        tracep->declBit(c+168,"ysyx_22040175_top u_ex_stage u_alu u_mul delay1_sh_fg", false,-1);
        tracep->declBit(c+169,"ysyx_22040175_top u_ex_stage u_alu u_mul delay2_sh_fg", false,-1);
        tracep->declBus(c+718,"ysyx_22040175_top u_ex_stage u_alu u_mul IDLE", false,-1, 2,0);
        tracep->declBus(c+719,"ysyx_22040175_top u_ex_stage u_alu u_mul NEXT", false,-1, 2,0);
        tracep->declBus(c+720,"ysyx_22040175_top u_ex_stage u_alu u_mul SHIFT", false,-1, 2,0);
        tracep->declBus(c+721,"ysyx_22040175_top u_ex_stage u_alu u_mul LAST", false,-1, 2,0);
        tracep->declBus(c+170,"ysyx_22040175_top u_ex_stage u_alu u_mul present_state", false,-1, 2,0);
        tracep->declBus(c+171,"ysyx_22040175_top u_ex_stage u_alu u_mul next_state", false,-1, 2,0);
        tracep->declArray(c+172,"ysyx_22040175_top u_ex_stage u_alu u_mul x", false,-1, 129,0);
        tracep->declBus(c+177,"ysyx_22040175_top u_ex_stage u_alu u_mul y", false,-1, 2,0);
        tracep->declArray(c+178,"ysyx_22040175_top u_ex_stage u_alu u_mul add_p", false,-1, 129,0);
        tracep->declArray(c+183,"ysyx_22040175_top u_ex_stage u_alu u_mul reg_alu_y", false,-1, 129,0);
        tracep->declArray(c+188,"ysyx_22040175_top u_ex_stage u_alu u_mul delay_alu_y", false,-1, 129,0);
        tracep->declArray(c+193,"ysyx_22040175_top u_ex_stage u_alu u_mul p", false,-1, 129,0);
        tracep->declArray(c+198,"ysyx_22040175_top u_ex_stage u_alu u_mul ex_p", false,-1, 129,0);
        tracep->declBit(c+611,"ysyx_22040175_top u_ex_mem_regs clk", false,-1);
        tracep->declBit(c+273,"ysyx_22040175_top u_ex_mem_regs rst_n", false,-1);
        tracep->declBit(c+35,"ysyx_22040175_top u_ex_mem_regs reg_wen_ex_mem_i", false,-1);
        tracep->declBus(c+36,"ysyx_22040175_top u_ex_mem_regs reg_waddr_ex_mem_i", false,-1, 4,0);
        tracep->declQuad(c+52,"ysyx_22040175_top u_ex_mem_regs from_ex_alu_res_ex_mem_i", false,-1, 63,0);
        tracep->declBus(c+41,"ysyx_22040175_top u_ex_mem_regs wmask_ex_mem_i", false,-1, 7,0);
        tracep->declBit(c+42,"ysyx_22040175_top u_ex_mem_regs s_flag_ex_mem_i", false,-1);
        tracep->declBit(c+701,"ysyx_22040175_top u_ex_mem_regs time_set_ex_mem_i", false,-1);
        tracep->declBus(c+43,"ysyx_22040175_top u_ex_mem_regs s_imm_ex_mem_i", false,-1, 31,0);
        tracep->declBus(c+44,"ysyx_22040175_top u_ex_mem_regs expand_signed_ex_mem_i", false,-1, 3,0);
        tracep->declBit(c+40,"ysyx_22040175_top u_ex_mem_regs ebreak_flag_ex_mem_i", false,-1);
        tracep->declBus(c+46,"ysyx_22040175_top u_ex_mem_regs rd_buf_flag_ex_mem_i", false,-1, 2,0);
        tracep->declBus(c+37,"ysyx_22040175_top u_ex_mem_regs alu_op_ex_mem_i", false,-1, 4,0);
        tracep->declQuad(c+54,"ysyx_22040175_top u_ex_mem_regs alu_src1_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+56,"ysyx_22040175_top u_ex_mem_regs alu_src2_ex_mem_i", false,-1, 63,0);
        tracep->declBit(c+59,"ysyx_22040175_top u_ex_mem_regs reg_wen_ex_mem_o", false,-1);
        tracep->declBus(c+60,"ysyx_22040175_top u_ex_mem_regs reg_waddr_ex_mem_o", false,-1, 4,0);
        tracep->declBit(c+61,"ysyx_22040175_top u_ex_mem_regs ebreak_flag_ex_mem_o", false,-1);
        tracep->declBus(c+62,"ysyx_22040175_top u_ex_mem_regs wmask_ex_mem_o", false,-1, 7,0);
        tracep->declBit(c+63,"ysyx_22040175_top u_ex_mem_regs s_flag_ex_mem_o", false,-1);
        tracep->declBit(c+64,"ysyx_22040175_top u_ex_mem_regs time_set_ex_mem_o", false,-1);
        tracep->declBus(c+65,"ysyx_22040175_top u_ex_mem_regs s_imm_ex_mem_o", false,-1, 31,0);
        tracep->declBus(c+66,"ysyx_22040175_top u_ex_mem_regs expand_signed_ex_mem_o", false,-1, 3,0);
        tracep->declBus(c+67,"ysyx_22040175_top u_ex_mem_regs rd_buf_flag_ex_mem_o", false,-1, 2,0);
        tracep->declBus(c+68,"ysyx_22040175_top u_ex_mem_regs alu_op_ex_mem_o", false,-1, 4,0);
        tracep->declQuad(c+69,"ysyx_22040175_top u_ex_mem_regs alu_src1_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+71,"ysyx_22040175_top u_ex_mem_regs alu_src2_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+73,"ysyx_22040175_top u_ex_mem_regs from_ex_alu_res_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+33,"ysyx_22040175_top u_ex_mem_regs pc_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+75,"ysyx_22040175_top u_ex_mem_regs pc_ex_mem_o", false,-1, 63,0);
        tracep->declBit(c+48,"ysyx_22040175_top u_ex_mem_regs rest_id_mem_ex_mem_i", false,-1);
        tracep->declBit(c+97,"ysyx_22040175_top u_ex_mem_regs rest_id_mem_ex_mem_o", false,-1);
        tracep->declBit(c+50,"ysyx_22040175_top u_ex_mem_regs cunqu_hazard_ex_mem_i", false,-1);
        tracep->declBit(c+77,"ysyx_22040175_top u_ex_mem_regs cunqu_hazard_ex_mem_o", false,-1);
        tracep->declBit(c+51,"ysyx_22040175_top u_ex_mem_regs id_mul_ex_mem_i", false,-1);
        tracep->declBit(c+58,"ysyx_22040175_top u_ex_mem_regs sh_fnsh_flag_ex_mem_i", false,-1);
        tracep->declBus(c+67,"ysyx_22040175_top u_mem_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+68,"ysyx_22040175_top u_mem_stage alu_op", false,-1, 4,0);
        tracep->declQuad(c+69,"ysyx_22040175_top u_mem_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+71,"ysyx_22040175_top u_mem_stage alu_src2", false,-1, 63,0);
        tracep->declQuad(c+78,"ysyx_22040175_top u_mem_stage sign_alu_res", false,-1, 63,0);
        tracep->declQuad(c+73,"ysyx_22040175_top u_mem_stage mem_from_ex_alu_res", false,-1, 63,0);
        tracep->declBus(c+66,"ysyx_22040175_top u_mem_stage mem_expand_signed", false,-1, 3,0);
        tracep->declQuad(c+80,"ysyx_22040175_top u_mem_stage wb_hazard_result", false,-1, 63,0);
        tracep->declBit(c+77,"ysyx_22040175_top u_mem_stage mem_cunqu_hazard", false,-1);
        tracep->declQuad(c+203,"ysyx_22040175_top u_mem_stage rd_buf_lw", false,-1, 63,0);
        tracep->declQuad(c+205,"ysyx_22040175_top u_mem_stage alu_res", false,-1, 63,0);
        tracep->declBit(c+611,"ysyx_22040175_top u_mem_wb_regs clk", false,-1);
        tracep->declBit(c+273,"ysyx_22040175_top u_mem_wb_regs rst_n", false,-1);
        tracep->declBit(c+59,"ysyx_22040175_top u_mem_wb_regs reg_wen_mem_wb_i", false,-1);
        tracep->declBus(c+60,"ysyx_22040175_top u_mem_wb_regs reg_waddr_mem_wb_i", false,-1, 4,0);
        tracep->declQuad(c+73,"ysyx_22040175_top u_mem_wb_regs from_ex_alu_res_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+78,"ysyx_22040175_top u_mem_wb_regs from_mem_alu_res_mem_wb_i", false,-1, 63,0);
        tracep->declBus(c+62,"ysyx_22040175_top u_mem_wb_regs wmask_mem_wb_i", false,-1, 7,0);
        tracep->declBit(c+63,"ysyx_22040175_top u_mem_wb_regs s_flag_mem_wb_i", false,-1);
        tracep->declBit(c+64,"ysyx_22040175_top u_mem_wb_regs time_set_mem_wb_i", false,-1);
        tracep->declBus(c+65,"ysyx_22040175_top u_mem_wb_regs s_imm_mem_wb_i", false,-1, 31,0);
        tracep->declBus(c+66,"ysyx_22040175_top u_mem_wb_regs expand_signed_mem_wb_i", false,-1, 3,0);
        tracep->declBit(c+61,"ysyx_22040175_top u_mem_wb_regs ebreak_flag_mem_wb_i", false,-1);
        tracep->declBus(c+67,"ysyx_22040175_top u_mem_wb_regs rd_buf_flag_mem_wb_i", false,-1, 2,0);
        tracep->declBit(c+82,"ysyx_22040175_top u_mem_wb_regs reg_wen_mem_wb_o", false,-1);
        tracep->declBus(c+83,"ysyx_22040175_top u_mem_wb_regs reg_waddr_mem_wb_o", false,-1, 4,0);
        tracep->declBus(c+84,"ysyx_22040175_top u_mem_wb_regs wmask_mem_wb_o", false,-1, 7,0);
        tracep->declBit(c+85,"ysyx_22040175_top u_mem_wb_regs s_flag_mem_wb_o", false,-1);
        tracep->declBit(c+86,"ysyx_22040175_top u_mem_wb_regs time_set_mem_wb_o", false,-1);
        tracep->declBus(c+87,"ysyx_22040175_top u_mem_wb_regs s_imm_mem_wb_o", false,-1, 31,0);
        tracep->declBus(c+88,"ysyx_22040175_top u_mem_wb_regs expand_signed_mem_wb_o", false,-1, 3,0);
        tracep->declBit(c+89,"ysyx_22040175_top u_mem_wb_regs ebreak_flag_mem_wb_o", false,-1);
        tracep->declBus(c+90,"ysyx_22040175_top u_mem_wb_regs rd_buf_flag_mem_wb_o", false,-1, 2,0);
        tracep->declQuad(c+91,"ysyx_22040175_top u_mem_wb_regs from_ex_alu_res_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22040175_top u_mem_wb_regs from_mem_alu_res_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+75,"ysyx_22040175_top u_mem_wb_regs pc_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+95,"ysyx_22040175_top u_mem_wb_regs pc_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+97,"ysyx_22040175_top u_mem_wb_regs rest_id_mem_ex_mem_o", false,-1);
        tracep->declBit(c+77,"ysyx_22040175_top u_mem_wb_regs cunqu_hazard_mem_wb_i", false,-1);
        tracep->declBit(c+98,"ysyx_22040175_top u_mem_wb_regs cunqu_hazard_mem_wb_o", false,-1);
        tracep->declBit(c+611,"ysyx_22040175_top u_wb_stage clk", false,-1);
        tracep->declBit(c+273,"ysyx_22040175_top u_wb_stage rst_n", false,-1);
        tracep->declBit(c+82,"ysyx_22040175_top u_wb_stage reg_wen", false,-1);
        tracep->declBus(c+83,"ysyx_22040175_top u_wb_stage reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+91,"ysyx_22040175_top u_wb_stage from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22040175_top u_wb_stage from_mem_alu_res", false,-1, 63,0);
        tracep->declBus(c+84,"ysyx_22040175_top u_wb_stage wmask", false,-1, 7,0);
        tracep->declBit(c+85,"ysyx_22040175_top u_wb_stage s_flag", false,-1);
        tracep->declBit(c+617,"ysyx_22040175_top u_wb_stage time_set", false,-1);
        tracep->declBus(c+87,"ysyx_22040175_top u_wb_stage s_imm", false,-1, 31,0);
        tracep->declBus(c+88,"ysyx_22040175_top u_wb_stage expand_signed", false,-1, 3,0);
        tracep->declBus(c+90,"ysyx_22040175_top u_wb_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+89,"ysyx_22040175_top u_wb_stage ebreak_flag", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+547+i*2,"ysyx_22040175_top u_wb_stage reg_f", true,(i+0), 63,0);}}
        tracep->declQuad(c+95,"ysyx_22040175_top u_wb_stage wb_pc", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx_22040175_top u_wb_stage wb_delay_pc", false,-1, 63,0);
        tracep->declBit(c+98,"ysyx_22040175_top u_wb_stage cunqu_hazard", false,-1);
        tracep->declQuad(c+207,"ysyx_22040175_top u_wb_stage reg_wdata", false,-1, 63,0);
        tracep->declQuad(c+621,"ysyx_22040175_top u_wb_stage end_wb_waddr", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+209+i*2,"ysyx_22040175_top u_wb_stage wb_delay_reg_f", true,(i+0), 63,0);}}
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
    VlWide<5>/*159:0*/ __Vtemp263;
    VlWide<5>/*159:0*/ __Vtemp264;
    VlWide<5>/*159:0*/ __Vtemp266;
    VlWide<5>/*159:0*/ __Vtemp275;
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
        tracep->fullBit(oldp+11,(vlSelf->ysyx_22040175_top__DOT__delay_sig_jalr));
        tracep->fullBit(oldp+12,(vlSelf->ysyx_22040175_top__DOT__id_reg_wen));
        tracep->fullCData(oldp+13,(vlSelf->ysyx_22040175_top__DOT__id_reg_waddr),5);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22040175_top__DOT__id_imm),64);
        tracep->fullCData(oldp+16,(vlSelf->ysyx_22040175_top__DOT__id_alu_op),5);
        tracep->fullCData(oldp+17,(vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel),2);
        tracep->fullQData(oldp+18,(vlSelf->ysyx_22040175_top__DOT__id_unknown_code),64);
        tracep->fullBit(oldp+20,(vlSelf->ysyx_22040175_top__DOT__id_jalr));
        tracep->fullBit(oldp+21,(vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag));
        tracep->fullCData(oldp+22,(vlSelf->ysyx_22040175_top__DOT__id_wmask),8);
        tracep->fullBit(oldp+23,(vlSelf->ysyx_22040175_top__DOT__id_s_flag));
        tracep->fullIData(oldp+24,(vlSelf->ysyx_22040175_top__DOT__id_s_imm),32);
        tracep->fullCData(oldp+25,(vlSelf->ysyx_22040175_top__DOT__id_expand_signed),4);
        tracep->fullCData(oldp+26,(vlSelf->ysyx_22040175_top__DOT__id_rd_flag),3);
        tracep->fullCData(oldp+27,(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag),3);
        tracep->fullBit(oldp+28,(vlSelf->ysyx_22040175_top__DOT__rest_from_id));
        tracep->fullBit(oldp+29,(vlSelf->ysyx_22040175_top__DOT__id_control_rest));
        tracep->fullBit(oldp+30,(vlSelf->ysyx_22040175_top__DOT__rest_wb_hazard));
        tracep->fullBit(oldp+31,(vlSelf->ysyx_22040175_top__DOT__id_mul));
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
        tracep->fullBit(oldp+51,(vlSelf->ysyx_22040175_top__DOT__ex_id_mul));
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1),64);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2),64);
        tracep->fullBit(oldp+58,(vlSelf->ysyx_22040175_top__DOT__sh_fnsh_flag));
        tracep->fullBit(oldp+59,(vlSelf->ysyx_22040175_top__DOT__mem_reg_wen));
        tracep->fullCData(oldp+60,(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr),5);
        tracep->fullBit(oldp+61,(vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag));
        tracep->fullCData(oldp+62,(vlSelf->ysyx_22040175_top__DOT__mem_wmask),8);
        tracep->fullBit(oldp+63,(vlSelf->ysyx_22040175_top__DOT__mem_s_flag));
        tracep->fullBit(oldp+64,(vlSelf->ysyx_22040175_top__DOT__mem_time_set));
        tracep->fullIData(oldp+65,(vlSelf->ysyx_22040175_top__DOT__mem_s_imm),32);
        tracep->fullCData(oldp+66,(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed),4);
        tracep->fullCData(oldp+67,(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag),3);
        tracep->fullCData(oldp+68,(vlSelf->ysyx_22040175_top__DOT__mem_alu_op),5);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src1),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src2),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22040175_top__DOT__mem_pc),64);
        tracep->fullBit(oldp+77,(vlSelf->ysyx_22040175_top__DOT__mem_cunqu_hazard));
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res),64);
        tracep->fullQData(oldp+80,(vlSelf->ysyx_22040175_top__DOT__wb_hazard_result),64);
        tracep->fullBit(oldp+82,(vlSelf->ysyx_22040175_top__DOT__wb_reg_wen));
        tracep->fullCData(oldp+83,(vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr),5);
        tracep->fullCData(oldp+84,(vlSelf->ysyx_22040175_top__DOT__wb_wmask),8);
        tracep->fullBit(oldp+85,(vlSelf->ysyx_22040175_top__DOT__wb_s_flag));
        tracep->fullBit(oldp+86,(vlSelf->ysyx_22040175_top__DOT__wb_time_set));
        tracep->fullIData(oldp+87,(vlSelf->ysyx_22040175_top__DOT__wb_s_imm),32);
        tracep->fullCData(oldp+88,(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed),4);
        tracep->fullBit(oldp+89,(vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag));
        tracep->fullCData(oldp+90,(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag),3);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res),64);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res),64);
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22040175_top__DOT__wb_pc),64);
        tracep->fullBit(oldp+97,(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem));
        tracep->fullBit(oldp+98,(vlSelf->ysyx_22040175_top__DOT__wb_cunqu_hazard));
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22040175_top__DOT__wb_delay_pc),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata),64);
        tracep->fullBit(oldp+103,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_pc_predict__DOT__delay_sig_jalr));
        tracep->fullQData(oldp+104,((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))),64);
        tracep->fullBit(oldp+106,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch));
        tracep->fullBit(oldp+107,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump));
        tracep->fullCData(oldp+108,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op),3);
        tracep->fullCData(oldp+109,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr),5);
        tracep->fullCData(oldp+110,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr),5);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__delay_reg1_rdata),64);
        tracep->fullCData(oldp+113,((0x7fU & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))),7);
        tracep->fullCData(oldp+114,((7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))),3);
        tracep->fullCData(oldp+115,((0x7fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x19U)))),7);
        tracep->fullCData(oldp+116,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 7U)))),5);
        tracep->fullCData(oldp+117,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xfU)))),5);
        tracep->fullCData(oldp+118,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x14U)))),5);
        tracep->fullBit(oldp+119,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem));
        tracep->fullBit(oldp+120,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_rest_id_mem));
        tracep->fullBit(oldp+121,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_control_rest));
        tracep->fullCData(oldp+122,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr),5);
        tracep->fullCData(oldp+123,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond),3);
        tracep->fullQData(oldp+124,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg2_rdata),64);
        tracep->fullQData(oldp+126,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst),64);
        tracep->fullBit(oldp+128,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero));
        tracep->fullQData(oldp+129,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res),64);
        tracep->fullQData(oldp+131,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1),64);
        tracep->fullQData(oldp+133,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2),64);
        tracep->fullBit(oldp+135,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid));
        tracep->fullWData(oldp+136,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_res),130);
        tracep->fullBit(oldp+141,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed));
        tracep->fullQData(oldp+142,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res2),64);
        tracep->fullWData(oldp+144,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__delay_mul_res),130);
        tracep->fullBit(oldp+149,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__delay_sh_fg));
        tracep->fullCData(oldp+150,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed),4);
        tracep->fullWData(oldp+151,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x),130);
        tracep->fullWData(oldp+156,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y),66);
        tracep->fullWData(oldp+159,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__no_latch_x),130);
        tracep->fullWData(oldp+164,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__no_latch_y),66);
        tracep->fullBit(oldp+167,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_mul_valid));
        tracep->fullBit(oldp+168,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay1_sh_fg));
        tracep->fullBit(oldp+169,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay2_sh_fg));
        tracep->fullCData(oldp+170,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state),3);
        tracep->fullCData(oldp+171,(((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                                      ? 0U : ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    ((((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U] 
                                                        | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U]) 
                                                       | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U]) 
                                                      | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U]) 
                                                     | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U]))
                                                    ? 3U
                                                    : 2U))
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    ((((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U] 
                                                        | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U]) 
                                                       | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U]) 
                                                      | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U]) 
                                                     | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U]))
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid) 
                                                    & ((~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_mul_valid)) 
                                                       | (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay2_sh_fg)))
                                                    ? 1U
                                                    : 0U))))),3);
        tracep->fullWData(oldp+172,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x),130);
        tracep->fullCData(oldp+177,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y),3);
        tracep->fullWData(oldp+178,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p),130);
        tracep->fullWData(oldp+183,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y),130);
        tracep->fullWData(oldp+188,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y),130);
        tracep->fullWData(oldp+193,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p),130);
        VL_EXTEND_WQ(130,64, __Vtemp263, (((- (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                                                                  >> 0xfU))))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (0xffffU 
                                                             & vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U])))));
        VL_EXTEND_WI(130,32, __Vtemp264, vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U]);
        VL_EXTEND_WQ(130,64, __Vtemp266, (((QData)((IData)(
                                                           (- (IData)(
                                                                      (vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U] 
                                                                       >> 0x1fU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U]))));
        if (vlSelf->ysyx_22040175_top__DOT__sh_fnsh_flag) {
            __Vtemp275[0U] = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                               ? 0U : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                                                  ? 
                                                 __Vtemp263[0U]
                                                  : 
                                                 __Vtemp264[0U])
                                                 : 
                                                ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                                                  ? 
                                                 __Vtemp266[0U]
                                                  : 
                                                 vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[0U]))));
            __Vtemp275[1U] = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                               ? 0U : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                                                  ? 
                                                 __Vtemp263[1U]
                                                  : 
                                                 __Vtemp264[1U])
                                                 : 
                                                ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                                                  ? 
                                                 __Vtemp266[1U]
                                                  : 
                                                 vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[1U]))));
            __Vtemp275[2U] = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                               ? 0U : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                                                  ? 
                                                 __Vtemp263[2U]
                                                  : 
                                                 __Vtemp264[2U])
                                                 : 
                                                ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                                                  ? 
                                                 __Vtemp266[2U]
                                                  : 
                                                 vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[2U]))));
            __Vtemp275[3U] = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                               ? 0U : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                                                  ? 
                                                 __Vtemp263[3U]
                                                  : 
                                                 __Vtemp264[3U])
                                                 : 
                                                ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                                                  ? 
                                                 __Vtemp266[3U]
                                                  : 
                                                 vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[3U]))));
            __Vtemp275[4U] = ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                               ? 0U : ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                                                  ? 
                                                 __Vtemp263[4U]
                                                  : 
                                                 __Vtemp264[4U])
                                                 : 
                                                ((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed)
                                                  ? 
                                                 __Vtemp266[4U]
                                                  : 
                                                 vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p[4U]))));
        } else {
            __Vtemp275[0U] = 0U;
            __Vtemp275[1U] = 0U;
            __Vtemp275[2U] = 0U;
            __Vtemp275[3U] = 0U;
            __Vtemp275[4U] = 0U;
        }
        tracep->fullWData(oldp+198,(__Vtemp275),130);
        tracep->fullQData(oldp+203,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw),64);
        tracep->fullQData(oldp+205,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res),64);
        tracep->fullQData(oldp+207,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata),64);
        tracep->fullQData(oldp+209,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0]),64);
        tracep->fullQData(oldp+211,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[1]),64);
        tracep->fullQData(oldp+213,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[2]),64);
        tracep->fullQData(oldp+215,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[3]),64);
        tracep->fullQData(oldp+217,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[4]),64);
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[5]),64);
        tracep->fullQData(oldp+221,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[6]),64);
        tracep->fullQData(oldp+223,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[7]),64);
        tracep->fullQData(oldp+225,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[8]),64);
        tracep->fullQData(oldp+227,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[9]),64);
        tracep->fullQData(oldp+229,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[10]),64);
        tracep->fullQData(oldp+231,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[11]),64);
        tracep->fullQData(oldp+233,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[12]),64);
        tracep->fullQData(oldp+235,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[13]),64);
        tracep->fullQData(oldp+237,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[14]),64);
        tracep->fullQData(oldp+239,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[15]),64);
        tracep->fullQData(oldp+241,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[16]),64);
        tracep->fullQData(oldp+243,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[17]),64);
        tracep->fullQData(oldp+245,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[18]),64);
        tracep->fullQData(oldp+247,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[19]),64);
        tracep->fullQData(oldp+249,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[20]),64);
        tracep->fullQData(oldp+251,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[21]),64);
        tracep->fullQData(oldp+253,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[22]),64);
        tracep->fullQData(oldp+255,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[23]),64);
        tracep->fullQData(oldp+257,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[24]),64);
        tracep->fullQData(oldp+259,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[25]),64);
        tracep->fullQData(oldp+261,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[26]),64);
        tracep->fullQData(oldp+263,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[27]),64);
        tracep->fullQData(oldp+265,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[28]),64);
        tracep->fullQData(oldp+267,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[29]),64);
        tracep->fullQData(oldp+269,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[30]),64);
        tracep->fullQData(oldp+271,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[31]),64);
        tracep->fullBit(oldp+273,(vlSelf->ysyx_22040175_top__DOT__rst_n));
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22040175_top__DOT__id_next_pc),64);
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22040175_top__DOT__id_alu_src1),64);
        tracep->fullQData(oldp+278,(vlSelf->ysyx_22040175_top__DOT__id_alu_src2),64);
        tracep->fullBit(oldp+280,(vlSelf->ysyx_22040175_top__DOT__sig_jalr));
        tracep->fullQData(oldp+281,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0]),64);
        tracep->fullQData(oldp+283,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[1]),64);
        tracep->fullQData(oldp+285,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[2]),64);
        tracep->fullQData(oldp+287,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[3]),64);
        tracep->fullQData(oldp+289,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[4]),64);
        tracep->fullQData(oldp+291,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[5]),64);
        tracep->fullQData(oldp+293,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[6]),64);
        tracep->fullQData(oldp+295,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[7]),64);
        tracep->fullQData(oldp+297,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[8]),64);
        tracep->fullQData(oldp+299,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[9]),64);
        tracep->fullQData(oldp+301,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[10]),64);
        tracep->fullQData(oldp+303,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[11]),64);
        tracep->fullQData(oldp+305,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[12]),64);
        tracep->fullQData(oldp+307,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[13]),64);
        tracep->fullQData(oldp+309,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[14]),64);
        tracep->fullQData(oldp+311,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[15]),64);
        tracep->fullQData(oldp+313,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[16]),64);
        tracep->fullQData(oldp+315,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[17]),64);
        tracep->fullQData(oldp+317,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[18]),64);
        tracep->fullQData(oldp+319,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[19]),64);
        tracep->fullQData(oldp+321,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[20]),64);
        tracep->fullQData(oldp+323,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[21]),64);
        tracep->fullQData(oldp+325,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[22]),64);
        tracep->fullQData(oldp+327,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[23]),64);
        tracep->fullQData(oldp+329,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[24]),64);
        tracep->fullQData(oldp+331,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[25]),64);
        tracep->fullQData(oldp+333,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[26]),64);
        tracep->fullQData(oldp+335,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[27]),64);
        tracep->fullQData(oldp+337,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[28]),64);
        tracep->fullQData(oldp+339,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[29]),64);
        tracep->fullQData(oldp+341,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[30]),64);
        tracep->fullQData(oldp+343,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[31]),64);
        tracep->fullQData(oldp+345,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0]),64);
        tracep->fullQData(oldp+347,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[1]),64);
        tracep->fullQData(oldp+349,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[2]),64);
        tracep->fullQData(oldp+351,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[3]),64);
        tracep->fullQData(oldp+353,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[4]),64);
        tracep->fullQData(oldp+355,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[5]),64);
        tracep->fullQData(oldp+357,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[6]),64);
        tracep->fullQData(oldp+359,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[7]),64);
        tracep->fullQData(oldp+361,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[8]),64);
        tracep->fullQData(oldp+363,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[9]),64);
        tracep->fullQData(oldp+365,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[10]),64);
        tracep->fullQData(oldp+367,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[11]),64);
        tracep->fullQData(oldp+369,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[12]),64);
        tracep->fullQData(oldp+371,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[13]),64);
        tracep->fullQData(oldp+373,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[14]),64);
        tracep->fullQData(oldp+375,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[15]),64);
        tracep->fullQData(oldp+377,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[16]),64);
        tracep->fullQData(oldp+379,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[17]),64);
        tracep->fullQData(oldp+381,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[18]),64);
        tracep->fullQData(oldp+383,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[19]),64);
        tracep->fullQData(oldp+385,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[20]),64);
        tracep->fullQData(oldp+387,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[21]),64);
        tracep->fullQData(oldp+389,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[22]),64);
        tracep->fullQData(oldp+391,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[23]),64);
        tracep->fullQData(oldp+393,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[24]),64);
        tracep->fullQData(oldp+395,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[25]),64);
        tracep->fullQData(oldp+397,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[26]),64);
        tracep->fullQData(oldp+399,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[27]),64);
        tracep->fullQData(oldp+401,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[28]),64);
        tracep->fullQData(oldp+403,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[29]),64);
        tracep->fullQData(oldp+405,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[30]),64);
        tracep->fullQData(oldp+407,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[31]),64);
        tracep->fullQData(oldp+409,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata),64);
        tracep->fullQData(oldp+411,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata),64);
        tracep->fullCData(oldp+413,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond),3);
        tracep->fullQData(oldp+414,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0]),64);
        tracep->fullQData(oldp+416,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[1]),64);
        tracep->fullQData(oldp+418,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[2]),64);
        tracep->fullQData(oldp+420,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[3]),64);
        tracep->fullQData(oldp+422,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[4]),64);
        tracep->fullQData(oldp+424,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[5]),64);
        tracep->fullQData(oldp+426,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[6]),64);
        tracep->fullQData(oldp+428,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[7]),64);
        tracep->fullQData(oldp+430,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[8]),64);
        tracep->fullQData(oldp+432,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[9]),64);
        tracep->fullQData(oldp+434,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[10]),64);
        tracep->fullQData(oldp+436,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[11]),64);
        tracep->fullQData(oldp+438,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[12]),64);
        tracep->fullQData(oldp+440,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[13]),64);
        tracep->fullQData(oldp+442,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[14]),64);
        tracep->fullQData(oldp+444,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[15]),64);
        tracep->fullQData(oldp+446,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[16]),64);
        tracep->fullQData(oldp+448,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[17]),64);
        tracep->fullQData(oldp+450,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[18]),64);
        tracep->fullQData(oldp+452,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[19]),64);
        tracep->fullQData(oldp+454,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[20]),64);
        tracep->fullQData(oldp+456,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[21]),64);
        tracep->fullQData(oldp+458,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[22]),64);
        tracep->fullQData(oldp+460,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[23]),64);
        tracep->fullQData(oldp+462,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[24]),64);
        tracep->fullQData(oldp+464,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[25]),64);
        tracep->fullQData(oldp+466,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[26]),64);
        tracep->fullQData(oldp+468,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[27]),64);
        tracep->fullQData(oldp+470,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[28]),64);
        tracep->fullQData(oldp+472,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[29]),64);
        tracep->fullQData(oldp+474,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[30]),64);
        tracep->fullQData(oldp+476,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[31]),64);
        tracep->fullQData(oldp+478,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0]),64);
        tracep->fullQData(oldp+480,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[1]),64);
        tracep->fullQData(oldp+482,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[2]),64);
        tracep->fullQData(oldp+484,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[3]),64);
        tracep->fullQData(oldp+486,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[4]),64);
        tracep->fullQData(oldp+488,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[5]),64);
        tracep->fullQData(oldp+490,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[6]),64);
        tracep->fullQData(oldp+492,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[7]),64);
        tracep->fullQData(oldp+494,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[8]),64);
        tracep->fullQData(oldp+496,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[9]),64);
        tracep->fullQData(oldp+498,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[10]),64);
        tracep->fullQData(oldp+500,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[11]),64);
        tracep->fullQData(oldp+502,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[12]),64);
        tracep->fullQData(oldp+504,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[13]),64);
        tracep->fullQData(oldp+506,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[14]),64);
        tracep->fullQData(oldp+508,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[15]),64);
        tracep->fullQData(oldp+510,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[16]),64);
        tracep->fullQData(oldp+512,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[17]),64);
        tracep->fullQData(oldp+514,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[18]),64);
        tracep->fullQData(oldp+516,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[19]),64);
        tracep->fullQData(oldp+518,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[20]),64);
        tracep->fullQData(oldp+520,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[21]),64);
        tracep->fullQData(oldp+522,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[22]),64);
        tracep->fullQData(oldp+524,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[23]),64);
        tracep->fullQData(oldp+526,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[24]),64);
        tracep->fullQData(oldp+528,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[25]),64);
        tracep->fullQData(oldp+530,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[26]),64);
        tracep->fullQData(oldp+532,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[27]),64);
        tracep->fullQData(oldp+534,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[28]),64);
        tracep->fullQData(oldp+536,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[29]),64);
        tracep->fullQData(oldp+538,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[30]),64);
        tracep->fullQData(oldp+540,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[31]),64);
        tracep->fullBit(oldp+542,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero));
        tracep->fullQData(oldp+543,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1),64);
        tracep->fullQData(oldp+545,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2),64);
        tracep->fullQData(oldp+547,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[0]),64);
        tracep->fullQData(oldp+549,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[1]),64);
        tracep->fullQData(oldp+551,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[2]),64);
        tracep->fullQData(oldp+553,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[3]),64);
        tracep->fullQData(oldp+555,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[4]),64);
        tracep->fullQData(oldp+557,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[5]),64);
        tracep->fullQData(oldp+559,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[6]),64);
        tracep->fullQData(oldp+561,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[7]),64);
        tracep->fullQData(oldp+563,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[8]),64);
        tracep->fullQData(oldp+565,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[9]),64);
        tracep->fullQData(oldp+567,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[10]),64);
        tracep->fullQData(oldp+569,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[11]),64);
        tracep->fullQData(oldp+571,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[12]),64);
        tracep->fullQData(oldp+573,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[13]),64);
        tracep->fullQData(oldp+575,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[14]),64);
        tracep->fullQData(oldp+577,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[15]),64);
        tracep->fullQData(oldp+579,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[16]),64);
        tracep->fullQData(oldp+581,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[17]),64);
        tracep->fullQData(oldp+583,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[18]),64);
        tracep->fullQData(oldp+585,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[19]),64);
        tracep->fullQData(oldp+587,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[20]),64);
        tracep->fullQData(oldp+589,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[21]),64);
        tracep->fullQData(oldp+591,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[22]),64);
        tracep->fullQData(oldp+593,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[23]),64);
        tracep->fullQData(oldp+595,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[24]),64);
        tracep->fullQData(oldp+597,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[25]),64);
        tracep->fullQData(oldp+599,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[26]),64);
        tracep->fullQData(oldp+601,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[27]),64);
        tracep->fullQData(oldp+603,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[28]),64);
        tracep->fullQData(oldp+605,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[29]),64);
        tracep->fullQData(oldp+607,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[30]),64);
        tracep->fullQData(oldp+609,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[31]),64);
        tracep->fullBit(oldp+611,(vlSelf->clk));
        tracep->fullBit(oldp+612,(vlSelf->rst));
        tracep->fullIData(oldp+613,(vlSelf->inst),32);
        tracep->fullIData(oldp+614,(vlSelf->pc),32);
        tracep->fullQData(oldp+615,(vlSelf->unknown_code),64);
        tracep->fullBit(oldp+617,(vlSelf->time_set));
        tracep->fullIData(oldp+618,(vlSelf->diff_pc),32);
        tracep->fullIData(oldp+619,(vlSelf->diff_delay_pc),32);
        tracep->fullBit(oldp+620,(vlSelf->out_mem_rd_buf_flag));
        tracep->fullQData(oldp+621,((vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
                                     [vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr] 
                                     + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__wb_s_imm)))),64);
        tracep->fullQData(oldp+623,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[0]),64);
        tracep->fullQData(oldp+625,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[1]),64);
        tracep->fullQData(oldp+627,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[2]),64);
        tracep->fullQData(oldp+629,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[3]),64);
        tracep->fullQData(oldp+631,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[4]),64);
        tracep->fullQData(oldp+633,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[5]),64);
        tracep->fullQData(oldp+635,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[6]),64);
        tracep->fullQData(oldp+637,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[7]),64);
        tracep->fullQData(oldp+639,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[8]),64);
        tracep->fullQData(oldp+641,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[9]),64);
        tracep->fullQData(oldp+643,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[10]),64);
        tracep->fullQData(oldp+645,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[11]),64);
        tracep->fullQData(oldp+647,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[12]),64);
        tracep->fullQData(oldp+649,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[13]),64);
        tracep->fullQData(oldp+651,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[14]),64);
        tracep->fullQData(oldp+653,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[15]),64);
        tracep->fullQData(oldp+655,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[16]),64);
        tracep->fullQData(oldp+657,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[17]),64);
        tracep->fullQData(oldp+659,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[18]),64);
        tracep->fullQData(oldp+661,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[19]),64);
        tracep->fullQData(oldp+663,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[20]),64);
        tracep->fullQData(oldp+665,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[21]),64);
        tracep->fullQData(oldp+667,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[22]),64);
        tracep->fullQData(oldp+669,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[23]),64);
        tracep->fullQData(oldp+671,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[24]),64);
        tracep->fullQData(oldp+673,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[25]),64);
        tracep->fullQData(oldp+675,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[26]),64);
        tracep->fullQData(oldp+677,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[27]),64);
        tracep->fullQData(oldp+679,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[28]),64);
        tracep->fullQData(oldp+681,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[29]),64);
        tracep->fullQData(oldp+683,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[30]),64);
        tracep->fullQData(oldp+685,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[31]),64);
        tracep->fullBit(oldp+687,(vlSelf->ysyx_22040175_top__DOT__id_branch));
        tracep->fullBit(oldp+688,(vlSelf->ysyx_22040175_top__DOT__id_jump));
        tracep->fullQData(oldp+689,(vlSelf->ysyx_22040175_top__DOT__id_end_write_addr),64);
        tracep->fullBit(oldp+691,(vlSelf->ysyx_22040175_top__DOT__ex_branch));
        tracep->fullBit(oldp+692,(vlSelf->ysyx_22040175_top__DOT__ex_jump));
        tracep->fullQData(oldp+693,(vlSelf->ysyx_22040175_top__DOT__ex_imm),64);
        tracep->fullCData(oldp+695,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src_sel),2);
        tracep->fullBit(oldp+696,(vlSelf->ysyx_22040175_top__DOT__ex_jalr));
        tracep->fullQData(oldp+697,(vlSelf->ysyx_22040175_top__DOT__ex_reg1_rdata),64);
        tracep->fullQData(oldp+699,(vlSelf->ysyx_22040175_top__DOT__ex_reg2_rdata),64);
        tracep->fullBit(oldp+701,(vlSelf->ysyx_22040175_top__DOT__ex_time_set));
        tracep->fullBit(oldp+702,(vlSelf->ysyx_22040175_top__DOT__id_rest_no_use));
        tracep->fullQData(oldp+703,(vlSelf->ysyx_22040175_top__DOT__ex_end_write_addr),64);
        tracep->fullQData(oldp+705,(vlSelf->ysyx_22040175_top__DOT__ex_next_pc),64);
        tracep->fullBit(oldp+707,(vlSelf->ysyx_22040175_top__DOT__write_ready));
        tracep->fullBit(oldp+708,(vlSelf->ysyx_22040175_top__DOT__ex_pc_ready));
        tracep->fullBit(oldp+709,(vlSelf->ysyx_22040175_top__DOT__mem_pc_ready));
        tracep->fullBit(oldp+710,(vlSelf->ysyx_22040175_top__DOT__fr_ex_no_use));
        tracep->fullQData(oldp+711,(vlSelf->ysyx_22040175_top__DOT__mem_end_write_addr),64);
        tracep->fullBit(oldp+713,(vlSelf->ysyx_22040175_top__DOT__wb_pc_ready));
        tracep->fullQData(oldp+714,(vlSelf->ysyx_22040175_top__DOT__wb_end_write_addr),64);
        tracep->fullCData(oldp+716,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__test),3);
        tracep->fullCData(oldp+717,(3U),2);
        tracep->fullCData(oldp+718,(0U),3);
        tracep->fullCData(oldp+719,(1U),3);
        tracep->fullCData(oldp+720,(2U),3);
        tracep->fullCData(oldp+721,(3U),3);
    }
}
