#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  panic("Not implemented");
}


char *strcpy(char *dst, const char *src) {
  //panic("Not implemented");
  char c;
  char *s =(char *) src;
  const ptrdiff_t off = dst - s - 1;

  do
    {
      c = *s++;
      s[off] = c;
    }
  while (c != '\0');
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  //panic("Not implemented");
  char *str_dest=dst;
    while(*dst!='\0')
        dst++;
    while((*dst++=*src++)!='\0');
    return str_dest;
}

int strcmp(const char *s1, const char *s2) {
  //panic("Not implemented");
  while((*s1) && (*s1 == *s2))
  {
    s1++;
    s2++;
  }
  if(*(unsigned char*)s1 > *(unsigned char*)s2)
  {
    return 1;
  }
  else if(*(unsigned char*)s1 < *(unsigned char*)s2)
  {
    return -1;
  }
  else
  {
    return 0;
  }
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  //panic("Not implemented");
  void* ret = s;
  while(n--)
  {
    *(char*)s = (char) c ;
    s = (char*)s + 1;
  }
  return ret;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  //panic("Not implemented");
  char *tmp = out;
  const char *s = in;
 
  while (n--)
    *tmp++ = *s++ ;
  
  return out;
/*  assert(out != NULL);
  assert(in != NULL);
  void* pd = out;
  while(n--){
    *(char *)out = *(char*)in;
    out = (char *)out + 1;
    in = (char *)in + 1;
  }
  return pd;*/

}

int memcmp(const void *s1, const void *s2, size_t n) {
  //panic("Not implemented");
  const unsigned char *su1, *su2;
  int res = 0;
  for(su1 = s1,su2 = s2; 0< n; ++su1, ++su2, n--)
    if((res = *su1 - *su2) != 0)
      break;
  return res;  
   
}

#endif
