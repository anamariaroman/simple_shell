#include "shell.h"
/**
* cletter - count
* @letters: sentences
* Return: return num of letters or words
*/
int cletter(char *letters)
{
	int i = 0, l = 0;

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