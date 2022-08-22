#include <am.h>
#include <klib.h>
#include <klib-macros.h>
static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 0x8000000000000007:
        ev.event = EVENT_IRQ_TIMER;break;
      case(11):{
        if((c->gpr[17] >=0) &&(c->gpr[17] <=19)){
          ev.event = EVENT_SYSCALL;break;
        }
        if(c->gpr[17] == -1){
          ev.event = EVENT_YIELD;
          c->mepc = c->mepc + 4;
          break;
        }
        else {
          ev.event = EVENT_ERROR;break;
        }
      }
      //case(11):ev.event = EVENT_YIELD;break;
      default: ev.event = EVENT_ERROR;break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
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
  //自己加
/*  if(enable){
    asm volatile("csri mstatus, 8"); //mstatus_MIE
    set_csr (mie, MIP_MTIP);    //mie_MTIE
  }
  else{
    asm volatile("csri mstatus, 8");
    clear_csr(mie, MIP_MTIP);
  }*/
}
