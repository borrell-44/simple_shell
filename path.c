#include "main.h"

int path(char str[])
{
	char **arg;
	char *token;
	int status, i;
	int count = 0;
	pid_t pid;
	
	printf("Strlen: %li\n\n", strlen(str));

	/*Reserving space*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		{
			count++;
		}

	}

	arg = malloc(sizeof(char) * (count + 1));
	if (arg == NULL)
	{
		return (0);
	}
	
	/*Seperate string*/
	token = strtok(str, " \n");
	for (i = 0; token != NULL; i++)
	{
		arg[i] = token;
		token = strtok(NULL, " \n");
	}

	for (i = 0; arg[i] != NULL; i++)
	{
		printf("Index: %i\targ: %s\n", i, arg[i]);
	}
	printf("Index: %i\n\n", i);
	arg[i] = NULL;

	/*Cheking if it exists*/
	if (access(arg[0], F_OK) != 0)
	{
		printf("File not found\n");
		return (0);
	}


	/*Execute file*/
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

