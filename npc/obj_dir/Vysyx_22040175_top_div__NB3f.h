// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP_DIV__NB3F_H_
#define VERILATED_VYSYX_22040175_TOP_DIV__NB3F_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;
class Vysyx_22040175_top_divider_cell__N3f_M20;


//----------

VL_MODULE(Vysyx_22040175_top_div__NB3f) {
  public:
    // CELLS
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__u_divider_step0;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__1__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__2__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__3__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__4__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__5__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__6__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__7__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__8__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__9__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__10__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__11__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__12__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__13__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__14__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__15__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__16__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__17__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__18__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__19__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__20__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__21__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__22__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__23__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__24__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__25__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__26__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__27__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__28__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__29__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__30__KET____DOT__u_divider_step;
    Vysyx_22040175_top_divider_cell__N3f_M20* __PVT__sqrt_stepx__BRA__31__KET____DOT__u_divider_step;

    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rstn,0,0);
    VL_IN8(__PVT__div_valid,0,0);
    VL_IN8(__PVT__div_sign,0,0);
    VL_IN8(__PVT__alu_sec,0,0);
    VL_OUT8(__PVT__res_rdy,0,0);
    VL_IN(__PVT__dividend,31,0);
    VL_IN(__PVT__divisor,31,0);
    VL_OUT(__PVT__merchant,31,0);
    VL_OUT(__PVT__remainder,31,0);
    VL_OUT(__PVT__div_res,31,0);

    // LOCAL SIGNALS
    CData/*1:0*/ __PVT__res_sign;
    CData/*0:0*/ __PVT__delay1_div_finish;
    CData/*0:0*/ __PVT__delay2_div_finish;
    CData/*0:0*/ __PVT__delay_div_valid;
    CData/*0:0*/ __PVT__en2;
    CData/*0:0*/ __PVT__redy1;
    CData/*0:0*/ __PVT__redy2;
    CData/*0:0*/ __PVT__redy3;
    IData/*31:0*/ __PVT__rdy_t;
    IData/*31:0*/ __PVT__sign_dividend;
    IData/*31:0*/ __PVT__sign_divisor;
    VlUnpacked<IData/*30:0*/, 32> __PVT__dividend_t;
    VlUnpacked<IData/*31:0*/, 32> __PVT__divisor_t;
    VlUnpacked<IData/*31:0*/, 32> __PVT__remainder_t;
    VlUnpacked<IData/*31:0*/, 32> __PVT__merchant_t;

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __Vcellout__u_divider_step0__rdy;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__rdy;
        CData/*0:0*/ __Vcellinp__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__en;
        CData/*0:0*/ __Vdly__delay1_div_finish;
    };
    struct {
        CData/*0:0*/ __Vdly__delay2_div_finish;
        CData/*0:0*/ __Vdly__delay_div_valid;
        CData/*0:0*/ __Vdly__redy1;
        CData/*0:0*/ __Vdly__redy2;
        CData/*0:0*/ __Vdly__redy3;
        IData/*31:0*/ __Vcellout__u_divider_step0__remainder;
        IData/*31:0*/ __Vcellout__u_divider_step0__merchant;
        IData/*31:0*/ __Vcellout__u_divider_step0__divisor_kp;
        IData/*30:0*/ __Vcellout__u_divider_step0__dividend_kp;
        IData/*30:0*/ __Vcellinp__u_divider_step0__dividend_ci;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__dividend_ci;
    };
    struct {
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__merchant_ci;
    };
    struct {
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__divisor;
    };
    struct {
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__divisor;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__remainder;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__merchant;
        IData/*30:0*/ __Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__dividend_kp;
        IData/*31:0*/ __Vcellout__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__divisor_kp;
        IData/*30:0*/ __Vcellinp__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__dividend_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__merchant_ci;
        IData/*31:0*/ __Vcellinp__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__divisor;
        QData/*32:0*/ __Vcellinp__u_divider_step0__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__1__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__2__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__3__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__4__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__5__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__6__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__7__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__8__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__9__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__10__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__11__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__12__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__13__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__14__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__15__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__16__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__17__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__18__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__19__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__20__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__21__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__22__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__23__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__24__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__25__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__26__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__27__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__28__KET____DOT__u_divider_step__dividend;
    };
    struct {
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__29__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__30__KET____DOT__u_divider_step__dividend;
        QData/*32:0*/ __Vcellinp__sqrt_stepx__BRA__31__KET____DOT__u_divider_step__dividend;
    };

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top_div__NB3f);  ///< Copying not allowed
  public:
    Vysyx_22040175_top_div__NB3f(const char* name);
    ~Vysyx_22040175_top_div__NB3f();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
