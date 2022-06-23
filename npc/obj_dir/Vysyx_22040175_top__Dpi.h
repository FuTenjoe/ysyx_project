// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/ctrl.v:119:30
    extern void ebreak();
    // DPI import at vsrc/ysyx_22040175_top.v:114:30
    extern void pmem_read(int raddr, int* rdata);

#ifdef __cplusplus
}
#endif
