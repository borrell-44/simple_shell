#include "main.h"

/**
 * path - execute commands with or without their path
 * @str: command to be executed
 *
 * Return: 0 if there was an error or 1 if no errors
 */

int path(char *str)
{
	char **arg;
	int status;
	pid_t pid;

	arg = tokens(str);
	if (arg == NULL)
	{
		return (0);
	}

	if (access(arg[0], F_OK) != 0)
	{
		arg[0] = hand_path(arg[0]);
		if (arg[0] == NULL)
		{
			free_arg(arg);
			return (0);
		}
	}

	pid = fork();
	if (pid == -1)
	{
		return (0);
	}
	if (pid == 0)
	{
		if (execve(arg[0], arg, NULL) == -1)
		{
			return (0);
		}
	}
	else
	{
		wait(&status);
	}

	return (1);
}

