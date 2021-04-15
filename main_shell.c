#include "shell.h"
/**
* main - funtion main of shell
* @ac: first argument
* @av: vector
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
			{
				if (execve(_path_(env, tokenize[0]), tokenize, NULL) == EOF)
				{
					perror("Not command found");
					return (-1);
				}
			}
			else
			{
				wait(NULL);
			}
			free(tokenize);
		}
	}
	(void)argv;
	free(command);
	free(tokenize);
	return (0);
}
