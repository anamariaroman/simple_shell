#include "shell.h"
/**
* _strcpy -
*
*
*/
void _strcpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
}
