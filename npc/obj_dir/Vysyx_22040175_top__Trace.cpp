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
            tracep->chgBit(oldp+16,(vlSelf->ysyx_22040175_top__DOT__jalr));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+17,(vlSelf->ysyx_22040175_top__DOT__ena));
            tracep->chgQData(oldp+18,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[0]),64);
            tracep->chgQData(oldp+20,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[1]),64);
            tracep->chgQData(oldp+22,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[2]),64);
            tracep->chgQData(oldp+24,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[3]),64);
            tracep->chgQData(oldp+26,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[4]),64);
            tracep->chgQData(oldp+28,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[5]),64);
            tracep->chgQData(oldp+30,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[6]),64);
            tracep->chgQData(oldp+32,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[7]),64);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[8]),64);
            tracep->chgQData(oldp+36,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[9]),64);
            tracep->chgQData(oldp+38,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[10]),64);
            tracep->chgQData(oldp+40,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[11]),64);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[12]),64);
            tracep->chgQData(oldp+44,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[13]),64);
            tracep->chgQData(oldp+46,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[14]),64);
            tracep->chgQData(oldp+48,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[15]),64);
            tracep->chgQData(oldp+50,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[16]),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[17]),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[18]),64);
            tracep->chgQData(oldp+56,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[19]),64);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[20]),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[21]),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[22]),64);
            tracep->chgQData(oldp+64,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[23]),64);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[24]),64);
            tracep->chgQData(oldp+68,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[25]),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[26]),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[27]),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[28]),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[29]),64);
            tracep->chgQData(oldp+78,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[30]),64);
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[31]),64);
        }
        tracep->chgBit(oldp+82,(vlSelf->clk));
        tracep->chgBit(oldp+83,(vlSelf->rst));
        tracep->chgIData(oldp+84,(vlSelf->inst),32);
        tracep->chgIData(oldp+85,(vlSelf->pc),32);
        tracep->chgIData(oldp+86,(vlSelf->unknown_code),32);
        tracep->chgIData(oldp+87,(((IData)(vlSelf->ysyx_22040175_top__DOT__ena)
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
                                                ? vlSelf->pc
                                                : ((IData)(4U) 
                                                   + vlSelf->pc))))
                                    : vlSelf->pc)),32);
        tracep->chgIData(oldp+88,(((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__reg1_raddr))
                                    ? 0U : (IData)(
                                                   vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f
                                                   [vlSelf->ysyx_22040175_top__DOT__reg1_raddr]))),32);
        tracep->chgCData(oldp+89,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+90,((7U & (vlSelf->inst 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+91,((vlSelf->inst >> 0x19U)),7);
        tracep->chgCData(oldp+92,((0x1fU & (vlSelf->inst 
                                            >> 7U))),5);
        tracep->chgCData(oldp+93,((0x1fU & (vlSelf->inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+94,((0x1fU & (vlSelf->inst 
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
