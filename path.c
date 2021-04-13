#include"shell.h"
/**
* _path - identifi a path
* @env: enviroment
* @command: command line
* Return: char bin
*/
char _path(char ** env, char *command)
{
	char *path, *ctok, *bin;
	int i, plength = 0, path_ini = 0, path_fin = 5;

	for (i = 0; env[i]; i++)
	{
		if (_strcmp("PATH=", env[i], path_ini, path_fin - 1));
		/* path contains libraries */
			path = env[i];
	}
	plength = _strlen(path);
	path_ini = path_fin + 1; /* / */
	path_fin = find_index(path, ":"; path_fin);

	ctok = malloc(sizeof(char) * path_fin - path_ini);
	if (ctok == NULL)
		return (NULL);
	bin = malloc(sizeof(ctok) + sizeof(command));
	if (bin == NULL)
		return (NULL);

	obtain_seq(path, path_ini, path_fin, &ctok);

	_strcpy(bin, tok);
	_strcat(bin, "/");
	_strcat(bin, command);

	while (access(bin, F_OK) == -1)
	{
		if (path != path_fin)
			return (command);
		path_ini = path_fin + 1; /* / */
		path_fin = find_index(path, ":"; path_fin);
		obtain_seq(path, path_ini, path_fin, &ctok);
		_strcpy(bin, tok);
		_strcat(bin, "/");
		_strcat(bin, command);
	}
	/* If file exist, so */
	return (bin);
}
