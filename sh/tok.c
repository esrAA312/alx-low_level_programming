#include "hsh.h"
/**
 * str_tok - a function that spilt the string
 * @str: command input
 * @separate: space separates word
 * Return: string
 */

char **str_tok(char str[BUFFER_SIZE],  char separate)
{ char *words, **arg, *t;
	int i = 0, n;

	words = str;
	t = str;
	arg = malloc(BUFFER_SIZE * sizeof(char *));
	if (arg == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] == separate)
		{
			str[n] = '\0';
			arg[i++] = words;
			t++;
			words = t;
			t = &str[n];
		}
		t++;
	}
	arg[i++] = words;
	arg[i] = NULL;
	return (arg); }
