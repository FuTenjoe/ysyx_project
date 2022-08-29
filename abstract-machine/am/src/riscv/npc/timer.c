#include <am.h>
//自己加
#include "include/npc.h"
#include <riscv/riscv.h>
void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  //uptime->us = 0;
  //自己加
  uint64_t high_time = (uint64_t)inl(RTC_ADDR+4) <<32;
  uint64_t low_time = (uint64_t)inl(RTC_ADDR);
  uptime ->us = high_time | low_time;
  
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
