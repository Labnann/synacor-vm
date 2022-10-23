#include <stdio.h>
#include "fops.h"

int file_load_into_buff (char* file_name, u8* buffer)
{
	FILE *file;

	file = fopen (file_name, "rb");
	if (file == NULL)
		return -1;
	
	fread (buffer, file_size_get(file_name), 1, file);
	
	return 0;
}


int file_size_get(char* filename)
{
        FILE *fp = fopen (filename, "r");

        if (fp == NULL)
                return -1;
        if (fseek(fp, 0, SEEK_END) < 0) {
                fclose(fp);
                return -1;
        }

        long size = ftell(fp);
        fclose(fp);

        return size;
}

