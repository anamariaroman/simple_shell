#include "shell.h"
/**
 * p_env - print the out of env
 * @env: env
 *
 */
void p_env(char **env)
[
	while (*env)
	{
		write(STDOUT_FILENO, *env, _strlen(*env));
		_putchar('\n');
		env++;
	}
]