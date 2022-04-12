#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>

int exit_shell(char *str);
int current_env(char *str);
int cmp(char *str, char *str1);
char **tokens(char str[]);
char *hand_path(char *str, char **environ);
char *str_app(char *first, char *second);
int _strlen(char *str);
int path(char *str, char **env);
void free_arg(char **arg);
void error(void);

#endif

