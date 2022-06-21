// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040175_top__Syms.h"


void Vysyx_22040175_top___024root__traceChgSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22040175_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040175_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040175_top___024root*>(voidSelf);
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22040175_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22040175_top___024root__traceChgSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->ysyx_22040175_top__DOT__rst_n));
            tracep->chgBit(oldp+1,(vlSelf->ysyx_22040175_top__DOT__branch));
            tracep->chgBit(oldp+2,(vlSelf->ysyx_22040175_top__DOT__zero));
            tracep->chgBit(oldp+3,(vlSelf->ysyx_22040175_top__DOT__jump));
            tracep->chgBit(oldp+4,(vlSelf->ysyx_22040175_top__DOT__reg_wen));
            tracep->chgCData(oldp+5,(vlSelf->ysyx_22040175_top__DOT__reg_waddr),5);
            tracep->chgIData(oldp+6,(vlSelf->ysyx_22040175_top__DOT__alu_res),32);
            tracep->chgCData(oldp+7,(vlSelf->ysyx_22040175_top__DOT__reg1_raddr),5);
            tracep->chgCData(oldp+8,(vlSelf->ysyx_22040175_top__DOT__reg2_raddr),5);
            tracep->chgIData(oldp+9,(vlSelf->ysyx_22040175_top__DOT__reg2_rdata),32);
            tracep->chgCData(oldp+10,(vlSelf->ysyx_22040175_top__DOT__imm_gen_op),3);
            tracep->chgIData(oldp+11,(vlSelf->ysyx_22040175_top__DOT__imm),32);
            tracep->chgCData(oldp+12,(vlSelf->ysyx_22040175_top__DOT__alu_op),4);
            tracep->chgCData(oldp+13,(vlSelf->ysyx_22040175_top__DOT__alu_src_sel),2);
            tracep->chgIData(oldp+14,(vlSelf->ysyx_22040175_top__DOT__alu_src1),32);
            tracep->chgIData(oldp+15,(vlSelf->ysyx_22040175_top__DOT__alu_src2),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+16,(vlSelf->ysyx_22040175_top__DOT__ena));
            tracep->chgIData(oldp+17,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[0]),32);
            tracep->chgIData(oldp+18,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[1]),32);
            tracep->chgIData(oldp+19,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[2]),32);
            tracep->chgIData(oldp+20,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[3]),32);
            tracep->chgIData(oldp+21,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[4]),32);
            tracep->chgIData(oldp+22,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[5]),32);
            tracep->chgIData(oldp+23,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[6]),32);
            tracep->chgIData(oldp+24,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[7]),32);
            tracep->chgIData(oldp+25,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[8]),32);
            tracep->chgIData(oldp+26,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[9]),32);
            tracep->chgIData(oldp+27,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[10]),32);
            tracep->chgIData(oldp+28,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[11]),32);
            tracep->chgIData(oldp+29,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[12]),32);
            tracep->chgIData(oldp+30,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[13]),32);
            tracep->chgIData(oldp+31,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[14]),32);
            tracep->chgIData(oldp+32,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[15]),32);
            tracep->chgIData(oldp+33,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[16]),32);
            tracep->chgIData(oldp+34,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[17]),32);
            tracep->chgIData(oldp+35,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[18]),32);
            tracep->chgIData(oldp+36,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[19]),32);
            tracep->chgIData(oldp+37,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[20]),32);
            tracep->chgIData(oldp+38,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[21]),32);
            tracep->chgIData(oldp+39,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[22]),32);
            tracep->chgIData(oldp+40,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[23]),32);
            tracep->chgIData(oldp+41,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[24]),32);
            tracep->chgIData(oldp+42,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[25]),32);
            tracep->chgIData(oldp+43,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[26]),32);
            tracep->chgIData(oldp+44,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[27]),32);
            tracep->chgIData(oldp+45,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[28]),32);
            tracep->chgIData(oldp+46,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[29]),32);
            tracep->chgIData(oldp+47,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[30]),32);
            tracep->chgIData(oldp+48,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[31]),32);
        }
        tracep->chgBit(oldp+49,(vlSelf->clk));
        tracep->chgBit(oldp+50,(vlSelf->rst));
        tracep->chgIData(oldp+51,(vlSelf->inst),32);
        tracep->chgIData(oldp+52,(vlSelf->pc),32);
        tracep->chgIData(oldp+53,(vlSelf->unknown_code),32);
        tracep->chgIData(oldp+54,(((IData)(vlSelf->ysyx_22040175_top__DOT__ena)
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
        tracep->chgIData(oldp+55,(((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__reg1_raddr))
                                    ? 0U : vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f
                                   [vlSelf->ysyx_22040175_top__DOT__reg1_raddr])),32);
        tracep->chgCData(oldp+56,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+57,((7U & (vlSelf->inst 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+58,((vlSelf->inst >> 0x19U)),7);
        tracep->chgCData(oldp+59,((0x1fU & (vlSelf->inst 
                                            >> 7U))),5);
        tracep->chgCData(oldp+60,((0x1fU & (vlSelf->inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+61,((0x1fU & (vlSelf->inst 
                                            >> 0x14U))),5);
    }
}

void Vysyx_22040175_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22040175_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040175_top___024root*>(voidSelf);
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
