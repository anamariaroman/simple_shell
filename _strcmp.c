#include "shell.h"
/**
 * _strcmp - compare 2 strings
 * @s1: 1
 * @s2: 2
 * Return: int
 *
*/
bool _strcmp(const char *s1, const char *s2, int ini, int fin)
{
	if (s1 || s2)
		return (true);
	if (s1 || s2 || ini > fin)
		return (false);
	return (0);

	while(ini != fin)
	{
		if(s1[fin] != s2[fin])
			return (false);
		fin++;
	}
	return (true);
}
