// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_wb_stage.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040175_top_wb_stage____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP__ysyx_22040175_top__u_wb_stage(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_wb_stage____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP__ysyx_22040175_top__u_wb_stage\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void ebreak();

VL_INLINE_OPT void Vysyx_22040175_top_wb_stage____Vdpiimwrap_ebreak_TOP__ysyx_22040175_top__u_wb_stage() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_wb_stage____Vdpiimwrap_ebreak_TOP__ysyx_22040175_top__u_wb_stage\n"); );
    // Body
    ebreak();
}

VL_INLINE_OPT void Vysyx_22040175_top_wb_stage___sequent__TOP__ysyx_22040175_top__u_wb_stage__4(Vysyx_22040175_top_wb_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_wb_stage___sequent__TOP__ysyx_22040175_top__u_wb_stage__4\n"); );
    // Body
    vlSelf->__Vdly__wb_delay_pc = vlSelf->__PVT__wb_delay_pc;
    vlSelf->__Vdlyvset__wb_delay_reg_f__v0 = 0U;
    vlSelf->__Vdly__reg_write_wmask = vlSelf->__PVT__reg_write_wmask;
    vlSelf->__Vdly__reg_write_data = vlSelf->__PVT__reg_write_data;
    vlSelf->__Vdly__reg_write_addr = vlSelf->__PVT__reg_write_addr;
    vlSelf->__Vdly__wb_delay_pc = ((IData)(vlSelf->__PVT__rst_n)
                                    ? vlSelf->__PVT__wb_pc
                                    : 0ULL);
    vlSelf->__Vdlyvval__wb_delay_reg_f__v0 = vlSelf->__PVT__reg_f
        [0U];
    vlSelf->__Vdlyvset__wb_delay_reg_f__v0 = 1U;
    vlSelf->__Vdlyvval__wb_delay_reg_f__v1 = vlSelf->__PVT__reg_f
        [1U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v2 = vlSelf->__PVT__reg_f
        [2U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v3 = vlSelf->__PVT__reg_f
        [3U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v4 = vlSelf->__PVT__reg_f
        [4U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v5 = vlSelf->__PVT__reg_f
        [5U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v6 = vlSelf->__PVT__reg_f
        [6U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v7 = vlSelf->__PVT__reg_f
        [7U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v8 = vlSelf->__PVT__reg_f
        [8U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v9 = vlSelf->__PVT__reg_f
        [9U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v10 = vlSelf->__PVT__reg_f
        [0xaU];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v11 = vlSelf->__PVT__reg_f
        [0xbU];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v12 = vlSelf->__PVT__reg_f
        [0xcU];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v13 = vlSelf->__PVT__reg_f
        [0xdU];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v14 = vlSelf->__PVT__reg_f
        [0xeU];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v15 = vlSelf->__PVT__reg_f
        [0xfU];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v16 = vlSelf->__PVT__reg_f
        [0x10U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v17 = vlSelf->__PVT__reg_f
        [0x11U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v18 = vlSelf->__PVT__reg_f
        [0x12U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v19 = vlSelf->__PVT__reg_f
        [0x13U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v20 = vlSelf->__PVT__reg_f
        [0x14U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v21 = vlSelf->__PVT__reg_f
        [0x15U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v22 = vlSelf->__PVT__reg_f
        [0x16U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v23 = vlSelf->__PVT__reg_f
        [0x17U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v24 = vlSelf->__PVT__reg_f
        [0x18U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v25 = vlSelf->__PVT__reg_f
        [0x19U];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v26 = vlSelf->__PVT__reg_f
        [0x1aU];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v27 = vlSelf->__PVT__reg_f
        [0x1bU];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v28 = vlSelf->__PVT__reg_f
        [0x1cU];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v29 = vlSelf->__PVT__reg_f
        [0x1dU];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v30 = vlSelf->__PVT__reg_f
        [0x1eU];
    vlSelf->__Vdlyvval__wb_delay_reg_f__v31 = vlSelf->__PVT__reg_f
        [0x1fU];
    if (vlSelf->__PVT__rst_n) {
        if ((0U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__reg_write_addr = (vlSelf->__PVT__reg_f
                                              [vlSelf->__PVT__reg_waddr] 
                                              + VL_EXTEND_QI(64,32, vlSelf->__PVT__s_imm));
            vlSelf->__Vdly__reg_write_data = vlSelf->__PVT__reg_wdata;
            vlSelf->__Vdly__reg_write_wmask = vlSelf->__PVT__wmask;
        } else if ((1U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__reg_write_addr = vlSelf->__PVT__reg_write_addr;
            vlSelf->__Vdly__reg_write_data = vlSelf->__PVT__reg_write_data;
            vlSelf->__Vdly__reg_write_wmask = vlSelf->__PVT__reg_write_wmask;
        } else if ((2U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__reg_write_addr = vlSelf->__PVT__reg_write_addr;
            vlSelf->__Vdly__reg_write_data = vlSelf->__PVT__reg_write_data;
            vlSelf->__Vdly__reg_write_wmask = vlSelf->__PVT__reg_write_wmask;
        } else if ((3U == (IData)(vlSelf->__PVT__present_state))) {
            vlSelf->__Vdly__reg_write_addr = 0ULL;
            vlSelf->__Vdly__reg_write_data = 0ULL;
            vlSelf->__Vdly__reg_write_wmask = 0U;
        } else {
            vlSelf->__Vdly__reg_write_addr = (vlSelf->__PVT__reg_f
                                              [vlSelf->__PVT__reg_waddr] 
                                              + VL_EXTEND_QI(64,32, vlSelf->__PVT__s_imm));
            vlSelf->__Vdly__reg_write_data = vlSelf->__PVT__reg_wdata;
            vlSelf->__Vdly__reg_write_wmask = vlSelf->__PVT__wmask;
        }
    } else {
        vlSelf->__Vdly__reg_write_addr = 0ULL;
        vlSelf->__Vdly__reg_write_data = 0ULL;
        vlSelf->__Vdly__reg_write_wmask = 0U;
    }
    vlSelf->__PVT__wb_delay_pc = vlSelf->__Vdly__wb_delay_pc;
    if (vlSelf->__Vdlyvset__wb_delay_reg_f__v0) {
        vlSelf->__PVT__wb_delay_reg_f[0U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v0;
        vlSelf->__PVT__wb_delay_reg_f[1U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v1;
        vlSelf->__PVT__wb_delay_reg_f[2U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v2;
        vlSelf->__PVT__wb_delay_reg_f[3U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v3;
        vlSelf->__PVT__wb_delay_reg_f[4U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v4;
        vlSelf->__PVT__wb_delay_reg_f[5U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v5;
        vlSelf->__PVT__wb_delay_reg_f[6U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v6;
        vlSelf->__PVT__wb_delay_reg_f[7U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v7;
        vlSelf->__PVT__wb_delay_reg_f[8U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v8;
        vlSelf->__PVT__wb_delay_reg_f[9U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v9;
        vlSelf->__PVT__wb_delay_reg_f[0xaU] = vlSelf->__Vdlyvval__wb_delay_reg_f__v10;
        vlSelf->__PVT__wb_delay_reg_f[0xbU] = vlSelf->__Vdlyvval__wb_delay_reg_f__v11;
        vlSelf->__PVT__wb_delay_reg_f[0xcU] = vlSelf->__Vdlyvval__wb_delay_reg_f__v12;
        vlSelf->__PVT__wb_delay_reg_f[0xdU] = vlSelf->__Vdlyvval__wb_delay_reg_f__v13;
        vlSelf->__PVT__wb_delay_reg_f[0xeU] = vlSelf->__Vdlyvval__wb_delay_reg_f__v14;
        vlSelf->__PVT__wb_delay_reg_f[0xfU] = vlSelf->__Vdlyvval__wb_delay_reg_f__v15;
        vlSelf->__PVT__wb_delay_reg_f[0x10U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v16;
        vlSelf->__PVT__wb_delay_reg_f[0x11U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v17;
        vlSelf->__PVT__wb_delay_reg_f[0x12U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v18;
        vlSelf->__PVT__wb_delay_reg_f[0x13U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v19;
        vlSelf->__PVT__wb_delay_reg_f[0x14U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v20;
        vlSelf->__PVT__wb_delay_reg_f[0x15U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v21;
        vlSelf->__PVT__wb_delay_reg_f[0x16U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v22;
        vlSelf->__PVT__wb_delay_reg_f[0x17U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v23;
        vlSelf->__PVT__wb_delay_reg_f[0x18U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v24;
        vlSelf->__PVT__wb_delay_reg_f[0x19U] = vlSelf->__Vdlyvval__wb_delay_reg_f__v25;
        vlSelf->__PVT__wb_delay_reg_f[0x1aU] = vlSelf->__Vdlyvval__wb_delay_reg_f__v26;
        vlSelf->__PVT__wb_delay_reg_f[0x1bU] = vlSelf->__Vdlyvval__wb_delay_reg_f__v27;
        vlSelf->__PVT__wb_delay_reg_f[0x1cU] = vlSelf->__Vdlyvval__wb_delay_reg_f__v28;
        vlSelf->__PVT__wb_delay_reg_f[0x1dU] = vlSelf->__Vdlyvval__wb_delay_reg_f__v29;
        vlSelf->__PVT__wb_delay_reg_f[0x1eU] = vlSelf->__Vdlyvval__wb_delay_reg_f__v30;
        vlSelf->__PVT__wb_delay_reg_f[0x1fU] = vlSelf->__Vdlyvval__wb_delay_reg_f__v31;
    }
    vlSelf->__PVT__reg_write_data = vlSelf->__Vdly__reg_write_data;
    vlSelf->__PVT__reg_write_wmask = vlSelf->__Vdly__reg_write_wmask;
    vlSelf->__PVT__reg_write_addr = vlSelf->__Vdly__reg_write_addr;
    vlSelf->__Vdly__present_state = vlSelf->__PVT__present_state;
    vlSelf->__Vdly__present_state = ((IData)(vlSelf->__PVT__rst_n)
                                      ? (IData)(vlSelf->__PVT__next_state)
                                      : 0U);
    vlSelf->__PVT__present_state = vlSelf->__Vdly__present_state;
    vlSelf->__PVT__wb_res_valid = (1U & (~ ((1U == (IData)(vlSelf->__PVT__present_state)) 
                                            | (2U == (IData)(vlSelf->__PVT__present_state)))));
    vlSelf->__PVT__axi_req = ((1U == (IData)(vlSelf->__PVT__present_state)) 
                              | (2U == (IData)(vlSelf->__PVT__present_state)));
    vlSelf->__PVT__waxi_valid = (1U == (IData)(vlSelf->__PVT__present_state));
}

VL_INLINE_OPT void Vysyx_22040175_top_wb_stage___combo__TOP__ysyx_22040175_top__u_wb_stage__5(Vysyx_22040175_top_wb_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_wb_stage___combo__TOP__ysyx_22040175_top__u_wb_stage__5\n"); );
    // Body
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

VL_INLINE_OPT void Vysyx_22040175_top_wb_stage___combo__TOP__ysyx_22040175_top__u_wb_stage__6(Vysyx_22040175_top_wb_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040175_top_wb_stage___combo__TOP__ysyx_22040175_top__u_wb_stage__6\n"); );
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
