#include "main.h"

/**
 * *hand_path - it handles commands without their path
 * @str: command to evaluate if it exists
 * @environ: environment of shell
 *
 * Return: a command with its path if exists
 */

char *hand_path(char *str, char **environ)
{
	char *dir, *token, *tmp, *dirs;
	int i, size;

	for (i = 0; environ[i] != NULL; i++)
	{
		if (cmp(environ[i], "PATH"))
		{
			size = _strlen(environ[i]);
			dirs = malloc(sizeof(char) * (size + 1));
			if (dirs == NULL)
			{
				return (NULL);
			}

			tmp = environ[i];
			for (i = 0; tmp[i] != '\0'; i++)
			{
				dirs[i] = tmp[i];
			}
			break;
		}
	}

	token = strtok(dirs, "=");
	token = strtok(NULL, ":");
	for (i = 0; token != NULL; i++)
	{
		dir = str_app(token, str);
		if (access(dir, F_OK) == 0)
		{
			free(dirs);
			return (dir);
		}
		free(dir);
		token = strtok(NULL, ":");
	}

	free(dirs);
	return (NULL);
}

