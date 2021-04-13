#include "shell.h"
/**
* find_index - find index
* @s: path
* @separator: separator
* @j: path_fin
*/
int find_index(const char *s, const char *separator, int j)
{
	int i;

	for (i = 0; separator[i]; i++)
	{
		for (; s[j]; j++)
		{
			if (s[j] == separator[i])
				return (j);
		}
	}
	return (j);
}
