#include "shell.h"

/**
* cisfun - make a prompt "$ "
* @argc: number of arguments
*/

void cisfun(int argc)
{
	if (argc == 1)
	{
		write(STDOUT_FILENO, "$ ", 2);
	}
}
