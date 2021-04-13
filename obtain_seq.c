#include "shell.h"
/**
* obtain_seq - sequency
* @s: path
* @ini: inicio
* @fin: fin
* @direction: direction to save copy of ini:fin
*/
void obtain_seq(const char *s, int ini, int fin, char **direction)
{
	int i = 0;

	while (ini != fin)
	{
		(*direction)[i++] = s[ini++];
	}
	(*direction)[i] = '\0';
}
