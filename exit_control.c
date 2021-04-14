#include "shell.h"

/**
 * exit_control - use ctrl -D
 * @command: command line
 * @controller: command line size
*/

void exit_control(char *command, ssize_t controller)
{
	if (_strcmp(command, "exit", 0, 3))
	{
		if (controller == EOF)
			write(1, "\n", 1);

		exit(0);
	}

	if (controller == EOF)
	{
		write(1, "\n", 1);
		exit(0);
	}
}