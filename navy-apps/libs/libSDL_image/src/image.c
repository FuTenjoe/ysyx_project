#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
  printf("filename = %s\n",filename);
  FILE* fd = fopen(filename,"r");
  assert(fd !=NULL);
  printf("imgload2\n");
  int a = fseek(fd,0,SEEK_END);
  printf("imgload3\n");
  size_t size = ftell(fd);
  char* buf = malloc(size);
  memset(buf,0,size);
  fseek(fd,0,SEEK_SET);
  fread(buf,1,size,fd);
  SDL_Surface* ptr = STBIMG_LoadFromMemory(buf,size);
  printf("imgload2\n");
  free(buf);
  fclose(fd);
  return ptr;
  //return NULL;
}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
