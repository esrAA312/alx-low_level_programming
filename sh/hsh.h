#ifndef HSH_H
#define HSH_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
struct Variable
{
	char name[20];
	char value[50];
};
struct Variable variables[10];

#define EXPECTED_DELIM " \t\r\n\a\\"
#define BUFFER_SIZE 1024

char *replaceVariables(char *input);
/*stringHandlingPart*/
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char **str_tok(char str[BUFFER_SIZE], char separate);
void error_exit(char *arg_v);
char *my_itoa(int num, char str[], int base);
void reverse(char str[], int length);
int _atoi(char *s);
/* shellLOOP.c */
void interactive(void);
void none_interactive(void);
void cd(char **arg);
int _strncmp(char *str1, char *str2, int n);
/* interactive.c */
char *read_line(void);
char **split(char *line);
int exec_arg(char **arg);

/* exec_args */
int create_process(char **args);

/* not_interactive */
char *get_line(void);

/*---Builtin func---*/
int env(char **arg);
extern char **environ;
/*exit.c*/
int own_exit(char **exit_args);
#endif

