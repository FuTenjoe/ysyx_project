#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#define MINBLK 16
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;
//自己加开始
char memory[2000];
struct block{    
    size_t size;	       //区块大小
    int free;              //是否已使用
    struct block *next;	   //指向下一个区块
};
 
struct block *freeList=(void *)memory;
 
void init()
{
    freeList->size=2000-sizeof(struct block);	//可用空间大小
    freeList->free=1;                       	//1：空闲 0：使用
    freeList->next=NULL;                    	//指向空    
}
 
void split(struct block *fitting_slot,size_t size)  
{
    struct block *new=(void*)(fitting_slot+size+sizeof(struct block));          //定义new的地址  
    new->size=(fitting_slot->size)-size-sizeof(struct block);                   //定义size大小  
    new->free=1;                                                                //设置是否工作  
    new->next=fitting_slot->next;                                               //独立出去，形成新的块  
    fitting_slot->size=size;
    fitting_slot->free=0;
    fitting_slot->next=new;
}  
//自己加结束
int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

void *malloc(size_t noOfBytes) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
/*#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  panic("Not implemented");
#endif
  return NULL;*/
  //自己加
   struct block *curr;  
    void *result;
    if(!(freeList->size))
        init();
    curr=freeList;  
    while(((curr->size<noOfBytes)||(curr->free==0))&&(curr->next!=NULL))  
    {  
        
        curr=curr->next;  
    }
    if(curr->size==noOfBytes)
    {
        curr->free=0;
        result=(void*)(++curr);
        return result;
    }
    else if(curr->size>noOfBytes+sizeof(struct block))            //所需要的内存大小小于区块大小  
    {
        split(curr,noOfBytes);                                        //分割区块函数  
        result=(void*)(++curr);                                       //使用的位置  
        return result;
    }  
    else  
    {  
        result=NULL;
        return result;
    }  
}
void merge()
{
    struct block *curr;
    curr=freeList;
    while(curr!=NULL&&curr->next!=NULL)
    {
        if(curr->free&&curr->next->free)  
        {
            curr->size+=(curr->next->size)+sizeof(struct block);  
            curr->next=curr->next->next;  
        }
       
        curr=curr->next;
    }
}

void free(void *ptr) {
  if(((void*)memory<=ptr)&&(ptr<=(void*)(memory+2000)))
    {
        struct block* curr=ptr;
        curr--;
        curr->free=1;
        merge();
    }  
    else
        return;
}

#endif
