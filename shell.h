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
#include<stdbool.h>

/* All prototypes of this project */
int _putchar(char c);
void _exit_(char *command, ssize_t controller);
int _write(char *text);
bool _strcmp(const char *s1, const char *s2, int ini, int fin);
void _strcat(char *dest, const char *src);
int _strlen(char *str);
char **_strtok(char *j);
void _prompt(int ac);
void _strcpy(char *dest, const char *src);
char *_path(char **env, char *command);
int find_index(const char *s, const char *separator, int j);
void obtain_seq(const char *s, int ini, int fin, char **direction);
bool env_bool(char *s, char *env[]);
void p_env(char **env);

#endif /* _SHELL_H_ */
