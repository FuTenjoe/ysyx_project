// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_wb_stage.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_wb_stage___ctor_var_reset(Vysyx_22040175_top_wb_stage* vlSelf);

Vysyx_22040175_top_wb_stage::Vysyx_22040175_top_wb_stage(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_wb_stage___ctor_var_reset(this);
}

void Vysyx_22040175_top_wb_stage::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_wb_stage::~Vysyx_22040175_top_wb_stage() {
}

void Vysyx_22040175_top_wb_stage____Vdpiimwrap_ebreak_TOP__ysyx_22040175_top__u_wb_stage();

void Vysyx_22040175_top_wb_stage___settle__TOP__ysyx_22040175_top__u_wb_stage__1(Vysyx_22040175_top_wb_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_wb_stage___settle__TOP__ysyx_22040175_top__u_wb_stage__1\n"); );
    // Body
    vlSelf->__PVT__wb_res_valid = (1U & (~ ((1U == (IData)(vlSelf->__PVT__present_state)) 
                                            | (2U == (IData)(vlSelf->__PVT__present_state)))));
    vlSelf->__PVT__axi_req = ((1U == (IData)(vlSelf->__PVT__present_state)) 
                              | (2U == (IData)(vlSelf->__PVT__present_state)));
    vlSelf->__PVT__waxi_valid = (1U == (IData)(vlSelf->__PVT__present_state));
    if (vlSelf->__PVT__ebreak_flag) {
        Vysyx_22040175_top_wb_stage____Vdpiimwrap_ebreak_TOP__ysyx_22040175_top__u_wb_stage();
    }
    vlSelf->__PVT__w_start = ((((IData)(vlSelf->__PVT__rst_n) 
                                & (IData)(vlSelf->__PVT__reg_wen)) 
                               & (0U != (IData)(vlSelf->__PVT__reg_waddr))) 
                              & (IData)(vlSelf->__PVT__s_flag));
    vlSelf->__PVT__reg_wdata = ((((((1U == (IData)(vlSelf->__PVT__rd_buf_flag)) 
                                    | (2U == (IData)(vlSelf->__PVT__rd_buf_flag))) 
                                   | (4U == (IData)(vlSelf->__PVT__rd_buf_flag))) 
                                  | (6U == (IData)(vlSelf->__PVT__rd_buf_flag))) 
                                 & (~ (IData)(vlSelf->__PVT__cunqu_hazard)))
                                 ? vlSelf->__PVT__from_mem_alu_res
                                 : vlSelf->__PVT__from_ex_alu_res);
    if (((((IData)(vlSelf->__PVT__rst_n) & (IData)(vlSelf->__PVT__reg_wen)) 
          & (0U != (IData)(vlSelf->__PVT__reg_waddr))) 
         & (~ (IData)(vlSelf->__PVT__s_flag)))) {
        vlSelf->__PVT__reg_f[vlSelf->__PVT__reg_waddr] 
            = ((0U == (IData)(vlSelf->__PVT__expand_signed))
                ? vlSelf->__PVT__reg_wdata : ((1U == (IData)(vlSelf->__PVT__expand_signed))
                                               ? VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__reg_wdata, 0x1fU)), 0x20U), 
                                                               VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__reg_wdata, 0U, 0x20U))
                                               : ((2U 
                                                   == (IData)(vlSelf->__PVT__expand_signed))
                                                   ? 
                                                  VL_EXTEND_QI(64,32, 
                                                               VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__reg_wdata, 0U, 0x20U))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->__PVT__expand_signed))
                                                    ? 
                                                   VL_CONCAT_QQI(64,48,16, 
                                                                 (0xffffffffffffULL 
                                                                  & VL_REPLICATE_QOI(48,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__reg_wdata, 0xfU)), 0x30U)), 
                                                                 (0xffffU 
                                                                  & VL_SEL_IQII(16,64,6,32, vlSelf->__PVT__reg_wdata, 0U, 0x10U)))
                                                    : 
                                                   VL_EXTEND_QI(64,32, 
                                                                VL_SEL_IQII(32,64,6,32, vlSelf->__PVT__reg_wdata, 0U, 0x20U))))));
    }
}

void Vysyx_22040175_top_wb_stage___settle__TOP__ysyx_22040175_top__u_wb_stage__2(Vysyx_22040175_top_wb_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_wb_stage___settle__TOP__ysyx_22040175_top__u_wb_stage__2\n"); );
    // Body
    if ((0U == (IData)(vlSelf->__PVT__present_state))) {
        vlSelf->__PVT__next_state = (((((IData)(vlSelf->__PVT__rst_n) 
                                        & (IData)(vlSelf->__PVT__reg_wen)) 
                                       & (0U != (IData)(vlSelf->__PVT__reg_waddr))) 
                                      & (IData)(vlSelf->__PVT__s_flag))
                                      ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->__PVT__present_state))) {
        vlSelf->__PVT__next_state = ((IData)(vlSelf->__PVT__w_done)
                                      ? 2U : 1U);
    } else if ((2U == (IData)(vlSelf->__PVT__present_state))) {
        vlSelf->__PVT__next_state = ((IData)(vlSelf->__PVT__b_hs)
                                      ? 3U : 2U);
    } else if ((3U == (IData)(vlSelf->__PVT__present_state))) {
        vlSelf->__PVT__next_state = 0U;
    }
}

void Vysyx_22040175_top_wb_stage____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP__ysyx_22040175_top__u_wb_stage(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22040175_top_wb_stage___initial__TOP__ysyx_22040175_top__u_wb_stage__3(Vysyx_22040175_top_wb_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_wb_stage___initial__TOP__ysyx_22040175_top__u_wb_stage__3\n"); );
    // Body
    Vysyx_22040175_top_wb_stage____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP__ysyx_22040175_top__u_wb_stage(vlSelf->__PVT__wb_delay_reg_f);
}

void Vysyx_22040175_top_wb_stage___ctor_var_reset(Vysyx_22040175_top_wb_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_wb_stage___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reg_wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__from_ex_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__from_mem_alu_res = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__wmask = VL_RAND_RESET_I(8);
    vlSelf->__PVT__s_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__time_set = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__expand_signed = VL_RAND_RESET_I(4);
    vlSelf->__PVT__rd_buf_flag = VL_RAND_RESET_I(3);
    vlSelf->__PVT__ebreak_flag = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__wb_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__wb_delay_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__cunqu_hazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__waxi_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reg_write_addr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__reg_write_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__reg_write_wmask = VL_RAND_RESET_I(8);
    vlSelf->__PVT__wb_res_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__b_hs = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reg_wdata = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__wb_delay_reg_f[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__present_state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__next_state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__wb_delay_pc = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__wb_delay_reg_f__v0 = 0;
    vlSelf->__Vdlyvval__wb_delay_reg_f__v1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v2 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v4 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v5 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v6 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v7 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v8 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v9 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v10 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v11 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v12 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v13 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v14 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v15 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v16 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v17 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v18 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v19 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v20 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v21 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v22 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v23 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v24 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v25 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v26 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v27 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v28 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v29 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v30 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v31 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__present_state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__reg_write_addr = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__reg_write_data = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__reg_write_wmask = VL_RAND_RESET_I(8);
}
