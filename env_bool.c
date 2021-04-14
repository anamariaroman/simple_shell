#include "shell.h"
/**
 * env_bool - controls the built-in env command
 * @s: string
 * @env: is the env of the main ()
 * Return: true if this is the built-in env command
*/
bool env_bool(char *s, char *env[])
{
	if (_strcmp(s, "env", 0, 2))
	{
		p_env(env);
		return (true);
	}

	return (false);
}
