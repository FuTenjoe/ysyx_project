// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top_id_control_rest.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top_id_control_rest___combo__TOP__ysyx_22040175_top__u_id_stage__u_id_control_rest__2(Vysyx_22040175_top_id_control_rest* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040175_top_id_control_rest___combo__TOP__ysyx_22040175_top__u_id_stage__u_id_control_rest__2\n"); );
    // Body
    vlSelf->__PVT__control_rest = ((((IData)(vlSelf->__PVT__branch) 
                                     | (IData)(vlSelf->__PVT__jump)) 
                                    | (IData)(vlSelf->__PVT__mret_flag)) 
                                   | (IData)(vlSelf->__PVT__ecall_flag));
}
