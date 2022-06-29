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
    // DPI import at vsrc/ctrl.v:597:30
    extern void ebreak();
    // DPI import at vsrc/ysyx_22040175_top.v:143:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at vsrc/reg_file.v:59:30
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at vsrc/reg_file.v:56:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at vsrc/ctrl.v:605:30
    extern void unknown_inst();

#ifdef __cplusplus
}
#endif
