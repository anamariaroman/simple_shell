#include "shell.h"
/**
* p_text - Print text
* @text: text to print
* Return: print position per position
*/
int _write(char *text)
{
	unsigned int i;

	for (i = 0; text[i] != '\0'; i++)
	{
		_putchar(text[i]);
	}
	return (i);
}
