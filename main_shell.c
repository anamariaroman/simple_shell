#include "shell.h"
/**
* main - funtion main of shell
*
*
*
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

	if (ac == 1)
	{
		while (controller != EOF)
		{
			_prompt(ac);
			controller = getline(&command, &buff, stdin);
			/*exit_control(command, controller);*/
			tokenize = _strtok(command);
			id = fork();
			if (id < 0)
				return (-1);
			if (id == 0)
			{
				if ((execve(_path(env, tokenize[0]), tokenize, NULL) == -1))
				{
					perror("Error:");
					return (-1);
				}
			}
			else
				wait(NULL);
		}
	}
	(void)av;
}
