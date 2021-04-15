#include "shell.h"
/**
 * _continue_ - main continue
 * @tok: tokenize
 * @env: env
 * @cmd: command
 * @pi: stat
 */
void _continue_(char **tok, char **env, char *cmd, struct stat *pi)
{
	if (stat(tok[0], pi) == 0)
	{
		execve(tok[0], tok, env);
	}
	else
	{
		free(tok);
		free(cmd);
		write(STDOUT_FILENO, "This is a error message", 23);
		exit(127);
	}
}
/**
* main - funtion main of shell
* @argc: first argument
* @argv: vector
* @env: enviroment
* Return:0
*/
int main(int argc, char *argv[], char *env[])
{
	size_t buff;
	ssize_t status = 0;
	char *command = NULL;
	/* valgrid review */
	pid_t id;
	char **tokenize = NULL;
	/* valgrid review */
	/* statuswith an int of getline */
	struct stat pi;

	while (status != EOF)
	{
		if (isatty(STDIN_FILENO))
		{
			cisfun(argc);
		}
		status = getline(&command, &buff, stdin);
		_exit_(command, status);
		tokenize = _strtok(command);
		if (!env_bool(tokenize[0], env))
		{
			id = fork();
			if (id < 0)
			{
				return (-1);
			}
			if (id == 0)
				_continue_(tokenize, env, command, &pi);
			else
			{
				if (!isatty(STDIN_FILENO))
					_exit_(command, status);
			}
			free(tokenize);
		}
	}
	(void)argv;
	return (0);
}
