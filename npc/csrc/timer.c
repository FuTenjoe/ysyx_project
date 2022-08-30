//#include <device/map.h>
//#include <device/alarm.h>
//#include <utils.h>
//自己加
#include <stdio.h>
#include <stdlib.h>
#include "Vysyx_22040175_top.h"
#include "assert.h"
#include <dlfcn.h>  //动态链接库相关函数



enum{DIFFTEST_TO_DUT,DIFFTEST_TO_REF,NPC_STOP,NPC_RUNNING,NPC_END,NPC_ABORT};
typedef uint64_t word_t;
typedef  uint32_t paddr_t;
typedef  word_t vaddr_t;
typedef unsigned long int	uintptr_t;
int npc_state2 = NPC_STOP; 
static uint64_t boot_time = 0;

static uint64_t get_time_internal() {
#if defined(CONFIG_TARGET_AM)
  uint64_t us = io_read(AM_TIMER_UPTIME).us;
#elif defined(CONFIG_TIMER_GETTIMEOFDAY)
  struct timeval now;
  gettimeofday(&now, NULL);
  uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
#else
  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
#endif
  return us;
}

uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
  return now - boot_time;
}

uint64_t get_time();
//自己加结束
static uint32_t *rtc_port_base = NULL;

static void rtc_io_handler(uint32_t offset, int len, bool is_write) {
  assert(offset == 0 || offset == 4);
  if (!is_write && offset == 4) {
    uint64_t us = get_time();
    rtc_port_base[0] = (uint32_t)us;
    rtc_port_base[1] = us >> 32;
  }
}

#ifndef CONFIG_TARGET_AM
static void timer_intr() {
 
}
#endif

//自己加

typedef void(*io_callback_t)(uint32_t, int, bool);
uint8_t* new_space(int size);
static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;
#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)
uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  return p;
}


#define NR_MAP 16
typedef struct {
  const char *name;
  // we treat ioaddr_t as paddr_t here
  paddr_t low;
  paddr_t high;
  void *space;
  io_callback_t callback;
} IOMap;
static IOMap maps[NR_MAP] = {};
static int nr_map = 0;


void add_mmio_map(const char *name, paddr_t addr,
        void *space, uint32_t len, io_callback_t callback);


void add_mmio_map(const char *name, paddr_t addr, void *space, uint32_t len, io_callback_t callback) {
  assert(nr_map < NR_MAP);
  maps[nr_map] = (IOMap){ .name = name, .low = addr, .high = addr + len - 1,
    .space = space, .callback = callback };
  fflush(stdout);

  nr_map ++;
}


typedef void (*alarm_handler_t) ();
void add_alarm_handle(alarm_handler_t h);
#define MAX_HANDLER 8
static alarm_handler_t handler[MAX_HANDLER] = {};
static int idx = 0;
void add_alarm_handle(alarm_handler_t h) {
  assert(idx < MAX_HANDLER);
  handler[idx ++] = h;
}


void init_timer() {
  rtc_port_base = (uint32_t *)new_space(8);
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("rtc", CONFIG_RTC_PORT, rtc_port_base, 8, rtc_io_handler);
#else
  //add_mmio_map("rtc", 0xa1000048, rtc_port_base, 8, rtc_io_handler);
#endif
  add_alarm_handle(timer_intr);
}




