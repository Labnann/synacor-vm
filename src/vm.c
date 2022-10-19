#include "types.h"
#include <stdio.h>

#define MEMORY_CAP 0x7fff
#define REGISTER_NUMBER 0x8

struct chip {
	u16 memory[MEMORY_CAP];
	u16 registers[REGISTER_NUMBER];
};


int main()
{
	u16 a = 24;
	printf("%u",a);	

}
