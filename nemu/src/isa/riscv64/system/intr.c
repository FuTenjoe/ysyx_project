#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  //自己加
  cpu.sr[833] = epc;
  cpu.sr[834] = NO;
  //rtl_j(cpu.mtvec);
  vaddr_t rt = cpu.sr[773];
  printf("jump out\n");
  //return 0xa00001800;
  return rt;
  //return 0;

  //return 0;
}

word_t isa_query_intr() {
  //return INTR_EMPTY;
  //自家加实现mret
  printf("mret cpu.sr[833]=%lx\n", cpu.sr[833]);
  //cpu.sr[833] = cpu.sr[833] +4;
  return cpu.sr[833];
  
}
