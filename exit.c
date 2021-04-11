#include "shell.h"
/**
* _exit - read CTRL-D command
* @command: command
* @controller: size of command
*/
void _exit(char *command, ssize_t controller)
{
	if (_strcmp(line, "exit", 0, 3))
	{
		if (controller == EOF)
			write(1, "\n", 1);
		exit(0)
	}
	if (controller == EOF)
	{
		write(1, "\n", 1);
		exit(0);
	}
}
