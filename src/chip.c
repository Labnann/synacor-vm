#include <stdlib.h>

#include "chip.h"


struct chip* chip_create()
{
	struct chip* chip = malloc(sizeof(struct chip));
	chip->stack = stack_create();
	chip->pc = 0;
	return chip;
}
