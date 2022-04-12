#include "main.h"

/**
 * free_arg
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

