#include <stdio.h>
#include <stdlib.h>
#include "Vysyx_22040175_top.h"
#include "assert.h"
#include <dlfcn.h>  //动态链接库相关函数

typedef void(*io_callback_t)(uint32_t, int, bool);
uint8_t* new_space(int size);
static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;
#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)