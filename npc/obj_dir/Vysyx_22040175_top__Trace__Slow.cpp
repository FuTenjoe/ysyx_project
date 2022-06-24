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
        tracep->declBit(c+83,"clk", false,-1);
        tracep->declBit(c+84,"rst", false,-1);
        tracep->declBus(c+85,"inst", false,-1, 31,0);
        tracep->declBus(c+86,"pc", false,-1, 31,0);
        tracep->declBus(c+87,"unknown_code", false,-1, 31,0);
        tracep->declBit(c+83,"ysyx_22040175_top clk", false,-1);
        tracep->declBit(c+84,"ysyx_22040175_top rst", false,-1);
        tracep->declBus(c+85,"ysyx_22040175_top inst", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22040175_top pc", false,-1, 31,0);
        tracep->declBus(c+87,"ysyx_22040175_top unknown_code", false,-1, 31,0);
        tracep->declBit(c+1,"ysyx_22040175_top rst_n", false,-1);
        tracep->declBit(c+18,"ysyx_22040175_top ena", false,-1);
        tracep->declBus(c+88,"ysyx_22040175_top next_pc", false,-1, 31,0);
        tracep->declBit(c+2,"ysyx_22040175_top branch", false,-1);
        tracep->declBit(c+3,"ysyx_22040175_top zero", false,-1);
        tracep->declBit(c+4,"ysyx_22040175_top jump", false,-1);
        tracep->declBit(c+5,"ysyx_22040175_top reg_wen", false,-1);
        tracep->declBus(c+6,"ysyx_22040175_top reg_waddr", false,-1, 4,0);
        tracep->declBus(c+7,"ysyx_22040175_top reg_wdata", false,-1, 31,0);
        tracep->declBus(c+8,"ysyx_22040175_top reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+9,"ysyx_22040175_top reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+89,"ysyx_22040175_top reg1_rdata", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_22040175_top reg2_rdata", false,-1, 31,0);
        tracep->declBus(c+11,"ysyx_22040175_top imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+12,"ysyx_22040175_top imm", false,-1, 31,0);
        tracep->declBus(c+13,"ysyx_22040175_top alu_op", false,-1, 3,0);
        tracep->declBus(c+14,"ysyx_22040175_top alu_src_sel", false,-1, 1,0);
        tracep->declBus(c+15,"ysyx_22040175_top alu_src1", false,-1, 31,0);
        tracep->declBus(c+16,"ysyx_22040175_top alu_src2", false,-1, 31,0);
        tracep->declBus(c+7,"ysyx_22040175_top alu_res", false,-1, 31,0);
        tracep->declBit(c+17,"ysyx_22040175_top jalr", false,-1);
        tracep->declBit(c+83,"ysyx_22040175_top u_pc_reg_0 clk", false,-1);
        tracep->declBit(c+1,"ysyx_22040175_top u_pc_reg_0 rst_n", false,-1);
        tracep->declBit(c+18,"ysyx_22040175_top u_pc_reg_0 ena", false,-1);
        tracep->declBus(c+88,"ysyx_22040175_top u_pc_reg_0 next_pc", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22040175_top u_pc_reg_0 curr_pc", false,-1, 31,0);
        tracep->declBit(c+18,"ysyx_22040175_top u_mux_pc_0 ena", false,-1);
        tracep->declBit(c+2,"ysyx_22040175_top u_mux_pc_0 branch", false,-1);
        tracep->declBit(c+3,"ysyx_22040175_top u_mux_pc_0 zero", false,-1);
        tracep->declBit(c+4,"ysyx_22040175_top u_mux_pc_0 jump", false,-1);
        tracep->declBit(c+17,"ysyx_22040175_top u_mux_pc_0 jalr", false,-1);
        tracep->declBus(c+12,"ysyx_22040175_top u_mux_pc_0 imm", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22040175_top u_mux_pc_0 curr_pc", false,-1, 31,0);
        tracep->declBus(c+88,"ysyx_22040175_top u_mux_pc_0 next_pc", false,-1, 31,0);
        tracep->declBus(c+85,"ysyx_22040175_top u_ctrl_0 inst", false,-1, 31,0);
        tracep->declBit(c+2,"ysyx_22040175_top u_ctrl_0 branch", false,-1);
        tracep->declBit(c+4,"ysyx_22040175_top u_ctrl_0 jump", false,-1);
        tracep->declBit(c+5,"ysyx_22040175_top u_ctrl_0 reg_wen", false,-1);
        tracep->declBus(c+6,"ysyx_22040175_top u_ctrl_0 reg_waddr", false,-1, 4,0);
        tracep->declBus(c+8,"ysyx_22040175_top u_ctrl_0 reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+9,"ysyx_22040175_top u_ctrl_0 reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_22040175_top u_ctrl_0 imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+13,"ysyx_22040175_top u_ctrl_0 alu_op", false,-1, 3,0);
        tracep->declBus(c+14,"ysyx_22040175_top u_ctrl_0 alu_src_sel", false,-1, 1,0);
        tracep->declBus(c+87,"ysyx_22040175_top u_ctrl_0 unknown_code", false,-1, 31,0);
        tracep->declBit(c+17,"ysyx_22040175_top u_ctrl_0 jalr", false,-1);
        tracep->declBus(c+90,"ysyx_22040175_top u_ctrl_0 opcode", false,-1, 6,0);
        tracep->declBus(c+91,"ysyx_22040175_top u_ctrl_0 funct3", false,-1, 2,0);
        tracep->declBus(c+92,"ysyx_22040175_top u_ctrl_0 funct7", false,-1, 6,0);
        tracep->declBus(c+93,"ysyx_22040175_top u_ctrl_0 rd", false,-1, 4,0);
        tracep->declBus(c+94,"ysyx_22040175_top u_ctrl_0 rs1", false,-1, 4,0);
        tracep->declBus(c+95,"ysyx_22040175_top u_ctrl_0 rs2", false,-1, 4,0);
        tracep->declBit(c+83,"ysyx_22040175_top u_reg_file_0 clk", false,-1);
        tracep->declBit(c+1,"ysyx_22040175_top u_reg_file_0 rst_n", false,-1);
        tracep->declBit(c+5,"ysyx_22040175_top u_reg_file_0 reg_wen", false,-1);
        tracep->declBus(c+6,"ysyx_22040175_top u_reg_file_0 reg_waddr", false,-1, 4,0);
        tracep->declBus(c+7,"ysyx_22040175_top u_reg_file_0 reg_wdata", false,-1, 31,0);
        tracep->declBus(c+8,"ysyx_22040175_top u_reg_file_0 reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+9,"ysyx_22040175_top u_reg_file_0 reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+89,"ysyx_22040175_top u_reg_file_0 reg1_rdata", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_22040175_top u_reg_file_0 reg2_rdata", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+19+i*2,"ysyx_22040175_top u_reg_file_0 reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+85,"ysyx_22040175_top u_imm_gen_0 inst", false,-1, 31,0);
        tracep->declBus(c+11,"ysyx_22040175_top u_imm_gen_0 imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+12,"ysyx_22040175_top u_imm_gen_0 imm", false,-1, 31,0);
        tracep->declBus(c+14,"ysyx_22040175_top u_mux_alu_0 alu_src_sel", false,-1, 1,0);
        tracep->declBus(c+89,"ysyx_22040175_top u_mux_alu_0 reg1_rdata", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_22040175_top u_mux_alu_0 reg2_rdata", false,-1, 31,0);
        tracep->declBus(c+12,"ysyx_22040175_top u_mux_alu_0 imm", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22040175_top u_mux_alu_0 curr_pc", false,-1, 31,0);
        tracep->declBus(c+15,"ysyx_22040175_top u_mux_alu_0 alu_src1", false,-1, 31,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_mux_alu_0 alu_src2", false,-1, 31,0);
        tracep->declBus(c+13,"ysyx_22040175_top u_alu_0 alu_op", false,-1, 3,0);
        tracep->declBus(c+15,"ysyx_22040175_top u_alu_0 alu_src1", false,-1, 31,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_alu_0 alu_src2", false,-1, 31,0);
        tracep->declBit(c+3,"ysyx_22040175_top u_alu_0 zero", false,-1);
        tracep->declBus(c+7,"ysyx_22040175_top u_alu_0 alu_res", false,-1, 31,0);
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
        tracep->fullBit(oldp+1,(vlSelf->ysyx_22040175_top__DOT__rst_n));
        tracep->fullBit(oldp+2,(vlSelf->ysyx_22040175_top__DOT__branch));
        tracep->fullBit(oldp+3,(vlSelf->ysyx_22040175_top__DOT__zero));
        tracep->fullBit(oldp+4,(vlSelf->ysyx_22040175_top__DOT__jump));
        tracep->fullBit(oldp+5,(vlSelf->ysyx_22040175_top__DOT__reg_wen));
        tracep->fullCData(oldp+6,(vlSelf->ysyx_22040175_top__DOT__reg_waddr),5);
        tracep->fullIData(oldp+7,(vlSelf->ysyx_22040175_top__DOT__alu_res),32);
        tracep->fullCData(oldp+8,(vlSelf->ysyx_22040175_top__DOT__reg1_raddr),5);
        tracep->fullCData(oldp+9,(vlSelf->ysyx_22040175_top__DOT__reg2_raddr),5);
        tracep->fullIData(oldp+10,(vlSelf->ysyx_22040175_top__DOT__reg2_rdata),32);
        tracep->fullCData(oldp+11,(vlSelf->ysyx_22040175_top__DOT__imm_gen_op),3);
        tracep->fullIData(oldp+12,(vlSelf->ysyx_22040175_top__DOT__imm),32);
        tracep->fullCData(oldp+13,(vlSelf->ysyx_22040175_top__DOT__alu_op),4);
        tracep->fullCData(oldp+14,(vlSelf->ysyx_22040175_top__DOT__alu_src_sel),2);
        tracep->fullIData(oldp+15,(vlSelf->ysyx_22040175_top__DOT__alu_src1),32);
        tracep->fullIData(oldp+16,(vlSelf->ysyx_22040175_top__DOT__alu_src2),32);
        tracep->fullBit(oldp+17,(vlSelf->ysyx_22040175_top__DOT__jalr));
        tracep->fullBit(oldp+18,(vlSelf->ysyx_22040175_top__DOT__ena));
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[0]),64);
        tracep->fullQData(oldp+21,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[1]),64);
        tracep->fullQData(oldp+23,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[2]),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[3]),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[4]),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[5]),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[6]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[7]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[8]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[9]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[10]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[11]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[12]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[13]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[14]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[15]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[16]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[17]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[18]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[19]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[20]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[21]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[22]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[23]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[24]),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[25]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[26]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[27]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[28]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[29]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[30]),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[31]),64);
        tracep->fullBit(oldp+83,(vlSelf->clk));
        tracep->fullBit(oldp+84,(vlSelf->rst));
        tracep->fullIData(oldp+85,(vlSelf->inst),32);
        tracep->fullIData(oldp+86,(vlSelf->pc),32);
        tracep->fullIData(oldp+87,(vlSelf->unknown_code),32);
        tracep->fullIData(oldp+88,(((IData)(vlSelf->ysyx_22040175_top__DOT__ena)
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
                                                (0U 
                                                 != 
                                                 (vlSelf->pc 
                                                  + vlSelf->ysyx_22040175_top__DOT__imm))
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->pc))))
                                     : vlSelf->pc)),32);
        tracep->fullIData(oldp+89,(((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__reg1_raddr))
                                     ? 0U : (IData)(
                                                    vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f
                                                    [vlSelf->ysyx_22040175_top__DOT__reg1_raddr]))),32);
        tracep->fullCData(oldp+90,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+91,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+92,((vlSelf->inst >> 0x19U)),7);
        tracep->fullCData(oldp+93,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+94,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+95,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
    }
}
