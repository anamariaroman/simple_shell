#ifndef _SHELL_H_
#define _SHELL_H_
/* All the libraries to use in this project */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<pwd.h>
#include<sys/mman.h>
#include<errno.h>

void _strcpy(char *dest, char *src, int n);
int _putchar(char c);
void _exit(char *command, ssize_t controller);
int p_text(char *text);
bool _strcmp(const char *s1, const char *s2, int ini, int fin);
void _strcat(char *dest, const char *src);
int _strlen(const char *str);

#endif /* _SHELL_H_ */
