#ifndef __CHIP__
#define __CHIP__ 

#include "stack.h"
#include "types.h"

#define MEMORY_CAP 0x7fff
#define REGISTER_NUMBER 0x8

struct chip {
        u16 memory[MEMORY_CAP];
        u16 registers[REGISTER_NUMBER];
        struct stack* stack;

};
            
struct chip* chip_create();

#endif
