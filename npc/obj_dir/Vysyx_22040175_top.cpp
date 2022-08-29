// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_22040175_top.h"
#include "Vysyx_22040175_top__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_22040175_top::Vysyx_22040175_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vysyx_22040175_top__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , inst{vlSymsp->TOP.inst}
    , pc{vlSymsp->TOP.pc}
    , unknown_code{vlSymsp->TOP.unknown_code}
    , time_set{vlSymsp->TOP.time_set}
    , diff_pc{vlSymsp->TOP.diff_pc}
    , diff_delay_pc{vlSymsp->TOP.diff_delay_pc}
    , out_mem_rd_buf_flag{vlSymsp->TOP.out_mem_rd_buf_flag}
    , rootp{&(vlSymsp->TOP)}
{
}

Vysyx_22040175_top::Vysyx_22040175_top(const char* _vcname__)
    : Vysyx_22040175_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vysyx_22040175_top::~Vysyx_22040175_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vysyx_22040175_top___024root___eval_initial(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___eval_settle(Vysyx_22040175_top___024root* vlSelf);
void Vysyx_22040175_top___024root___eval(Vysyx_22040175_top___024root* vlSelf);
QData Vysyx_22040175_top___024root___change_request(Vysyx_22040175_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vysyx_22040175_top___024root___eval_debug_assertions(Vysyx_22040175_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_22040175_top___024root___final(Vysyx_22040175_top___024root* vlSelf);

static void _eval_initial_loop(Vysyx_22040175_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vysyx_22040175_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vysyx_22040175_top___024root___eval_settle(&(vlSymsp->TOP));
        Vysyx_22040175_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_22040175_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/ysyx_22040175_top.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_22040175_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vysyx_22040175_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_22040175_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_22040175_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vysyx_22040175_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_22040175_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/ysyx_22040175_top.v", 3, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_22040175_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vysyx_22040175_top::final() {
    Vysyx_22040175_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vysyx_22040175_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vysyx_22040175_top::name() const {
    return vlSymsp->name();
}
