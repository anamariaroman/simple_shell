#include "shell.h"

/**
 * _strtok - find the funcion and returns the value
 * @j: string to make token
 * Return: num of tokens
*/

char **_strtok(char *j)
{
	unsigned int i;
	const unsigned int len = _strlen(j);
	char *token;
	char **tokens = NULL;

	tokens = malloc(len * sizeof(char *));
	if (tokens == NULL)
		return (NULL);

	token = strtok(j, " \t\r\n");

	i = 0;
	while (token)
	{
		tokens[i] = malloc(_strlen(token) * sizeof(char));
		if (tokens == NULL)
			return (NULL);

		tokens[i] = token;

		token = strtok(NULL, " \t\r\n");
		i++;
	}

	tokens[i] = NULL;

	return (tokens);
}
