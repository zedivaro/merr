#include "../include/merr/unistd.h"

#define FILE_PATH ""

int main()
{
    MERR_execve(FILE_PATH, 0, 0);
    return 0;
}