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
            tracep->chgQData(oldp+0,(vlSelf->ysyx_22040175_top__DOT__id_next_pc),64);
            tracep->chgBit(oldp+2,(vlSelf->ysyx_22040175_top__DOT__if_ena));
            tracep->chgIData(oldp+3,((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata)),32);
            tracep->chgQData(oldp+4,(vlSelf->ysyx_22040175_top__DOT__if_pc),64);
            tracep->chgBit(oldp+6,(vlSelf->ysyx_22040175_top__DOT__rest_id_mem));
            tracep->chgIData(oldp+7,(vlSelf->ysyx_22040175_top__DOT__id_inst),32);
            tracep->chgQData(oldp+8,(vlSelf->ysyx_22040175_top__DOT__id_pc),64);
            tracep->chgBit(oldp+10,(vlSelf->ysyx_22040175_top__DOT__id_ena));
            tracep->chgBit(oldp+11,(vlSelf->ysyx_22040175_top__DOT__id_time_set));
            tracep->chgBit(oldp+12,(vlSelf->ysyx_22040175_top__DOT__id_reg_wen));
            tracep->chgCData(oldp+13,(vlSelf->ysyx_22040175_top__DOT__id_reg_waddr),5);
            tracep->chgQData(oldp+14,(vlSelf->ysyx_22040175_top__DOT__id_alu_src1),64);
            tracep->chgQData(oldp+16,(vlSelf->ysyx_22040175_top__DOT__id_alu_src2),64);
            tracep->chgQData(oldp+18,(vlSelf->ysyx_22040175_top__DOT__id_imm),64);
            tracep->chgCData(oldp+20,(vlSelf->ysyx_22040175_top__DOT__id_alu_op),5);
            tracep->chgCData(oldp+21,(vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel),2);
            tracep->chgQData(oldp+22,(vlSelf->ysyx_22040175_top__DOT__id_unknown_code),64);
            tracep->chgBit(oldp+24,(vlSelf->ysyx_22040175_top__DOT__id_jalr));
            tracep->chgBit(oldp+25,(vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag));
            tracep->chgCData(oldp+26,(vlSelf->ysyx_22040175_top__DOT__id_wmask),8);
            tracep->chgBit(oldp+27,(vlSelf->ysyx_22040175_top__DOT__id_s_flag));
            tracep->chgIData(oldp+28,(vlSelf->ysyx_22040175_top__DOT__id_s_imm),32);
            tracep->chgCData(oldp+29,(vlSelf->ysyx_22040175_top__DOT__id_expand_signed),4);
            tracep->chgCData(oldp+30,(vlSelf->ysyx_22040175_top__DOT__id_rd_flag),3);
            tracep->chgCData(oldp+31,(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag),3);
            tracep->chgBit(oldp+32,(vlSelf->ysyx_22040175_top__DOT__rest_from_id));
            tracep->chgBit(oldp+33,(vlSelf->ysyx_22040175_top__DOT__id_control_rest));
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22040175_top__DOT__ex_pc),64);
            tracep->chgBit(oldp+36,(vlSelf->ysyx_22040175_top__DOT__ex_reg_wen));
            tracep->chgCData(oldp+37,(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr),5);
            tracep->chgCData(oldp+38,(vlSelf->ysyx_22040175_top__DOT__ex_alu_op),5);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22040175_top__DOT__ex_unknown_code),64);
            tracep->chgBit(oldp+41,(vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag));
            tracep->chgCData(oldp+42,(vlSelf->ysyx_22040175_top__DOT__ex_wmask),8);
            tracep->chgBit(oldp+43,(vlSelf->ysyx_22040175_top__DOT__ex_s_flag));
            tracep->chgIData(oldp+44,(vlSelf->ysyx_22040175_top__DOT__ex_s_imm),32);
            tracep->chgCData(oldp+45,(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed),4);
            tracep->chgCData(oldp+46,(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag),3);
            tracep->chgBit(oldp+47,(vlSelf->ysyx_22040175_top__DOT__ex_ena));
            tracep->chgBit(oldp+48,(vlSelf->ysyx_22040175_top__DOT__ex_rest_id_mem));
            tracep->chgIData(oldp+49,((IData)(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst)),32);
            tracep->chgQData(oldp+50,(vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2),64);
            tracep->chgBit(oldp+56,(vlSelf->ysyx_22040175_top__DOT__mem_reg_wen));
            tracep->chgCData(oldp+57,(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr),5);
            tracep->chgBit(oldp+58,(vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag));
            tracep->chgCData(oldp+59,(vlSelf->ysyx_22040175_top__DOT__mem_wmask),8);
            tracep->chgBit(oldp+60,(vlSelf->ysyx_22040175_top__DOT__mem_s_flag));
            tracep->chgBit(oldp+61,(vlSelf->ysyx_22040175_top__DOT__mem_time_set));
            tracep->chgIData(oldp+62,(vlSelf->ysyx_22040175_top__DOT__mem_s_imm),32);
            tracep->chgCData(oldp+63,(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed),4);
            tracep->chgCData(oldp+64,(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag),3);
            tracep->chgCData(oldp+65,(vlSelf->ysyx_22040175_top__DOT__mem_alu_op),5);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src1),64);
            tracep->chgQData(oldp+68,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src2),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22040175_top__DOT__mem_pc),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res),64);
            tracep->chgBit(oldp+76,(vlSelf->ysyx_22040175_top__DOT__wb_reg_wen));
            tracep->chgCData(oldp+77,(vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr),5);
            tracep->chgCData(oldp+78,(vlSelf->ysyx_22040175_top__DOT__wb_wmask),8);
            tracep->chgBit(oldp+79,(vlSelf->ysyx_22040175_top__DOT__wb_s_flag));
            tracep->chgBit(oldp+80,(vlSelf->ysyx_22040175_top__DOT__wb_time_set));
            tracep->chgIData(oldp+81,(vlSelf->ysyx_22040175_top__DOT__wb_s_imm),32);
            tracep->chgCData(oldp+82,(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed),4);
            tracep->chgBit(oldp+83,(vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag));
            tracep->chgCData(oldp+84,(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag),3);
            tracep->chgQData(oldp+85,(vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res),64);
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22040175_top__DOT__wb_pc),64);
            tracep->chgBit(oldp+91,(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem));
            tracep->chgQData(oldp+92,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0]),64);
            tracep->chgQData(oldp+94,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[1]),64);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[2]),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[3]),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[4]),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[5]),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[6]),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[7]),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[8]),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[9]),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[10]),64);
            tracep->chgQData(oldp+114,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[11]),64);
            tracep->chgQData(oldp+116,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[12]),64);
            tracep->chgQData(oldp+118,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[13]),64);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[14]),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[15]),64);
            tracep->chgQData(oldp+124,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[16]),64);
            tracep->chgQData(oldp+126,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[17]),64);
            tracep->chgQData(oldp+128,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[18]),64);
            tracep->chgQData(oldp+130,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[19]),64);
            tracep->chgQData(oldp+132,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[20]),64);
            tracep->chgQData(oldp+134,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[21]),64);
            tracep->chgQData(oldp+136,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[22]),64);
            tracep->chgQData(oldp+138,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[23]),64);
            tracep->chgQData(oldp+140,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[24]),64);
            tracep->chgQData(oldp+142,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[25]),64);
            tracep->chgQData(oldp+144,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[26]),64);
            tracep->chgQData(oldp+146,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[27]),64);
            tracep->chgQData(oldp+148,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[28]),64);
            tracep->chgQData(oldp+150,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[29]),64);
            tracep->chgQData(oldp+152,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[30]),64);
            tracep->chgQData(oldp+154,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[31]),64);
            tracep->chgQData(oldp+156,(vlSelf->ysyx_22040175_top__DOT__wb_delay_pc),64);
            tracep->chgQData(oldp+158,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata),64);
            tracep->chgQData(oldp+160,((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))),64);
            tracep->chgQData(oldp+162,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0]),64);
            tracep->chgQData(oldp+164,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[1]),64);
            tracep->chgQData(oldp+166,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[2]),64);
            tracep->chgQData(oldp+168,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[3]),64);
            tracep->chgQData(oldp+170,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[4]),64);
            tracep->chgQData(oldp+172,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[5]),64);
            tracep->chgQData(oldp+174,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[6]),64);
            tracep->chgQData(oldp+176,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[7]),64);
            tracep->chgQData(oldp+178,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[8]),64);
            tracep->chgQData(oldp+180,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[9]),64);
            tracep->chgQData(oldp+182,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[10]),64);
            tracep->chgQData(oldp+184,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[11]),64);
            tracep->chgQData(oldp+186,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[12]),64);
            tracep->chgQData(oldp+188,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[13]),64);
            tracep->chgQData(oldp+190,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[14]),64);
            tracep->chgQData(oldp+192,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[15]),64);
            tracep->chgQData(oldp+194,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[16]),64);
            tracep->chgQData(oldp+196,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[17]),64);
            tracep->chgQData(oldp+198,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[18]),64);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[19]),64);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[20]),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[21]),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[22]),64);
            tracep->chgQData(oldp+208,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[23]),64);
            tracep->chgQData(oldp+210,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[24]),64);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[25]),64);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[26]),64);
            tracep->chgQData(oldp+216,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[27]),64);
            tracep->chgQData(oldp+218,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[28]),64);
            tracep->chgQData(oldp+220,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[29]),64);
            tracep->chgQData(oldp+222,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[30]),64);
            tracep->chgQData(oldp+224,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[31]),64);
            tracep->chgBit(oldp+226,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch));
            tracep->chgBit(oldp+227,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump));
            tracep->chgQData(oldp+228,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata),64);
            tracep->chgQData(oldp+230,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata),64);
            tracep->chgCData(oldp+232,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op),3);
            tracep->chgCData(oldp+233,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr),5);
            tracep->chgCData(oldp+234,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr),5);
            tracep->chgCData(oldp+235,((0x7fU & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))),7);
            tracep->chgCData(oldp+236,((7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))),3);
            tracep->chgCData(oldp+237,((0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U)))),7);
            tracep->chgCData(oldp+238,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 7U)))),5);
            tracep->chgCData(oldp+239,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xfU)))),5);
            tracep->chgCData(oldp+240,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x14U)))),5);
            VL_EXTEND_WQ(65,64, __Vtemp25, vlSelf->ysyx_22040175_top__DOT__id_pc);
            tracep->chgWData(oldp+241,(__Vtemp25),65);
            tracep->chgQData(oldp+244,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0]),64);
            tracep->chgQData(oldp+246,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[1]),64);
            tracep->chgQData(oldp+248,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[2]),64);
            tracep->chgQData(oldp+250,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[3]),64);
            tracep->chgQData(oldp+252,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[4]),64);
            tracep->chgQData(oldp+254,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[5]),64);
            tracep->chgQData(oldp+256,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[6]),64);
            tracep->chgQData(oldp+258,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[7]),64);
            tracep->chgQData(oldp+260,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[8]),64);
            tracep->chgQData(oldp+262,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[9]),64);
            tracep->chgQData(oldp+264,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[10]),64);
            tracep->chgQData(oldp+266,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[11]),64);
            tracep->chgQData(oldp+268,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[12]),64);
            tracep->chgQData(oldp+270,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[13]),64);
            tracep->chgQData(oldp+272,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[14]),64);
            tracep->chgQData(oldp+274,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[15]),64);
            tracep->chgQData(oldp+276,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[16]),64);
            tracep->chgQData(oldp+278,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[17]),64);
            tracep->chgQData(oldp+280,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[18]),64);
            tracep->chgQData(oldp+282,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[19]),64);
            tracep->chgQData(oldp+284,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[20]),64);
            tracep->chgQData(oldp+286,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[21]),64);
            tracep->chgQData(oldp+288,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[22]),64);
            tracep->chgQData(oldp+290,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[23]),64);
            tracep->chgQData(oldp+292,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[24]),64);
            tracep->chgQData(oldp+294,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[25]),64);
            tracep->chgQData(oldp+296,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[26]),64);
            tracep->chgQData(oldp+298,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[27]),64);
            tracep->chgQData(oldp+300,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[28]),64);
            tracep->chgQData(oldp+302,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[29]),64);
            tracep->chgQData(oldp+304,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[30]),64);
            tracep->chgQData(oldp+306,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[31]),64);
            tracep->chgCData(oldp+308,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__test),3);
            tracep->chgQData(oldp+309,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0]),64);
            tracep->chgQData(oldp+311,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[1]),64);
            tracep->chgQData(oldp+313,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[2]),64);
            tracep->chgQData(oldp+315,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[3]),64);
            tracep->chgQData(oldp+317,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[4]),64);
            tracep->chgQData(oldp+319,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[5]),64);
            tracep->chgQData(oldp+321,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[6]),64);
            tracep->chgQData(oldp+323,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[7]),64);
            tracep->chgQData(oldp+325,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[8]),64);
            tracep->chgQData(oldp+327,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[9]),64);
            tracep->chgQData(oldp+329,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[10]),64);
            tracep->chgQData(oldp+331,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[11]),64);
            tracep->chgQData(oldp+333,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[12]),64);
            tracep->chgQData(oldp+335,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[13]),64);
            tracep->chgQData(oldp+337,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[14]),64);
            tracep->chgQData(oldp+339,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[15]),64);
            tracep->chgQData(oldp+341,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[16]),64);
            tracep->chgQData(oldp+343,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[17]),64);
            tracep->chgQData(oldp+345,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[18]),64);
            tracep->chgQData(oldp+347,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[19]),64);
            tracep->chgQData(oldp+349,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[20]),64);
            tracep->chgQData(oldp+351,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[21]),64);
            tracep->chgQData(oldp+353,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[22]),64);
            tracep->chgQData(oldp+355,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[23]),64);
            tracep->chgQData(oldp+357,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[24]),64);
            tracep->chgQData(oldp+359,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[25]),64);
            tracep->chgQData(oldp+361,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[26]),64);
            tracep->chgQData(oldp+363,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[27]),64);
            tracep->chgQData(oldp+365,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[28]),64);
            tracep->chgQData(oldp+367,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[29]),64);
            tracep->chgQData(oldp+369,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[30]),64);
            tracep->chgQData(oldp+371,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[31]),64);
            tracep->chgBit(oldp+373,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero));
            tracep->chgQData(oldp+374,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1),64);
            tracep->chgQData(oldp+376,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2),64);
            tracep->chgCData(oldp+378,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__test),3);
            tracep->chgQData(oldp+379,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst),64);
            tracep->chgBit(oldp+381,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__zero));
            tracep->chgQData(oldp+382,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1),64);
            tracep->chgQData(oldp+384,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2),64);
            tracep->chgQData(oldp+386,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw),64);
            tracep->chgBit(oldp+388,(vlSelf->ysyx_22040175_top__DOT__u_mem_wb_regs__DOT__ex_pc_ready_mem_wb_o));
            tracep->chgQData(oldp+389,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[0]),64);
            tracep->chgQData(oldp+391,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[1]),64);
            tracep->chgQData(oldp+393,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[2]),64);
            tracep->chgQData(oldp+395,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[3]),64);
            tracep->chgQData(oldp+397,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[4]),64);
            tracep->chgQData(oldp+399,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[5]),64);
            tracep->chgQData(oldp+401,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[6]),64);
            tracep->chgQData(oldp+403,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[7]),64);
            tracep->chgQData(oldp+405,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[8]),64);
            tracep->chgQData(oldp+407,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[9]),64);
            tracep->chgQData(oldp+409,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[10]),64);
            tracep->chgQData(oldp+411,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[11]),64);
            tracep->chgQData(oldp+413,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[12]),64);
            tracep->chgQData(oldp+415,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[13]),64);
            tracep->chgQData(oldp+417,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[14]),64);
            tracep->chgQData(oldp+419,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[15]),64);
            tracep->chgQData(oldp+421,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[16]),64);
            tracep->chgQData(oldp+423,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[17]),64);
            tracep->chgQData(oldp+425,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[18]),64);
            tracep->chgQData(oldp+427,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[19]),64);
            tracep->chgQData(oldp+429,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[20]),64);
            tracep->chgQData(oldp+431,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[21]),64);
            tracep->chgQData(oldp+433,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[22]),64);
            tracep->chgQData(oldp+435,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[23]),64);
            tracep->chgQData(oldp+437,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[24]),64);
            tracep->chgQData(oldp+439,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[25]),64);
            tracep->chgQData(oldp+441,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[26]),64);
            tracep->chgQData(oldp+443,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[27]),64);
            tracep->chgQData(oldp+445,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[28]),64);
            tracep->chgQData(oldp+447,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[29]),64);
            tracep->chgQData(oldp+449,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[30]),64);
            tracep->chgQData(oldp+451,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[31]),64);
            tracep->chgBit(oldp+453,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__write_ready));
            tracep->chgQData(oldp+454,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata),64);
        }
        tracep->chgBit(oldp+456,(vlSelf->clk));
        tracep->chgBit(oldp+457,(vlSelf->rst));
        tracep->chgIData(oldp+458,(vlSelf->inst),32);
        tracep->chgIData(oldp+459,(vlSelf->pc),32);
        tracep->chgQData(oldp+460,(vlSelf->unknown_code),64);
        tracep->chgBit(oldp+462,(vlSelf->time_set));
        tracep->chgIData(oldp+463,(vlSelf->diff_pc),32);
        tracep->chgIData(oldp+464,(vlSelf->diff_delay_pc),32);
        tracep->chgBit(oldp+465,(vlSelf->ysyx_22040175_top__DOT__rst_n));
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
