#include "master.h"
#include "global.h"

map<int,int> storage;

int check_storage(int key)			//		30.7.17
{
	if (storage.find(key) == storage.end())
		return -1;
	else
		return storage[key];
}
