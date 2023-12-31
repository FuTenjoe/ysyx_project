#include <common.h>
//自己加
extern void do_syscall(Context *c);
static Context* do_event(Event e, Context* c) {
  switch (e.event) {
   // case 1: printf("do evevt event ID = %d\n", e.event);c->mepc= c->mepc+4;break;
    //case 2: printf("do evevt event ID = %d\n", e.event);do_syscall(c);c->mepc= c->mepc+4;break;
    case 1: c->mepc= c->mepc+4;break;
    case 2: do_syscall(c);c->mepc= c->mepc+4;break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
