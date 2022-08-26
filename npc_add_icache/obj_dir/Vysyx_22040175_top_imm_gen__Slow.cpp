// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_imm_gen.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040175_top_imm_gen___ctor_var_reset(Vysyx_22040175_top_imm_gen* vlSelf);

Vysyx_22040175_top_imm_gen::Vysyx_22040175_top_imm_gen(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top_imm_gen___ctor_var_reset(this);
}

void Vysyx_22040175_top_imm_gen::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top_imm_gen::~Vysyx_22040175_top_imm_gen() {
}

void Vysyx_22040175_top_imm_gen___settle__TOP__ysyx_22040175_top__u_id_stage__u_imm_gen__1(Vysyx_22040175_top_imm_gen* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_imm_gen___settle__TOP__ysyx_22040175_top__u_id_stage__u_imm_gen__1\n"); );
    // Body
    vlSelf->__PVT__imm = 0ULL;
    vlSelf->__PVT__imm = ((0U == (IData)(vlSelf->__PVT__imm_gen_op))
                           ? VL_CONCAT_QQI(64,52,12, 
                                           (0xfffffffffffffULL 
                                            & VL_REPLICATE_QOI(52,1,32,
                                                               (1U 
                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__inst, 0x1fU)), 0x34U)), 
                                           (0xfffU 
                                            & VL_SEL_IQII(12,64,6,32, vlSelf->__PVT__inst, 0x14U, 0xcU)))
                           : ((1U == (IData)(vlSelf->__PVT__imm_gen_op))
                               ? VL_CONCAT_QQI(64,52,12, 
                                               (0xfffffffffffffULL 
                                                & VL_REPLICATE_QOI(52,1,32,
                                                                   (1U 
                                                                    & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__inst, 0x1fU)), 0x34U)), 
                                               VL_CONCAT_III(12,7,5, 
                                                             (0x7fU 
                                                              & VL_SEL_IQII(7,64,6,32, vlSelf->__PVT__inst, 0x19U, 7U)), 
                                                             (0x1fU 
                                                              & VL_SEL_IQII(5,64,6,32, vlSelf->__PVT__inst, 7U, 5U))))
                               : ((2U == (IData)(vlSelf->__PVT__imm_gen_op))
                                   ? VL_CONCAT_QQI(64,52,12, 
                                                   (0xfffffffffffffULL 
                                                    & VL_REPLICATE_QOI(52,1,32,
                                                                       (1U 
                                                                        & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__inst, 0x1fU)), 0x34U)), 
                                                   VL_CONCAT_III(12,1,11, 
                                                                 (1U 
                                                                  & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__inst, 7U)), 
                                                                 VL_CONCAT_III(11,6,5, 
                                                                               (0x3fU 
                                                                                & VL_SEL_IQII(6,64,6,32, vlSelf->__PVT__inst, 0x19U, 6U)), 
                                                                               VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IQII(4,64,6,32, vlSelf->__PVT__inst, 8U, 4U)), 0U))))
                                   : ((3U == (IData)(vlSelf->__PVT__imm_gen_op))
                                       ? VL_CONCAT_QQI(64,44,20, 
                                                       (0xfffffffffffULL 
                                                        & VL_REPLICATE_QOI(44,1,32,
                                                                           (1U 
                                                                            & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__inst, 0x1fU)), 0x2cU)), 
                                                       VL_CONCAT_III(20,8,12, 
                                                                     (0xffU 
                                                                      & VL_SEL_IQII(8,64,6,32, vlSelf->__PVT__inst, 0xcU, 8U)), 
                                                                     VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__inst, 0x14U)), 
                                                                                VL_CONCAT_III(11,10,1, 
                                                                                (0x3ffU 
                                                                                & VL_SEL_IQII(10,64,6,32, vlSelf->__PVT__inst, 0x15U, 0xaU)), 0U))))
                                       : ((4U == (IData)(vlSelf->__PVT__imm_gen_op))
                                           ? VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(32,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__inst, 0x1fU)), 0x20U), 
                                                           VL_CONCAT_III(32,20,12, 
                                                                         (0xfffffU 
                                                                          & VL_SEL_IQII(20,64,6,32, vlSelf->__PVT__inst, 0xcU, 0x14U)), 0U))
                                           : ((5U == (IData)(vlSelf->__PVT__imm_gen_op))
                                               ? VL_EXTEND_QI(64,6, 
                                                              (0x3fU 
                                                               & VL_SEL_IQII(6,64,6,32, vlSelf->__PVT__inst, 0x14U, 6U)))
                                               : VL_EXTEND_QI(64,32, 
                                                              VL_CONCAT_III(32,25,7, 
                                                                            (0x1ffffffU 
                                                                             & VL_REPLICATE_IOI(25,1,32,
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(1,64,6,32, vlSelf->__PVT__inst, 0x1fU)), 0x19U)), 
                                                                            (0x7fU 
                                                                             & VL_SEL_IQII(7,64,6,32, vlSelf->__PVT__inst, 0U, 7U))))))))));
}

void Vysyx_22040175_top_imm_gen___ctor_var_reset(Vysyx_22040175_top_imm_gen* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_imm_gen___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__inst = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__imm_gen_op = VL_RAND_RESET_I(3);
    vlSelf->__PVT__imm = VL_RAND_RESET_Q(64);
}
