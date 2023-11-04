#include "hsh.h"

/**
 * split - split a string into multiple strings
 * @line: string to be splited
 *
 * Return: pointer that points to the new array
 */
char **split(char *line)
{
	int buffersize, j;
	char **given_tokens;
	char *token;
	char *y = "reallocation error in split_line: tokens\n";
char *x = "allocation error in split_line: tokensi\n";
	buffersize = 64;
	j = 0;
	given_tokens = malloc(buffersize * sizeof(char *));
	if (!given_tokens)
	{
		write(STDOUT_FILENO, x, _strlen(x));
		exit(EXIT_FAILURE);
	}
	token = strtok(line, EXPECTED_DELIM);
	while (token != NULL)
	{
		/* handle comments */
		if (token[0] == '#')
		{
			break;
		}
		given_tokens[j] = token;
		j++;
		if (j >= buffersize)
		{
			buffersize += buffersize;
			given_tokens = realloc(given_tokens, buffersize * sizeof(char *));
			if (!given_tokens)
			{
			write(STDOUT_FILENO, y, _strlen(y));
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, EXPECTED_DELIM);
	}
	given_tokens[j] = NULL;
	return (given_tokens);
}

