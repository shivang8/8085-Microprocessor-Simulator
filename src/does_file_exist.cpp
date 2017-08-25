#include "master.h"
#include "global.h"

bool does_file_exist(const char *fileName)
{
    ifstream infile(fileName);
    return infile.good();
}

