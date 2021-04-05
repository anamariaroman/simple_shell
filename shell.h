#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <pwd.h>
#include <sys/mman.h>
#include <errno.h>

int _putchar(char c);
size_t _strlen(char *str);
char *_strdup(char *str);
char *_strchr(char *s, char c);

#endif /* _SHELL_H_ */
