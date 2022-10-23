#ifndef __FOPS__
#define __FOPS__

#include "types.h"

int file_size_get (char* filename);
int file_load_into_buff (char* file_name, u8* buffer);

#endif

