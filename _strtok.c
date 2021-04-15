#include "shell.h"
/**
* cletter - count
* @letters: sentences
* Return: return num of letters or words
*/
int cletter(char *letters)
{
	int i = 0;
	int l = 0;

	while (letters[i])
	{
		if (letters[i] == 32 && letters[i + 1] != 32 && letters[i + 1] != 0)
		{
			l++;
		}
		i++;
	}
	if (letters[0] != 32)
		l++;
	return (l);
}
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

	tokens = malloc((cletter(j)+ 1)) * sizeof(char *));
	if (tokens == NULL)
		return (NULL);

	token = _strtok(j, " \t\r\n");

	i = 0;
	while (token)
	{
		tokens[i] = token;
		token = _strtok(NULL, " \t\r\n");
		i++;
	}
	tokens[i] = NULL;
	return (tokens);
}
