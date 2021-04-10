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

int _putchar(char c);
size_t _strlen(char *str);
char *_strdup(char *str);
char *_strchr(char *s, char c);
int _strcmp(char *s1, char *s2);
int p_text(char *text);

#endif /* _SHELL_H_ */

