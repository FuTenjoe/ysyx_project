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
            tracep->chgBit(oldp+0,(vlSelf->ysyx_22040175_top__DOT__ena));
            tracep->chgBit(oldp+1,(vlSelf->ysyx_22040175_top__DOT__branch));
            tracep->chgBit(oldp+2,(vlSelf->ysyx_22040175_top__DOT__zero));
            tracep->chgBit(oldp+3,(vlSelf->ysyx_22040175_top__DOT__jump));
            tracep->chgBit(oldp+4,(vlSelf->ysyx_22040175_top__DOT__reg_wen));
            tracep->chgCData(oldp+5,(vlSelf->ysyx_22040175_top__DOT__reg_waddr),5);
            tracep->chgIData(oldp+6,(vlSelf->ysyx_22040175_top__DOT__alu_res),32);
            tracep->chgCData(oldp+7,(vlSelf->ysyx_22040175_top__DOT__reg1_raddr),5);
            tracep->chgCData(oldp+8,(vlSelf->ysyx_22040175_top__DOT__reg2_raddr),5);
            tracep->chgIData(oldp+9,(((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__reg1_raddr))
                                       ? 0U : (IData)(
                                                      vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f
                                                      [vlSelf->ysyx_22040175_top__DOT__reg1_raddr]))),32);
            tracep->chgIData(oldp+10,(vlSelf->ysyx_22040175_top__DOT__reg2_rdata),32);
            tracep->chgCData(oldp+11,(vlSelf->ysyx_22040175_top__DOT__imm_gen_op),3);
            tracep->chgIData(oldp+12,(vlSelf->ysyx_22040175_top__DOT__imm),32);
            tracep->chgCData(oldp+13,(vlSelf->ysyx_22040175_top__DOT__alu_op),4);
            tracep->chgCData(oldp+14,(vlSelf->ysyx_22040175_top__DOT__alu_src_sel),2);
            tracep->chgIData(oldp+15,(vlSelf->ysyx_22040175_top__DOT__alu_src1),32);
            tracep->chgIData(oldp+16,(vlSelf->ysyx_22040175_top__DOT__alu_src2),32);
            tracep->chgBit(oldp+17,(vlSelf->ysyx_22040175_top__DOT__jalr));
            tracep->chgBit(oldp+18,(vlSelf->ysyx_22040175_top__DOT__ebreak_flag));
            tracep->chgCData(oldp+19,(vlSelf->ysyx_22040175_top__DOT__wmask),8);
            tracep->chgQData(oldp+20,(vlSelf->ysyx_22040175_top__DOT__rdata),64);
        }
        tracep->chgBit(oldp+22,(vlSelf->clk));
        tracep->chgBit(oldp+23,(vlSelf->rst));
        tracep->chgIData(oldp+24,(vlSelf->inst),32);
        tracep->chgIData(oldp+25,(vlSelf->pc),32);
        tracep->chgIData(oldp+26,(vlSelf->unknown_code),32);
        tracep->chgBit(oldp+27,(vlSelf->ysyx_22040175_top__DOT__rst_n));
        tracep->chgIData(oldp+28,(((IData)(vlSelf->ysyx_22040175_top__DOT__ena)
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
                                                ? ((IData)(0x18U) 
                                                   + vlSelf->pc)
                                                : ((IData)(vlSelf->ysyx_22040175_top__DOT__ebreak_flag)
                                                    ? 0x80000000U
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->pc)))))
                                    : vlSelf->pc)),32);
        tracep->chgCData(oldp+29,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+30,((7U & (vlSelf->inst 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+31,((vlSelf->inst >> 0x19U)),7);
        tracep->chgCData(oldp+32,((0x1fU & (vlSelf->inst 
                                            >> 7U))),5);
        tracep->chgCData(oldp+33,((0x1fU & (vlSelf->inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+34,((0x1fU & (vlSelf->inst 
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
    }
}
