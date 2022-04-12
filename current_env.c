#include "main.h"

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	return (i);
}

int current_env(char *str)
{
	extern char **environ;
	char env[] = "env";
	int i;

	if (str == NULL)
	{
		return (0);
	}

	for (i = 0; env[i] != '\0'; i++)
	{
		if (env[i] != str[i])
		{
			return (0);
		}
	}

	for (i = 0; environ[i] != NULL; i++)
	{
		write(1, environ[i], _strlen(environ[i]));
		write(1, "\n", 1);
	}
	return (1);
}

