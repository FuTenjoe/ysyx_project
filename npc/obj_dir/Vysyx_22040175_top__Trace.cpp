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
    VlWide<3>/*95:0*/ __Vtemp25;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->ysyx_22040175_top__DOT__rst_n));
            tracep->chgQData(oldp+1,(vlSelf->ysyx_22040175_top__DOT__id_next_pc),64);
            tracep->chgQData(oldp+3,(vlSelf->ysyx_22040175_top__DOT__id_alu_src1),64);
            tracep->chgQData(oldp+5,(vlSelf->ysyx_22040175_top__DOT__id_alu_src2),64);
            tracep->chgBit(oldp+7,(vlSelf->ysyx_22040175_top__DOT__sig_jalr));
            tracep->chgQData(oldp+8,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0]),64);
            tracep->chgQData(oldp+10,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[1]),64);
            tracep->chgQData(oldp+12,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[2]),64);
            tracep->chgQData(oldp+14,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[3]),64);
            tracep->chgQData(oldp+16,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[4]),64);
            tracep->chgQData(oldp+18,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[5]),64);
            tracep->chgQData(oldp+20,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[6]),64);
            tracep->chgQData(oldp+22,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[7]),64);
            tracep->chgQData(oldp+24,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[8]),64);
            tracep->chgQData(oldp+26,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[9]),64);
            tracep->chgQData(oldp+28,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[10]),64);
            tracep->chgQData(oldp+30,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[11]),64);
            tracep->chgQData(oldp+32,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[12]),64);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[13]),64);
            tracep->chgQData(oldp+36,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[14]),64);
            tracep->chgQData(oldp+38,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[15]),64);
            tracep->chgQData(oldp+40,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[16]),64);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[17]),64);
            tracep->chgQData(oldp+44,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[18]),64);
            tracep->chgQData(oldp+46,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[19]),64);
            tracep->chgQData(oldp+48,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[20]),64);
            tracep->chgQData(oldp+50,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[21]),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[22]),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[23]),64);
            tracep->chgQData(oldp+56,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[24]),64);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[25]),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[26]),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[27]),64);
            tracep->chgQData(oldp+64,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[28]),64);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[29]),64);
            tracep->chgQData(oldp+68,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[30]),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[31]),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0]),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[1]),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[2]),64);
            tracep->chgQData(oldp+78,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[3]),64);
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[4]),64);
            tracep->chgQData(oldp+82,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[5]),64);
            tracep->chgQData(oldp+84,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[6]),64);
            tracep->chgQData(oldp+86,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[7]),64);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[8]),64);
            tracep->chgQData(oldp+90,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[9]),64);
            tracep->chgQData(oldp+92,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[10]),64);
            tracep->chgQData(oldp+94,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[11]),64);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[12]),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[13]),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[14]),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[15]),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[16]),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[17]),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[18]),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[19]),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[20]),64);
            tracep->chgQData(oldp+114,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[21]),64);
            tracep->chgQData(oldp+116,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[22]),64);
            tracep->chgQData(oldp+118,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[23]),64);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[24]),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[25]),64);
            tracep->chgQData(oldp+124,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[26]),64);
            tracep->chgQData(oldp+126,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[27]),64);
            tracep->chgQData(oldp+128,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[28]),64);
            tracep->chgQData(oldp+130,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[29]),64);
            tracep->chgQData(oldp+132,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[30]),64);
            tracep->chgQData(oldp+134,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[31]),64);
            tracep->chgQData(oldp+136,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata),64);
            tracep->chgQData(oldp+138,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata),64);
            tracep->chgCData(oldp+140,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond),3);
            tracep->chgQData(oldp+141,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0]),64);
            tracep->chgQData(oldp+143,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[1]),64);
            tracep->chgQData(oldp+145,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[2]),64);
            tracep->chgQData(oldp+147,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[3]),64);
            tracep->chgQData(oldp+149,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[4]),64);
            tracep->chgQData(oldp+151,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[5]),64);
            tracep->chgQData(oldp+153,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[6]),64);
            tracep->chgQData(oldp+155,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[7]),64);
            tracep->chgQData(oldp+157,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[8]),64);
            tracep->chgQData(oldp+159,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[9]),64);
            tracep->chgQData(oldp+161,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[10]),64);
            tracep->chgQData(oldp+163,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[11]),64);
            tracep->chgQData(oldp+165,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[12]),64);
            tracep->chgQData(oldp+167,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[13]),64);
            tracep->chgQData(oldp+169,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[14]),64);
            tracep->chgQData(oldp+171,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[15]),64);
            tracep->chgQData(oldp+173,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[16]),64);
            tracep->chgQData(oldp+175,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[17]),64);
            tracep->chgQData(oldp+177,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[18]),64);
            tracep->chgQData(oldp+179,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[19]),64);
            tracep->chgQData(oldp+181,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[20]),64);
            tracep->chgQData(oldp+183,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[21]),64);
            tracep->chgQData(oldp+185,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[22]),64);
            tracep->chgQData(oldp+187,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[23]),64);
            tracep->chgQData(oldp+189,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[24]),64);
            tracep->chgQData(oldp+191,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[25]),64);
            tracep->chgQData(oldp+193,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[26]),64);
            tracep->chgQData(oldp+195,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[27]),64);
            tracep->chgQData(oldp+197,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[28]),64);
            tracep->chgQData(oldp+199,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[29]),64);
            tracep->chgQData(oldp+201,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[30]),64);
            tracep->chgQData(oldp+203,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[31]),64);
            tracep->chgQData(oldp+205,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0]),64);
            tracep->chgQData(oldp+207,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[1]),64);
            tracep->chgQData(oldp+209,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[2]),64);
            tracep->chgQData(oldp+211,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[3]),64);
            tracep->chgQData(oldp+213,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[4]),64);
            tracep->chgQData(oldp+215,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[5]),64);
            tracep->chgQData(oldp+217,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[6]),64);
            tracep->chgQData(oldp+219,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[7]),64);
            tracep->chgQData(oldp+221,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[8]),64);
            tracep->chgQData(oldp+223,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[9]),64);
            tracep->chgQData(oldp+225,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[10]),64);
            tracep->chgQData(oldp+227,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[11]),64);
            tracep->chgQData(oldp+229,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[12]),64);
            tracep->chgQData(oldp+231,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[13]),64);
            tracep->chgQData(oldp+233,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[14]),64);
            tracep->chgQData(oldp+235,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[15]),64);
            tracep->chgQData(oldp+237,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[16]),64);
            tracep->chgQData(oldp+239,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[17]),64);
            tracep->chgQData(oldp+241,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[18]),64);
            tracep->chgQData(oldp+243,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[19]),64);
            tracep->chgQData(oldp+245,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[20]),64);
            tracep->chgQData(oldp+247,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[21]),64);
            tracep->chgQData(oldp+249,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[22]),64);
            tracep->chgQData(oldp+251,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[23]),64);
            tracep->chgQData(oldp+253,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[24]),64);
            tracep->chgQData(oldp+255,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[25]),64);
            tracep->chgQData(oldp+257,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[26]),64);
            tracep->chgQData(oldp+259,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[27]),64);
            tracep->chgQData(oldp+261,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[28]),64);
            tracep->chgQData(oldp+263,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[29]),64);
            tracep->chgQData(oldp+265,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[30]),64);
            tracep->chgQData(oldp+267,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[31]),64);
            tracep->chgBit(oldp+269,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero));
            tracep->chgQData(oldp+270,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1),64);
            tracep->chgQData(oldp+272,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2),64);
            tracep->chgCData(oldp+274,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__test),3);
            tracep->chgQData(oldp+275,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[0]),64);
            tracep->chgQData(oldp+277,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[1]),64);
            tracep->chgQData(oldp+279,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[2]),64);
            tracep->chgQData(oldp+281,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[3]),64);
            tracep->chgQData(oldp+283,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[4]),64);
            tracep->chgQData(oldp+285,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[5]),64);
            tracep->chgQData(oldp+287,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[6]),64);
            tracep->chgQData(oldp+289,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[7]),64);
            tracep->chgQData(oldp+291,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[8]),64);
            tracep->chgQData(oldp+293,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[9]),64);
            tracep->chgQData(oldp+295,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[10]),64);
            tracep->chgQData(oldp+297,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[11]),64);
            tracep->chgQData(oldp+299,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[12]),64);
            tracep->chgQData(oldp+301,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[13]),64);
            tracep->chgQData(oldp+303,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[14]),64);
            tracep->chgQData(oldp+305,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[15]),64);
            tracep->chgQData(oldp+307,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[16]),64);
            tracep->chgQData(oldp+309,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[17]),64);
            tracep->chgQData(oldp+311,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[18]),64);
            tracep->chgQData(oldp+313,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[19]),64);
            tracep->chgQData(oldp+315,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[20]),64);
            tracep->chgQData(oldp+317,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[21]),64);
            tracep->chgQData(oldp+319,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[22]),64);
            tracep->chgQData(oldp+321,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[23]),64);
            tracep->chgQData(oldp+323,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[24]),64);
            tracep->chgQData(oldp+325,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[25]),64);
            tracep->chgQData(oldp+327,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[26]),64);
            tracep->chgQData(oldp+329,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[27]),64);
            tracep->chgQData(oldp+331,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[28]),64);
            tracep->chgQData(oldp+333,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[29]),64);
            tracep->chgQData(oldp+335,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[30]),64);
            tracep->chgQData(oldp+337,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+339,(vlSelf->ysyx_22040175_top__DOT__if_ena));
            tracep->chgIData(oldp+340,((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata)),32);
            tracep->chgQData(oldp+341,(vlSelf->ysyx_22040175_top__DOT__if_pc),64);
            tracep->chgBit(oldp+343,(vlSelf->ysyx_22040175_top__DOT__rest_id_mem));
            tracep->chgIData(oldp+344,(vlSelf->ysyx_22040175_top__DOT__id_inst),32);
            tracep->chgQData(oldp+345,(vlSelf->ysyx_22040175_top__DOT__id_pc),64);
            tracep->chgBit(oldp+347,(vlSelf->ysyx_22040175_top__DOT__id_ena));
            tracep->chgBit(oldp+348,(vlSelf->ysyx_22040175_top__DOT__id_time_set));
            tracep->chgBit(oldp+349,(vlSelf->ysyx_22040175_top__DOT__delay_sig_jalr));
            tracep->chgBit(oldp+350,(vlSelf->ysyx_22040175_top__DOT__id_reg_wen));
            tracep->chgCData(oldp+351,(vlSelf->ysyx_22040175_top__DOT__id_reg_waddr),5);
            tracep->chgQData(oldp+352,(vlSelf->ysyx_22040175_top__DOT__id_imm),64);
            tracep->chgCData(oldp+354,(vlSelf->ysyx_22040175_top__DOT__id_alu_op),5);
            tracep->chgCData(oldp+355,(vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel),2);
            tracep->chgQData(oldp+356,(vlSelf->ysyx_22040175_top__DOT__id_unknown_code),64);
            tracep->chgBit(oldp+358,(vlSelf->ysyx_22040175_top__DOT__id_jalr));
            tracep->chgBit(oldp+359,(vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag));
            tracep->chgCData(oldp+360,(vlSelf->ysyx_22040175_top__DOT__id_wmask),8);
            tracep->chgBit(oldp+361,(vlSelf->ysyx_22040175_top__DOT__id_s_flag));
            tracep->chgIData(oldp+362,(vlSelf->ysyx_22040175_top__DOT__id_s_imm),32);
            tracep->chgCData(oldp+363,(vlSelf->ysyx_22040175_top__DOT__id_expand_signed),4);
            tracep->chgCData(oldp+364,(vlSelf->ysyx_22040175_top__DOT__id_rd_flag),3);
            tracep->chgCData(oldp+365,(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag),3);
            tracep->chgBit(oldp+366,(vlSelf->ysyx_22040175_top__DOT__rest_from_id));
            tracep->chgBit(oldp+367,(vlSelf->ysyx_22040175_top__DOT__id_control_rest));
            tracep->chgBit(oldp+368,(vlSelf->ysyx_22040175_top__DOT__rest_wb_hazard));
            tracep->chgBit(oldp+369,(vlSelf->ysyx_22040175_top__DOT__id_cunqu_hazard));
            tracep->chgQData(oldp+370,(vlSelf->ysyx_22040175_top__DOT__ex_pc),64);
            tracep->chgBit(oldp+372,(vlSelf->ysyx_22040175_top__DOT__ex_reg_wen));
            tracep->chgCData(oldp+373,(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr),5);
            tracep->chgCData(oldp+374,(vlSelf->ysyx_22040175_top__DOT__ex_alu_op),5);
            tracep->chgQData(oldp+375,(vlSelf->ysyx_22040175_top__DOT__ex_unknown_code),64);
            tracep->chgBit(oldp+377,(vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag));
            tracep->chgCData(oldp+378,(vlSelf->ysyx_22040175_top__DOT__ex_wmask),8);
            tracep->chgBit(oldp+379,(vlSelf->ysyx_22040175_top__DOT__ex_s_flag));
            tracep->chgIData(oldp+380,(vlSelf->ysyx_22040175_top__DOT__ex_s_imm),32);
            tracep->chgCData(oldp+381,(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed),4);
            tracep->chgCData(oldp+382,(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag),3);
            tracep->chgCData(oldp+383,(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag),3);
            tracep->chgBit(oldp+384,(vlSelf->ysyx_22040175_top__DOT__ex_ena));
            tracep->chgBit(oldp+385,(vlSelf->ysyx_22040175_top__DOT__ex_rest_id_mem));
            tracep->chgIData(oldp+386,((IData)(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst)),32);
            tracep->chgQData(oldp+387,(vlSelf->ysyx_22040175_top__DOT__ex_end_write_addr),64);
            tracep->chgBit(oldp+389,(vlSelf->ysyx_22040175_top__DOT__ex_cunqu_hazard));
            tracep->chgQData(oldp+390,(vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res),64);
            tracep->chgQData(oldp+392,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1),64);
            tracep->chgQData(oldp+394,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2),64);
            tracep->chgBit(oldp+396,(vlSelf->ysyx_22040175_top__DOT__mem_reg_wen));
            tracep->chgCData(oldp+397,(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr),5);
            tracep->chgBit(oldp+398,(vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag));
            tracep->chgCData(oldp+399,(vlSelf->ysyx_22040175_top__DOT__mem_wmask),8);
            tracep->chgBit(oldp+400,(vlSelf->ysyx_22040175_top__DOT__mem_s_flag));
            tracep->chgBit(oldp+401,(vlSelf->ysyx_22040175_top__DOT__mem_time_set));
            tracep->chgIData(oldp+402,(vlSelf->ysyx_22040175_top__DOT__mem_s_imm),32);
            tracep->chgCData(oldp+403,(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed),4);
            tracep->chgCData(oldp+404,(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag),3);
            tracep->chgCData(oldp+405,(vlSelf->ysyx_22040175_top__DOT__mem_alu_op),5);
            tracep->chgQData(oldp+406,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src1),64);
            tracep->chgQData(oldp+408,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src2),64);
            tracep->chgQData(oldp+410,(vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res),64);
            tracep->chgQData(oldp+412,(vlSelf->ysyx_22040175_top__DOT__mem_pc),64);
            tracep->chgQData(oldp+414,(vlSelf->ysyx_22040175_top__DOT__mem_end_write_addr),64);
            tracep->chgBit(oldp+416,(vlSelf->ysyx_22040175_top__DOT__mem_cunqu_hazard));
            tracep->chgQData(oldp+417,(vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res),64);
            tracep->chgQData(oldp+419,(vlSelf->ysyx_22040175_top__DOT__wb_hazard_result),64);
            tracep->chgBit(oldp+421,(vlSelf->ysyx_22040175_top__DOT__wb_reg_wen));
            tracep->chgCData(oldp+422,(vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr),5);
            tracep->chgCData(oldp+423,(vlSelf->ysyx_22040175_top__DOT__wb_wmask),8);
            tracep->chgBit(oldp+424,(vlSelf->ysyx_22040175_top__DOT__wb_s_flag));
            tracep->chgBit(oldp+425,(vlSelf->ysyx_22040175_top__DOT__wb_time_set));
            tracep->chgIData(oldp+426,(vlSelf->ysyx_22040175_top__DOT__wb_s_imm),32);
            tracep->chgCData(oldp+427,(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed),4);
            tracep->chgBit(oldp+428,(vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag));
            tracep->chgCData(oldp+429,(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag),3);
            tracep->chgQData(oldp+430,(vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res),64);
            tracep->chgQData(oldp+432,(vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res),64);
            tracep->chgQData(oldp+434,(vlSelf->ysyx_22040175_top__DOT__wb_pc),64);
            tracep->chgBit(oldp+436,(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem));
            tracep->chgQData(oldp+437,(vlSelf->ysyx_22040175_top__DOT__wb_end_write_addr),64);
            tracep->chgBit(oldp+439,(vlSelf->ysyx_22040175_top__DOT__wb_cunqu_hazard));
            tracep->chgQData(oldp+440,(vlSelf->ysyx_22040175_top__DOT__wb_delay_pc),64);
            tracep->chgQData(oldp+442,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata),64);
            tracep->chgBit(oldp+444,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_pc_predict__DOT__delay_sig_jalr));
            tracep->chgQData(oldp+445,((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))),64);
            tracep->chgBit(oldp+447,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch));
            tracep->chgBit(oldp+448,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump));
            tracep->chgCData(oldp+449,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op),3);
            tracep->chgCData(oldp+450,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr),5);
            tracep->chgCData(oldp+451,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr),5);
            tracep->chgQData(oldp+452,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__delay_reg1_rdata),64);
            tracep->chgCData(oldp+454,((0x7fU & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))),7);
            tracep->chgCData(oldp+455,((7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))),3);
            tracep->chgCData(oldp+456,((0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U)))),7);
            tracep->chgCData(oldp+457,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 7U)))),5);
            tracep->chgCData(oldp+458,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xfU)))),5);
            tracep->chgCData(oldp+459,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x14U)))),5);
            VL_EXTEND_WQ(65,64, __Vtemp25, vlSelf->ysyx_22040175_top__DOT__id_pc);
            tracep->chgWData(oldp+460,(__Vtemp25),65);
            tracep->chgBit(oldp+463,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem));
            tracep->chgBit(oldp+464,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_rest_id_mem));
            tracep->chgBit(oldp+465,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_control_rest));
            tracep->chgCData(oldp+466,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr),5);
            tracep->chgCData(oldp+467,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond),3);
            tracep->chgQData(oldp+468,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg2_rdata),64);
            tracep->chgQData(oldp+470,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst),64);
            tracep->chgBit(oldp+472,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__zero));
            tracep->chgCData(oldp+473,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__test),3);
            tracep->chgQData(oldp+474,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res),64);
            tracep->chgQData(oldp+476,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1),64);
            tracep->chgQData(oldp+478,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2),64);
            tracep->chgQData(oldp+480,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw),64);
            tracep->chgQData(oldp+482,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res),64);
            tracep->chgBit(oldp+484,(vlSelf->ysyx_22040175_top__DOT__u_mem_wb_regs__DOT__ex_pc_ready_mem_wb_o));
            tracep->chgQData(oldp+485,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata),64);
            tracep->chgQData(oldp+487,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0]),64);
            tracep->chgQData(oldp+489,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[1]),64);
            tracep->chgQData(oldp+491,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[2]),64);
            tracep->chgQData(oldp+493,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[3]),64);
            tracep->chgQData(oldp+495,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[4]),64);
            tracep->chgQData(oldp+497,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[5]),64);
            tracep->chgQData(oldp+499,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[6]),64);
            tracep->chgQData(oldp+501,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[7]),64);
            tracep->chgQData(oldp+503,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[8]),64);
            tracep->chgQData(oldp+505,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[9]),64);
            tracep->chgQData(oldp+507,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[10]),64);
            tracep->chgQData(oldp+509,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[11]),64);
            tracep->chgQData(oldp+511,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[12]),64);
            tracep->chgQData(oldp+513,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[13]),64);
            tracep->chgQData(oldp+515,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[14]),64);
            tracep->chgQData(oldp+517,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[15]),64);
            tracep->chgQData(oldp+519,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[16]),64);
            tracep->chgQData(oldp+521,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[17]),64);
            tracep->chgQData(oldp+523,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[18]),64);
            tracep->chgQData(oldp+525,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[19]),64);
            tracep->chgQData(oldp+527,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[20]),64);
            tracep->chgQData(oldp+529,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[21]),64);
            tracep->chgQData(oldp+531,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[22]),64);
            tracep->chgQData(oldp+533,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[23]),64);
            tracep->chgQData(oldp+535,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[24]),64);
            tracep->chgQData(oldp+537,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[25]),64);
            tracep->chgQData(oldp+539,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[26]),64);
            tracep->chgQData(oldp+541,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[27]),64);
            tracep->chgQData(oldp+543,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[28]),64);
            tracep->chgQData(oldp+545,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[29]),64);
            tracep->chgQData(oldp+547,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[30]),64);
            tracep->chgQData(oldp+549,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[31]),64);
        }
        tracep->chgBit(oldp+551,(vlSelf->clk));
        tracep->chgBit(oldp+552,(vlSelf->rst));
        tracep->chgIData(oldp+553,(vlSelf->inst),32);
        tracep->chgIData(oldp+554,(vlSelf->pc),32);
        tracep->chgQData(oldp+555,(vlSelf->unknown_code),64);
        tracep->chgBit(oldp+557,(vlSelf->time_set));
        tracep->chgIData(oldp+558,(vlSelf->diff_pc),32);
        tracep->chgIData(oldp+559,(vlSelf->diff_delay_pc),32);
        tracep->chgBit(oldp+560,(vlSelf->out_mem_rd_buf_flag));
        tracep->chgQData(oldp+561,(((IData)(vlSelf->ysyx_22040175_top__DOT__id_s_flag)
                                     ? vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                                    [vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr]
                                     : 0ULL)),64);
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
