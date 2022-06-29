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
            tracep->chgQData(oldp+6,(vlSelf->ysyx_22040175_top__DOT__alu_res),64);
            tracep->chgCData(oldp+8,(vlSelf->ysyx_22040175_top__DOT__reg1_raddr),5);
            tracep->chgCData(oldp+9,(vlSelf->ysyx_22040175_top__DOT__reg2_raddr),5);
            tracep->chgQData(oldp+10,(((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__reg1_raddr))
                                        ? 0ULL : vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
                                       [vlSelf->ysyx_22040175_top__DOT__reg1_raddr])),64);
            tracep->chgQData(oldp+12,(vlSelf->ysyx_22040175_top__DOT__reg2_rdata),64);
            tracep->chgCData(oldp+14,(vlSelf->ysyx_22040175_top__DOT__imm_gen_op),3);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22040175_top__DOT__imm),64);
            tracep->chgCData(oldp+17,(vlSelf->ysyx_22040175_top__DOT__alu_op),5);
            tracep->chgCData(oldp+18,(vlSelf->ysyx_22040175_top__DOT__alu_src_sel),2);
            tracep->chgQData(oldp+19,(vlSelf->ysyx_22040175_top__DOT__alu_src1),64);
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22040175_top__DOT__alu_src2),64);
            tracep->chgBit(oldp+23,(vlSelf->ysyx_22040175_top__DOT__jalr));
            tracep->chgBit(oldp+24,(vlSelf->ysyx_22040175_top__DOT__ebreak_flag));
            tracep->chgCData(oldp+25,(vlSelf->ysyx_22040175_top__DOT__wmask),8);
            tracep->chgBit(oldp+26,(vlSelf->ysyx_22040175_top__DOT__s_flag));
            tracep->chgIData(oldp+27,(vlSelf->ysyx_22040175_top__DOT__s_imm),32);
            tracep->chgCData(oldp+28,(vlSelf->ysyx_22040175_top__DOT__expand_signed),4);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22040175_top__DOT__reg_f[0]),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22040175_top__DOT__reg_f[1]),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22040175_top__DOT__reg_f[2]),64);
            tracep->chgQData(oldp+35,(vlSelf->ysyx_22040175_top__DOT__reg_f[3]),64);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22040175_top__DOT__reg_f[4]),64);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22040175_top__DOT__reg_f[5]),64);
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22040175_top__DOT__reg_f[6]),64);
            tracep->chgQData(oldp+43,(vlSelf->ysyx_22040175_top__DOT__reg_f[7]),64);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22040175_top__DOT__reg_f[8]),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22040175_top__DOT__reg_f[9]),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22040175_top__DOT__reg_f[10]),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22040175_top__DOT__reg_f[11]),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22040175_top__DOT__reg_f[12]),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22040175_top__DOT__reg_f[13]),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22040175_top__DOT__reg_f[14]),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22040175_top__DOT__reg_f[15]),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22040175_top__DOT__reg_f[16]),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22040175_top__DOT__reg_f[17]),64);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22040175_top__DOT__reg_f[18]),64);
            tracep->chgQData(oldp+67,(vlSelf->ysyx_22040175_top__DOT__reg_f[19]),64);
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22040175_top__DOT__reg_f[20]),64);
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22040175_top__DOT__reg_f[21]),64);
            tracep->chgQData(oldp+73,(vlSelf->ysyx_22040175_top__DOT__reg_f[22]),64);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22040175_top__DOT__reg_f[23]),64);
            tracep->chgQData(oldp+77,(vlSelf->ysyx_22040175_top__DOT__reg_f[24]),64);
            tracep->chgQData(oldp+79,(vlSelf->ysyx_22040175_top__DOT__reg_f[25]),64);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22040175_top__DOT__reg_f[26]),64);
            tracep->chgQData(oldp+83,(vlSelf->ysyx_22040175_top__DOT__reg_f[27]),64);
            tracep->chgQData(oldp+85,(vlSelf->ysyx_22040175_top__DOT__reg_f[28]),64);
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22040175_top__DOT__reg_f[29]),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22040175_top__DOT__reg_f[30]),64);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22040175_top__DOT__reg_f[31]),64);
            tracep->chgCData(oldp+93,(vlSelf->ysyx_22040175_top__DOT__rd_flag),3);
            tracep->chgQData(oldp+94,(vlSelf->ysyx_22040175_top__DOT__rdata),64);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_pc_reg_0__curr_pc),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0]),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[1]),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[2]),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[3]),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[4]),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[5]),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[6]),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[7]),64);
            tracep->chgQData(oldp+114,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[8]),64);
            tracep->chgQData(oldp+116,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[9]),64);
            tracep->chgQData(oldp+118,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[10]),64);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[11]),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[12]),64);
            tracep->chgQData(oldp+124,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[13]),64);
            tracep->chgQData(oldp+126,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[14]),64);
            tracep->chgQData(oldp+128,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[15]),64);
            tracep->chgQData(oldp+130,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[16]),64);
            tracep->chgQData(oldp+132,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[17]),64);
            tracep->chgQData(oldp+134,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[18]),64);
            tracep->chgQData(oldp+136,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[19]),64);
            tracep->chgQData(oldp+138,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[20]),64);
            tracep->chgQData(oldp+140,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[21]),64);
            tracep->chgQData(oldp+142,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[22]),64);
            tracep->chgQData(oldp+144,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[23]),64);
            tracep->chgQData(oldp+146,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[24]),64);
            tracep->chgQData(oldp+148,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[25]),64);
            tracep->chgQData(oldp+150,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[26]),64);
            tracep->chgQData(oldp+152,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[27]),64);
            tracep->chgQData(oldp+154,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[28]),64);
            tracep->chgQData(oldp+156,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[29]),64);
            tracep->chgQData(oldp+158,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[30]),64);
            tracep->chgQData(oldp+160,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[31]),64);
            tracep->chgQData(oldp+162,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[0]),64);
            tracep->chgQData(oldp+164,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[1]),64);
            tracep->chgQData(oldp+166,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[2]),64);
            tracep->chgQData(oldp+168,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[3]),64);
            tracep->chgQData(oldp+170,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[4]),64);
            tracep->chgQData(oldp+172,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[5]),64);
            tracep->chgQData(oldp+174,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[6]),64);
            tracep->chgQData(oldp+176,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[7]),64);
            tracep->chgQData(oldp+178,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[8]),64);
            tracep->chgQData(oldp+180,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[9]),64);
            tracep->chgQData(oldp+182,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[10]),64);
            tracep->chgQData(oldp+184,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[11]),64);
            tracep->chgQData(oldp+186,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[12]),64);
            tracep->chgQData(oldp+188,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[13]),64);
            tracep->chgQData(oldp+190,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[14]),64);
            tracep->chgQData(oldp+192,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[15]),64);
            tracep->chgQData(oldp+194,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[16]),64);
            tracep->chgQData(oldp+196,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[17]),64);
            tracep->chgQData(oldp+198,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[18]),64);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[19]),64);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[20]),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[21]),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[22]),64);
            tracep->chgQData(oldp+208,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[23]),64);
            tracep->chgQData(oldp+210,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[24]),64);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[25]),64);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[26]),64);
            tracep->chgQData(oldp+216,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[27]),64);
            tracep->chgQData(oldp+218,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[28]),64);
            tracep->chgQData(oldp+220,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[29]),64);
            tracep->chgQData(oldp+222,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[30]),64);
            tracep->chgQData(oldp+224,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[31]),64);
            tracep->chgQData(oldp+226,(vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw),64);
            tracep->chgQData(oldp+228,(vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw2),64);
        }
        tracep->chgBit(oldp+230,(vlSelf->clk));
        tracep->chgBit(oldp+231,(vlSelf->rst));
        tracep->chgIData(oldp+232,(vlSelf->inst),32);
        tracep->chgIData(oldp+233,(vlSelf->pc),32);
        tracep->chgQData(oldp+234,(vlSelf->unknown_code),64);
        tracep->chgBit(oldp+236,(vlSelf->time_set));
        tracep->chgBit(oldp+237,(vlSelf->ysyx_22040175_top__DOT__rst_n));
        tracep->chgQData(oldp+238,(((IData)(vlSelf->ysyx_22040175_top__DOT__ena)
                                     ? (((IData)(vlSelf->ysyx_22040175_top__DOT__branch) 
                                         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__zero)))
                                         ? ((QData)((IData)(vlSelf->pc)) 
                                            + vlSelf->ysyx_22040175_top__DOT__imm)
                                         : (((IData)(vlSelf->ysyx_22040175_top__DOT__jump) 
                                             & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__jalr)))
                                             ? ((QData)((IData)(vlSelf->pc)) 
                                                + vlSelf->ysyx_22040175_top__DOT__imm)
                                             : (((IData)(vlSelf->ysyx_22040175_top__DOT__jump) 
                                                 & (IData)(vlSelf->ysyx_22040175_top__DOT__jalr))
                                                 ? 
                                                (vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f
                                                 [(0x1fU 
                                                   & vlSelf->ysyx_22040175_top__DOT__s_imm)] 
                                                 + vlSelf->ysyx_22040175_top__DOT__imm)
                                                 : 
                                                ((IData)(vlSelf->ysyx_22040175_top__DOT__ebreak_flag)
                                                  ? 0x80000000ULL
                                                  : 
                                                 (4ULL 
                                                  + (QData)((IData)(vlSelf->pc)))))))
                                     : (QData)((IData)(vlSelf->pc)))),64);
        tracep->chgQData(oldp+240,((QData)((IData)(vlSelf->pc))),64);
        tracep->chgQData(oldp+242,((QData)((IData)(vlSelf->inst))),64);
        tracep->chgCData(oldp+244,((0x7fU & (IData)((QData)((IData)(vlSelf->inst))))),7);
        tracep->chgCData(oldp+245,((7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU)))),3);
        tracep->chgCData(oldp+246,((0x7fU & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0x19U)))),7);
        tracep->chgCData(oldp+247,((0x1fU & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 7U)))),5);
        tracep->chgCData(oldp+248,((0x1fU & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xfU)))),5);
        tracep->chgCData(oldp+249,((0x1fU & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0x14U)))),5);
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
