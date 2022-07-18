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
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata)),32);
            tracep->chgQData(oldp+1,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[0]),64);
            tracep->chgQData(oldp+3,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[1]),64);
            tracep->chgQData(oldp+5,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[2]),64);
            tracep->chgQData(oldp+7,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[3]),64);
            tracep->chgQData(oldp+9,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[4]),64);
            tracep->chgQData(oldp+11,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[5]),64);
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[6]),64);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[7]),64);
            tracep->chgQData(oldp+17,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[8]),64);
            tracep->chgQData(oldp+19,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[9]),64);
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[10]),64);
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[11]),64);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[12]),64);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[13]),64);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[14]),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[15]),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[16]),64);
            tracep->chgQData(oldp+35,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[17]),64);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[18]),64);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[19]),64);
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[20]),64);
            tracep->chgQData(oldp+43,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[21]),64);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[22]),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[23]),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[24]),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[25]),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[26]),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[27]),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[28]),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[29]),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[30]),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[31]),64);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata),64);
            tracep->chgQData(oldp+67,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0]),64);
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[1]),64);
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[2]),64);
            tracep->chgQData(oldp+73,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[3]),64);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[4]),64);
            tracep->chgQData(oldp+77,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[5]),64);
            tracep->chgQData(oldp+79,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[6]),64);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[7]),64);
            tracep->chgQData(oldp+83,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[8]),64);
            tracep->chgQData(oldp+85,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[9]),64);
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[10]),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[11]),64);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[12]),64);
            tracep->chgQData(oldp+93,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[13]),64);
            tracep->chgQData(oldp+95,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[14]),64);
            tracep->chgQData(oldp+97,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[15]),64);
            tracep->chgQData(oldp+99,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[16]),64);
            tracep->chgQData(oldp+101,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[17]),64);
            tracep->chgQData(oldp+103,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[18]),64);
            tracep->chgQData(oldp+105,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[19]),64);
            tracep->chgQData(oldp+107,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[20]),64);
            tracep->chgQData(oldp+109,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[21]),64);
            tracep->chgQData(oldp+111,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[22]),64);
            tracep->chgQData(oldp+113,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[23]),64);
            tracep->chgQData(oldp+115,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[24]),64);
            tracep->chgQData(oldp+117,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[25]),64);
            tracep->chgQData(oldp+119,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[26]),64);
            tracep->chgQData(oldp+121,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[27]),64);
            tracep->chgQData(oldp+123,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[28]),64);
            tracep->chgQData(oldp+125,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[29]),64);
            tracep->chgQData(oldp+127,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[30]),64);
            tracep->chgQData(oldp+129,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[31]),64);
            tracep->chgQData(oldp+131,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[0]),64);
            tracep->chgQData(oldp+133,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[1]),64);
            tracep->chgQData(oldp+135,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[2]),64);
            tracep->chgQData(oldp+137,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[3]),64);
            tracep->chgQData(oldp+139,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[4]),64);
            tracep->chgQData(oldp+141,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[5]),64);
            tracep->chgQData(oldp+143,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[6]),64);
            tracep->chgQData(oldp+145,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[7]),64);
            tracep->chgQData(oldp+147,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[8]),64);
            tracep->chgQData(oldp+149,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[9]),64);
            tracep->chgQData(oldp+151,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[10]),64);
            tracep->chgQData(oldp+153,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[11]),64);
            tracep->chgQData(oldp+155,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[12]),64);
            tracep->chgQData(oldp+157,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[13]),64);
            tracep->chgQData(oldp+159,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[14]),64);
            tracep->chgQData(oldp+161,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[15]),64);
            tracep->chgQData(oldp+163,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[16]),64);
            tracep->chgQData(oldp+165,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[17]),64);
            tracep->chgQData(oldp+167,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[18]),64);
            tracep->chgQData(oldp+169,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[19]),64);
            tracep->chgQData(oldp+171,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[20]),64);
            tracep->chgQData(oldp+173,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[21]),64);
            tracep->chgQData(oldp+175,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[22]),64);
            tracep->chgQData(oldp+177,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[23]),64);
            tracep->chgQData(oldp+179,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[24]),64);
            tracep->chgQData(oldp+181,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[25]),64);
            tracep->chgQData(oldp+183,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[26]),64);
            tracep->chgQData(oldp+185,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[27]),64);
            tracep->chgQData(oldp+187,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[28]),64);
            tracep->chgQData(oldp+189,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[29]),64);
            tracep->chgQData(oldp+191,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[30]),64);
            tracep->chgQData(oldp+193,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[31]),64);
            tracep->chgQData(oldp+195,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[0]),64);
            tracep->chgQData(oldp+197,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[1]),64);
            tracep->chgQData(oldp+199,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[2]),64);
            tracep->chgQData(oldp+201,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[3]),64);
            tracep->chgQData(oldp+203,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[4]),64);
            tracep->chgQData(oldp+205,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[5]),64);
            tracep->chgQData(oldp+207,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[6]),64);
            tracep->chgQData(oldp+209,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[7]),64);
            tracep->chgQData(oldp+211,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[8]),64);
            tracep->chgQData(oldp+213,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[9]),64);
            tracep->chgQData(oldp+215,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[10]),64);
            tracep->chgQData(oldp+217,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[11]),64);
            tracep->chgQData(oldp+219,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[12]),64);
            tracep->chgQData(oldp+221,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[13]),64);
            tracep->chgQData(oldp+223,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[14]),64);
            tracep->chgQData(oldp+225,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[15]),64);
            tracep->chgQData(oldp+227,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[16]),64);
            tracep->chgQData(oldp+229,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[17]),64);
            tracep->chgQData(oldp+231,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[18]),64);
            tracep->chgQData(oldp+233,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[19]),64);
            tracep->chgQData(oldp+235,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[20]),64);
            tracep->chgQData(oldp+237,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[21]),64);
            tracep->chgQData(oldp+239,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[22]),64);
            tracep->chgQData(oldp+241,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[23]),64);
            tracep->chgQData(oldp+243,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[24]),64);
            tracep->chgQData(oldp+245,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[25]),64);
            tracep->chgQData(oldp+247,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[26]),64);
            tracep->chgQData(oldp+249,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[27]),64);
            tracep->chgQData(oldp+251,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[28]),64);
            tracep->chgQData(oldp+253,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[29]),64);
            tracep->chgQData(oldp+255,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[30]),64);
            tracep->chgQData(oldp+257,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[31]),64);
            tracep->chgQData(oldp+259,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[0]),64);
            tracep->chgQData(oldp+261,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[1]),64);
            tracep->chgQData(oldp+263,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[2]),64);
            tracep->chgQData(oldp+265,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[3]),64);
            tracep->chgQData(oldp+267,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[4]),64);
            tracep->chgQData(oldp+269,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[5]),64);
            tracep->chgQData(oldp+271,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[6]),64);
            tracep->chgQData(oldp+273,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[7]),64);
            tracep->chgQData(oldp+275,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[8]),64);
            tracep->chgQData(oldp+277,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[9]),64);
            tracep->chgQData(oldp+279,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[10]),64);
            tracep->chgQData(oldp+281,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[11]),64);
            tracep->chgQData(oldp+283,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[12]),64);
            tracep->chgQData(oldp+285,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[13]),64);
            tracep->chgQData(oldp+287,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[14]),64);
            tracep->chgQData(oldp+289,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[15]),64);
            tracep->chgQData(oldp+291,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[16]),64);
            tracep->chgQData(oldp+293,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[17]),64);
            tracep->chgQData(oldp+295,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[18]),64);
            tracep->chgQData(oldp+297,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[19]),64);
            tracep->chgQData(oldp+299,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[20]),64);
            tracep->chgQData(oldp+301,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[21]),64);
            tracep->chgQData(oldp+303,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[22]),64);
            tracep->chgQData(oldp+305,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[23]),64);
            tracep->chgQData(oldp+307,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[24]),64);
            tracep->chgQData(oldp+309,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[25]),64);
            tracep->chgQData(oldp+311,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[26]),64);
            tracep->chgQData(oldp+313,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[27]),64);
            tracep->chgQData(oldp+315,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[28]),64);
            tracep->chgQData(oldp+317,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[29]),64);
            tracep->chgQData(oldp+319,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[30]),64);
            tracep->chgQData(oldp+321,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[31]),64);
            tracep->chgQData(oldp+323,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[0]),64);
            tracep->chgQData(oldp+325,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[1]),64);
            tracep->chgQData(oldp+327,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[2]),64);
            tracep->chgQData(oldp+329,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[3]),64);
            tracep->chgQData(oldp+331,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[4]),64);
            tracep->chgQData(oldp+333,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[5]),64);
            tracep->chgQData(oldp+335,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[6]),64);
            tracep->chgQData(oldp+337,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[7]),64);
            tracep->chgQData(oldp+339,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[8]),64);
            tracep->chgQData(oldp+341,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[9]),64);
            tracep->chgQData(oldp+343,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[10]),64);
            tracep->chgQData(oldp+345,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[11]),64);
            tracep->chgQData(oldp+347,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[12]),64);
            tracep->chgQData(oldp+349,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[13]),64);
            tracep->chgQData(oldp+351,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[14]),64);
            tracep->chgQData(oldp+353,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[15]),64);
            tracep->chgQData(oldp+355,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[16]),64);
            tracep->chgQData(oldp+357,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[17]),64);
            tracep->chgQData(oldp+359,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[18]),64);
            tracep->chgQData(oldp+361,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[19]),64);
            tracep->chgQData(oldp+363,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[20]),64);
            tracep->chgQData(oldp+365,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[21]),64);
            tracep->chgQData(oldp+367,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[22]),64);
            tracep->chgQData(oldp+369,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[23]),64);
            tracep->chgQData(oldp+371,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[24]),64);
            tracep->chgQData(oldp+373,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[25]),64);
            tracep->chgQData(oldp+375,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[26]),64);
            tracep->chgQData(oldp+377,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[27]),64);
            tracep->chgQData(oldp+379,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[28]),64);
            tracep->chgQData(oldp+381,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[29]),64);
            tracep->chgQData(oldp+383,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[30]),64);
            tracep->chgQData(oldp+385,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+387,(vlSelf->ysyx_22040175_top__DOT__if_pc),64);
            tracep->chgIData(oldp+389,(vlSelf->ysyx_22040175_top__DOT__id_inst),32);
            tracep->chgQData(oldp+390,(vlSelf->ysyx_22040175_top__DOT__id_pc),64);
            tracep->chgBit(oldp+392,(vlSelf->ysyx_22040175_top__DOT__id_ena));
            tracep->chgBit(oldp+393,(vlSelf->ysyx_22040175_top__DOT__id_time_set));
            tracep->chgBit(oldp+394,(vlSelf->ysyx_22040175_top__DOT__id_branch));
            tracep->chgBit(oldp+395,(vlSelf->ysyx_22040175_top__DOT__id_jump));
            tracep->chgBit(oldp+396,(vlSelf->ysyx_22040175_top__DOT__id_reg_wen));
            tracep->chgCData(oldp+397,(vlSelf->ysyx_22040175_top__DOT__id_reg_waddr),5);
            tracep->chgQData(oldp+398,(((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr))
                                         ? 0ULL : vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f
                                        [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr])),64);
            tracep->chgQData(oldp+400,(((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr))
                                         ? 0ULL : vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f
                                        [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr])),64);
            tracep->chgQData(oldp+402,(vlSelf->ysyx_22040175_top__DOT__id_imm),64);
            tracep->chgCData(oldp+404,(vlSelf->ysyx_22040175_top__DOT__id_alu_op),5);
            tracep->chgCData(oldp+405,(vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel),2);
            tracep->chgQData(oldp+406,(vlSelf->ysyx_22040175_top__DOT__id_unknown_code),64);
            tracep->chgBit(oldp+408,(vlSelf->ysyx_22040175_top__DOT__id_jalr));
            tracep->chgBit(oldp+409,(vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag));
            tracep->chgCData(oldp+410,(vlSelf->ysyx_22040175_top__DOT__id_wmask),8);
            tracep->chgBit(oldp+411,(vlSelf->ysyx_22040175_top__DOT__id_s_flag));
            tracep->chgIData(oldp+412,(vlSelf->ysyx_22040175_top__DOT__id_s_imm),32);
            tracep->chgCData(oldp+413,(vlSelf->ysyx_22040175_top__DOT__id_expand_signed),4);
            tracep->chgCData(oldp+414,(vlSelf->ysyx_22040175_top__DOT__id_rd_flag),3);
            tracep->chgCData(oldp+415,(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag),3);
            tracep->chgQData(oldp+416,(vlSelf->ysyx_22040175_top__DOT__ex_pc),64);
            tracep->chgBit(oldp+418,(vlSelf->ysyx_22040175_top__DOT__ex_branch));
            tracep->chgBit(oldp+419,(vlSelf->ysyx_22040175_top__DOT__ex_jump));
            tracep->chgBit(oldp+420,(vlSelf->ysyx_22040175_top__DOT__ex_reg_wen));
            tracep->chgQData(oldp+421,(vlSelf->ysyx_22040175_top__DOT__ex_imm),64);
            tracep->chgCData(oldp+423,(vlSelf->ysyx_22040175_top__DOT__ex_alu_op),5);
            tracep->chgCData(oldp+424,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src_sel),2);
            tracep->chgQData(oldp+425,(vlSelf->ysyx_22040175_top__DOT__ex_unknown_code),64);
            tracep->chgBit(oldp+427,(vlSelf->ysyx_22040175_top__DOT__ex_jalr));
            tracep->chgBit(oldp+428,(vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag));
            tracep->chgCData(oldp+429,(vlSelf->ysyx_22040175_top__DOT__ex_wmask),8);
            tracep->chgBit(oldp+430,(vlSelf->ysyx_22040175_top__DOT__ex_s_flag));
            tracep->chgIData(oldp+431,(vlSelf->ysyx_22040175_top__DOT__ex_s_imm),32);
            tracep->chgCData(oldp+432,(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed),4);
            tracep->chgCData(oldp+433,(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag),3);
            tracep->chgCData(oldp+434,(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag),3);
            tracep->chgQData(oldp+435,(vlSelf->ysyx_22040175_top__DOT__ex_reg2_rdata),64);
            tracep->chgBit(oldp+437,(vlSelf->ysyx_22040175_top__DOT__ex_ena));
            tracep->chgQData(oldp+438,(vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res),64);
            tracep->chgQData(oldp+440,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1),64);
            tracep->chgQData(oldp+442,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2),64);
            tracep->chgQData(oldp+444,(vlSelf->ysyx_22040175_top__DOT__ex_next_pc),64);
            tracep->chgBit(oldp+446,(vlSelf->ysyx_22040175_top__DOT__mem_reg_wen));
            tracep->chgCData(oldp+447,(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr),5);
            tracep->chgBit(oldp+448,(vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag));
            tracep->chgCData(oldp+449,(vlSelf->ysyx_22040175_top__DOT__mem_wmask),8);
            tracep->chgBit(oldp+450,(vlSelf->ysyx_22040175_top__DOT__mem_s_flag));
            tracep->chgBit(oldp+451,(vlSelf->ysyx_22040175_top__DOT__mem_time_set));
            tracep->chgIData(oldp+452,(vlSelf->ysyx_22040175_top__DOT__mem_s_imm),32);
            tracep->chgCData(oldp+453,(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed),4);
            tracep->chgCData(oldp+454,(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag),3);
            tracep->chgCData(oldp+455,(vlSelf->ysyx_22040175_top__DOT__mem_alu_op),5);
            tracep->chgQData(oldp+456,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src1),64);
            tracep->chgQData(oldp+458,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src2),64);
            tracep->chgQData(oldp+460,(vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res),64);
            tracep->chgQData(oldp+462,(vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res),64);
            tracep->chgBit(oldp+464,(vlSelf->ysyx_22040175_top__DOT__wb_reg_wen));
            tracep->chgCData(oldp+465,(vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr),5);
            tracep->chgCData(oldp+466,(vlSelf->ysyx_22040175_top__DOT__wb_wmask),8);
            tracep->chgBit(oldp+467,(vlSelf->ysyx_22040175_top__DOT__wb_s_flag));
            tracep->chgBit(oldp+468,(vlSelf->ysyx_22040175_top__DOT__wb_time_set));
            tracep->chgIData(oldp+469,(vlSelf->ysyx_22040175_top__DOT__wb_s_imm),32);
            tracep->chgCData(oldp+470,(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed),4);
            tracep->chgBit(oldp+471,(vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag));
            tracep->chgCData(oldp+472,(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag),3);
            tracep->chgQData(oldp+473,(vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res),64);
            tracep->chgQData(oldp+475,(vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res),64);
            tracep->chgQData(oldp+477,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0]),64);
            tracep->chgQData(oldp+479,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[1]),64);
            tracep->chgQData(oldp+481,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[2]),64);
            tracep->chgQData(oldp+483,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[3]),64);
            tracep->chgQData(oldp+485,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[4]),64);
            tracep->chgQData(oldp+487,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[5]),64);
            tracep->chgQData(oldp+489,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[6]),64);
            tracep->chgQData(oldp+491,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[7]),64);
            tracep->chgQData(oldp+493,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[8]),64);
            tracep->chgQData(oldp+495,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[9]),64);
            tracep->chgQData(oldp+497,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[10]),64);
            tracep->chgQData(oldp+499,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[11]),64);
            tracep->chgQData(oldp+501,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[12]),64);
            tracep->chgQData(oldp+503,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[13]),64);
            tracep->chgQData(oldp+505,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[14]),64);
            tracep->chgQData(oldp+507,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[15]),64);
            tracep->chgQData(oldp+509,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[16]),64);
            tracep->chgQData(oldp+511,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[17]),64);
            tracep->chgQData(oldp+513,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[18]),64);
            tracep->chgQData(oldp+515,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[19]),64);
            tracep->chgQData(oldp+517,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[20]),64);
            tracep->chgQData(oldp+519,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[21]),64);
            tracep->chgQData(oldp+521,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[22]),64);
            tracep->chgQData(oldp+523,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[23]),64);
            tracep->chgQData(oldp+525,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[24]),64);
            tracep->chgQData(oldp+527,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[25]),64);
            tracep->chgQData(oldp+529,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[26]),64);
            tracep->chgQData(oldp+531,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[27]),64);
            tracep->chgQData(oldp+533,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[28]),64);
            tracep->chgQData(oldp+535,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[29]),64);
            tracep->chgQData(oldp+537,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[30]),64);
            tracep->chgQData(oldp+539,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[31]),64);
            tracep->chgBit(oldp+541,(vlSelf->ysyx_22040175_top__DOT__ena));
            tracep->chgBit(oldp+542,((1U & (IData)(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_waddr_id_ex_o))));
            tracep->chgQData(oldp+543,((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))),64);
            tracep->chgCData(oldp+545,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op),3);
            tracep->chgCData(oldp+546,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr),5);
            tracep->chgCData(oldp+547,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr),5);
            tracep->chgCData(oldp+548,((0x7fU & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))),7);
            tracep->chgCData(oldp+549,((7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))),3);
            tracep->chgCData(oldp+550,((0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U)))),7);
            tracep->chgCData(oldp+551,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 7U)))),5);
            tracep->chgCData(oldp+552,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xfU)))),5);
            tracep->chgCData(oldp+553,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x14U)))),5);
            tracep->chgCData(oldp+554,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__reg_waddr_id_ex_o),5);
            tracep->chgBit(oldp+555,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__zero));
            tracep->chgQData(oldp+556,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1),64);
            tracep->chgQData(oldp+558,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2),64);
            tracep->chgQData(oldp+560,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw),64);
            tracep->chgQData(oldp+562,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[0]),64);
            tracep->chgQData(oldp+564,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[1]),64);
            tracep->chgQData(oldp+566,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[2]),64);
            tracep->chgQData(oldp+568,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[3]),64);
            tracep->chgQData(oldp+570,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[4]),64);
            tracep->chgQData(oldp+572,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[5]),64);
            tracep->chgQData(oldp+574,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[6]),64);
            tracep->chgQData(oldp+576,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[7]),64);
            tracep->chgQData(oldp+578,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[8]),64);
            tracep->chgQData(oldp+580,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[9]),64);
            tracep->chgQData(oldp+582,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[10]),64);
            tracep->chgQData(oldp+584,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[11]),64);
            tracep->chgQData(oldp+586,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[12]),64);
            tracep->chgQData(oldp+588,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[13]),64);
            tracep->chgQData(oldp+590,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[14]),64);
            tracep->chgQData(oldp+592,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[15]),64);
            tracep->chgQData(oldp+594,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[16]),64);
            tracep->chgQData(oldp+596,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[17]),64);
            tracep->chgQData(oldp+598,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[18]),64);
            tracep->chgQData(oldp+600,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[19]),64);
            tracep->chgQData(oldp+602,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[20]),64);
            tracep->chgQData(oldp+604,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[21]),64);
            tracep->chgQData(oldp+606,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[22]),64);
            tracep->chgQData(oldp+608,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[23]),64);
            tracep->chgQData(oldp+610,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[24]),64);
            tracep->chgQData(oldp+612,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[25]),64);
            tracep->chgQData(oldp+614,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[26]),64);
            tracep->chgQData(oldp+616,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[27]),64);
            tracep->chgQData(oldp+618,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[28]),64);
            tracep->chgQData(oldp+620,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[29]),64);
            tracep->chgQData(oldp+622,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[30]),64);
            tracep->chgQData(oldp+624,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[31]),64);
            tracep->chgQData(oldp+626,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata),64);
        }
        tracep->chgBit(oldp+628,(vlSelf->clk));
        tracep->chgBit(oldp+629,(vlSelf->rst));
        tracep->chgIData(oldp+630,(vlSelf->inst),32);
        tracep->chgIData(oldp+631,(vlSelf->pc),32);
        tracep->chgQData(oldp+632,(vlSelf->unknown_code),64);
        tracep->chgBit(oldp+634,(vlSelf->time_set));
        tracep->chgBit(oldp+635,(vlSelf->ysyx_22040175_top__DOT__rst_n));
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
