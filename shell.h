#ifndef _SHELL_H_
#define _SHELL_H_
/* All the libraries to use in this project */

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>

/* All prototypes of this project */
void cisfun(int argc);
int _putchar(char c);
void _strcat(char *dest, const char *src);
bool _strcmp(const char *s1, const char *s2, int ini, int fin);
void _strcpy(char *dest, const char *src);
int _strlen(const char *str);
char **_strtok(char *j);
bool env_bool(char *s, char *env[]);
void _exit_(char *command, ssize_t controller);
int find_index(const char *s, const char *separator, int j);
void obtain_seq(const char *s, int ini, int fin, char **direction);
void p_env(char **env);
char *_path_(char **env, char *command);
int cletter(char *letters);
void _continue_(char **tok, char **env, char *cmd, struct stat *pi);

#endif /* _SHELL_H_ */
