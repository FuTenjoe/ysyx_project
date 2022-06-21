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
        tracep->declBit(c+50,"clk", false,-1);
        tracep->declBit(c+51,"rst", false,-1);
        tracep->declBus(c+52,"inst", false,-1, 31,0);
        tracep->declBus(c+53,"pc", false,-1, 31,0);
        tracep->declBus(c+54,"unknown_code", false,-1, 31,0);
        tracep->declBit(c+50,"ysyx_22040175_top clk", false,-1);
        tracep->declBit(c+51,"ysyx_22040175_top rst", false,-1);
        tracep->declBus(c+52,"ysyx_22040175_top inst", false,-1, 31,0);
        tracep->declBus(c+53,"ysyx_22040175_top pc", false,-1, 31,0);
        tracep->declBus(c+54,"ysyx_22040175_top unknown_code", false,-1, 31,0);
        tracep->declBit(c+34,"ysyx_22040175_top rst_n", false,-1);
        tracep->declBit(c+1,"ysyx_22040175_top ena", false,-1);
        tracep->declBus(c+55,"ysyx_22040175_top next_pc", false,-1, 31,0);
        tracep->declBit(c+35,"ysyx_22040175_top branch", false,-1);
        tracep->declBit(c+36,"ysyx_22040175_top zero", false,-1);
        tracep->declBit(c+37,"ysyx_22040175_top jump", false,-1);
        tracep->declBit(c+38,"ysyx_22040175_top reg_wen", false,-1);
        tracep->declBus(c+39,"ysyx_22040175_top reg_waddr", false,-1, 4,0);
        tracep->declBus(c+40,"ysyx_22040175_top reg_wdata", false,-1, 31,0);
        tracep->declBus(c+41,"ysyx_22040175_top reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+42,"ysyx_22040175_top reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+56,"ysyx_22040175_top reg1_rdata", false,-1, 31,0);
        tracep->declBus(c+43,"ysyx_22040175_top reg2_rdata", false,-1, 31,0);
        tracep->declBus(c+44,"ysyx_22040175_top imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+45,"ysyx_22040175_top imm", false,-1, 31,0);
        tracep->declBus(c+46,"ysyx_22040175_top alu_op", false,-1, 3,0);
        tracep->declBus(c+47,"ysyx_22040175_top alu_src_sel", false,-1, 1,0);
        tracep->declBus(c+48,"ysyx_22040175_top alu_src1", false,-1, 31,0);
        tracep->declBus(c+49,"ysyx_22040175_top alu_src2", false,-1, 31,0);
        tracep->declBus(c+40,"ysyx_22040175_top alu_res", false,-1, 31,0);
        tracep->declBit(c+50,"ysyx_22040175_top u_pc_reg_0 clk", false,-1);
        tracep->declBit(c+34,"ysyx_22040175_top u_pc_reg_0 rst_n", false,-1);
        tracep->declBit(c+1,"ysyx_22040175_top u_pc_reg_0 ena", false,-1);
        tracep->declBus(c+55,"ysyx_22040175_top u_pc_reg_0 next_pc", false,-1, 31,0);
        tracep->declBus(c+53,"ysyx_22040175_top u_pc_reg_0 curr_pc", false,-1, 31,0);
        tracep->declBit(c+1,"ysyx_22040175_top u_mux_pc_0 ena", false,-1);
        tracep->declBit(c+35,"ysyx_22040175_top u_mux_pc_0 branch", false,-1);
        tracep->declBit(c+36,"ysyx_22040175_top u_mux_pc_0 zero", false,-1);
        tracep->declBit(c+37,"ysyx_22040175_top u_mux_pc_0 jump", false,-1);
        tracep->declBus(c+45,"ysyx_22040175_top u_mux_pc_0 imm", false,-1, 31,0);
        tracep->declBus(c+53,"ysyx_22040175_top u_mux_pc_0 curr_pc", false,-1, 31,0);
        tracep->declBus(c+55,"ysyx_22040175_top u_mux_pc_0 next_pc", false,-1, 31,0);
        tracep->declBus(c+52,"ysyx_22040175_top u_ctrl_0 inst", false,-1, 31,0);
        tracep->declBit(c+35,"ysyx_22040175_top u_ctrl_0 branch", false,-1);
        tracep->declBit(c+37,"ysyx_22040175_top u_ctrl_0 jump", false,-1);
        tracep->declBit(c+38,"ysyx_22040175_top u_ctrl_0 reg_wen", false,-1);
        tracep->declBus(c+39,"ysyx_22040175_top u_ctrl_0 reg_waddr", false,-1, 4,0);
        tracep->declBus(c+41,"ysyx_22040175_top u_ctrl_0 reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+42,"ysyx_22040175_top u_ctrl_0 reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+44,"ysyx_22040175_top u_ctrl_0 imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+46,"ysyx_22040175_top u_ctrl_0 alu_op", false,-1, 3,0);
        tracep->declBus(c+47,"ysyx_22040175_top u_ctrl_0 alu_src_sel", false,-1, 1,0);
        tracep->declBus(c+54,"ysyx_22040175_top u_ctrl_0 unknown_code", false,-1, 31,0);
        tracep->declBus(c+57,"ysyx_22040175_top u_ctrl_0 opcode", false,-1, 6,0);
        tracep->declBus(c+58,"ysyx_22040175_top u_ctrl_0 funct3", false,-1, 2,0);
        tracep->declBus(c+59,"ysyx_22040175_top u_ctrl_0 funct7", false,-1, 6,0);
        tracep->declBus(c+60,"ysyx_22040175_top u_ctrl_0 rd", false,-1, 4,0);
        tracep->declBus(c+61,"ysyx_22040175_top u_ctrl_0 rs1", false,-1, 4,0);
        tracep->declBus(c+62,"ysyx_22040175_top u_ctrl_0 rs2", false,-1, 4,0);
        tracep->declBit(c+50,"ysyx_22040175_top u_reg_file_0 clk", false,-1);
        tracep->declBit(c+34,"ysyx_22040175_top u_reg_file_0 rst_n", false,-1);
        tracep->declBit(c+38,"ysyx_22040175_top u_reg_file_0 reg_wen", false,-1);
        tracep->declBus(c+39,"ysyx_22040175_top u_reg_file_0 reg_waddr", false,-1, 4,0);
        tracep->declBus(c+40,"ysyx_22040175_top u_reg_file_0 reg_wdata", false,-1, 31,0);
        tracep->declBus(c+41,"ysyx_22040175_top u_reg_file_0 reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+42,"ysyx_22040175_top u_reg_file_0 reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+56,"ysyx_22040175_top u_reg_file_0 reg1_rdata", false,-1, 31,0);
        tracep->declBus(c+43,"ysyx_22040175_top u_reg_file_0 reg2_rdata", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+2+i*1,"ysyx_22040175_top u_reg_file_0 reg_f", true,(i+0), 31,0);}}
        tracep->declBus(c+52,"ysyx_22040175_top u_imm_gen_0 inst", false,-1, 31,0);
        tracep->declBus(c+44,"ysyx_22040175_top u_imm_gen_0 imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+45,"ysyx_22040175_top u_imm_gen_0 imm", false,-1, 31,0);
        tracep->declBus(c+47,"ysyx_22040175_top u_mux_alu_0 alu_src_sel", false,-1, 1,0);
        tracep->declBus(c+56,"ysyx_22040175_top u_mux_alu_0 reg1_rdata", false,-1, 31,0);
        tracep->declBus(c+43,"ysyx_22040175_top u_mux_alu_0 reg2_rdata", false,-1, 31,0);
        tracep->declBus(c+45,"ysyx_22040175_top u_mux_alu_0 imm", false,-1, 31,0);
        tracep->declBus(c+53,"ysyx_22040175_top u_mux_alu_0 curr_pc", false,-1, 31,0);
        tracep->declBus(c+48,"ysyx_22040175_top u_mux_alu_0 alu_src1", false,-1, 31,0);
        tracep->declBus(c+49,"ysyx_22040175_top u_mux_alu_0 alu_src2", false,-1, 31,0);
        tracep->declBus(c+46,"ysyx_22040175_top u_alu_0 alu_op", false,-1, 3,0);
        tracep->declBus(c+48,"ysyx_22040175_top u_alu_0 alu_src1", false,-1, 31,0);
        tracep->declBus(c+49,"ysyx_22040175_top u_alu_0 alu_src2", false,-1, 31,0);
        tracep->declBit(c+36,"ysyx_22040175_top u_alu_0 zero", false,-1);
        tracep->declBus(c+40,"ysyx_22040175_top u_alu_0 alu_res", false,-1, 31,0);
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
        tracep->fullIData(oldp+2,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[0]),32);
        tracep->fullIData(oldp+3,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[1]),32);
        tracep->fullIData(oldp+4,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[2]),32);
        tracep->fullIData(oldp+5,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[3]),32);
        tracep->fullIData(oldp+6,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[4]),32);
        tracep->fullIData(oldp+7,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[5]),32);
        tracep->fullIData(oldp+8,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[6]),32);
        tracep->fullIData(oldp+9,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[7]),32);
        tracep->fullIData(oldp+10,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[8]),32);
        tracep->fullIData(oldp+11,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[9]),32);
        tracep->fullIData(oldp+12,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[10]),32);
        tracep->fullIData(oldp+13,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[11]),32);
        tracep->fullIData(oldp+14,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[12]),32);
        tracep->fullIData(oldp+15,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[13]),32);
        tracep->fullIData(oldp+16,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[14]),32);
        tracep->fullIData(oldp+17,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[15]),32);
        tracep->fullIData(oldp+18,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[16]),32);
        tracep->fullIData(oldp+19,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[17]),32);
        tracep->fullIData(oldp+20,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[18]),32);
        tracep->fullIData(oldp+21,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[19]),32);
        tracep->fullIData(oldp+22,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[20]),32);
        tracep->fullIData(oldp+23,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[21]),32);
        tracep->fullIData(oldp+24,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[22]),32);
        tracep->fullIData(oldp+25,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[23]),32);
        tracep->fullIData(oldp+26,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[24]),32);
        tracep->fullIData(oldp+27,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[25]),32);
        tracep->fullIData(oldp+28,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[26]),32);
        tracep->fullIData(oldp+29,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[27]),32);
        tracep->fullIData(oldp+30,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[28]),32);
        tracep->fullIData(oldp+31,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[29]),32);
        tracep->fullIData(oldp+32,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[30]),32);
        tracep->fullIData(oldp+33,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[31]),32);
        tracep->fullBit(oldp+34,(vlSelf->ysyx_22040175_top__DOT__rst_n));
        tracep->fullBit(oldp+35,(vlSelf->ysyx_22040175_top__DOT__branch));
        tracep->fullBit(oldp+36,(vlSelf->ysyx_22040175_top__DOT__zero));
        tracep->fullBit(oldp+37,(vlSelf->ysyx_22040175_top__DOT__jump));
        tracep->fullBit(oldp+38,(vlSelf->ysyx_22040175_top__DOT__reg_wen));
        tracep->fullCData(oldp+39,(vlSelf->ysyx_22040175_top__DOT__reg_waddr),5);
        tracep->fullIData(oldp+40,(vlSelf->ysyx_22040175_top__DOT__alu_res),32);
        tracep->fullCData(oldp+41,(vlSelf->ysyx_22040175_top__DOT__reg1_raddr),5);
        tracep->fullCData(oldp+42,(vlSelf->ysyx_22040175_top__DOT__reg2_raddr),5);
        tracep->fullIData(oldp+43,(vlSelf->ysyx_22040175_top__DOT__reg2_rdata),32);
        tracep->fullCData(oldp+44,(vlSelf->ysyx_22040175_top__DOT__imm_gen_op),3);
        tracep->fullIData(oldp+45,(vlSelf->ysyx_22040175_top__DOT__imm),32);
        tracep->fullCData(oldp+46,(vlSelf->ysyx_22040175_top__DOT__alu_op),4);
        tracep->fullCData(oldp+47,(vlSelf->ysyx_22040175_top__DOT__alu_src_sel),2);
        tracep->fullIData(oldp+48,(vlSelf->ysyx_22040175_top__DOT__alu_src1),32);
        tracep->fullIData(oldp+49,(vlSelf->ysyx_22040175_top__DOT__alu_src2),32);
        tracep->fullBit(oldp+50,(vlSelf->clk));
        tracep->fullBit(oldp+51,(vlSelf->rst));
        tracep->fullIData(oldp+52,(vlSelf->inst),32);
        tracep->fullIData(oldp+53,(vlSelf->pc),32);
        tracep->fullIData(oldp+54,(vlSelf->unknown_code),32);
        tracep->fullIData(oldp+55,(((IData)(vlSelf->ysyx_22040175_top__DOT__ena)
                                     ? (((IData)(vlSelf->ysyx_22040175_top__DOT__branch) 
                                         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__zero)))
                                         ? (vlSelf->pc 
                                            + vlSelf->ysyx_22040175_top__DOT__imm)
                                         : ((IData)(vlSelf->ysyx_22040175_top__DOT__jump)
                                             ? (vlSelf->pc 
                                                + vlSelf->ysyx_22040175_top__DOT__imm)
                                             : ((IData)(4U) 
                                                + vlSelf->pc)))
                                     : vlSelf->pc)),32);
        tracep->fullIData(oldp+56,(((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__reg1_raddr))
                                     ? 0U : vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f
                                    [vlSelf->ysyx_22040175_top__DOT__reg1_raddr])),32);
        tracep->fullCData(oldp+57,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+58,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+59,((vlSelf->inst >> 0x19U)),7);
        tracep->fullCData(oldp+60,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+61,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+62,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
    }
}
