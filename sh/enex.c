#include "hsh.h"

/**
 * env - function that prints enviroment variables
 * @arg: arguments
 *
 * Return: 1 on success, 0 otherwise
 */
int env(char **arg)
{
	int k = 0;
	(void)(**arg);

	while (environ[k])
	{
		write(STDOUT_FILENO, environ[k], _strlen(environ[k]));
		write(STDOUT_FILENO, "\n", 1);
		k++;
	}
	return (-1);
}

#include "hsh.h"

/**
 * exec_arg - map if command is a builtin or a process
 * @arg: command and its flags
 *
 * Return: 1 on sucess, 0 otherwise
 */
int exec_arg(char **arg)
{
	char *built_in_func[] = {
		"env",
		"exit"
	};
	int (*builtin_address[])(char **) = {
		&env,
		&own_exit
	};
	unsigned long int j = 0;

	if (arg[0] == NULL)
	{
		/* empty command was entered */
		return (-1);
	}
	/* find if the command is a builtin */
	for (; j < sizeof(built_in_func) / sizeof(char *); j++)
	{
		/* if there is a match execute the builtin command */
		if (_strcmp(arg[0], built_in_func[j]) == 0)
		{
			return ((*builtin_address[j])(arg));
		}
	}
	/* create a new process */
	return (create_process(arg));
}
