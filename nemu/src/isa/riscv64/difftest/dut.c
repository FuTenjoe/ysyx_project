#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int i;
  for (i = 0; i < 32; i++) {
    if (ref_r->gpr[i] != gpr(i)) {
      isa_reg_display(ref_r, pc);
      printf("this is the wrong reg:%ld\n",gpr(i));
      printf("this is the wrong ref reg:%ld\n",ref_r->gpr[i]);
      printf("this is i:%d",i);
      return false;
    }
  }
  //if (ref_r->pc != pc) return false;

  return true;

}

void isa_difftest_attach() {
}
