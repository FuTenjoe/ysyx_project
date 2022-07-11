#include "am.h"
#include <riscv/riscv.h>
#include <arch/riscv64-nemu.h> //自己加
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case(10):{
        if((c->gpr[17] >=0) &&(c->gpr[17] <=19)){
          ev.event = EVENT_SYSCALL;break;
        }
        else if(c->gpr[17] == -1){
          ev.event = EVENT_YIELD;break;
        }
        else {
          ev.event = EVENT_ERROR;break;
        }
      }
      //case(11):ev.event = EVENT_YIELD;break;
      default: ev.event = EVENT_ERROR;break;
    }
    printf("mcause = %lx\n",c->mcause);
    printf("mstatus = %lx\n",c->mstatus);
    printf("mepc = %lx\n",c->mepc);
    c = user_handler(ev, c);
    printf("ok");
    assert(c != NULL);
    printf("ok\n");
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
