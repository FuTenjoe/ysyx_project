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
    VlWide<5>/*159:0*/ __Vtemp228;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->ysyx_22040175_top__DOT__if_ena));
            tracep->chgIData(oldp+1,((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata)),32);
            tracep->chgQData(oldp+2,(vlSelf->ysyx_22040175_top__DOT__if_pc),64);
            tracep->chgBit(oldp+4,(vlSelf->ysyx_22040175_top__DOT__rest_id_mem));
            tracep->chgIData(oldp+5,(vlSelf->ysyx_22040175_top__DOT__id_inst),32);
            tracep->chgQData(oldp+6,(vlSelf->ysyx_22040175_top__DOT__id_pc),64);
            tracep->chgBit(oldp+8,(vlSelf->ysyx_22040175_top__DOT__id_ena));
            tracep->chgBit(oldp+9,(vlSelf->ysyx_22040175_top__DOT__id_time_set));
            tracep->chgBit(oldp+10,(vlSelf->ysyx_22040175_top__DOT__delay_sig_jalr));
            tracep->chgBit(oldp+11,(vlSelf->ysyx_22040175_top__DOT__id_reg_wen));
            tracep->chgCData(oldp+12,(vlSelf->ysyx_22040175_top__DOT__id_reg_waddr),5);
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22040175_top__DOT__id_imm),64);
            tracep->chgCData(oldp+15,(vlSelf->ysyx_22040175_top__DOT__id_alu_op),5);
            tracep->chgCData(oldp+16,(vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel),2);
            tracep->chgQData(oldp+17,(vlSelf->ysyx_22040175_top__DOT__id_unknown_code),64);
            tracep->chgBit(oldp+19,(vlSelf->ysyx_22040175_top__DOT__id_jalr));
            tracep->chgBit(oldp+20,(vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag));
            tracep->chgCData(oldp+21,(vlSelf->ysyx_22040175_top__DOT__id_wmask),8);
            tracep->chgBit(oldp+22,(vlSelf->ysyx_22040175_top__DOT__id_s_flag));
            tracep->chgIData(oldp+23,(vlSelf->ysyx_22040175_top__DOT__id_s_imm),32);
            tracep->chgCData(oldp+24,(vlSelf->ysyx_22040175_top__DOT__id_expand_signed),4);
            tracep->chgCData(oldp+25,(vlSelf->ysyx_22040175_top__DOT__id_rd_flag),3);
            tracep->chgCData(oldp+26,(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag),3);
            tracep->chgBit(oldp+27,(vlSelf->ysyx_22040175_top__DOT__rest_from_id));
            tracep->chgBit(oldp+28,(vlSelf->ysyx_22040175_top__DOT__id_control_rest));
            tracep->chgBit(oldp+29,(vlSelf->ysyx_22040175_top__DOT__rest_wb_hazard));
            tracep->chgBit(oldp+30,(vlSelf->ysyx_22040175_top__DOT__id_mul));
            tracep->chgBit(oldp+31,(vlSelf->ysyx_22040175_top__DOT__id_cunqu_hazard));
            tracep->chgQData(oldp+32,(vlSelf->ysyx_22040175_top__DOT__ex_pc),64);
            tracep->chgBit(oldp+34,(vlSelf->ysyx_22040175_top__DOT__ex_reg_wen));
            tracep->chgCData(oldp+35,(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr),5);
            tracep->chgCData(oldp+36,(vlSelf->ysyx_22040175_top__DOT__ex_alu_op),5);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22040175_top__DOT__ex_unknown_code),64);
            tracep->chgBit(oldp+39,(vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag));
            tracep->chgCData(oldp+40,(vlSelf->ysyx_22040175_top__DOT__ex_wmask),8);
            tracep->chgBit(oldp+41,(vlSelf->ysyx_22040175_top__DOT__ex_s_flag));
            tracep->chgIData(oldp+42,(vlSelf->ysyx_22040175_top__DOT__ex_s_imm),32);
            tracep->chgCData(oldp+43,(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed),4);
            tracep->chgCData(oldp+44,(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag),3);
            tracep->chgCData(oldp+45,(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag),3);
            tracep->chgBit(oldp+46,(vlSelf->ysyx_22040175_top__DOT__ex_ena));
            tracep->chgBit(oldp+47,(vlSelf->ysyx_22040175_top__DOT__ex_rest_id_mem));
            tracep->chgIData(oldp+48,((IData)(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst)),32);
            tracep->chgBit(oldp+49,(vlSelf->ysyx_22040175_top__DOT__ex_cunqu_hazard));
            tracep->chgBit(oldp+50,(vlSelf->ysyx_22040175_top__DOT__ex_id_mul));
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2),64);
            tracep->chgBit(oldp+57,(vlSelf->ysyx_22040175_top__DOT__sh_fnsh_flag));
            tracep->chgBit(oldp+58,(vlSelf->ysyx_22040175_top__DOT__mem_reg_wen));
            tracep->chgCData(oldp+59,(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr),5);
            tracep->chgBit(oldp+60,(vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag));
            tracep->chgCData(oldp+61,(vlSelf->ysyx_22040175_top__DOT__mem_wmask),8);
            tracep->chgBit(oldp+62,(vlSelf->ysyx_22040175_top__DOT__mem_s_flag));
            tracep->chgBit(oldp+63,(vlSelf->ysyx_22040175_top__DOT__mem_time_set));
            tracep->chgIData(oldp+64,(vlSelf->ysyx_22040175_top__DOT__mem_s_imm),32);
            tracep->chgCData(oldp+65,(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed),4);
            tracep->chgCData(oldp+66,(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag),3);
            tracep->chgCData(oldp+67,(vlSelf->ysyx_22040175_top__DOT__mem_alu_op),5);
            tracep->chgQData(oldp+68,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src1),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src2),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22040175_top__DOT__mem_pc),64);
            tracep->chgBit(oldp+76,(vlSelf->ysyx_22040175_top__DOT__mem_cunqu_hazard));
            tracep->chgQData(oldp+77,(vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res),64);
            tracep->chgQData(oldp+79,(vlSelf->ysyx_22040175_top__DOT__wb_hazard_result),64);
            tracep->chgBit(oldp+81,(vlSelf->ysyx_22040175_top__DOT__wb_reg_wen));
            tracep->chgCData(oldp+82,(vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr),5);
            tracep->chgCData(oldp+83,(vlSelf->ysyx_22040175_top__DOT__wb_wmask),8);
            tracep->chgBit(oldp+84,(vlSelf->ysyx_22040175_top__DOT__wb_s_flag));
            tracep->chgBit(oldp+85,(vlSelf->ysyx_22040175_top__DOT__wb_time_set));
            tracep->chgIData(oldp+86,(vlSelf->ysyx_22040175_top__DOT__wb_s_imm),32);
            tracep->chgCData(oldp+87,(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed),4);
            tracep->chgBit(oldp+88,(vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag));
            tracep->chgCData(oldp+89,(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag),3);
            tracep->chgQData(oldp+90,(vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res),64);
            tracep->chgQData(oldp+92,(vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res),64);
            tracep->chgQData(oldp+94,(vlSelf->ysyx_22040175_top__DOT__wb_pc),64);
            tracep->chgBit(oldp+96,(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem));
            tracep->chgBit(oldp+97,(vlSelf->ysyx_22040175_top__DOT__wb_cunqu_hazard));
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22040175_top__DOT__wb_delay_pc),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata),64);
            tracep->chgBit(oldp+102,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_pc_predict__DOT__delay_sig_jalr));
            tracep->chgQData(oldp+103,((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))),64);
            tracep->chgBit(oldp+105,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch));
            tracep->chgBit(oldp+106,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump));
            tracep->chgCData(oldp+107,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op),3);
            tracep->chgCData(oldp+108,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr),5);
            tracep->chgCData(oldp+109,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr),5);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__delay_reg1_rdata),64);
            tracep->chgCData(oldp+112,((0x7fU & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))),7);
            tracep->chgCData(oldp+113,((7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))),3);
            tracep->chgCData(oldp+114,((0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U)))),7);
            tracep->chgCData(oldp+115,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 7U)))),5);
            tracep->chgCData(oldp+116,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xfU)))),5);
            tracep->chgCData(oldp+117,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x14U)))),5);
            tracep->chgBit(oldp+118,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem));
            tracep->chgBit(oldp+119,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_rest_id_mem));
            tracep->chgBit(oldp+120,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_control_rest));
            tracep->chgCData(oldp+121,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr),5);
            tracep->chgCData(oldp+122,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond),3);
            tracep->chgQData(oldp+123,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg2_rdata),64);
            tracep->chgQData(oldp+125,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst),64);
            tracep->chgBit(oldp+127,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero));
            tracep->chgQData(oldp+128,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res),64);
            tracep->chgQData(oldp+130,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1),64);
            tracep->chgQData(oldp+132,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2),64);
            tracep->chgBit(oldp+134,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid));
            if (vlSelf->ysyx_22040175_top__DOT__sh_fnsh_flag) {
                __Vtemp228[0U] = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[0U];
                __Vtemp228[1U] = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[1U];
                __Vtemp228[2U] = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[2U];
                __Vtemp228[3U] = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[3U];
                __Vtemp228[4U] = vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p[4U];
            } else {
                __Vtemp228[0U] = 0U;
                __Vtemp228[1U] = 0U;
                __Vtemp228[2U] = 0U;
                __Vtemp228[3U] = 0U;
                __Vtemp228[4U] = 0U;
            }
            tracep->chgWData(oldp+135,(__Vtemp228),130);
            tracep->chgBit(oldp+140,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed));
            tracep->chgWData(oldp+141,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__delay_mul_res),130);
            tracep->chgBit(oldp+146,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__delay_sh_fg));
            tracep->chgCData(oldp+147,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_expand_signed),4);
            tracep->chgWData(oldp+148,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_x),130);
            tracep->chgWData(oldp+153,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__alu_y),66);
            tracep->chgBit(oldp+156,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_mul_valid));
            tracep->chgBit(oldp+157,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay1_sh_fg));
            tracep->chgBit(oldp+158,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay2_sh_fg));
            tracep->chgCData(oldp+159,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state),3);
            tracep->chgCData(oldp+160,(((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    ((((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U] 
                                                        | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U]) 
                                                       | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U]) 
                                                      | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U]) 
                                                     | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U]))
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__present_state))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    ((((vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[0U] 
                                                        | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[1U]) 
                                                       | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[2U]) 
                                                      | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[3U]) 
                                                     | vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y[4U]))
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  (((IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__mul_valid) 
                                                    & ((~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_mul_valid)) 
                                                       | (IData)(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay2_sh_fg)))
                                                    ? 1U
                                                    : 0U))))),3);
            tracep->chgWData(oldp+161,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__x),130);
            tracep->chgCData(oldp+166,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__y),3);
            tracep->chgWData(oldp+167,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__add_p),130);
            tracep->chgWData(oldp+172,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__reg_alu_y),130);
            tracep->chgWData(oldp+177,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__delay_alu_y),130);
            tracep->chgWData(oldp+182,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__p),130);
            tracep->chgWData(oldp+187,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__u_mul__DOT__ex_p),130);
            tracep->chgQData(oldp+192,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw),64);
            tracep->chgQData(oldp+194,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res),64);
            tracep->chgQData(oldp+196,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata),64);
            tracep->chgQData(oldp+198,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0]),64);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[1]),64);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[2]),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[3]),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[4]),64);
            tracep->chgQData(oldp+208,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[5]),64);
            tracep->chgQData(oldp+210,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[6]),64);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[7]),64);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[8]),64);
            tracep->chgQData(oldp+216,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[9]),64);
            tracep->chgQData(oldp+218,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[10]),64);
            tracep->chgQData(oldp+220,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[11]),64);
            tracep->chgQData(oldp+222,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[12]),64);
            tracep->chgQData(oldp+224,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[13]),64);
            tracep->chgQData(oldp+226,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[14]),64);
            tracep->chgQData(oldp+228,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[15]),64);
            tracep->chgQData(oldp+230,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[16]),64);
            tracep->chgQData(oldp+232,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[17]),64);
            tracep->chgQData(oldp+234,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[18]),64);
            tracep->chgQData(oldp+236,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[19]),64);
            tracep->chgQData(oldp+238,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[20]),64);
            tracep->chgQData(oldp+240,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[21]),64);
            tracep->chgQData(oldp+242,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[22]),64);
            tracep->chgQData(oldp+244,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[23]),64);
            tracep->chgQData(oldp+246,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[24]),64);
            tracep->chgQData(oldp+248,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[25]),64);
            tracep->chgQData(oldp+250,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[26]),64);
            tracep->chgQData(oldp+252,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[27]),64);
            tracep->chgQData(oldp+254,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[28]),64);
            tracep->chgQData(oldp+256,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[29]),64);
            tracep->chgQData(oldp+258,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[30]),64);
            tracep->chgQData(oldp+260,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+262,(vlSelf->ysyx_22040175_top__DOT__rst_n));
            tracep->chgQData(oldp+263,(vlSelf->ysyx_22040175_top__DOT__id_next_pc),64);
            tracep->chgQData(oldp+265,(vlSelf->ysyx_22040175_top__DOT__id_alu_src1),64);
            tracep->chgQData(oldp+267,(vlSelf->ysyx_22040175_top__DOT__id_alu_src2),64);
            tracep->chgBit(oldp+269,(vlSelf->ysyx_22040175_top__DOT__sig_jalr));
            tracep->chgQData(oldp+270,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0]),64);
            tracep->chgQData(oldp+272,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[1]),64);
            tracep->chgQData(oldp+274,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[2]),64);
            tracep->chgQData(oldp+276,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[3]),64);
            tracep->chgQData(oldp+278,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[4]),64);
            tracep->chgQData(oldp+280,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[5]),64);
            tracep->chgQData(oldp+282,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[6]),64);
            tracep->chgQData(oldp+284,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[7]),64);
            tracep->chgQData(oldp+286,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[8]),64);
            tracep->chgQData(oldp+288,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[9]),64);
            tracep->chgQData(oldp+290,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[10]),64);
            tracep->chgQData(oldp+292,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[11]),64);
            tracep->chgQData(oldp+294,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[12]),64);
            tracep->chgQData(oldp+296,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[13]),64);
            tracep->chgQData(oldp+298,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[14]),64);
            tracep->chgQData(oldp+300,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[15]),64);
            tracep->chgQData(oldp+302,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[16]),64);
            tracep->chgQData(oldp+304,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[17]),64);
            tracep->chgQData(oldp+306,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[18]),64);
            tracep->chgQData(oldp+308,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[19]),64);
            tracep->chgQData(oldp+310,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[20]),64);
            tracep->chgQData(oldp+312,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[21]),64);
            tracep->chgQData(oldp+314,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[22]),64);
            tracep->chgQData(oldp+316,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[23]),64);
            tracep->chgQData(oldp+318,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[24]),64);
            tracep->chgQData(oldp+320,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[25]),64);
            tracep->chgQData(oldp+322,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[26]),64);
            tracep->chgQData(oldp+324,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[27]),64);
            tracep->chgQData(oldp+326,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[28]),64);
            tracep->chgQData(oldp+328,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[29]),64);
            tracep->chgQData(oldp+330,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[30]),64);
            tracep->chgQData(oldp+332,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[31]),64);
            tracep->chgQData(oldp+334,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0]),64);
            tracep->chgQData(oldp+336,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[1]),64);
            tracep->chgQData(oldp+338,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[2]),64);
            tracep->chgQData(oldp+340,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[3]),64);
            tracep->chgQData(oldp+342,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[4]),64);
            tracep->chgQData(oldp+344,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[5]),64);
            tracep->chgQData(oldp+346,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[6]),64);
            tracep->chgQData(oldp+348,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[7]),64);
            tracep->chgQData(oldp+350,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[8]),64);
            tracep->chgQData(oldp+352,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[9]),64);
            tracep->chgQData(oldp+354,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[10]),64);
            tracep->chgQData(oldp+356,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[11]),64);
            tracep->chgQData(oldp+358,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[12]),64);
            tracep->chgQData(oldp+360,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[13]),64);
            tracep->chgQData(oldp+362,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[14]),64);
            tracep->chgQData(oldp+364,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[15]),64);
            tracep->chgQData(oldp+366,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[16]),64);
            tracep->chgQData(oldp+368,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[17]),64);
            tracep->chgQData(oldp+370,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[18]),64);
            tracep->chgQData(oldp+372,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[19]),64);
            tracep->chgQData(oldp+374,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[20]),64);
            tracep->chgQData(oldp+376,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[21]),64);
            tracep->chgQData(oldp+378,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[22]),64);
            tracep->chgQData(oldp+380,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[23]),64);
            tracep->chgQData(oldp+382,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[24]),64);
            tracep->chgQData(oldp+384,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[25]),64);
            tracep->chgQData(oldp+386,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[26]),64);
            tracep->chgQData(oldp+388,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[27]),64);
            tracep->chgQData(oldp+390,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[28]),64);
            tracep->chgQData(oldp+392,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[29]),64);
            tracep->chgQData(oldp+394,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[30]),64);
            tracep->chgQData(oldp+396,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[31]),64);
            tracep->chgQData(oldp+398,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata),64);
            tracep->chgQData(oldp+400,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata),64);
            tracep->chgCData(oldp+402,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond),3);
            tracep->chgQData(oldp+403,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0]),64);
            tracep->chgQData(oldp+405,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[1]),64);
            tracep->chgQData(oldp+407,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[2]),64);
            tracep->chgQData(oldp+409,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[3]),64);
            tracep->chgQData(oldp+411,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[4]),64);
            tracep->chgQData(oldp+413,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[5]),64);
            tracep->chgQData(oldp+415,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[6]),64);
            tracep->chgQData(oldp+417,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[7]),64);
            tracep->chgQData(oldp+419,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[8]),64);
            tracep->chgQData(oldp+421,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[9]),64);
            tracep->chgQData(oldp+423,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[10]),64);
            tracep->chgQData(oldp+425,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[11]),64);
            tracep->chgQData(oldp+427,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[12]),64);
            tracep->chgQData(oldp+429,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[13]),64);
            tracep->chgQData(oldp+431,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[14]),64);
            tracep->chgQData(oldp+433,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[15]),64);
            tracep->chgQData(oldp+435,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[16]),64);
            tracep->chgQData(oldp+437,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[17]),64);
            tracep->chgQData(oldp+439,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[18]),64);
            tracep->chgQData(oldp+441,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[19]),64);
            tracep->chgQData(oldp+443,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[20]),64);
            tracep->chgQData(oldp+445,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[21]),64);
            tracep->chgQData(oldp+447,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[22]),64);
            tracep->chgQData(oldp+449,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[23]),64);
            tracep->chgQData(oldp+451,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[24]),64);
            tracep->chgQData(oldp+453,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[25]),64);
            tracep->chgQData(oldp+455,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[26]),64);
            tracep->chgQData(oldp+457,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[27]),64);
            tracep->chgQData(oldp+459,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[28]),64);
            tracep->chgQData(oldp+461,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[29]),64);
            tracep->chgQData(oldp+463,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[30]),64);
            tracep->chgQData(oldp+465,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[31]),64);
            tracep->chgQData(oldp+467,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0]),64);
            tracep->chgQData(oldp+469,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[1]),64);
            tracep->chgQData(oldp+471,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[2]),64);
            tracep->chgQData(oldp+473,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[3]),64);
            tracep->chgQData(oldp+475,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[4]),64);
            tracep->chgQData(oldp+477,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[5]),64);
            tracep->chgQData(oldp+479,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[6]),64);
            tracep->chgQData(oldp+481,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[7]),64);
            tracep->chgQData(oldp+483,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[8]),64);
            tracep->chgQData(oldp+485,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[9]),64);
            tracep->chgQData(oldp+487,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[10]),64);
            tracep->chgQData(oldp+489,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[11]),64);
            tracep->chgQData(oldp+491,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[12]),64);
            tracep->chgQData(oldp+493,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[13]),64);
            tracep->chgQData(oldp+495,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[14]),64);
            tracep->chgQData(oldp+497,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[15]),64);
            tracep->chgQData(oldp+499,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[16]),64);
            tracep->chgQData(oldp+501,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[17]),64);
            tracep->chgQData(oldp+503,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[18]),64);
            tracep->chgQData(oldp+505,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[19]),64);
            tracep->chgQData(oldp+507,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[20]),64);
            tracep->chgQData(oldp+509,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[21]),64);
            tracep->chgQData(oldp+511,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[22]),64);
            tracep->chgQData(oldp+513,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[23]),64);
            tracep->chgQData(oldp+515,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[24]),64);
            tracep->chgQData(oldp+517,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[25]),64);
            tracep->chgQData(oldp+519,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[26]),64);
            tracep->chgQData(oldp+521,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[27]),64);
            tracep->chgQData(oldp+523,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[28]),64);
            tracep->chgQData(oldp+525,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[29]),64);
            tracep->chgQData(oldp+527,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[30]),64);
            tracep->chgQData(oldp+529,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[31]),64);
            tracep->chgBit(oldp+531,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero));
            tracep->chgQData(oldp+532,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1),64);
            tracep->chgQData(oldp+534,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2),64);
            tracep->chgQData(oldp+536,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[0]),64);
            tracep->chgQData(oldp+538,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[1]),64);
            tracep->chgQData(oldp+540,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[2]),64);
            tracep->chgQData(oldp+542,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[3]),64);
            tracep->chgQData(oldp+544,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[4]),64);
            tracep->chgQData(oldp+546,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[5]),64);
            tracep->chgQData(oldp+548,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[6]),64);
            tracep->chgQData(oldp+550,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[7]),64);
            tracep->chgQData(oldp+552,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[8]),64);
            tracep->chgQData(oldp+554,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[9]),64);
            tracep->chgQData(oldp+556,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[10]),64);
            tracep->chgQData(oldp+558,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[11]),64);
            tracep->chgQData(oldp+560,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[12]),64);
            tracep->chgQData(oldp+562,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[13]),64);
            tracep->chgQData(oldp+564,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[14]),64);
            tracep->chgQData(oldp+566,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[15]),64);
            tracep->chgQData(oldp+568,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[16]),64);
            tracep->chgQData(oldp+570,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[17]),64);
            tracep->chgQData(oldp+572,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[18]),64);
            tracep->chgQData(oldp+574,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[19]),64);
            tracep->chgQData(oldp+576,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[20]),64);
            tracep->chgQData(oldp+578,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[21]),64);
            tracep->chgQData(oldp+580,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[22]),64);
            tracep->chgQData(oldp+582,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[23]),64);
            tracep->chgQData(oldp+584,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[24]),64);
            tracep->chgQData(oldp+586,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[25]),64);
            tracep->chgQData(oldp+588,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[26]),64);
            tracep->chgQData(oldp+590,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[27]),64);
            tracep->chgQData(oldp+592,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[28]),64);
            tracep->chgQData(oldp+594,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[29]),64);
            tracep->chgQData(oldp+596,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[30]),64);
            tracep->chgQData(oldp+598,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[31]),64);
        }
        tracep->chgBit(oldp+600,(vlSelf->clk));
        tracep->chgBit(oldp+601,(vlSelf->rst));
        tracep->chgIData(oldp+602,(vlSelf->inst),32);
        tracep->chgIData(oldp+603,(vlSelf->pc),32);
        tracep->chgQData(oldp+604,(vlSelf->unknown_code),64);
        tracep->chgBit(oldp+606,(vlSelf->time_set));
        tracep->chgIData(oldp+607,(vlSelf->diff_pc),32);
        tracep->chgIData(oldp+608,(vlSelf->diff_delay_pc),32);
        tracep->chgBit(oldp+609,(vlSelf->out_mem_rd_buf_flag));
        tracep->chgQData(oldp+610,((vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
                                    [vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr] 
                                    + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__wb_s_imm)))),64);
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
