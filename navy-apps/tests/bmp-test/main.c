#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <BMP.h>
#include <NDL.h>

//extern void* BMP_Load(const char *filename, int *width, int *height);
int main() {
  NDL_Init(0);
  int w, h;
  void *bmp = BMP_Load("/share/pictures/projectn.bmp", &w, &h);
  printf("bmpload w=%d h=%d\n",w,h);
  assert(bmp);
  NDL_OpenCanvas(&w, &h);
  NDL_DrawRect((uint32_t *)bmp, 0, 0, w, h);
  printf("Test will finish...\n");
  free(bmp);
  NDL_Quit();
  printf("Test ends! Spinning...\n");
  while (1);
  return 0;
}
