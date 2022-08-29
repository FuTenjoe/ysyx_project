#include <am.h>
//#include <nemu.h>
//自己加
#include "include/npc.h"
#include <riscv/riscv.h>
void __am_disk_config(AM_DISK_CONFIG_T *cfg) {
  cfg->present = false;
}

void __am_disk_status(AM_DISK_STATUS_T *stat) {
}

void __am_disk_blkio(AM_DISK_BLKIO_T *io) {
}
