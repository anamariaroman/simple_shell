#include "shell.h"
/**
 * _strcmp - compare 2 strings
 * @s1: 1
 * @s2: 2
 * @ini: beginning of the interval
 * @fin: end of the interval
 * Return: int
 *
*/
bool _strcmp(const char *s1, const char *s2, int ini, int fin)
{
	if (!s1 && !s2)
		return (true);
	if (!s1 || !s2 || ini > fin)
		return (false);

	do {
		if (s1[ini] != s2[fin])
			return (false);
		ini++;
	} while (ini != fin);
	return (true);
}
