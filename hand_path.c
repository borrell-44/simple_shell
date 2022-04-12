#include "main.h"

/**
 * *hand_path - it handles commands without their path
 * @str: command to evaluate if it exists
 *
 * Return: a command with its path if exists
 */

char *hand_path(char *str)
{
	extern char **environ;
	char *dirs = NULL, *dir, *token, *tmp;
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		if (cmp(environ[i], "PATH"))
		{
			dirs = malloc(sizeof(char) * _strlen(environ[i]));
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

	if (dirs == NULL)
	{
		return (NULL);
	}

	token = strtok(dirs, "=");
	for (i = 0; token != NULL; i++)
	{
		dir = str_app(token, str);
		if (access(dir, F_OK) == 0)
		{
			return (dir);
		}
		token = strtok(NULL, ":");
	}

	return (NULL);
}

