// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top___024root.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void ebreak();

VL_INLINE_OPT void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__ebreak_TOP\n"); );
    // Body
    ebreak();
}

extern "C" void unknown_inst();

VL_INLINE_OPT void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__unknown_inst_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__unknown_inst_TOP\n"); );
    // Body
    unknown_inst();
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_reg_file_0__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_reg_file_0__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_reg_file_0__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_reg_file_0__DOT__pmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__1(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v1;
    CData/*0:0*/ __Vdlyvset__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v1;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v2;
    CData/*0:0*/ __Vdlyvset__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v2;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v1;
    QData/*63:0*/ __Vdlyvval__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v2;
    // Body
    __Vdlyvset__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v0 = 0U;
    __Vdlyvset__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v1 = 0U;
    __Vdlyvset__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v2 = 0U;
    vlSelf->ysyx_22040175_top__DOT____Vcellout__u_pc_reg_0__curr_pc 
        = ((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n)
            ? ((IData)(vlSelf->ysyx_22040175_top__DOT__ena)
                ? (((IData)(vlSelf->ysyx_22040175_top__DOT__branch) 
                    & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__zero)))
                    ? ((QData)((IData)(vlSelf->pc)) 
                       + vlSelf->ysyx_22040175_top__DOT__imm)
                    : (((IData)(vlSelf->ysyx_22040175_top__DOT__jump) 
                        & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__jalr)))
                        ? ((QData)((IData)(vlSelf->pc)) 
                           + vlSelf->ysyx_22040175_top__DOT__imm)
                        : (((IData)(vlSelf->ysyx_22040175_top__DOT__jump) 
                            & (IData)(vlSelf->ysyx_22040175_top__DOT__jalr))
                            ? (vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f
                               [(0x1fU & vlSelf->ysyx_22040175_top__DOT__s_imm)] 
                               + vlSelf->ysyx_22040175_top__DOT__imm)
                            : ((IData)(vlSelf->ysyx_22040175_top__DOT__ebreak_flag)
                                ? 0x80000000ULL : (4ULL 
                                                   + (QData)((IData)(vlSelf->pc)))))))
                : (QData)((IData)(vlSelf->pc))) : 0x80000000ULL);
    if (((((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n) 
           & (IData)(vlSelf->ysyx_22040175_top__DOT__reg_wen)) 
          & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__reg_waddr))) 
         & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__s_flag)))) {
        if ((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__expand_signed))) {
            __Vdlyvval__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v0 
                = vlSelf->ysyx_22040175_top__DOT__alu_res;
            __Vdlyvset__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v0 = 1U;
            __Vdlyvdim0__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v0 
                = vlSelf->ysyx_22040175_top__DOT__reg_waddr;
        } else if ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__expand_signed))) {
            __Vdlyvval__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v1 
                = (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040175_top__DOT__alu_res 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__alu_res)));
            __Vdlyvset__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v1 = 1U;
            __Vdlyvdim0__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v1 
                = vlSelf->ysyx_22040175_top__DOT__reg_waddr;
        } else if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__expand_signed))) {
            __Vdlyvval__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v2 
                = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__alu_res));
            __Vdlyvset__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v2 = 1U;
            __Vdlyvdim0__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v2 
                = vlSelf->ysyx_22040175_top__DOT__reg_waddr;
        }
    }
    if (__Vdlyvset__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v0) {
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[__Vdlyvdim0__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v0] 
            = __Vdlyvval__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v0;
    }
    if (__Vdlyvset__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v1) {
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[__Vdlyvdim0__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v1] 
            = __Vdlyvval__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v1;
    }
    if (__Vdlyvset__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v2) {
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f[__Vdlyvdim0__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v2] 
            = __Vdlyvval__ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f__v2;
    }
    vlSelf->ysyx_22040175_top__DOT__ena = vlSelf->ysyx_22040175_top__DOT__rst_n;
    vlSelf->pc = (IData)(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_pc_reg_0__curr_pc);
    vlSelf->ysyx_22040175_top__DOT__reg_f[0U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[1U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [1U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[2U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [2U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[3U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [3U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[4U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [4U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[5U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [5U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[6U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [6U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[7U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [7U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[8U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [8U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[9U] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [9U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0xaU] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0xaU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0xbU] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0xbU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0xcU] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0xcU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0xdU] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0xdU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0xeU] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0xeU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0xfU] = vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0xfU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x10U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x10U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x11U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x11U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x12U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x12U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x13U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x13U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x14U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x14U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x15U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x15U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x16U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x16U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x17U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x17U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x18U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x18U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x19U] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x19U];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x1aU] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x1aU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x1bU] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x1bU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x1cU] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x1cU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x1dU] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x1dU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x1eU] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x1eU];
    vlSelf->ysyx_22040175_top__DOT__reg_f[0x1fU] = 
        vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
        [0x1fU];
    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__pmem_read_TOP((QData)((IData)(vlSelf->pc)), vlSelf->__Vtask_ysyx_22040175_top__DOT__pmem_read__0__rdata);
    vlSelf->ysyx_22040175_top__DOT__rdata = vlSelf->__Vtask_ysyx_22040175_top__DOT__pmem_read__0__rdata;
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[1U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[1U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[2U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[2U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[3U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[3U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[4U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[4U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[5U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[5U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[6U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[6U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[7U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[7U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[8U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[8U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[9U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[9U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0xaU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0xaU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0xbU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0xbU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0xcU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0xcU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0xdU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0xdU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0xeU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0xeU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0xfU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0xfU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x10U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x10U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x11U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x11U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x12U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x12U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x13U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x13U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x14U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x14U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x15U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x15U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x16U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x16U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x17U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x17U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x18U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x18U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x19U] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x19U];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x1aU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x1aU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x1bU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x1bU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x1cU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x1cU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x1dU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x1dU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x1eU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x1eU];
    vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_mux_pc_0__reg_f[0x1fU] 
        = vlSelf->ysyx_22040175_top__DOT__reg_f[0x1fU];
    vlSelf->inst = (IData)(vlSelf->ysyx_22040175_top__DOT__rdata);
    vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__expand_signed = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                    } else if ((7U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        if ((0U == (0x7fU & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((3U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__expand_signed = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                    }
                } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                             >> 0xcU))))) {
                    vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((2U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__expand_signed = 1U;
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                    } else if ((4U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__expand_signed = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__jalr = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((3U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xcU)))) {
                                vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((2U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                    } else if ((4U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__jalr = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__jump = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__jump = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__jump = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((3U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xdU)))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xcU)))) {
                                vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                            }
                        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                        }
                    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                 >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((2U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                    } else if ((4U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__jump = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__branch = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                if ((1U == (7U & (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                    vlSelf->ysyx_22040175_top__DOT__branch = 1U;
                                } else if ((0U == (7U 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 0xcU))))) {
                                    vlSelf->ysyx_22040175_top__DOT__branch = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->unknown_code = 0ULL;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 4U)))) {
                vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 3U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (~ (IData)((QData)((IData)(vlSelf->inst)))))) {
                            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                        }
                    } else {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                } else {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U != (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                        }
                    } else {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                } else {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U != (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        if ((0U != (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                        }
                    }
                } else {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else {
                vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
            }
        } else {
            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 2U)))) {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U != (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                        }
                    } else {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                } else {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (~ (IData)((QData)((IData)(vlSelf->inst)))))) {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                } else {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((0U != (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        if ((7U != (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            if ((3U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                if ((0U != (0x7fU & (IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0x19U))))) {
                                    vlSelf->unknown_code 
                                        = (QData)((IData)(vlSelf->inst));
                                }
                            } else {
                                vlSelf->unknown_code 
                                    = (QData)((IData)(vlSelf->inst));
                            }
                        }
                    }
                } else {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else {
                vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 3U)))) {
            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((3U != (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU))))) {
                    if ((1U != (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                }
            } else {
                vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
            }
        } else {
            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 2U)))) {
                vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((0U != (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                } else {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else {
                vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (~ (IData)((QData)((IData)(vlSelf->inst)))))) {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else {
                vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                        }
                    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                 >> 0xcU))))) {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU))))) {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU)))) {
                    vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                }
            } else {
                vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
            }
        } else {
            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 3U)))) {
        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U)))) {
        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 1U)))) {
        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
            if ((2U != (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 0xcU))))) {
                if ((3U != (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xcU))))) {
                    if ((4U != (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
                    }
                }
            }
        } else {
            vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
        }
    } else {
        vlSelf->unknown_code = (QData)((IData)(vlSelf->inst));
    }
    if ((0x100073U == vlSelf->inst)) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__ebreak_TOP();
        vlSelf->ysyx_22040175_top__DOT__ebreak_flag = 1U;
    }
    vlSelf->ysyx_22040175_top__DOT__reg_wen = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((3U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                    }
                } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                             >> 0xcU))))) {
                    vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((2U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                    } else if ((4U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                    }
                }
            }
        }
    }
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 3U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                if ((0U == (7U & (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0xcU))))) {
                                    vlSelf->ysyx_22040175_top__DOT__s_imm 
                                        = (0x1fU & (IData)(
                                                           ((QData)((IData)(vlSelf->inst)) 
                                                            >> 0xfU)));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((3U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__s_imm 
                                = (((- (IData)((1U 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x1fU))))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0x19U)) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 7U)))));
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__s_imm 
                                = (((- (IData)((1U 
                                                & (IData)(
                                                          ((QData)((IData)(vlSelf->inst)) 
                                                           >> 0x1fU))))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & ((IData)(
                                                            ((QData)((IData)(vlSelf->inst)) 
                                                             >> 0x19U)) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->inst)) 
                                                              >> 7U)))));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xdU)))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xcU)))) {
                                vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                            }
                        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                        }
                    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                                 >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((2U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__s_imm 
                            = (((- (IData)((1U & (IData)(
                                                         ((QData)((IData)(vlSelf->inst)) 
                                                          >> 0x1fU))))) 
                                << 0xcU) | (0xfffU 
                                            & (IData)(
                                                      ((QData)((IData)(vlSelf->inst)) 
                                                       >> 0x14U))));
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                    } else if ((4U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__s_imm = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__reg_waddr = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 7U)));
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 7U)));
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 7U)));
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 7U)));
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                            >> 7U)));
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((3U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0xfU)));
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0xfU)));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 7U)));
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                            >> 7U)));
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 7U)));
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 7U)));
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 7U)));
                    }
                } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                             >> 0xcU))))) {
                    vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                            >> 7U)));
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((2U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 7U)));
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 7U)));
                    } else if ((4U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 7U)));
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((3U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__wmask = 0xffU;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__wmask = 3U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                    }
                } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                             >> 0xcU))))) {
                    vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((2U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                    } else if ((4U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__wmask = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                        } else if ((0U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                    } else if ((7U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        if ((0U == (0x7fU & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((3U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__s_flag = 1U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__s_flag = 1U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                    }
                } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                             >> 0xcU))))) {
                    vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((2U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                    } else if ((4U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__s_flag = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__alu_op = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((1U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_op = 4U;
                        } else if ((0U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_op = 0xcU;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__alu_op = 5U;
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op 
                            = ((0U == (0x7fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 0x19U))))
                                ? 3U : 4U);
                    } else if ((7U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op 
                            = ((0U == (0x7fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 0x19U))))
                                ? 0U : 0xfU);
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op = 9U;
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((3U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_op = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op = 6U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op = 9U;
                    }
                } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                             >> 0xcU))))) {
                    vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((2U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                    } else if ((4U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__rd_flag = 3U;
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 3U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 3U;
                    } else if ((7U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 6U;
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        if ((0U == (0x7fU & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0x19U))))) {
                            vlSelf->ysyx_22040175_top__DOT__rd_flag = 6U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((3U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__rd_flag = 3U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__rd_flag = 5U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 3U;
                    }
                } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                             >> 0xcU))))) {
                    vlSelf->ysyx_22040175_top__DOT__rd_flag = 0U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((2U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 1U;
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 2U;
                    } else if ((4U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__rd_flag = 4U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__reg1_raddr = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 0xfU)));
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 0xfU)));
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg1_raddr = 0U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                            >> 0xfU)));
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((3U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg1_raddr = 0U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg1_raddr = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0xfU)));
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__reg1_raddr = 0U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0xfU)));
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 0xfU)));
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 0xfU)));
                    }
                } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                             >> 0xcU))))) {
                    vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                        = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                            >> 0xfU)));
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((2U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 0xfU)));
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 0xfU)));
                    } else if ((4U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 0xfU)));
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 2U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 2U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((3U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 3U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                    }
                } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                             >> 0xcU))))) {
                    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((2U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                    } else if ((4U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__reg2_raddr = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 0x14U)));
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 0x14U)));
                            }
                        }
                    }
                }
            } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                         >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 0x14U)));
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((3U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x14U)));
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x14U)));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x14U)));
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU))))) {
                            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                               >> 0xcU)))) {
                                vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                    = (0x1fU & (IData)(
                                                       ((QData)((IData)(vlSelf->inst)) 
                                                        >> 0x14U)));
                            }
                        }
                    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xdU)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                = (0x1fU & (IData)(
                                                   ((QData)((IData)(vlSelf->inst)) 
                                                    >> 0x14U)));
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((2U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 0x14U)));
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                            = (0x1fU & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                >> 0x14U)));
                    } else if ((4U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__reg2_raddr = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                       >> 6U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 5U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 4U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 3U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 2U)))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 1U)))) {
                            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                                vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 3U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 2U)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((0U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                            }
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 2U;
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 5U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 4U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 3U)))) {
                if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U))))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 1U)))) {
                        if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                            if ((1U == (7U & (IData)(
                                                     ((QData)((IData)(vlSelf->inst)) 
                                                      >> 0xcU))))) {
                                vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                      >> 2U)))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 4U;
                    }
                }
            }
        } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                     >> 3U))))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((3U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 3U;
                        } else if ((1U == (7U & (IData)(
                                                        ((QData)((IData)(vlSelf->inst)) 
                                                         >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 3U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 4U)))) {
        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                           >> 3U)))) {
            if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 1U)))) {
                    if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                        if ((0U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                                  >> 0xcU))))) {
                            vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 2U)))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 4U;
                }
            }
        } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                  >> 1U)))) {
            if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                   >> 0xeU)))) {
                    if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU))))) {
                        if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                           >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                        }
                    }
                } else if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                          >> 0xdU)))) {
                    if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                       >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                                 >> 3U))))) {
        if ((1U & (~ (IData)(((QData)((IData)(vlSelf->inst)) 
                              >> 2U))))) {
            if ((1U & (IData)(((QData)((IData)(vlSelf->inst)) 
                               >> 1U)))) {
                if ((1U & (IData)((QData)((IData)(vlSelf->inst))))) {
                    if ((2U == (7U & (IData)(((QData)((IData)(vlSelf->inst)) 
                                              >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                    } else if ((3U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                    } else if ((4U == (7U & (IData)(
                                                    ((QData)((IData)(vlSelf->inst)) 
                                                     >> 0xcU))))) {
                        vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
                    }
                }
            }
        }
    }
    if ((0ULL != vlSelf->unknown_code)) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__unknown_inst_TOP();
    }
    vlSelf->ysyx_22040175_top__DOT__reg2_rdata = ((0U 
                                                   == (IData)(vlSelf->ysyx_22040175_top__DOT__reg2_raddr))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
                                                  [vlSelf->ysyx_22040175_top__DOT__reg2_raddr]);
    vlSelf->ysyx_22040175_top__DOT__imm = ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                            ? ((2U 
                                                & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                ? (QData)((IData)(
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x1fU))))) 
                                                                    << 7U) 
                                                                   | (0x7fU 
                                                                      & (IData)((QData)((IData)(vlSelf->inst)))))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                    ? (QData)((IData)(
                                                                      (((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x1fU))))) 
                                                                        << 7U) 
                                                                       | (0x7fU 
                                                                          & (IData)((QData)((IData)(vlSelf->inst)))))))
                                                    : (QData)((IData)(
                                                                      ((IData)(
                                                                               ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0xcU)) 
                                                                       << 0xcU)))))
                                            : ((2U 
                                                & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                    ? (QData)((IData)(
                                                                      (((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x1fU))))) 
                                                                        << 0x14U) 
                                                                       | ((0xff000U 
                                                                           & ((IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0xcU)) 
                                                                              << 0xcU)) 
                                                                          | ((0x800U 
                                                                              & ((IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                             | (0x7feU 
                                                                                & ((IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x15U)) 
                                                                                << 1U)))))))
                                                    : (QData)((IData)(
                                                                      (((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x1fU))))) 
                                                                        << 0xcU) 
                                                                       | ((0x800U 
                                                                           & ((IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 7U)) 
                                                                              << 0xbU)) 
                                                                          | ((0x7e0U 
                                                                              & ((IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x19U)) 
                                                                                << 5U)) 
                                                                             | (0x1eU 
                                                                                & ((IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 8U)) 
                                                                                << 1U))))))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                    ? (QData)((IData)(
                                                                      (((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x1fU))))) 
                                                                        << 0xcU) 
                                                                       | ((0xfe0U 
                                                                           & ((IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x19U)) 
                                                                              << 5U)) 
                                                                          | (0x1fU 
                                                                             & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 7U)))))))
                                                    : (QData)((IData)(
                                                                      (((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x1fU))))) 
                                                                        << 0xcU) 
                                                                       | (0xfffU 
                                                                          & (IData)(
                                                                                ((QData)((IData)(vlSelf->inst)) 
                                                                                >> 0x14U)))))))));
    vlSelf->ysyx_22040175_top__DOT__alu_src2 = ((2U 
                                                 & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))
                                                  ? (QData)((IData)(vlSelf->pc))
                                                  : (QData)((IData)(vlSelf->pc)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))
                                                  ? vlSelf->ysyx_22040175_top__DOT__imm
                                                  : vlSelf->ysyx_22040175_top__DOT__reg2_rdata));
    vlSelf->ysyx_22040175_top__DOT__alu_src1 = ((0U 
                                                 == (IData)(vlSelf->ysyx_22040175_top__DOT__reg1_raddr))
                                                 ? 0ULL
                                                 : 
                                                vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
                                                [vlSelf->ysyx_22040175_top__DOT__reg1_raddr]);
    if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__alu_src1 = 
            ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))
              ? vlSelf->ysyx_22040175_top__DOT__imm
              : 4ULL);
    }
    if ((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag)) 
          | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) 
         | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag)))) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__pmem_read_TOP(
                                                                                (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                                                                                + vlSelf->ysyx_22040175_top__DOT__alu_src2), vlSelf->__Vtask_ysyx_22040175_top__DOT__u_alu_0__DOT__pmem_read__5__rdata);
        vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw 
            = vlSelf->__Vtask_ysyx_22040175_top__DOT__u_alu_0__DOT__pmem_read__5__rdata;
    } else if ((6U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__pmem_read_TOP(vlSelf->ysyx_22040175_top__DOT__alu_src1, vlSelf->__Vtask_ysyx_22040175_top__DOT__u_alu_0__DOT__pmem_read__6__rdata);
        vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw 
            = vlSelf->__Vtask_ysyx_22040175_top__DOT__u_alu_0__DOT__pmem_read__6__rdata;
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__pmem_read_TOP(vlSelf->ysyx_22040175_top__DOT__alu_src2, vlSelf->__Vtask_ysyx_22040175_top__DOT__u_alu_0__DOT__pmem_read__7__rdata);
        vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw2 
            = vlSelf->__Vtask_ysyx_22040175_top__DOT__u_alu_0__DOT__pmem_read__7__rdata;
    }
    vlSelf->ysyx_22040175_top__DOT__zero = 0U;
    vlSelf->ysyx_22040175_top__DOT__alu_res = 0ULL;
    if ((0x10U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
        vlSelf->ysyx_22040175_top__DOT__alu_res = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                                                   - vlSelf->ysyx_22040175_top__DOT__alu_src2);
        vlSelf->ysyx_22040175_top__DOT__zero = (0ULL 
                                                == vlSelf->ysyx_22040175_top__DOT__alu_res);
    } else if ((8U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
        if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
            if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
                if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
                    vlSelf->ysyx_22040175_top__DOT__alu_res 
                        = VL_MODDIV_QQQ(64, vlSelf->ysyx_22040175_top__DOT__alu_src1, vlSelf->ysyx_22040175_top__DOT__alu_src2);
                } else {
                    vlSelf->ysyx_22040175_top__DOT__alu_res 
                        = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                           - vlSelf->ysyx_22040175_top__DOT__alu_src2);
                    vlSelf->ysyx_22040175_top__DOT__zero 
                        = (0ULL == vlSelf->ysyx_22040175_top__DOT__alu_res);
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                       - vlSelf->ysyx_22040175_top__DOT__alu_src2);
                vlSelf->ysyx_22040175_top__DOT__zero 
                    = (0ULL == vlSelf->ysyx_22040175_top__DOT__alu_res);
            } else {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                       - vlSelf->ysyx_22040175_top__DOT__alu_src2);
                vlSelf->ysyx_22040175_top__DOT__zero 
                    = (0ULL != vlSelf->ysyx_22040175_top__DOT__alu_res);
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
            vlSelf->ysyx_22040175_top__DOT__alu_res 
                = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                   - vlSelf->ysyx_22040175_top__DOT__alu_src2);
            vlSelf->ysyx_22040175_top__DOT__zero = 
                (0ULL == vlSelf->ysyx_22040175_top__DOT__alu_res);
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
            vlSelf->ysyx_22040175_top__DOT__alu_res 
                = ((vlSelf->ysyx_22040175_top__DOT__alu_src1 
                    < vlSelf->ysyx_22040175_top__DOT__alu_src2)
                    ? 1ULL : 0ULL);
        } else {
            vlSelf->ysyx_22040175_top__DOT__alu_res 
                = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                   - vlSelf->ysyx_22040175_top__DOT__alu_src2);
            vlSelf->ysyx_22040175_top__DOT__zero = 
                (0ULL == vlSelf->ysyx_22040175_top__DOT__alu_res);
        }
    } else if ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
        if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
            if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                       - vlSelf->ysyx_22040175_top__DOT__alu_src2);
                vlSelf->ysyx_22040175_top__DOT__zero 
                    = (0ULL == vlSelf->ysyx_22040175_top__DOT__alu_res);
            } else {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22040175_top__DOT__alu_src1, vlSelf->ysyx_22040175_top__DOT__alu_src2);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
            vlSelf->ysyx_22040175_top__DOT__alu_res 
                = VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22040175_top__DOT__alu_src1, vlSelf->ysyx_22040175_top__DOT__alu_src2);
        } else {
            vlSelf->ysyx_22040175_top__DOT__alu_res 
                = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                   - vlSelf->ysyx_22040175_top__DOT__alu_src2);
            vlSelf->ysyx_22040175_top__DOT__zero = 
                (0ULL == vlSelf->ysyx_22040175_top__DOT__alu_res);
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
        if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
            if ((0U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                       + vlSelf->ysyx_22040175_top__DOT__alu_src2);
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__alu_res));
            } else if ((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw));
            } else if ((2U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw;
            } else if ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                       + vlSelf->ysyx_22040175_top__DOT__alu_src2);
            } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw))));
            } else if ((5U == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))) {
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                       + vlSelf->ysyx_22040175_top__DOT__alu_src2);
                vlSelf->ysyx_22040175_top__DOT__alu_res 
                    = (QData)((IData)((0xffffU & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_res))));
            }
        } else {
            vlSelf->ysyx_22040175_top__DOT__alu_res 
                = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                   - vlSelf->ysyx_22040175_top__DOT__alu_src2);
            vlSelf->ysyx_22040175_top__DOT__zero = 
                (0ULL == vlSelf->ysyx_22040175_top__DOT__alu_res);
        }
    } else if ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
        vlSelf->ysyx_22040175_top__DOT__alu_res = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                                                   - vlSelf->ysyx_22040175_top__DOT__alu_src2);
        vlSelf->ysyx_22040175_top__DOT__zero = (0ULL 
                                                == vlSelf->ysyx_22040175_top__DOT__alu_res);
    } else {
        vlSelf->ysyx_22040175_top__DOT__alu_res = (
                                                   (6U 
                                                    == (IData)(vlSelf->ysyx_22040175_top__DOT__rd_flag))
                                                    ? 
                                                   (vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw 
                                                    & vlSelf->ysyx_22040175_top__DOT__u_alu_0__DOT__rd_buf_lw2)
                                                    : 
                                                   (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                                                    & vlSelf->ysyx_22040175_top__DOT__alu_src2));
    }
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___combo__TOP__4(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->ysyx_22040175_top__DOT__rst_n = (1U & (~ (IData)(vlSelf->rst)));
    if ((((((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n) 
            & (IData)(vlSelf->ysyx_22040175_top__DOT__reg_wen)) 
           & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__reg_waddr))) 
          & (IData)(vlSelf->ysyx_22040175_top__DOT__s_flag)) 
         & (IData)(vlSelf->time_set))) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_reg_file_0__DOT__pmem_write_TOP(
                                                                                (vlSelf->ysyx_22040175_top__DOT____Vcellout__u_reg_file_0__reg_f
                                                                                [vlSelf->ysyx_22040175_top__DOT__reg_waddr] 
                                                                                + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__s_imm))), vlSelf->ysyx_22040175_top__DOT__alu_res, (IData)(vlSelf->ysyx_22040175_top__DOT__wmask));
    }
}

void Vysyx_22040175_top___024root___eval(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vysyx_22040175_top___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__rst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n;
    vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n 
        = vlSelf->ysyx_22040175_top__DOT__rst_n;
}

QData Vysyx_22040175_top___024root___change_request_1(Vysyx_22040175_top___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22040175_top___024root___change_request(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___change_request\n"); );
    // Body
    return (Vysyx_22040175_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22040175_top___024root___change_request_1(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->ysyx_22040175_top__DOT__rst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__rst_n));
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22040175_top__DOT__rst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__rst_n))) VL_DBG_MSGF("        CHANGE: vsrc/ysyx_22040175_top.v:14: ysyx_22040175_top.rst_n\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__rst_n 
        = vlSelf->ysyx_22040175_top__DOT__rst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22040175_top___024root___eval_debug_assertions(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->time_set & 0xfeU))) {
        Verilated::overWidthError("time_set");}
}
#endif  // VL_DEBUG
