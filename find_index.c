#include "shell.h"
/**
* find_index - find index
* @s: path
* @separator: separator
* @j: path_fin
* Return: number of posicion that contains the equality
*/
int find_index(const char *s, const char *separator, int j)
{
	int i = 0;

	while (separator[i])
	{
		while (s[j])
		{
			if (s[j] == separator[i])
				return (j);
			j++;
		}
		i++;
	}
	return (j);
}
