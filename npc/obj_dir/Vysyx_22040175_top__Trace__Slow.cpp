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
        tracep->declBit(c+95,"clk", false,-1);
        tracep->declBit(c+96,"rst", false,-1);
        tracep->declBus(c+97,"unknown_code", false,-1, 31,0);
        tracep->declBit(c+95,"ysyx_22040175_top clk", false,-1);
        tracep->declBit(c+96,"ysyx_22040175_top rst", false,-1);
        tracep->declBus(c+97,"ysyx_22040175_top unknown_code", false,-1, 31,0);
        tracep->declQuad(c+1,"ysyx_22040175_top inst", false,-1, 63,0);
        tracep->declBus(c+3,"ysyx_22040175_top pc", false,-1, 31,0);
        tracep->declBit(c+98,"ysyx_22040175_top rst_n", false,-1);
        tracep->declBit(c+4,"ysyx_22040175_top ena", false,-1);
        tracep->declBus(c+5,"ysyx_22040175_top next_pc", false,-1, 31,0);
        tracep->declBit(c+6,"ysyx_22040175_top branch", false,-1);
        tracep->declBit(c+7,"ysyx_22040175_top zero", false,-1);
        tracep->declBit(c+8,"ysyx_22040175_top jump", false,-1);
        tracep->declBit(c+9,"ysyx_22040175_top reg_wen", false,-1);
        tracep->declBus(c+10,"ysyx_22040175_top reg_waddr", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_22040175_top reg_wdata", false,-1, 31,0);
        tracep->declBus(c+12,"ysyx_22040175_top reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+13,"ysyx_22040175_top reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+14,"ysyx_22040175_top reg1_rdata", false,-1, 31,0);
        tracep->declBus(c+15,"ysyx_22040175_top reg2_rdata", false,-1, 31,0);
        tracep->declBus(c+16,"ysyx_22040175_top imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+17,"ysyx_22040175_top imm", false,-1, 31,0);
        tracep->declBus(c+18,"ysyx_22040175_top alu_op", false,-1, 3,0);
        tracep->declBus(c+19,"ysyx_22040175_top alu_src_sel", false,-1, 1,0);
        tracep->declBus(c+20,"ysyx_22040175_top alu_src1", false,-1, 31,0);
        tracep->declBus(c+21,"ysyx_22040175_top alu_src2", false,-1, 31,0);
        tracep->declBus(c+11,"ysyx_22040175_top alu_res", false,-1, 31,0);
        tracep->declBit(c+22,"ysyx_22040175_top jalr", false,-1);
        tracep->declBit(c+23,"ysyx_22040175_top ebreak_flag", false,-1);
        tracep->declBit(c+95,"ysyx_22040175_top u_pc_reg_0 clk", false,-1);
        tracep->declBit(c+98,"ysyx_22040175_top u_pc_reg_0 rst_n", false,-1);
        tracep->declBit(c+4,"ysyx_22040175_top u_pc_reg_0 ena", false,-1);
        tracep->declBus(c+5,"ysyx_22040175_top u_pc_reg_0 next_pc", false,-1, 31,0);
        tracep->declBus(c+3,"ysyx_22040175_top u_pc_reg_0 curr_pc", false,-1, 31,0);
        tracep->declBit(c+4,"ysyx_22040175_top u_mux_pc_0 ena", false,-1);
        tracep->declBit(c+6,"ysyx_22040175_top u_mux_pc_0 branch", false,-1);
        tracep->declBit(c+7,"ysyx_22040175_top u_mux_pc_0 zero", false,-1);
        tracep->declBit(c+8,"ysyx_22040175_top u_mux_pc_0 jump", false,-1);
        tracep->declBit(c+22,"ysyx_22040175_top u_mux_pc_0 jalr", false,-1);
        tracep->declBus(c+17,"ysyx_22040175_top u_mux_pc_0 imm", false,-1, 31,0);
        tracep->declBus(c+3,"ysyx_22040175_top u_mux_pc_0 curr_pc", false,-1, 31,0);
        tracep->declBus(c+5,"ysyx_22040175_top u_mux_pc_0 next_pc", false,-1, 31,0);
        tracep->declBit(c+23,"ysyx_22040175_top u_mux_pc_0 ebreak_flag", false,-1);
        tracep->declBus(c+24,"ysyx_22040175_top u_ctrl_0 inst", false,-1, 31,0);
        tracep->declBit(c+6,"ysyx_22040175_top u_ctrl_0 branch", false,-1);
        tracep->declBit(c+8,"ysyx_22040175_top u_ctrl_0 jump", false,-1);
        tracep->declBit(c+9,"ysyx_22040175_top u_ctrl_0 reg_wen", false,-1);
        tracep->declBus(c+10,"ysyx_22040175_top u_ctrl_0 reg_waddr", false,-1, 4,0);
        tracep->declBus(c+12,"ysyx_22040175_top u_ctrl_0 reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+13,"ysyx_22040175_top u_ctrl_0 reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_ctrl_0 imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+18,"ysyx_22040175_top u_ctrl_0 alu_op", false,-1, 3,0);
        tracep->declBus(c+19,"ysyx_22040175_top u_ctrl_0 alu_src_sel", false,-1, 1,0);
        tracep->declBus(c+97,"ysyx_22040175_top u_ctrl_0 unknown_code", false,-1, 31,0);
        tracep->declBit(c+22,"ysyx_22040175_top u_ctrl_0 jalr", false,-1);
        tracep->declBit(c+23,"ysyx_22040175_top u_ctrl_0 ebreak_flag", false,-1);
        tracep->declBus(c+25,"ysyx_22040175_top u_ctrl_0 opcode", false,-1, 6,0);
        tracep->declBus(c+26,"ysyx_22040175_top u_ctrl_0 funct3", false,-1, 2,0);
        tracep->declBus(c+27,"ysyx_22040175_top u_ctrl_0 funct7", false,-1, 6,0);
        tracep->declBus(c+28,"ysyx_22040175_top u_ctrl_0 rd", false,-1, 4,0);
        tracep->declBus(c+29,"ysyx_22040175_top u_ctrl_0 rs1", false,-1, 4,0);
        tracep->declBus(c+30,"ysyx_22040175_top u_ctrl_0 rs2", false,-1, 4,0);
        tracep->declBit(c+95,"ysyx_22040175_top u_reg_file_0 clk", false,-1);
        tracep->declBit(c+98,"ysyx_22040175_top u_reg_file_0 rst_n", false,-1);
        tracep->declBit(c+9,"ysyx_22040175_top u_reg_file_0 reg_wen", false,-1);
        tracep->declBus(c+10,"ysyx_22040175_top u_reg_file_0 reg_waddr", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_22040175_top u_reg_file_0 reg_wdata", false,-1, 31,0);
        tracep->declBus(c+12,"ysyx_22040175_top u_reg_file_0 reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+13,"ysyx_22040175_top u_reg_file_0 reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+14,"ysyx_22040175_top u_reg_file_0 reg1_rdata", false,-1, 31,0);
        tracep->declBus(c+15,"ysyx_22040175_top u_reg_file_0 reg2_rdata", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+31+i*2,"ysyx_22040175_top u_reg_file_0 reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+24,"ysyx_22040175_top u_imm_gen_0 inst", false,-1, 31,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_imm_gen_0 imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+17,"ysyx_22040175_top u_imm_gen_0 imm", false,-1, 31,0);
        tracep->declBus(c+19,"ysyx_22040175_top u_mux_alu_0 alu_src_sel", false,-1, 1,0);
        tracep->declBus(c+14,"ysyx_22040175_top u_mux_alu_0 reg1_rdata", false,-1, 31,0);
        tracep->declBus(c+15,"ysyx_22040175_top u_mux_alu_0 reg2_rdata", false,-1, 31,0);
        tracep->declBus(c+17,"ysyx_22040175_top u_mux_alu_0 imm", false,-1, 31,0);
        tracep->declBus(c+3,"ysyx_22040175_top u_mux_alu_0 curr_pc", false,-1, 31,0);
        tracep->declBus(c+20,"ysyx_22040175_top u_mux_alu_0 alu_src1", false,-1, 31,0);
        tracep->declBus(c+21,"ysyx_22040175_top u_mux_alu_0 alu_src2", false,-1, 31,0);
        tracep->declBus(c+18,"ysyx_22040175_top u_alu_0 alu_op", false,-1, 3,0);
        tracep->declBus(c+20,"ysyx_22040175_top u_alu_0 alu_src1", false,-1, 31,0);
        tracep->declBus(c+21,"ysyx_22040175_top u_alu_0 alu_src2", false,-1, 31,0);
        tracep->declBit(c+7,"ysyx_22040175_top u_alu_0 zero", false,-1);
        tracep->declBus(c+11,"ysyx_22040175_top u_alu_0 alu_res", false,-1, 31,0);
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
        tracep->fullQData(oldp+1,(vlSelf->ysyx_22040175_top__DOT__inst),64);
        tracep->fullIData(oldp+3,(vlSelf->ysyx_22040175_top__DOT__pc),32);
        tracep->fullBit(oldp+4,(vlSelf->ysyx_22040175_top__DOT__ena));
        tracep->fullIData(oldp+5,(((IData)(vlSelf->ysyx_22040175_top__DOT__ena)
                                    ? (((IData)(vlSelf->ysyx_22040175_top__DOT__branch) 
                                        & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__zero)))
                                        ? (vlSelf->ysyx_22040175_top__DOT__pc 
                                           + vlSelf->ysyx_22040175_top__DOT__imm)
                                        : (((IData)(vlSelf->ysyx_22040175_top__DOT__jump) 
                                            & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__jalr)))
                                            ? (vlSelf->ysyx_22040175_top__DOT__pc 
                                               + vlSelf->ysyx_22040175_top__DOT__imm)
                                            : (((IData)(vlSelf->ysyx_22040175_top__DOT__jump) 
                                                & (IData)(vlSelf->ysyx_22040175_top__DOT__jalr))
                                                ? ((IData)(0x18U) 
                                                   + vlSelf->ysyx_22040175_top__DOT__pc)
                                                : ((IData)(vlSelf->ysyx_22040175_top__DOT__ebreak_flag)
                                                    ? 0x80000000U
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->ysyx_22040175_top__DOT__pc)))))
                                    : vlSelf->ysyx_22040175_top__DOT__pc)),32);
        tracep->fullBit(oldp+6,(vlSelf->ysyx_22040175_top__DOT__branch));
        tracep->fullBit(oldp+7,(vlSelf->ysyx_22040175_top__DOT__zero));
        tracep->fullBit(oldp+8,(vlSelf->ysyx_22040175_top__DOT__jump));
        tracep->fullBit(oldp+9,(vlSelf->ysyx_22040175_top__DOT__reg_wen));
        tracep->fullCData(oldp+10,(vlSelf->ysyx_22040175_top__DOT__reg_waddr),5);
        tracep->fullIData(oldp+11,(vlSelf->ysyx_22040175_top__DOT__alu_res),32);
        tracep->fullCData(oldp+12,(vlSelf->ysyx_22040175_top__DOT__reg1_raddr),5);
        tracep->fullCData(oldp+13,(vlSelf->ysyx_22040175_top__DOT__reg2_raddr),5);
        tracep->fullIData(oldp+14,(((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__reg1_raddr))
                                     ? 0U : (IData)(
                                                    vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f
                                                    [vlSelf->ysyx_22040175_top__DOT__reg1_raddr]))),32);
        tracep->fullIData(oldp+15,(vlSelf->ysyx_22040175_top__DOT__reg2_rdata),32);
        tracep->fullCData(oldp+16,(vlSelf->ysyx_22040175_top__DOT__imm_gen_op),3);
        tracep->fullIData(oldp+17,(vlSelf->ysyx_22040175_top__DOT__imm),32);
        tracep->fullCData(oldp+18,(vlSelf->ysyx_22040175_top__DOT__alu_op),4);
        tracep->fullCData(oldp+19,(vlSelf->ysyx_22040175_top__DOT__alu_src_sel),2);
        tracep->fullIData(oldp+20,(vlSelf->ysyx_22040175_top__DOT__alu_src1),32);
        tracep->fullIData(oldp+21,(vlSelf->ysyx_22040175_top__DOT__alu_src2),32);
        tracep->fullBit(oldp+22,(vlSelf->ysyx_22040175_top__DOT__jalr));
        tracep->fullBit(oldp+23,(vlSelf->ysyx_22040175_top__DOT__ebreak_flag));
        tracep->fullIData(oldp+24,((IData)(vlSelf->ysyx_22040175_top__DOT__inst)),32);
        tracep->fullCData(oldp+25,((0x7fU & (IData)(vlSelf->ysyx_22040175_top__DOT__inst))),7);
        tracep->fullCData(oldp+26,((7U & (IData)((vlSelf->ysyx_22040175_top__DOT__inst 
                                                  >> 0xcU)))),3);
        tracep->fullCData(oldp+27,((0x7fU & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__inst 
                                                     >> 0x19U)))),7);
        tracep->fullCData(oldp+28,((0x1fU & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__inst 
                                                     >> 7U)))),5);
        tracep->fullCData(oldp+29,((0x1fU & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__inst 
                                                     >> 0xfU)))),5);
        tracep->fullCData(oldp+30,((0x1fU & (IData)(
                                                    (vlSelf->ysyx_22040175_top__DOT__inst 
                                                     >> 0x14U)))),5);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[0]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[1]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[2]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[3]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[4]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[5]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[6]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[7]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[8]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[9]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[10]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[11]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[12]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[13]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[14]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[15]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[16]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[17]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[18]),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[19]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[20]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[21]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[22]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[23]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[24]),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[25]),64);
        tracep->fullQData(oldp+83,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[26]),64);
        tracep->fullQData(oldp+85,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[27]),64);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[28]),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[29]),64);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[30]),64);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[31]),64);
        tracep->fullBit(oldp+95,(vlSelf->clk));
        tracep->fullBit(oldp+96,(vlSelf->rst));
        tracep->fullIData(oldp+97,(vlSelf->unknown_code),32);
        tracep->fullBit(oldp+98,(vlSelf->ysyx_22040175_top__DOT__rst_n));
    }
}
