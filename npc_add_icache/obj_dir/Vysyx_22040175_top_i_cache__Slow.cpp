// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_i_cache.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_i_cache___ctor_var_reset(Vysyx_22040175_top_i_cache* vlSelf);

Vysyx_22040175_top_i_cache::Vysyx_22040175_top_i_cache(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_i_cache___ctor_var_reset(this);
}

void Vysyx_22040175_top_i_cache::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_i_cache::~Vysyx_22040175_top_i_cache() {
}

void Vysyx_22040175_top_i_cache___settle__TOP__ysyx_22040175_top__u_if_stage__u_i_cache__1(Vysyx_22040175_top_i_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_i_cache___settle__TOP__ysyx_22040175_top__u_if_stage__u_i_cache__1\n"); );
    // Body
    vlSelf->__PVT__delay_cpu_req_offset = (0x1fU & 
                                           VL_SEL_IQII(5,64,6,32, vlSelf->__PVT__delay_cpu_req_addr, 0U, 5U));
    vlSelf->__PVT__delay_cpu_req_index = (0x7fU & VL_SEL_IQII(7,64,6,32, vlSelf->__PVT__delay_cpu_req_addr, 5U, 7U));
    vlSelf->__PVT__delay_cpu_req_tag = (0xfffffffffffffULL 
                                        & VL_SEL_QQII(52,64,6,32, vlSelf->__PVT__delay_cpu_req_addr, 0xcU, 0x34U));
}

void Vysyx_22040175_top_i_cache___settle__TOP__ysyx_22040175_top__u_if_stage__u_i_cache__2(Vysyx_22040175_top_i_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_i_cache___settle__TOP__ysyx_22040175_top__u_if_stage__u_i_cache__2\n"); );
    // Body
    vlSelf->__PVT__cpu_req_offset = (0x1fU & VL_SEL_IQII(5,64,6,32, vlSelf->__PVT__cpu_req_addr, 0U, 5U));
    vlSelf->__PVT__cpu_req_tag = (0xfffffffffffffULL 
                                  & VL_SEL_QQII(52,64,6,32, vlSelf->__PVT__cpu_req_addr, 0xcU, 0x34U));
    vlSelf->__PVT__cpu_req_index = (0x7fU & VL_SEL_IQII(7,64,6,32, vlSelf->__PVT__cpu_req_addr, 5U, 7U));
}

extern const VlWide<10>/*319:0*/ Vysyx_22040175_top__ConstPool__CONST_6a4c1196_0;

void Vysyx_22040175_top_i_cache___initial__TOP__ysyx_22040175_top__u_if_stage__u_i_cache__3(Vysyx_22040175_top_i_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_i_cache___initial__TOP__ysyx_22040175_top__u_if_stage__u_i_cache__3\n"); );
    // Variables
    IData/*31:0*/ __Vtemp2;
    // Body
    vlSelf->__PVT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x80U, vlSelf->__PVT__i)) {
        VL_ASSIGN_W(309,vlSelf->__PVT__cache_data[(0x7fU 
                                                   & VL_SEL_IIII(7,32,32,32, vlSelf->__PVT__i, 0U, 7U))], Vysyx_22040175_top__ConstPool__CONST_6a4c1196_0);
        __Vtemp2 = ((IData)(1U) + vlSelf->__PVT__i);
        vlSelf->__PVT__i = __Vtemp2;
    }
}

void Vysyx_22040175_top_i_cache___settle__TOP__ysyx_22040175_top__u_if_stage__u_i_cache__5(Vysyx_22040175_top_i_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_i_cache___settle__TOP__ysyx_22040175_top__u_if_stage__u_i_cache__5\n"); );
    // Variables
    VlWide<10>/*319:0*/ __Vtemp137;
    VlWide<10>/*319:0*/ __Vtemp138;
    VlWide<10>/*319:0*/ __Vtemp139;
    VlWide<10>/*319:0*/ __Vtemp140;
    VlWide<10>/*319:0*/ __Vtemp141;
    VlWide<10>/*319:0*/ __Vtemp142;
    VlWide<10>/*319:0*/ __Vtemp143;
    VlWide<10>/*319:0*/ __Vtemp144;
    VlWide<10>/*319:0*/ __Vtemp145;
    VlWide<10>/*319:0*/ __Vtemp146;
    VlWide<10>/*319:0*/ __Vtemp147;
    VlWide<10>/*319:0*/ __Vtemp148;
    // Body
    VL_ASSIGN_W(309,__Vtemp137, vlSelf->__PVT__cache_data
                [(0x7fU & VL_SEL_IIII(7,32,32,32, (
                                                   (0x1fU 
                                                    >= 1U)
                                                    ? 
                                                   (VL_EXTEND_II(32,7, (IData)(vlSelf->__PVT__cpu_req_index)) 
                                                    << 1U)
                                                    : 0U), 0U, 7U))]);
    VL_ASSIGN_W(309,__Vtemp138, vlSelf->__PVT__cache_data
                [(0x7fU & VL_SEL_IIII(7,32,32,32, (
                                                   (0x1fU 
                                                    >= 1U)
                                                    ? 
                                                   (VL_EXTEND_II(32,7, (IData)(vlSelf->__PVT__cpu_req_index)) 
                                                    << 1U)
                                                    : 0U), 0U, 7U))]);
    VL_ASSIGN_W(309,__Vtemp139, vlSelf->__PVT__cache_data
                [(0x7fU & VL_SEL_IIII(7,32,32,32, (
                                                   (0x1fU 
                                                    >= 1U)
                                                    ? 
                                                   (VL_EXTEND_II(32,7, (IData)(vlSelf->__PVT__delay_cpu_req_index)) 
                                                    << 1U)
                                                    : 0U), 0U, 7U))]);
    VL_ASSIGN_W(309,__Vtemp140, vlSelf->__PVT__cache_data
                [(0x7fU & VL_SEL_IIII(7,32,32,32, (
                                                   (0x1fU 
                                                    >= 1U)
                                                    ? 
                                                   (VL_EXTEND_II(32,7, (IData)(vlSelf->__PVT__cpu_req_index)) 
                                                    << 1U)
                                                    : 0U), 0U, 7U))]);
    vlSelf->__PVT__hit1 = ((1U == (IData)(vlSelf->__PVT__state))
                            ? (VL_BITSEL_IWII(1,309,9,32, __Vtemp137, 0x134U) 
                               & ((0xfffffffffffffULL 
                                   & VL_SEL_QWII(52,309,9,32, __Vtemp138, 0x100U, 0x34U)) 
                                  == vlSelf->__PVT__cpu_req_tag))
                            : ((3U == (IData)(vlSelf->__PVT__state)) 
                               & (VL_BITSEL_IWII(1,309,9,32, __Vtemp139, 0x134U) 
                                  & ((0xfffffffffffffULL 
                                      & VL_SEL_QWII(52,309,9,32, __Vtemp140, 0x100U, 0x34U)) 
                                     == vlSelf->__PVT__delay_cpu_req_tag))));
    VL_ASSIGN_W(309,__Vtemp141, vlSelf->__PVT__cache_data
                [(0x7fU & ((IData)(1U) + VL_SEL_IIII(7,32,32,32, 
                                                     ((0x1fU 
                                                       >= 1U)
                                                       ? 
                                                      (VL_EXTEND_II(32,7, (IData)(vlSelf->__PVT__cpu_req_index)) 
                                                       << 1U)
                                                       : 0U), 0U, 7U)))]);
    VL_ASSIGN_W(309,__Vtemp142, vlSelf->__PVT__cache_data
                [(0x7fU & ((IData)(1U) + VL_SEL_IIII(7,32,32,32, 
                                                     ((0x1fU 
                                                       >= 1U)
                                                       ? 
                                                      (VL_EXTEND_II(32,7, (IData)(vlSelf->__PVT__cpu_req_index)) 
                                                       << 1U)
                                                       : 0U), 0U, 7U)))]);
    VL_ASSIGN_W(309,__Vtemp143, vlSelf->__PVT__cache_data
                [(0x7fU & ((IData)(1U) + VL_SEL_IIII(7,32,32,32, 
                                                     ((0x1fU 
                                                       >= 1U)
                                                       ? 
                                                      (VL_EXTEND_II(32,7, (IData)(vlSelf->__PVT__delay_cpu_req_index)) 
                                                       << 1U)
                                                       : 0U), 0U, 7U)))]);
    VL_ASSIGN_W(309,__Vtemp144, vlSelf->__PVT__cache_data
                [(0x7fU & ((IData)(1U) + VL_SEL_IIII(7,32,32,32, 
                                                     ((0x1fU 
                                                       >= 1U)
                                                       ? 
                                                      (VL_EXTEND_II(32,7, (IData)(vlSelf->__PVT__cpu_req_index)) 
                                                       << 1U)
                                                       : 0U), 0U, 7U)))]);
    vlSelf->__PVT__hit2 = ((1U == (IData)(vlSelf->__PVT__state))
                            ? (VL_BITSEL_IWII(1,309,9,32, __Vtemp141, 0x134U) 
                               & ((0xfffffffffffffULL 
                                   & VL_SEL_QWII(52,309,9,32, __Vtemp142, 0x100U, 0x34U)) 
                                  == vlSelf->__PVT__cpu_req_tag))
                            : ((3U == (IData)(vlSelf->__PVT__state)) 
                               & (VL_BITSEL_IWII(1,309,9,32, __Vtemp143, 0x134U) 
                                  & ((0xfffffffffffffULL 
                                      & VL_SEL_QWII(52,309,9,32, __Vtemp144, 0x100U, 0x34U)) 
                                     == vlSelf->__PVT__delay_cpu_req_tag))));
    vlSelf->__PVT__hit = (((1U == (IData)(vlSelf->__PVT__state)) 
                           | (3U == (IData)(vlSelf->__PVT__state))) 
                          & ((IData)(vlSelf->__PVT__hit1) 
                             | (IData)(vlSelf->__PVT__hit2)));
    vlSelf->__PVT__next_state = ((0U == (IData)(vlSelf->__PVT__state))
                                  ? ((IData)(vlSelf->__PVT__cpu_req_valid)
                                      ? 1U : 0U) : 
                                 ((1U == (IData)(vlSelf->__PVT__state))
                                   ? ((IData)(vlSelf->__PVT__hit)
                                       ? 0U : 2U) : 
                                  ((2U == (IData)(vlSelf->__PVT__state))
                                    ? ((IData)(vlSelf->__PVT__shift_ready)
                                        ? 3U : 2U) : 
                                   ((3U == (IData)(vlSelf->__PVT__state))
                                     ? ((IData)(vlSelf->__PVT__hit)
                                         ? 0U : 2U)
                                     : 0U))));
    if (((1U == (IData)(vlSelf->__PVT__state)) & (~ (IData)(vlSelf->__PVT__hit)))) {
        VL_ASSIGN_W(309,__Vtemp145, vlSelf->__PVT__cache_data
                    [(0x7fU & VL_SEL_IIII(7,32,32,32, 
                                          ((0x1fU >= 1U)
                                            ? (VL_EXTEND_II(32,7, (IData)(vlSelf->__PVT__cpu_req_index)) 
                                               << 1U)
                                            : 0U), 0U, 7U))]);
        VL_ASSIGN_W(309,__Vtemp146, vlSelf->__PVT__cache_data
                    [(0x7fU & ((IData)(1U) + VL_SEL_IIII(7,32,32,32, 
                                                         ((0x1fU 
                                                           >= 1U)
                                                           ? 
                                                          (VL_EXTEND_II(32,7, (IData)(vlSelf->__PVT__cpu_req_index)) 
                                                           << 1U)
                                                           : 0U), 0U, 7U)))]);
        VL_ASSIGN_W(309,__Vtemp147, vlSelf->__PVT__cache_data
                    [(0x7fU & VL_SEL_IIII(7,32,32,32, 
                                          ((0x1fU >= 1U)
                                            ? (VL_EXTEND_II(32,7, (IData)(vlSelf->__PVT__cpu_req_index)) 
                                               << 1U)
                                            : 0U), 0U, 7U))]);
        VL_ASSIGN_W(309,__Vtemp148, vlSelf->__PVT__cache_data
                    [(0x7fU & ((IData)(1U) + VL_SEL_IIII(7,32,32,32, 
                                                         ((0x1fU 
                                                           >= 1U)
                                                           ? 
                                                          (VL_EXTEND_II(32,7, (IData)(vlSelf->__PVT__cpu_req_index)) 
                                                           << 1U)
                                                           : 0U), 0U, 7U)))]);
        vlSelf->__PVT__way = ((1U != VL_CONCAT_III(2,1,1, 
                                                   (1U 
                                                    & VL_BITSEL_IWII(1,309,9,32, __Vtemp145, 0x134U)), 
                                                   (1U 
                                                    & VL_BITSEL_IWII(1,309,9,32, __Vtemp146, 0x134U)))) 
                              & (2U == VL_CONCAT_III(2,1,1, 
                                                     (1U 
                                                      & VL_BITSEL_IWII(1,309,9,32, __Vtemp147, 0x134U)), 
                                                     (1U 
                                                      & VL_BITSEL_IWII(1,309,9,32, __Vtemp148, 0x134U)))));
    }
}

void Vysyx_22040175_top_i_cache___ctor_var_reset(Vysyx_22040175_top_i_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_i_cache___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_req_addr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__cpu_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_data_read = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__cpu_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_req_addr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mem_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_data_read = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_done = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_RAND_RESET_W(309, vlSelf->__PVT__cache_data[__Vi0]);
    }
    vlSelf->__PVT__state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hit1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hit2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__way = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_req_index = VL_RAND_RESET_I(7);
    vlSelf->__PVT__cpu_req_tag = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__cpu_req_offset = VL_RAND_RESET_I(5);
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__shift_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__delay_cpu_req_addr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__delay_cpu_req_offset = VL_RAND_RESET_I(5);
    vlSelf->__PVT__delay_cpu_req_index = VL_RAND_RESET_I(7);
    vlSelf->__PVT__delay_cpu_req_tag = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__dd_r_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__test = VL_RAND_RESET_I(2);
    vlSelf->__PVT__count = VL_RAND_RESET_I(4);
    vlSelf->__Vlvbound1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__delay_cpu_req_addr = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__dd_r_done = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__test = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__cpu_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cpu_data_read = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__mem_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__cache_data__v0 = 0;
    vlSelf->__Vdlyvlsb__cache_data__v0 = 0;
    VL_RAND_RESET_W(117, vlSelf->__Vdlyvval__cache_data__v0);
    vlSelf->__Vdlyvset__cache_data__v0 = 0;
    vlSelf->__Vdly__count = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__shift_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__cache_data__v1 = 0;
    vlSelf->__Vdlyvlsb__cache_data__v1 = 0;
    vlSelf->__Vdlyvval__cache_data__v1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__cache_data__v1 = 0;
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v2);
    vlSelf->__Vdlyvset__cache_data__v2 = 0;
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v3);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v4);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v5);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v6);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v7);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v8);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v9);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v10);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v11);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v12);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v13);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v14);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v15);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v16);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v17);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v18);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v19);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v20);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v21);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v22);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v23);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v24);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v25);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v26);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v27);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v28);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v29);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v30);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v31);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v32);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v33);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v34);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v35);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v36);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v37);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v38);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v39);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v40);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v41);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v42);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v43);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v44);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v45);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v46);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v47);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v48);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v49);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v50);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v51);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v52);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v53);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v54);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v55);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v56);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v57);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v58);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v59);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v60);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v61);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v62);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v63);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v64);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v65);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v66);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v67);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v68);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v69);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v70);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v71);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v72);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v73);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v74);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v75);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v76);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v77);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v78);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v79);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v80);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v81);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v82);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v83);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v84);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v85);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v86);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v87);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v88);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v89);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v90);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v91);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v92);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v93);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v94);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v95);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v96);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v97);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v98);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v99);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v100);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v101);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v102);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v103);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v104);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v105);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v106);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v107);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v108);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v109);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v110);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v111);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v112);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v113);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v114);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v115);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v116);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v117);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v118);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v119);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v120);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v121);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v122);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v123);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v124);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v125);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v126);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v127);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v128);
    VL_RAND_RESET_W(309, vlSelf->__Vdlyvval__cache_data__v129);
    vlSelf->__Vdly__mem_req_addr = VL_RAND_RESET_Q(64);
}
