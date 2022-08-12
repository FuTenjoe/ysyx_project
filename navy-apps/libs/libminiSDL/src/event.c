#include <NDL.h>
#include <SDL.h>
//加库
#include <string.h>
#include <assert.h>
#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}
static uint8_t keystate[83]={0};
int SDL_PollEvent(SDL_Event *ev) {
 // return 0;
  //自己加
  char key[64] = {0};
  key[0] = '\0';
  int ret = NDL_PollEvent(key,sizeof(key));
  int keycode = 0;
  if(ret ==0) 
      {return 0;}
  else{
  if(key[0]=='\0'){
    ev->key.keysym.sym = SDLK_NONE;
    ev->type = SDL_USEREVENT;
  }
  else{
  /*  char* str = key + 3;
    printf("SDL_PollEvent %s %d\n",key,strlen(key));
    for(int i=0,cnt=0; i<sizeof(keyname);i+=strlen(keyname[cnt]),cnt++){
      if(!strncmp(keyname[cnt],str,strlen(str))&&!strncmp(keyname[cnt],str,strlen(keyname[cnt]))){  //比较设定大小的字符串相同返回0
          keycode = cnt;
          break;
      }  
    }
    if(key[1] =='u'){
      ev->key.keysym.sym = keycode;
      ev->type = SDL_KEYUP;
      keystate[keycode] = 0;
    }
    else if(key[1] == 'd'){
      ev->key.keysym.sym = keycode;
      ev->type = SDL_KEYDOWN;
      keystate[keycode] = 1;
    }
    else {assert(0);}
    return 1;*/
     if(key[0]=='k' && key[1]=='u')
        {ev->type = SDL_KEYUP;}
    else if(key[0]=='k' && key[1]=='d')
        { ev->type = SDL_KEYDOWN;}
    else{assert(0);}
    char buf2[16];
    strcpy(buf2,key+3);
    buf2[strlen(buf2)-1]='\0';

    for(int i =0;i<83 ;i++){
      //printf("%d [%s]||||[%s]||||\n",i,keyname[i],buf2);
      if(strcmp((const char*)buf2,(const char*)keyname[i]) == 0){
        ev->key.keysym.sym = i;
        //printf("%s",buf2);

        keystate[i]= (ev->type == SDL_KEYDOWN);
        return 1;

      }
    }



  }
  }
  
}

int SDL_WaitEvent(SDL_Event *event) {
  //return 1;
  //自己加
  while(!SDL_PollEvent(event));
  return 1;

  
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
 if(numkeys == NULL){
  return keystate;
 }
 else assert(0);
}
