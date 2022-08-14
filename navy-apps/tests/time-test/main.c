#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
//自己加
#include <assert.h>
#include <sys/time.h>
int main() {
  struct timeval now = {0,0};
  printf("now.tv_sec = %d\n",now.tv_sec);
  gettimeofday(&now,NULL);
  uint32_t ticks = now.tv_sec*1000 + now.tv_usec/1000;
  printf("now.tv_sec2 = %d\n",now.tv_sec);
  return ticks;
}
