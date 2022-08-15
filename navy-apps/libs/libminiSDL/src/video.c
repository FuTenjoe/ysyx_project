#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(dst && src);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  SDL_Rect s_rect;
  SDL_Rect d_rect;
  if(dstrect == NULL){
    d_rect.x = 0;
    d_rect.y = 0;
    d_rect.w = dst->w;
    d_rect.h = dst->h;
    dstrect = &d_rect;
  }
  if(srcrect == NULL){
    s_rect.x = 0;
    s_rect.y = 0;
    s_rect.w = src ->w;
    s_rect.h = src ->h;
    srcrect = &s_rect;
  }
  if(src ->format ->BitsPerPixel == 32){
    uint32_t* pp_d = (uint32_t*)dst->pixels;
    uint32_t* pp_s = (uint32_t*)src->pixels;
    for(int i=0; i<srcrect->h; i++){
      for(int j=0; j<srcrect->w; j++){
        int id_dst = ((i + dstrect->y) >= (dst->h-1) ? (dst->h-1):(i+dstrect->y)) * dst->w +((j+dstrect->x) >=dst->w ?(dst->w-1):(j + dstrect->x));
        int id_src = ((i + srcrect->y) >= (src->h-1) ? (src->h-1):(i+srcrect->y)) * src->w +((j+srcrect->x) >=src->w ?(src->w-1):(j+srcrect->x));
        pp_d[id_dst] = pp_s[id_src];
      }
    }
  }
  else{
    uint8_t* pp_d = (uint8_t*)dst->pixels;
    uint8_t* pp_s = (uint8_t*)src->pixels;
    for (int i = 0; i < srcrect->h; i++) {
	    for (int j = 0; j < srcrect->w; j++) {
        int id_dst = ((i + dstrect->y) >= dst->h ? (dst->h-1) : (i + dstrect->y)) * dst->w +((j + dstrect->x) >= dst->w ? (dst->w-1) : (j + dstrect->x));
	      int id_src = ((i + srcrect->y) >= src->h ? (src->h-1) : (i + srcrect->y)) * src->w +((j + srcrect->x) >= src->w ? (src->w-1) : (j + srcrect->x)); 
        pp_d[id_dst] = pp_s[id_src];
      }
    }
  }
}

void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color) {
  //参考代码
  SDL_Rect t;
  if(dstrect == NULL){
    t.x = 0;
    t.y = 0;
    t.h = dst->h;
    t.w = dst->w;
    dstrect = &t;
  }
  else if(dstrect->h ==0 || dstrect->w == 0){
    dstrect ->h = dst->h;
    dstrect ->w = dst->w;
  }
  uint32_t* pp = (uint32_t*)dst->pixels;
  if(!dst->format->palette ){
    for (int i =0;(dstrect->y+i)<dstrect->h && (dstrect->y+i<dst->h);i++){
      for(int j =0; (dstrect->x+j)<dstrect->w && (j+dstrect->x <dst->w);j++){
        pp[j+dstrect->x+(i+dstrect->y)*dst->w] = color;
      }
    }
  }
  else{
    //printf("color is %x\n",color);
    uint8_t* tem = (uint8_t*)dst->pixels;
    int n = 0;
    for(;n< dst->format->palette->ncolors;n++){
      if(color == dst->format->palette->colors[n].val)
          break;
    }
    //assert(dst->format->palette->colors[n].val == color);
     for (int i =0;(dstrect->y+i)<dstrect->h && (dstrect->y+i<dst->h);i++){
        for(int j =0; (dstrect->x+j)<dstrect->w && (j+dstrect->x )<dst->w;j++){
          tem[j+dstrect->x+(i+dstrect->y)*dst->w] = n;
        } 
    }

    //assert(0);
  }

}
static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len);
void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h) {
  //add
  if(s->format->BitsPerPixel == 32){
    int s_w = s->w,s_h = s->h;
    if(w==0 || w > s_w) w = s_w;
    if(h==0 || h > s_h) h = s_h;
    NDL_DrawRect((uint32_t*)(s->pixels), x, y, w, h);
    printf("s->w = %d s->h = %d\n",s->w,s->h);
    printf("x= %d,y=%d\n",x,y);
  }
  else{
    int s_w = s->w,s_h = s->h;
    if(w==0 || w > s_w) w = s_w;
    if(h==0 || h > s_h) h = s_h;

    uint32_t* selfpalette = malloc(w*h*4);
    memset(selfpalette,0,w*h*sizeof(uint32_t));
    //printf("w = %dh = %d\n",s->w,s->h);
    int n=0;
    uint8_t* tmp = (uint8_t*)(s->pixels);
    for(int j=0; j<h &&(j+0)< s->h; j++){
      for(int i=0; i<w &&(i+0)< s->w; i++){
        //uint64_t r = s->format->palette[s->pixels[(j + y) * s->w + (i + x)]].colors;
        //printf("w = h = 循环1\n");
        //uint32_t r = s->format->palette->colors[s->pixels[(j+y)*s_w +i+x]].r;
        //printf("r size =%d \n",sizeof(r));
        //printf("r value = %ld \n",r/10);
        //printf("palatte size =%d \n",sizeof(selfpalette[0]));
        //printf("i= %d,j=%d\n",i,j);
        uint8_t r = s->format->palette->colors[s->pixels[(j+y)*s_w +i+x]].r;
        uint8_t g = s->format->palette->colors[s->pixels[(j+y)*s_w +i+x]].g;
        uint8_t b = s->format->palette->colors[s->pixels[(j+y)*s_w +i+x]].b;
        selfpalette[j*w+i] = ((r<<16) |(g<<8)|b);
      }
      
    }
    //printf("x= %d,y=%d\n",x,y);
    NDL_DrawRect((uint32_t*)selfpalette,0,0,w,h);
    free(selfpalette);

  }

 /*  if(w==0 || h==0){
    w = s->w;
    h = s->h;

  }
  if(!s->format->palette ){
    printf("SDL_UP x[%d],y[%d],w[%d],h[%d] \n",x,y,w,h);
      NDL_DrawRect((uint32_t*)s->pixels,x,y,w,h); 
  }
  else{
    uint32_t* new_pixels = malloc(s->w*s->h*4);
    memset(new_pixels,0,s->w*s->h*sizeof(uint32_t));

    uint8_t* tmp = (uint8_t*)(s->pixels);
  
  int n = 0;
	for(int j = 0; j < h && (j + y) < s->h; j++) {
	for (int i = 0; i < w && (i + x < s->w); i++) {
	new_pixels[n++] = s->format->palette->colors[tmp[(j + y) * s->w + (i + x)]].val;
	}
  }

    ConvertPixelsARGB_ABGR(new_pixels,new_pixels,s->w*s->h);
    NDL_DrawRect(new_pixels,x,y,w,h); 
    
    free(new_pixels);
  }*/
  
  
}

// APIs below are already implemented.

static inline int maskToShift(uint32_t mask) {
  switch (mask) {
    case 0x000000ff: return 0;
    case 0x0000ff00: return 8;
    case 0x00ff0000: return 16;
    case 0xff000000: return 24;
    case 0x00000000: return 24; // hack
    default: assert(0);
  }
}

SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  if (depth == 8) {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  } else {
    s->format->palette = NULL;
    s->format->Rmask = Rmask; s->format->Rshift = maskToShift(Rmask); s->format->Rloss = 0;
    s->format->Gmask = Gmask; s->format->Gshift = maskToShift(Gmask); s->format->Gloss = 0;
    s->format->Bmask = Bmask; s->format->Bshift = maskToShift(Bmask); s->format->Bloss = 0;
    s->format->Amask = Amask; s->format->Ashift = maskToShift(Amask); s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth / 8;

  s->w = width;
  s->h = height;
  s->pitch = width * depth / 8;
  assert(s->pitch == width * s->format->BytesPerPixel);

  if (!(flags & SDL_PREALLOC)) {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  return s;
}

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
      Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

void SDL_FreeSurface(SDL_Surface *s) {
  if (s != NULL) {
    if (s->format != NULL) {
      if (s->format->palette != NULL) {
        if (s->format->palette->colors != NULL) free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC)) free(s->pixels);
    free(s);
  }
}

SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
  if (flags & SDL_HWSURFACE) NDL_OpenCanvas(&width, &height);
  return SDL_CreateRGBSurface(flags, width, height, bpp,
      DEFAULT_RMASK, DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
}

void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);

  int x = (srcrect == NULL ? 0 : srcrect->x);
  int y = (srcrect == NULL ? 0 : srcrect->y);
  int w = (srcrect == NULL ? src->w : srcrect->w);
  int h = (srcrect == NULL ? src->h : srcrect->h);

  assert(dstrect);
  if(w == dstrect->w && h == dstrect->h) {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  }
  else {
    assert(0);
  }
}

void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors) {
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);

  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);

  if(s->flags & SDL_HWSURFACE) {
    assert(ncolors == 256);
    for (int i = 0; i < ncolors; i ++) {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g;
      uint8_t b = colors[i].b;
    }
    SDL_UpdateRect(s, 0, 0, 0, 0);
  }
}

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len) {
  int i;
  uint8_t (*pdst)[4] = dst;
  uint8_t (*psrc)[4] = src;
  union {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16) {
#define macro(i) \
    tmp.val32 = *((uint32_t *)psrc[i]); \
    *((uint32_t *)pdst[i]) = tmp.val32; \
    pdst[i][0] = tmp.val8[2]; \
    pdst[i][2] = tmp.val8[0];

    macro(i + 0); macro(i + 1); macro(i + 2); macro(i + 3);
    macro(i + 4); macro(i + 5); macro(i + 6); macro(i + 7);
    macro(i + 8); macro(i + 9); macro(i +10); macro(i +11);
    macro(i +12); macro(i +13); macro(i +14); macro(i +15);
  }

  for (; i < len; i ++) {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags) {
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface* ret = SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel,
    fmt->Rmask, fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 || (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask) p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s) {
  return 0;
}

void SDL_UnlockSurface(SDL_Surface *s) {
}
