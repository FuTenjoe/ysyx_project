//#include <device/map.h>
//#include <device/alarm.h>
//#include <utils.h>
#include <cassert>
#include <stdio.h>
#include <stdlib.h>
#include "Vysyx_22040175_top.h"
#include "verilated_dpi.h"
#include "assert.h"
#include <dlfcn.h>  //动态链接库相关函数
#include <common.h>
typedef uint64_t word_t;
typedef  uint32_t paddr_t;
typedef  word_t vaddr_t;
typedef unsigned long int	uintptr_t;

static uint32_t *rtc_port_base = NULL;

static void rtc_io_handler(uint32_t offset, int len, bool is_write) {
  assert(offset == 0 || offset == 4);
  if (!is_write && offset == 4) {
    uint64_t us = get_time();
    rtc_port_base[0] = (uint32_t)us;
    rtc_port_base[1] = us >> 32;
  }
}
int npc_state = NPC_STOP;
#ifndef CONFIG_TARGET_AM
static void timer_intr() {
  if (npc_state == NPC_RUNNING) {
    extern void dev_raise_intr();
    dev_raise_intr();
  }
}
#endif
extern "C"  void add_mmio_map(const char *name, paddr_t addr,
        void *space, uint32_t len, io_callback_t callback);
void init_timer() {
  rtc_port_base = (uint32_t *)new_space(8);
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("rtc", CONFIG_RTC_PORT, rtc_port_base, 8, rtc_io_handler);
#else
  add_mmio_map("rtc", CONFIG_RTC_MMIO, rtc_port_base, 8, rtc_io_handler);
#endif
  IFNDEF(CONFIG_TARGET_AM, add_alarm_handle(timer_intr));
}
