#include "hsh.h"

/**
 * own_exit - causes normal process termination
 * @args: empty args
 *
 * Return: 0 to terminate the process
 */
int own_exit(char **exit_args)
{
	int status =  EXIT_SUCCESS;

	if (exit_args[1])
	{ if (exit_args[1][0] == '-')
		{error_exit(exit_args[1]);
			free(exit_args);
			exit(2); }
		else if (exit_args[1][0] >= 'a' && exit_args[1][0] <= 'z')
		{ error_exit(exit_args[1]);
			free(exit_args);
			exit(2); }
		else if (exit_args[1][0] >= 'A' && exit_args[1][0] <= 'Z')
		{ error_exit(exit_args[1]);
			free(exit_args);
			exit(2); }
		else
		{ status = _atoi(exit_args[1]);
			free(exit_args);
			exit(status); }}

	free(exit_args);
	exit(0);
}

/**
 * error_exit - prints an error message
 * @arg_v: the argument input
 * Return: print the error message if not return 0
 */
void error_exit(char *arg_v)
{
	char *p = "Illegal number", m[3] = "\n", *t = "exit";
	char l[BUFFER_SIZE], ptr[BUFFER_SIZE];
	int in_count = 1;

	char *s = my_itoa(in_count, ptr, 10);

	strcpy(l, arg_v);
	strcat(l, m);
	arg_v = l;
	write(2, "./hsh", 5);
	write(2, ": ", 2);
	write(2, s, _strlen(s));
	write(2, ": ", 2);
	write(2, t, _strlen(t));
	write(2, ": ", 2);
	write(2, p, _strlen(p));
	write(2, ": ", 2);
	write(2, arg_v, _strlen(arg_v));
}
