#include "shell.h"
/**
* main - funtion main of shell
* @ac: first argument
* @av: vector
* @env: enviroment
* Return:0
*/
int main(int ac, char *av[], char *env[])
{
	size_t buff;
	ssize_t controller = 0;
	char *command = NULL;
	/* valgrid review */
	pid_t id;
	char **tokenize = NULL;
	/* valgrid review */

	while (controller != EOF)
	{
		if (isatty(STDIN_FILENO))
			_prompt(ac);

		controller = getline(&command, &buff, stdin);
		exit_control(command, controller);
		tokenize = _strtok(command);
		id = fork();
		if (id < 0)
			return (-1);

		if (!env_bool(tokenize[0], env))
		{
			if (id == 0)
			{
				if (execve(_path_(env, tokenize[0]), tokenize, NULL) == EOF)
				{
					perror("Not command found");
					return (-1);
				}
			}
			else
				wait(NULL);
		}
	}
	(void)av;
	free(command);
	return (0);
}
