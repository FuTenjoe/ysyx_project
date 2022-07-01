#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  //自己加
  cpu.mepc = epc;
  cpu.mcause = NO;
  //rtl_j(cpu.mtvec);
  vaddr_t rt = cpu.mtvec;
  return rt;
  //return 0;

  //return 0;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
