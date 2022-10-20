#ifndef __STACK__
#define __STACK__
#include "types.h"

struct list_head {
        struct list_head* next;
        struct list_head* prev;
        u16 val;
};


struct stack {
        struct list_head* top;
};


struct stack* stack_create();
void stack_push (struct stack* st, u16 val);
u16 stack_pop (struct stack* st);


#endif
