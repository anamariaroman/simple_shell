#include "shell.h"
/**
* _strcpy - string copy
* @dest: string destination
* @src: string original
*/
void _strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
}