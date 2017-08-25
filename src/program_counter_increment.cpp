#include "master.h"
#include "global.h"

int program_counter[500];
int index_pc=0;
int size_pc=0;

void program_counter_increment(int temp_memory)
{
	program_counter[index_pc++]=temp_memory;							//UPDATING PROGRAM COUNTER
	if(index_pc>size_pc)
		size_pc=index_pc;
}

