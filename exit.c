#include "main.h"

/**
 * exit_shell - exits from the shell if exit is passed
 * @str: string to check if exit was passed
 *
 * Return: nothing
 */

 int exit_shell(char *str)
 {
 	char *ex = "exit";
	int i;

	if (str == NULL)
	{
		error();
		return (0);
	}

	for (i = 0; ex[i] != '\0'; i++)
	{
		if (ex[i] != str[i])
		{
			return (1);
		}
	}

	exit(0);
	return (0);
 }

