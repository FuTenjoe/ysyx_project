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
        tracep->declBit(c+231,"clk", false,-1);
        tracep->declBit(c+232,"rst", false,-1);
        tracep->declBus(c+233,"inst", false,-1, 31,0);
        tracep->declBus(c+234,"pc", false,-1, 31,0);
        tracep->declBus(c+235,"unknown_code", false,-1, 31,0);
        tracep->declBit(c+236,"time_set", false,-1);
        tracep->declBit(c+231,"ysyx_22040175_top clk", false,-1);
        tracep->declBit(c+232,"ysyx_22040175_top rst", false,-1);
        tracep->declBus(c+233,"ysyx_22040175_top inst", false,-1, 31,0);
        tracep->declBus(c+234,"ysyx_22040175_top pc", false,-1, 31,0);
        tracep->declBus(c+235,"ysyx_22040175_top unknown_code", false,-1, 31,0);
        tracep->declBit(c+236,"ysyx_22040175_top time_set", false,-1);
        tracep->declBit(c+237,"ysyx_22040175_top rst_n", false,-1);
        tracep->declBit(c+1,"ysyx_22040175_top ena", false,-1);
        tracep->declBus(c+238,"ysyx_22040175_top next_pc", false,-1, 31,0);
        tracep->declBit(c+2,"ysyx_22040175_top branch", false,-1);
        tracep->declBit(c+3,"ysyx_22040175_top zero", false,-1);
        tracep->declBit(c+4,"ysyx_22040175_top jump", false,-1);
        tracep->declBit(c+5,"ysyx_22040175_top reg_wen", false,-1);
        tracep->declBus(c+6,"ysyx_22040175_top reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+7,"ysyx_22040175_top reg_wdata", false,-1, 63,0);
        tracep->declBus(c+9,"ysyx_22040175_top reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+10,"ysyx_22040175_top reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_22040175_top reg1_rdata", false,-1, 31,0);
        tracep->declBus(c+12,"ysyx_22040175_top reg2_rdata", false,-1, 31,0);
        tracep->declBus(c+13,"ysyx_22040175_top imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+14,"ysyx_22040175_top imm", false,-1, 31,0);
        tracep->declBus(c+15,"ysyx_22040175_top alu_op", false,-1, 3,0);
        tracep->declBus(c+16,"ysyx_22040175_top alu_src_sel", false,-1, 1,0);
        tracep->declBus(c+17,"ysyx_22040175_top alu_src1", false,-1, 31,0);
        tracep->declBus(c+18,"ysyx_22040175_top alu_src2", false,-1, 31,0);
        tracep->declBus(c+19,"ysyx_22040175_top alu_res", false,-1, 31,0);
        tracep->declBit(c+20,"ysyx_22040175_top jalr", false,-1);
        tracep->declBit(c+21,"ysyx_22040175_top ebreak_flag", false,-1);
        tracep->declBus(c+22,"ysyx_22040175_top wmask", false,-1, 7,0);
        tracep->declBit(c+23,"ysyx_22040175_top s_flag", false,-1);
        tracep->declBus(c+24,"ysyx_22040175_top s_imm", false,-1, 31,0);
        tracep->declBus(c+25,"ysyx_22040175_top expand_signed", false,-1, 3,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+26+i*2,"ysyx_22040175_top reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+90,"ysyx_22040175_top rd_flag", false,-1);
        tracep->declQuad(c+91,"ysyx_22040175_top rdata", false,-1, 63,0);
        tracep->declBit(c+231,"ysyx_22040175_top u_pc_reg_0 clk", false,-1);
        tracep->declBit(c+237,"ysyx_22040175_top u_pc_reg_0 rst_n", false,-1);
        tracep->declBit(c+1,"ysyx_22040175_top u_pc_reg_0 ena", false,-1);
        tracep->declBus(c+238,"ysyx_22040175_top u_pc_reg_0 next_pc", false,-1, 31,0);
        tracep->declBus(c+234,"ysyx_22040175_top u_pc_reg_0 curr_pc", false,-1, 31,0);
        tracep->declBit(c+1,"ysyx_22040175_top u_mux_pc_0 ena", false,-1);
        tracep->declBit(c+2,"ysyx_22040175_top u_mux_pc_0 branch", false,-1);
        tracep->declBit(c+3,"ysyx_22040175_top u_mux_pc_0 zero", false,-1);
        tracep->declBit(c+4,"ysyx_22040175_top u_mux_pc_0 jump", false,-1);
        tracep->declBit(c+20,"ysyx_22040175_top u_mux_pc_0 jalr", false,-1);
        tracep->declBus(c+14,"ysyx_22040175_top u_mux_pc_0 imm", false,-1, 31,0);
        tracep->declBus(c+234,"ysyx_22040175_top u_mux_pc_0 curr_pc", false,-1, 31,0);
        tracep->declBus(c+238,"ysyx_22040175_top u_mux_pc_0 next_pc", false,-1, 31,0);
        tracep->declBit(c+21,"ysyx_22040175_top u_mux_pc_0 ebreak_flag", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+93+i*2,"ysyx_22040175_top u_mux_pc_0 reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+24,"ysyx_22040175_top u_mux_pc_0 s_imm", false,-1, 31,0);
        tracep->declBus(c+233,"ysyx_22040175_top u_ctrl_0 inst", false,-1, 31,0);
        tracep->declBit(c+2,"ysyx_22040175_top u_ctrl_0 branch", false,-1);
        tracep->declBit(c+4,"ysyx_22040175_top u_ctrl_0 jump", false,-1);
        tracep->declBit(c+5,"ysyx_22040175_top u_ctrl_0 reg_wen", false,-1);
        tracep->declBus(c+6,"ysyx_22040175_top u_ctrl_0 reg_waddr", false,-1, 4,0);
        tracep->declBus(c+9,"ysyx_22040175_top u_ctrl_0 reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+10,"ysyx_22040175_top u_ctrl_0 reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+13,"ysyx_22040175_top u_ctrl_0 imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+15,"ysyx_22040175_top u_ctrl_0 alu_op", false,-1, 3,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_ctrl_0 alu_src_sel", false,-1, 1,0);
        tracep->declBus(c+235,"ysyx_22040175_top u_ctrl_0 unknown_code", false,-1, 31,0);
        tracep->declBit(c+20,"ysyx_22040175_top u_ctrl_0 jalr", false,-1);
        tracep->declBit(c+21,"ysyx_22040175_top u_ctrl_0 ebreak_flag", false,-1);
        tracep->declBus(c+22,"ysyx_22040175_top u_ctrl_0 wmask", false,-1, 7,0);
        tracep->declBit(c+23,"ysyx_22040175_top u_ctrl_0 s_flag", false,-1);
        tracep->declBus(c+24,"ysyx_22040175_top u_ctrl_0 s_imm", false,-1, 31,0);
        tracep->declBus(c+25,"ysyx_22040175_top u_ctrl_0 expand_signed", false,-1, 3,0);
        tracep->declBit(c+90,"ysyx_22040175_top u_ctrl_0 rd_flag", false,-1);
        tracep->declBus(c+239,"ysyx_22040175_top u_ctrl_0 opcode", false,-1, 6,0);
        tracep->declBus(c+240,"ysyx_22040175_top u_ctrl_0 funct3", false,-1, 2,0);
        tracep->declBus(c+241,"ysyx_22040175_top u_ctrl_0 funct7", false,-1, 6,0);
        tracep->declBus(c+242,"ysyx_22040175_top u_ctrl_0 rd", false,-1, 4,0);
        tracep->declBus(c+243,"ysyx_22040175_top u_ctrl_0 rs1", false,-1, 4,0);
        tracep->declBus(c+244,"ysyx_22040175_top u_ctrl_0 rs2", false,-1, 4,0);
        tracep->declBit(c+231,"ysyx_22040175_top u_reg_file_0 clk", false,-1);
        tracep->declBit(c+237,"ysyx_22040175_top u_reg_file_0 rst_n", false,-1);
        tracep->declBit(c+5,"ysyx_22040175_top u_reg_file_0 reg_wen", false,-1);
        tracep->declQuad(c+157,"ysyx_22040175_top u_reg_file_0 reg_waddr", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22040175_top u_reg_file_0 reg_wdata", false,-1, 63,0);
        tracep->declQuad(c+159,"ysyx_22040175_top u_reg_file_0 reg1_raddr", false,-1, 63,0);
        tracep->declQuad(c+161,"ysyx_22040175_top u_reg_file_0 reg2_raddr", false,-1, 63,0);
        tracep->declBus(c+11,"ysyx_22040175_top u_reg_file_0 reg1_rdata", false,-1, 31,0);
        tracep->declBus(c+12,"ysyx_22040175_top u_reg_file_0 reg2_rdata", false,-1, 31,0);
        tracep->declBus(c+22,"ysyx_22040175_top u_reg_file_0 wmask", false,-1, 7,0);
        tracep->declBit(c+23,"ysyx_22040175_top u_reg_file_0 s_flag", false,-1);
        tracep->declBit(c+236,"ysyx_22040175_top u_reg_file_0 time_set", false,-1);
        tracep->declBus(c+24,"ysyx_22040175_top u_reg_file_0 s_imm", false,-1, 31,0);
        tracep->declBus(c+25,"ysyx_22040175_top u_reg_file_0 expand_signed", false,-1, 3,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+163+i*2,"ysyx_22040175_top u_reg_file_0 reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+233,"ysyx_22040175_top u_imm_gen_0 inst", false,-1, 31,0);
        tracep->declBus(c+13,"ysyx_22040175_top u_imm_gen_0 imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+14,"ysyx_22040175_top u_imm_gen_0 imm", false,-1, 31,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_mux_alu_0 alu_src_sel", false,-1, 1,0);
        tracep->declBus(c+11,"ysyx_22040175_top u_mux_alu_0 reg1_rdata", false,-1, 31,0);
        tracep->declBus(c+12,"ysyx_22040175_top u_mux_alu_0 reg2_rdata", false,-1, 31,0);
        tracep->declBus(c+14,"ysyx_22040175_top u_mux_alu_0 imm", false,-1, 31,0);
        tracep->declBus(c+234,"ysyx_22040175_top u_mux_alu_0 curr_pc", false,-1, 31,0);
        tracep->declBus(c+17,"ysyx_22040175_top u_mux_alu_0 alu_src1", false,-1, 31,0);
        tracep->declBus(c+18,"ysyx_22040175_top u_mux_alu_0 alu_src2", false,-1, 31,0);
        tracep->declBus(c+15,"ysyx_22040175_top u_alu_0 alu_op", false,-1, 3,0);
        tracep->declBus(c+17,"ysyx_22040175_top u_alu_0 alu_src1", false,-1, 31,0);
        tracep->declBus(c+18,"ysyx_22040175_top u_alu_0 alu_src2", false,-1, 31,0);
        tracep->declBit(c+3,"ysyx_22040175_top u_alu_0 zero", false,-1);
        tracep->declQuad(c+227,"ysyx_22040175_top u_alu_0 alu_res", false,-1, 63,0);
        tracep->declBit(c+90,"ysyx_22040175_top u_alu_0 rd_flag", false,-1);
        tracep->declQuad(c+229,"ysyx_22040175_top u_alu_0 rd_buf_lw", false,-1, 63,0);
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
        tracep->fullBit(oldp+1,(vlSelf->ysyx_22040175_top__DOT__ena));
        tracep->fullBit(oldp+2,(vlSelf->ysyx_22040175_top__DOT__branch));
        tracep->fullBit(oldp+3,(vlSelf->ysyx_22040175_top__DOT__zero));
        tracep->fullBit(oldp+4,(vlSelf->ysyx_22040175_top__DOT__jump));
        tracep->fullBit(oldp+5,(vlSelf->ysyx_22040175_top__DOT__reg_wen));
        tracep->fullCData(oldp+6,(vlSelf->ysyx_22040175_top__DOT__reg_waddr),5);
        tracep->fullQData(oldp+7,((QData)((IData)(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_alu_0__alu_res))),64);
        tracep->fullCData(oldp+9,(vlSelf->ysyx_22040175_top__DOT__reg1_raddr),5);
        tracep->fullCData(oldp+10,(vlSelf->ysyx_22040175_top__DOT__reg2_raddr),5);
        tracep->fullIData(oldp+11,(((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__reg1_raddr))
                                     ? 0U : (IData)(
                                                    vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
                                                    [vlSelf->ysyx_22040175_top__DOT__reg1_raddr]))),32);
        tracep->fullIData(oldp+12,(vlSelf->ysyx_22040175_top__DOT__reg2_rdata),32);
        tracep->fullCData(oldp+13,(vlSelf->ysyx_22040175_top__DOT__imm_gen_op),3);
        tracep->fullIData(oldp+14,(vlSelf->ysyx_22040175_top__DOT__imm),32);
        tracep->fullCData(oldp+15,(vlSelf->ysyx_22040175_top__DOT__alu_op),4);
        tracep->fullCData(oldp+16,(vlSelf->ysyx_22040175_top__DOT__alu_src_sel),2);
        tracep->fullIData(oldp+17,(vlSelf->ysyx_22040175_top__DOT__alu_src1),32);
        tracep->fullIData(oldp+18,(vlSelf->ysyx_22040175_top__DOT__alu_src2),32);
        tracep->fullIData(oldp+19,((IData)(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_alu_0__alu_res)),32);
        tracep->fullBit(oldp+20,(vlSelf->ysyx_22040175_top__DOT__jalr));
        tracep->fullBit(oldp+21,(vlSelf->ysyx_22040175_top__DOT__ebreak_flag));
        tracep->fullCData(oldp+22,(vlSelf->ysyx_22040175_top__DOT__wmask),8);
        tracep->fullBit(oldp+23,(vlSelf->ysyx_22040175_top__DOT__s_flag));
        tracep->fullIData(oldp+24,(vlSelf->ysyx_22040175_top__DOT__s_imm),32);
        tracep->fullCData(oldp+25,(vlSelf->ysyx_22040175_top__DOT__expand_signed),4);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22040175_top__DOT__reg_f[0]),64);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22040175_top__DOT__reg_f[1]),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22040175_top__DOT__reg_f[2]),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22040175_top__DOT__reg_f[3]),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22040175_top__DOT__reg_f[4]),64);
        tracep->fullQData(oldp+36,(vlSelf->ysyx_22040175_top__DOT__reg_f[5]),64);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22040175_top__DOT__reg_f[6]),64);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22040175_top__DOT__reg_f[7]),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22040175_top__DOT__reg_f[8]),64);
        tracep->fullQData(oldp+44,(vlSelf->ysyx_22040175_top__DOT__reg_f[9]),64);
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22040175_top__DOT__reg_f[10]),64);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22040175_top__DOT__reg_f[11]),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22040175_top__DOT__reg_f[12]),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22040175_top__DOT__reg_f[13]),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22040175_top__DOT__reg_f[14]),64);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22040175_top__DOT__reg_f[15]),64);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22040175_top__DOT__reg_f[16]),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22040175_top__DOT__reg_f[17]),64);
        tracep->fullQData(oldp+62,(vlSelf->ysyx_22040175_top__DOT__reg_f[18]),64);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22040175_top__DOT__reg_f[19]),64);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22040175_top__DOT__reg_f[20]),64);
        tracep->fullQData(oldp+68,(vlSelf->ysyx_22040175_top__DOT__reg_f[21]),64);
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22040175_top__DOT__reg_f[22]),64);
        tracep->fullQData(oldp+72,(vlSelf->ysyx_22040175_top__DOT__reg_f[23]),64);
        tracep->fullQData(oldp+74,(vlSelf->ysyx_22040175_top__DOT__reg_f[24]),64);
        tracep->fullQData(oldp+76,(vlSelf->ysyx_22040175_top__DOT__reg_f[25]),64);
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22040175_top__DOT__reg_f[26]),64);
        tracep->fullQData(oldp+80,(vlSelf->ysyx_22040175_top__DOT__reg_f[27]),64);
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22040175_top__DOT__reg_f[28]),64);
        tracep->fullQData(oldp+84,(vlSelf->ysyx_22040175_top__DOT__reg_f[29]),64);
        tracep->fullQData(oldp+86,(vlSelf->ysyx_22040175_top__DOT__reg_f[30]),64);
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22040175_top__DOT__reg_f[31]),64);
        tracep->fullBit(oldp+90,(vlSelf->ysyx_22040175_top__DOT__rd_flag));
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22040175_top__DOT__rdata),64);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0]),64);
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[1]),64);
        tracep->fullQData(oldp+97,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[2]),64);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[3]),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[4]),64);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[5]),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[6]),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[7]),64);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[8]),64);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[9]),64);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[10]),64);
        tracep->fullQData(oldp+115,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[11]),64);
        tracep->fullQData(oldp+117,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[12]),64);
        tracep->fullQData(oldp+119,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[13]),64);
        tracep->fullQData(oldp+121,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[14]),64);
        tracep->fullQData(oldp+123,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[15]),64);
        tracep->fullQData(oldp+125,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[16]),64);
        tracep->fullQData(oldp+127,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[17]),64);
        tracep->fullQData(oldp+129,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[18]),64);
        tracep->fullQData(oldp+131,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[19]),64);
        tracep->fullQData(oldp+133,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[20]),64);
        tracep->fullQData(oldp+135,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[21]),64);
        tracep->fullQData(oldp+137,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[22]),64);
        tracep->fullQData(oldp+139,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[23]),64);
        tracep->fullQData(oldp+141,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[24]),64);
        tracep->fullQData(oldp+143,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[25]),64);
        tracep->fullQData(oldp+145,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[26]),64);
        tracep->fullQData(oldp+147,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[27]),64);
        tracep->fullQData(oldp+149,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[28]),64);
        tracep->fullQData(oldp+151,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[29]),64);
        tracep->fullQData(oldp+153,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[30]),64);
        tracep->fullQData(oldp+155,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[31]),64);
        tracep->fullQData(oldp+157,((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__reg_waddr))),64);
        tracep->fullQData(oldp+159,((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__reg1_raddr))),64);
        tracep->fullQData(oldp+161,((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__reg2_raddr))),64);
        tracep->fullQData(oldp+163,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[0]),64);
        tracep->fullQData(oldp+165,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[1]),64);
        tracep->fullQData(oldp+167,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[2]),64);
        tracep->fullQData(oldp+169,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[3]),64);
        tracep->fullQData(oldp+171,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[4]),64);
        tracep->fullQData(oldp+173,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[5]),64);
        tracep->fullQData(oldp+175,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[6]),64);
        tracep->fullQData(oldp+177,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[7]),64);
        tracep->fullQData(oldp+179,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[8]),64);
        tracep->fullQData(oldp+181,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[9]),64);
        tracep->fullQData(oldp+183,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[10]),64);
        tracep->fullQData(oldp+185,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[11]),64);
        tracep->fullQData(oldp+187,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[12]),64);
        tracep->fullQData(oldp+189,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[13]),64);
        tracep->fullQData(oldp+191,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[14]),64);
        tracep->fullQData(oldp+193,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[15]),64);
        tracep->fullQData(oldp+195,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[16]),64);
        tracep->fullQData(oldp+197,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[17]),64);
        tracep->fullQData(oldp+199,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[18]),64);
        tracep->fullQData(oldp+201,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[19]),64);
        tracep->fullQData(oldp+203,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[20]),64);
        tracep->fullQData(oldp+205,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[21]),64);
        tracep->fullQData(oldp+207,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[22]),64);
        tracep->fullQData(oldp+209,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[23]),64);
        tracep->fullQData(oldp+211,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[24]),64);
        tracep->fullQData(oldp+213,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[25]),64);
        tracep->fullQData(oldp+215,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[26]),64);
        tracep->fullQData(oldp+217,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[27]),64);
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[28]),64);
        tracep->fullQData(oldp+221,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[29]),64);
        tracep->fullQData(oldp+223,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[30]),64);
        tracep->fullQData(oldp+225,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[31]),64);
        tracep->fullQData(oldp+227,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_alu_0__alu_res),64);
        tracep->fullQData(oldp+229,(vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw),64);
        tracep->fullBit(oldp+231,(vlSelf->clk));
        tracep->fullBit(oldp+232,(vlSelf->rst));
        tracep->fullIData(oldp+233,(vlSelf->inst),32);
        tracep->fullIData(oldp+234,(vlSelf->pc),32);
        tracep->fullIData(oldp+235,(vlSelf->unknown_code),32);
        tracep->fullBit(oldp+236,(vlSelf->time_set));
        tracep->fullBit(oldp+237,(vlSelf->ysyx_22040175_top__DOT__rst_n));
        tracep->fullIData(oldp+238,(((IData)(vlSelf->ysyx_22040175_top__DOT__ena)
                                      ? (((IData)(vlSelf->ysyx_22040175_top__DOT__branch) 
                                          & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__zero)))
                                          ? (vlSelf->pc 
                                             + vlSelf->ysyx_22040175_top__DOT__imm)
                                          : (((IData)(vlSelf->ysyx_22040175_top__DOT__jump) 
                                              & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__jalr)))
                                              ? (vlSelf->pc 
                                                 + vlSelf->ysyx_22040175_top__DOT__imm)
                                              : (((IData)(vlSelf->ysyx_22040175_top__DOT__jump) 
                                                  & (IData)(vlSelf->ysyx_22040175_top__DOT__jalr))
                                                  ? 
                                                 ((IData)(
                                                          vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f
                                                          [
                                                          (0x1fU 
                                                           & vlSelf->ysyx_22040175_top__DOT__s_imm)]) 
                                                  + vlSelf->ysyx_22040175_top__DOT__imm)
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22040175_top__DOT__ebreak_flag)
                                                   ? 0x80000000U
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->pc)))))
                                      : vlSelf->pc)),32);
        tracep->fullCData(oldp+239,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+240,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+241,((vlSelf->inst >> 0x19U)),7);
        tracep->fullCData(oldp+242,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+243,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+244,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
    }
}
