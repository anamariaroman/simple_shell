#include "shell.h"

/**
 * exit_control - use ctrl -D
 * @line: command line
 * @controller: command line size
*/

void exit_control(char *line, ssize_t controller)
{
	if (_strcmp(line, "exit", 0, 3))
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