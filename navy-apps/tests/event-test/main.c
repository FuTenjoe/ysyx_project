#include <stdio.h>
#include <NDL.h>

int main() {
  printf("keyboard0\n");
  NDL_Init(0);
  printf("keyboard\n");
  while (1) {
    char buf[64];
    if (NDL_PollEvent(buf, sizeof(buf))) {
      printf("receive event: %s\n", buf);
    }
  }
  return 0;
}
