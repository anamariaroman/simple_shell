#include"shell.h"
/**
* _path - identifi a path
* @env: enviroment
* @command: command line
* Return: char bin
*/
char *_path_(char **env, char *command)
{
	char *path, *ctok, *bin;
	int i, plength = 0, path_ini = 0, path_fin = 5;

	for (i = 0; env[i]; i++)
	{
		if (_strcmp("PATH=", env[i], path_ini, path_fin - 1))
			path = env[i];
			/* path contains libraries */
	}
	plength = _strlen(path);
	path_ini = path_fin + 1; /* / */
	path_fin = find_index(path, ":", path_ini);
	ctok = malloc(sizeof(char) * (path_fin - path_ini));
	if (!ctok)
		return (NULL);
	bin = malloc(sizeof(ctok) + sizeof(command));
	if (!bin)
		return (NULL);
	obtain_seq(path, path_ini, path_fin, &ctok);
	_strcpy(bin, ctok);
	_strcat(bin, "/");
	_strcat(bin, command);
	while (access(bin, F_OK) == -1)
	{
		if (plength == path_fin)
			return (command);

		path_ini = path_fin + 1; /* / */
		path_fin = find_index(path, ":", path_ini);
		obtain_seq(path, path_ini, path_fin, &ctok);
		_strcpy(bin, ctok);
		_strcat(bin, "/");
		_strcat(bin, command);
	}
	/* If file exist, so */
	return (bin);
}
