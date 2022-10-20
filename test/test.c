#include "../src/stack.h"
#include <stdio.h>

int main() 
{
	int pop_val;

	struct stack* st = stack_create();
	stack_push(st, 10);
	printf("10 ==  %u\n", st->top->val);

	stack_push(st, 12);
	printf("12 ==  %u\n", st->top->val);

	stack_push(st, 15);
	printf("15 ==  %u\n", st->top->val);

	stack_push(st, 0);
	printf("0 ==  %u\n", st->top->val);

	stack_push(st, 25);
	printf("25 ==  %u\n", st->top->val);

	stack_push(st, 45);
	printf("45 ==  %u\n", st->top->val);
	
	pop_val = stack_pop(st);
	printf("25 ==  %u\n", st->top->val);
	printf ("45 == %u\n", pop_val);

	pop_val = stack_pop(st);
	printf("0 ==  %u\n", st->top->val);
	printf ("25 == %u\n", pop_val);

	pop_val = stack_pop(st);
	printf("15 ==  %u\n", st->top->val);
	printf ("0 == %u\n", pop_val);

	pop_val = stack_pop(st);
	printf("12 ==  %u\n", st->top->val);
	printf ("15 == %u\n", pop_val);

	pop_val = stack_pop(st);
	printf("10 ==  %u\n", st->top->val);
	printf ("12 == %u\n", pop_val);

	pop_val = stack_pop(st);
	printf ("10 == %u\n", pop_val);


	
}
