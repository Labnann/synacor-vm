#include "types.h"

struct node {
	u16 val;   	
}

struct list_head {
	list_head* next;
	list_head* prev;
	node* val;
}

struct list_head* list_create()
{
	
}


struct stack {
	list_head* top;
}


struct stack* stack_create () 
{
	struct stack *st = malloc(sizeof(struct stack));
	return st;
}

void stack* init_stack (struct stack* st) 
{
	st->top = list_create ();
	list_init(st->top);
}

void stack_push (struct stack* st, node* n) {
	
}	
