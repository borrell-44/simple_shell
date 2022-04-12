#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char *buf = NULL;
	size_t characters;

	do {
		write(1, "$ ", 2);
		getline(&buf, &characters, stdin);

		if (buf[0] != '\n')
		{
			exit_shell(buf);
			if (path(buf) == 0)
			{
				error();
			}
		}

	} while (buf != NULL);

	return (0);
}

