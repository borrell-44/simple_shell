#include "main.h"

/**
 * **tokens - seperates a string by their space or new line in the string
 * @str: string to tokenize
 *
 * Return: 2D pointer of the tokens
 */

char **tokens(char str[])
{
	char **tokens;
	char *token;
	int i, size = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		{
			size++;
		}
	}

	tokens = malloc(sizeof(char) * (size + 1));
	if (tokens == NULL)
	{
		return (NULL);
	}

	token = strtok(str, " \n");
	for (i = 0; token != NULL; i++)
	{
		tokens[i] = token;
		token = strtok(NULL, " \n\"");
	}
	tokens[i] = NULL;

	return (tokens);
}

