#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
 // return 0;
 //自己加
 for (int i = 0; i < len; i++){
        putch(((char*)(buf))[i]);
      }
  return 0;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  //return 0;
  //自己加

  int key = io_read(AM_INPUT_KEYBRD).keycode;
  //int key_down = io_read(AM_INPUT_KEYBRD).keydown;
  int flag = 0;
  if(key & 0x8000){
    key ^= 0x8000;
    flag = 1;
  }
  if(key != AM_KEY_NONE){
    if(flag)
      len = sprintf(buf,"kd %s\n",keyname[key]);  //按下按键
    else
      len = sprintf(buf,"ku %s\n",keyname[key]);  //松开按键
  }
  else{
    len = sprintf(buf,"t %u\n",io_read(AM_TIMER_UPTIME).us);
    //len = 0;
  }
  return len;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
