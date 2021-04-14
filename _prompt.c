#include "shell.h"
/**
* _prompt - make a prompt "$ "
* @ac: number of arguments
*/
void _prompt(int ac)
{
	if (ac == 1)
	{
		write(STDOUT_FILENO, "#CISFUN$ ", 9);
	}
}
