#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
//自己加
//#include "nemu/tools/spike-diff/repo/riscv/sim.h"

//static sim_t* s = NULL;


void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  assert(0);
  //自己加
 /* if (direction == DIFFTEST_TO_REF) {
    s->diff_memcpy(addr, buf, n);
  } else {
    assert(0);
  }*/
}

void difftest_regcpy(void *dut, bool direction) {
  assert(0);
  //自己加
 /* if (direction == DIFFTEST_TO_REF) {
    s->diff_set_regs(dut);
  } else {
    s->diff_get_regs(dut);
  }*/
}

void difftest_exec(uint64_t n) {
  assert(0);
  //自己加
 /* s->diff_step(n);*/
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init() {
  /* Perform ISA dependent initialization. */
  init_isa();
}
