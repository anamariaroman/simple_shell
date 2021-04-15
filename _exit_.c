#include "shell.h"
/**
 * _exit_ - use ctrl -D
 * @command: command line
 * @status: command line size
*/
void _exit_(char *command, ssize_t status)
{
	if (status == -1)
	{
		free(command);
		command = NULL;
		_putchar('\n');
		exit(0);
	}
	if (_strcmp(command, "exit", 0, 3))
	{
		free(command);
		command = NULL;
		exit(0);
	}
}
