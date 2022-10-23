#include "../src/fops.h"
#include <stdio.h>

int main(int argc, char** argv) 
{
	
	int file_size = file_size_get(argv[1]); 
	printf("%d\n", file_size);

	short buffer[100];
	file_load_into_buff(argv[1], (u8*) buffer);

	for (int i=0; i<file_size/2; i++)
		printf("%x ", buffer[i]);

	
}
