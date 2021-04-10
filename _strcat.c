#include "shell.h"
void _strcat(char *dest, const char *src)
{
	int i;
	int length;
	length = _strlen(dest);

	for (i = 0, src[i] != '\0' ; i++)
	{
		dest[length++] = src[i];
	}
	dest[length] = '\0';
}
