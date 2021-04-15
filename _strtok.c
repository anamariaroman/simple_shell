#include "shell.h"

/**
 * _strtok - find the funcion and returns the value
 * @j: string to make token
 * Return: num of tokens
*/

char **_strtok(char *j)
{
	unsigned int i;
	char *token = NULL;
	char **tokens = NULL;

	tokens = malloc((cletter(j + 1)) * sizeof(char *));
	if (tokens == NULL)
		return (NULL);

	token = strtok(j, " \t\r\n");

	i = 0;
	while (token)
	{
		tokens[i] = token;
		token = strtok(NULL, " \t\r\n");
		i++;
	}
	tokens[i] = NULL;
	return (tokens);
}
