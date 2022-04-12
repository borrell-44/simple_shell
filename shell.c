#include "main.h"

/**
 * main - entry point
 * @ac: how many arguments where given
 * @av: list of arguments
 * @env: enviroment of shell
 *
 * Return: Always 0
 */

int main(int ac, char **av, char **env)
{
	char *buf = NULL;
	size_t characters;

	(void)ac;
	(void)av;

	do {
		write(1, "$ ", 2);
		getline(&buf, &characters, stdin);

		if (buf[0] != '\n')
		{
			exit_shell(buf);
			if (path(buf, env) == 0)
			{
				error();
			}
		}

	} while (buf != NULL);

	return (0);
}

