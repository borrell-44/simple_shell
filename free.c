#include "main.h"

/**
 * free_arg - frees a 2D pointer
 * @arg: 2D pointer to free
 *
 * Return: nothing
 */

void free_arg(char **arg)
{
	char *tmp;

	if (arg != NULL)
	{
		while (*arg != NULL)
		{
			tmp = *arg;
			arg++;
			free(tmp);
		}
		free(arg);
	}
}

