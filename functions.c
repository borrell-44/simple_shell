#include "main.h"

/**
 * _strlen - gets the lenght of a string
 * @str: string to get the lenght from
 *
 * Return: lenght
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{}

	return (i);
}

/**
 * cmp - compares if str1 is equal to str
 * @str: Second string to compare
 * @str1: First string to compare
 *
 * Return: 0 if they are not equal and 1 if they are
 */

int cmp(char *str, char *str1)
{
	int i;

	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] != str[i])
		{
			return (0);
		}
	}

	return (1);
}

/**
 * *str_app - appends a directory with the executable given
 * @first: directory
 * @second: command
 *
 * Return: a string with the directory and comannd together
 */

char *str_app(char *first, char *second)
{
	char *str = NULL;
	int i = _strlen(first), j = _strlen(second);

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * (i + j));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < _strlen(first); i++)
	{
		str[i] = first[i];
	}
	str[i] = '/';
	i++;

	for (j = 0; j < _strlen(second); j++)
	{
		str[i] = second[j];
		i++;
	}
	str[i] = '\0';

	return (str);
}

