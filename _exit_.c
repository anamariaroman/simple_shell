#include "shell.h"
/**
 * exit_control - use ctrl -D
 * @command: command line
 * @controller: command line size
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
