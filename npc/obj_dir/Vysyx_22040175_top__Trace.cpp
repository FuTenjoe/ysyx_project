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
            tracep->chgQData(oldp+0,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[0]),64);
            tracep->chgQData(oldp+2,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[1]),64);
            tracep->chgQData(oldp+4,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[2]),64);
            tracep->chgQData(oldp+6,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[3]),64);
            tracep->chgQData(oldp+8,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[4]),64);
            tracep->chgQData(oldp+10,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[5]),64);
            tracep->chgQData(oldp+12,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[6]),64);
            tracep->chgQData(oldp+14,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[7]),64);
            tracep->chgQData(oldp+16,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[8]),64);
            tracep->chgQData(oldp+18,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[9]),64);
            tracep->chgQData(oldp+20,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[10]),64);
            tracep->chgQData(oldp+22,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[11]),64);
            tracep->chgQData(oldp+24,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[12]),64);
            tracep->chgQData(oldp+26,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[13]),64);
            tracep->chgQData(oldp+28,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[14]),64);
            tracep->chgQData(oldp+30,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[15]),64);
            tracep->chgQData(oldp+32,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[16]),64);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[17]),64);
            tracep->chgQData(oldp+36,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[18]),64);
            tracep->chgQData(oldp+38,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[19]),64);
            tracep->chgQData(oldp+40,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[20]),64);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[21]),64);
            tracep->chgQData(oldp+44,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[22]),64);
            tracep->chgQData(oldp+46,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[23]),64);
            tracep->chgQData(oldp+48,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[24]),64);
            tracep->chgQData(oldp+50,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[25]),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[26]),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[27]),64);
            tracep->chgQData(oldp+56,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[28]),64);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[29]),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[30]),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx_22040175_top__DOT__to_ex_reg_f[31]),64);
            tracep->chgQData(oldp+64,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0]),64);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[1]),64);
            tracep->chgQData(oldp+68,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[2]),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[3]),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[4]),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[5]),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[6]),64);
            tracep->chgQData(oldp+78,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[7]),64);
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[8]),64);
            tracep->chgQData(oldp+82,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[9]),64);
            tracep->chgQData(oldp+84,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[10]),64);
            tracep->chgQData(oldp+86,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[11]),64);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[12]),64);
            tracep->chgQData(oldp+90,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[13]),64);
            tracep->chgQData(oldp+92,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[14]),64);
            tracep->chgQData(oldp+94,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[15]),64);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[16]),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[17]),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[18]),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[19]),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[20]),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[21]),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[22]),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[23]),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[24]),64);
            tracep->chgQData(oldp+114,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[25]),64);
            tracep->chgQData(oldp+116,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[26]),64);
            tracep->chgQData(oldp+118,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[27]),64);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[28]),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[29]),64);
            tracep->chgQData(oldp+124,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[30]),64);
            tracep->chgQData(oldp+126,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[31]),64);
            tracep->chgQData(oldp+128,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[0]),64);
            tracep->chgQData(oldp+130,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[1]),64);
            tracep->chgQData(oldp+132,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[2]),64);
            tracep->chgQData(oldp+134,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[3]),64);
            tracep->chgQData(oldp+136,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[4]),64);
            tracep->chgQData(oldp+138,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[5]),64);
            tracep->chgQData(oldp+140,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[6]),64);
            tracep->chgQData(oldp+142,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[7]),64);
            tracep->chgQData(oldp+144,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[8]),64);
            tracep->chgQData(oldp+146,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[9]),64);
            tracep->chgQData(oldp+148,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[10]),64);
            tracep->chgQData(oldp+150,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[11]),64);
            tracep->chgQData(oldp+152,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[12]),64);
            tracep->chgQData(oldp+154,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[13]),64);
            tracep->chgQData(oldp+156,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[14]),64);
            tracep->chgQData(oldp+158,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[15]),64);
            tracep->chgQData(oldp+160,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[16]),64);
            tracep->chgQData(oldp+162,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[17]),64);
            tracep->chgQData(oldp+164,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[18]),64);
            tracep->chgQData(oldp+166,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[19]),64);
            tracep->chgQData(oldp+168,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[20]),64);
            tracep->chgQData(oldp+170,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[21]),64);
            tracep->chgQData(oldp+172,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[22]),64);
            tracep->chgQData(oldp+174,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[23]),64);
            tracep->chgQData(oldp+176,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[24]),64);
            tracep->chgQData(oldp+178,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[25]),64);
            tracep->chgQData(oldp+180,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[26]),64);
            tracep->chgQData(oldp+182,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[27]),64);
            tracep->chgQData(oldp+184,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[28]),64);
            tracep->chgQData(oldp+186,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[29]),64);
            tracep->chgQData(oldp+188,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[30]),64);
            tracep->chgQData(oldp+190,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f[31]),64);
            tracep->chgQData(oldp+192,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[0]),64);
            tracep->chgQData(oldp+194,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[1]),64);
            tracep->chgQData(oldp+196,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[2]),64);
            tracep->chgQData(oldp+198,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[3]),64);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[4]),64);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[5]),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[6]),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[7]),64);
            tracep->chgQData(oldp+208,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[8]),64);
            tracep->chgQData(oldp+210,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[9]),64);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[10]),64);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[11]),64);
            tracep->chgQData(oldp+216,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[12]),64);
            tracep->chgQData(oldp+218,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[13]),64);
            tracep->chgQData(oldp+220,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[14]),64);
            tracep->chgQData(oldp+222,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[15]),64);
            tracep->chgQData(oldp+224,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[16]),64);
            tracep->chgQData(oldp+226,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[17]),64);
            tracep->chgQData(oldp+228,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[18]),64);
            tracep->chgQData(oldp+230,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[19]),64);
            tracep->chgQData(oldp+232,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[20]),64);
            tracep->chgQData(oldp+234,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[21]),64);
            tracep->chgQData(oldp+236,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[22]),64);
            tracep->chgQData(oldp+238,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[23]),64);
            tracep->chgQData(oldp+240,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[24]),64);
            tracep->chgQData(oldp+242,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[25]),64);
            tracep->chgQData(oldp+244,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[26]),64);
            tracep->chgQData(oldp+246,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[27]),64);
            tracep->chgQData(oldp+248,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[28]),64);
            tracep->chgQData(oldp+250,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[29]),64);
            tracep->chgQData(oldp+252,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[30]),64);
            tracep->chgQData(oldp+254,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_ex_regs__reg_f_id_ex_i[31]),64);
            tracep->chgQData(oldp+256,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[0]),64);
            tracep->chgQData(oldp+258,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[1]),64);
            tracep->chgQData(oldp+260,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[2]),64);
            tracep->chgQData(oldp+262,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[3]),64);
            tracep->chgQData(oldp+264,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[4]),64);
            tracep->chgQData(oldp+266,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[5]),64);
            tracep->chgQData(oldp+268,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[6]),64);
            tracep->chgQData(oldp+270,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[7]),64);
            tracep->chgQData(oldp+272,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[8]),64);
            tracep->chgQData(oldp+274,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[9]),64);
            tracep->chgQData(oldp+276,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[10]),64);
            tracep->chgQData(oldp+278,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[11]),64);
            tracep->chgQData(oldp+280,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[12]),64);
            tracep->chgQData(oldp+282,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[13]),64);
            tracep->chgQData(oldp+284,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[14]),64);
            tracep->chgQData(oldp+286,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[15]),64);
            tracep->chgQData(oldp+288,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[16]),64);
            tracep->chgQData(oldp+290,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[17]),64);
            tracep->chgQData(oldp+292,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[18]),64);
            tracep->chgQData(oldp+294,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[19]),64);
            tracep->chgQData(oldp+296,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[20]),64);
            tracep->chgQData(oldp+298,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[21]),64);
            tracep->chgQData(oldp+300,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[22]),64);
            tracep->chgQData(oldp+302,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[23]),64);
            tracep->chgQData(oldp+304,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[24]),64);
            tracep->chgQData(oldp+306,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[25]),64);
            tracep->chgQData(oldp+308,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[26]),64);
            tracep->chgQData(oldp+310,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[27]),64);
            tracep->chgQData(oldp+312,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[28]),64);
            tracep->chgQData(oldp+314,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[29]),64);
            tracep->chgQData(oldp+316,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[30]),64);
            tracep->chgQData(oldp+318,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_ex_stage__reg_f[31]),64);
            tracep->chgQData(oldp+320,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[0]),64);
            tracep->chgQData(oldp+322,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[1]),64);
            tracep->chgQData(oldp+324,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[2]),64);
            tracep->chgQData(oldp+326,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[3]),64);
            tracep->chgQData(oldp+328,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[4]),64);
            tracep->chgQData(oldp+330,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[5]),64);
            tracep->chgQData(oldp+332,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[6]),64);
            tracep->chgQData(oldp+334,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[7]),64);
            tracep->chgQData(oldp+336,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[8]),64);
            tracep->chgQData(oldp+338,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[9]),64);
            tracep->chgQData(oldp+340,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[10]),64);
            tracep->chgQData(oldp+342,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[11]),64);
            tracep->chgQData(oldp+344,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[12]),64);
            tracep->chgQData(oldp+346,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[13]),64);
            tracep->chgQData(oldp+348,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[14]),64);
            tracep->chgQData(oldp+350,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[15]),64);
            tracep->chgQData(oldp+352,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[16]),64);
            tracep->chgQData(oldp+354,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[17]),64);
            tracep->chgQData(oldp+356,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[18]),64);
            tracep->chgQData(oldp+358,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[19]),64);
            tracep->chgQData(oldp+360,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[20]),64);
            tracep->chgQData(oldp+362,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[21]),64);
            tracep->chgQData(oldp+364,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[22]),64);
            tracep->chgQData(oldp+366,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[23]),64);
            tracep->chgQData(oldp+368,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[24]),64);
            tracep->chgQData(oldp+370,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[25]),64);
            tracep->chgQData(oldp+372,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[26]),64);
            tracep->chgQData(oldp+374,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[27]),64);
            tracep->chgQData(oldp+376,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[28]),64);
            tracep->chgQData(oldp+378,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[29]),64);
            tracep->chgQData(oldp+380,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[30]),64);
            tracep->chgQData(oldp+382,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT____Vcellinp__u_muxpc__reg_f[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+384,((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata)),32);
            tracep->chgQData(oldp+385,(vlSelf->ysyx_22040175_top__DOT__if_pc),64);
            tracep->chgIData(oldp+387,(vlSelf->ysyx_22040175_top__DOT__id_inst),32);
            tracep->chgQData(oldp+388,(vlSelf->ysyx_22040175_top__DOT__id_pc),64);
            tracep->chgBit(oldp+390,(vlSelf->ysyx_22040175_top__DOT__id_ena));
            tracep->chgBit(oldp+391,(vlSelf->ysyx_22040175_top__DOT__id_time_set));
            tracep->chgBit(oldp+392,(vlSelf->ysyx_22040175_top__DOT__id_branch));
            tracep->chgBit(oldp+393,(vlSelf->ysyx_22040175_top__DOT__id_jump));
            tracep->chgBit(oldp+394,(vlSelf->ysyx_22040175_top__DOT__id_reg_wen));
            tracep->chgCData(oldp+395,(vlSelf->ysyx_22040175_top__DOT__id_reg_waddr),5);
            tracep->chgQData(oldp+396,(((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr))
                                         ? 0ULL : vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f
                                        [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr])),64);
            tracep->chgQData(oldp+398,(((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr))
                                         ? 0ULL : vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_reg_read__reg_f
                                        [vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr])),64);
            tracep->chgQData(oldp+400,(vlSelf->ysyx_22040175_top__DOT__id_imm),64);
            tracep->chgCData(oldp+402,(vlSelf->ysyx_22040175_top__DOT__id_alu_op),5);
            tracep->chgCData(oldp+403,(vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel),2);
            tracep->chgQData(oldp+404,(vlSelf->ysyx_22040175_top__DOT__id_unknown_code),64);
            tracep->chgBit(oldp+406,(vlSelf->ysyx_22040175_top__DOT__id_jalr));
            tracep->chgBit(oldp+407,(vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag));
            tracep->chgCData(oldp+408,(vlSelf->ysyx_22040175_top__DOT__id_wmask),8);
            tracep->chgBit(oldp+409,(vlSelf->ysyx_22040175_top__DOT__id_s_flag));
            tracep->chgIData(oldp+410,(vlSelf->ysyx_22040175_top__DOT__id_s_imm),32);
            tracep->chgCData(oldp+411,(vlSelf->ysyx_22040175_top__DOT__id_expand_signed),4);
            tracep->chgCData(oldp+412,(vlSelf->ysyx_22040175_top__DOT__id_rd_flag),3);
            tracep->chgCData(oldp+413,(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag),3);
            tracep->chgBit(oldp+414,(vlSelf->ysyx_22040175_top__DOT__rest_from_id));
            tracep->chgBit(oldp+415,(vlSelf->ysyx_22040175_top__DOT__control_rest));
            tracep->chgQData(oldp+416,(vlSelf->ysyx_22040175_top__DOT__ex_pc),64);
            tracep->chgBit(oldp+418,(vlSelf->ysyx_22040175_top__DOT__ex_branch));
            tracep->chgBit(oldp+419,(vlSelf->ysyx_22040175_top__DOT__ex_jump));
            tracep->chgBit(oldp+420,(vlSelf->ysyx_22040175_top__DOT__ex_reg_wen));
            tracep->chgCData(oldp+421,(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr),5);
            tracep->chgQData(oldp+422,(vlSelf->ysyx_22040175_top__DOT__ex_imm),64);
            tracep->chgCData(oldp+424,(vlSelf->ysyx_22040175_top__DOT__ex_alu_op),5);
            tracep->chgCData(oldp+425,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src_sel),2);
            tracep->chgQData(oldp+426,(vlSelf->ysyx_22040175_top__DOT__ex_unknown_code),64);
            tracep->chgBit(oldp+428,(vlSelf->ysyx_22040175_top__DOT__ex_jalr));
            tracep->chgBit(oldp+429,(vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag));
            tracep->chgCData(oldp+430,(vlSelf->ysyx_22040175_top__DOT__ex_wmask),8);
            tracep->chgBit(oldp+431,(vlSelf->ysyx_22040175_top__DOT__ex_s_flag));
            tracep->chgIData(oldp+432,(vlSelf->ysyx_22040175_top__DOT__ex_s_imm),32);
            tracep->chgCData(oldp+433,(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed),4);
            tracep->chgCData(oldp+434,(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag),3);
            tracep->chgCData(oldp+435,(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag),3);
            tracep->chgQData(oldp+436,(vlSelf->ysyx_22040175_top__DOT__ex_reg2_rdata),64);
            tracep->chgBit(oldp+438,(vlSelf->ysyx_22040175_top__DOT__ex_ena));
            tracep->chgBit(oldp+439,(vlSelf->ysyx_22040175_top__DOT__ex_no_use));
            tracep->chgQData(oldp+440,(vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res),64);
            tracep->chgQData(oldp+442,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1),64);
            tracep->chgQData(oldp+444,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2),64);
            tracep->chgQData(oldp+446,(vlSelf->ysyx_22040175_top__DOT__ex_next_pc),64);
            tracep->chgBit(oldp+448,(vlSelf->ysyx_22040175_top__DOT__write_ready));
            tracep->chgBit(oldp+449,(vlSelf->ysyx_22040175_top__DOT__ex_pc_ready));
            tracep->chgBit(oldp+450,(vlSelf->ysyx_22040175_top__DOT__mem_reg_wen));
            tracep->chgCData(oldp+451,(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr),5);
            tracep->chgBit(oldp+452,(vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag));
            tracep->chgCData(oldp+453,(vlSelf->ysyx_22040175_top__DOT__mem_wmask),8);
            tracep->chgBit(oldp+454,(vlSelf->ysyx_22040175_top__DOT__mem_s_flag));
            tracep->chgBit(oldp+455,(vlSelf->ysyx_22040175_top__DOT__mem_time_set));
            tracep->chgIData(oldp+456,(vlSelf->ysyx_22040175_top__DOT__mem_s_imm),32);
            tracep->chgCData(oldp+457,(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed),4);
            tracep->chgCData(oldp+458,(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag),3);
            tracep->chgCData(oldp+459,(vlSelf->ysyx_22040175_top__DOT__mem_alu_op),5);
            tracep->chgQData(oldp+460,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src1),64);
            tracep->chgQData(oldp+462,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src2),64);
            tracep->chgQData(oldp+464,(vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res),64);
            tracep->chgBit(oldp+466,(vlSelf->ysyx_22040175_top__DOT__mem_no_use));
            tracep->chgBit(oldp+467,(vlSelf->ysyx_22040175_top__DOT__mem_pc_ready));
            tracep->chgQData(oldp+468,(vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res),64);
            tracep->chgBit(oldp+470,(vlSelf->ysyx_22040175_top__DOT__wb_reg_wen));
            tracep->chgCData(oldp+471,(vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr),5);
            tracep->chgCData(oldp+472,(vlSelf->ysyx_22040175_top__DOT__wb_wmask),8);
            tracep->chgBit(oldp+473,(vlSelf->ysyx_22040175_top__DOT__wb_s_flag));
            tracep->chgBit(oldp+474,(vlSelf->ysyx_22040175_top__DOT__wb_time_set));
            tracep->chgIData(oldp+475,(vlSelf->ysyx_22040175_top__DOT__wb_s_imm),32);
            tracep->chgCData(oldp+476,(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed),4);
            tracep->chgBit(oldp+477,(vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag));
            tracep->chgCData(oldp+478,(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag),3);
            tracep->chgQData(oldp+479,(vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res),64);
            tracep->chgQData(oldp+481,(vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res),64);
            tracep->chgBit(oldp+483,(vlSelf->ysyx_22040175_top__DOT__wb_no_use));
            tracep->chgBit(oldp+484,(vlSelf->ysyx_22040175_top__DOT__wb_pc_ready));
            tracep->chgQData(oldp+485,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0]),64);
            tracep->chgQData(oldp+487,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[1]),64);
            tracep->chgQData(oldp+489,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[2]),64);
            tracep->chgQData(oldp+491,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[3]),64);
            tracep->chgQData(oldp+493,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[4]),64);
            tracep->chgQData(oldp+495,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[5]),64);
            tracep->chgQData(oldp+497,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[6]),64);
            tracep->chgQData(oldp+499,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[7]),64);
            tracep->chgQData(oldp+501,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[8]),64);
            tracep->chgQData(oldp+503,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[9]),64);
            tracep->chgQData(oldp+505,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[10]),64);
            tracep->chgQData(oldp+507,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[11]),64);
            tracep->chgQData(oldp+509,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[12]),64);
            tracep->chgQData(oldp+511,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[13]),64);
            tracep->chgQData(oldp+513,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[14]),64);
            tracep->chgQData(oldp+515,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[15]),64);
            tracep->chgQData(oldp+517,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[16]),64);
            tracep->chgQData(oldp+519,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[17]),64);
            tracep->chgQData(oldp+521,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[18]),64);
            tracep->chgQData(oldp+523,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[19]),64);
            tracep->chgQData(oldp+525,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[20]),64);
            tracep->chgQData(oldp+527,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[21]),64);
            tracep->chgQData(oldp+529,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[22]),64);
            tracep->chgQData(oldp+531,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[23]),64);
            tracep->chgQData(oldp+533,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[24]),64);
            tracep->chgQData(oldp+535,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[25]),64);
            tracep->chgQData(oldp+537,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[26]),64);
            tracep->chgQData(oldp+539,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[27]),64);
            tracep->chgQData(oldp+541,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[28]),64);
            tracep->chgQData(oldp+543,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[29]),64);
            tracep->chgQData(oldp+545,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[30]),64);
            tracep->chgQData(oldp+547,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[31]),64);
            tracep->chgBit(oldp+549,(vlSelf->ysyx_22040175_top__DOT__ena));
            tracep->chgQData(oldp+550,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata),64);
            tracep->chgQData(oldp+552,((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))),64);
            tracep->chgCData(oldp+554,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op),3);
            tracep->chgCData(oldp+555,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr),5);
            tracep->chgCData(oldp+556,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr),5);
            tracep->chgCData(oldp+557,((0x7fU & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))),7);
            tracep->chgCData(oldp+558,((7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))),3);
            tracep->chgCData(oldp+559,((0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U)))),7);
            tracep->chgCData(oldp+560,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 7U)))),5);
            tracep->chgCData(oldp+561,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xfU)))),5);
            tracep->chgCData(oldp+562,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x14U)))),5);
            tracep->chgBit(oldp+563,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__zero));
            tracep->chgQData(oldp+564,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1),64);
            tracep->chgQData(oldp+566,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2),64);
            tracep->chgQData(oldp+568,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw),64);
            tracep->chgQData(oldp+570,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[0]),64);
            tracep->chgQData(oldp+572,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[1]),64);
            tracep->chgQData(oldp+574,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[2]),64);
            tracep->chgQData(oldp+576,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[3]),64);
            tracep->chgQData(oldp+578,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[4]),64);
            tracep->chgQData(oldp+580,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[5]),64);
            tracep->chgQData(oldp+582,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[6]),64);
            tracep->chgQData(oldp+584,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[7]),64);
            tracep->chgQData(oldp+586,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[8]),64);
            tracep->chgQData(oldp+588,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[9]),64);
            tracep->chgQData(oldp+590,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[10]),64);
            tracep->chgQData(oldp+592,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[11]),64);
            tracep->chgQData(oldp+594,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[12]),64);
            tracep->chgQData(oldp+596,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[13]),64);
            tracep->chgQData(oldp+598,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[14]),64);
            tracep->chgQData(oldp+600,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[15]),64);
            tracep->chgQData(oldp+602,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[16]),64);
            tracep->chgQData(oldp+604,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[17]),64);
            tracep->chgQData(oldp+606,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[18]),64);
            tracep->chgQData(oldp+608,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[19]),64);
            tracep->chgQData(oldp+610,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[20]),64);
            tracep->chgQData(oldp+612,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[21]),64);
            tracep->chgQData(oldp+614,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[22]),64);
            tracep->chgQData(oldp+616,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[23]),64);
            tracep->chgQData(oldp+618,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[24]),64);
            tracep->chgQData(oldp+620,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[25]),64);
            tracep->chgQData(oldp+622,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[26]),64);
            tracep->chgQData(oldp+624,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[27]),64);
            tracep->chgQData(oldp+626,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[28]),64);
            tracep->chgQData(oldp+628,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[29]),64);
            tracep->chgQData(oldp+630,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[30]),64);
            tracep->chgQData(oldp+632,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[31]),64);
            tracep->chgQData(oldp+634,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata),64);
        }
        tracep->chgBit(oldp+636,(vlSelf->clk));
        tracep->chgBit(oldp+637,(vlSelf->rst));
        tracep->chgIData(oldp+638,(vlSelf->inst),32);
        tracep->chgIData(oldp+639,(vlSelf->pc),32);
        tracep->chgQData(oldp+640,(vlSelf->unknown_code),64);
        tracep->chgBit(oldp+642,(vlSelf->time_set));
        tracep->chgBit(oldp+643,(vlSelf->ysyx_22040175_top__DOT__rst_n));
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
