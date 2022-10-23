#include <stdlib.h>

#include "types.h"
#include "stack.h"

struct list_head* list_create_head(u16 val)
{
        struct list_head* list = malloc(sizeof(struct list_head));
	list->prev = NULL;
	list->next = NULL;
	list->val = val;
};

void list_destroy_head (struct list_head* head) 
{
	if (head == NULL) return;

	struct list_head* prev = head->prev;
	struct list_head* next = head->next;

	if (prev != NULL)
		prev->next = next;
	if (next != NULL)
		next->prev = prev;
	free(head);
	return;
}

void list_insert_next (struct list_head* target, struct list_head* head) 
{
	target->next = head;
	head->prev = target;
}




struct stack* stack_create () 
{
	struct stack *st = malloc(sizeof(struct stack));
	st->top = NULL; 
	return st;
}


void stack_push (struct stack* st, u16 val) 
{
	struct list_head *new_head =  list_create_head(val);
	if (st->top) 
	        list_insert_next(st->top, new_head);	
	st->top = new_head;
	return;
}	


u16 stack_pop (struct stack* st) 
{
	struct list_head* current_head = st->top;
	u16 val = current_head->val;
	st->top = current_head->prev;
	list_destroy_head(current_head);

	return val;
}


struct list_head* stack_top_get (struct stack* st) 
{
	return st->top;
}
