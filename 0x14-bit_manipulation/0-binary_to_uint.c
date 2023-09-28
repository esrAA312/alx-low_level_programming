#include "main.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	for (i = 0; b[i]; i++)
	{

		if (b[i] < '0' || b[i] > '1'|| !b)

			return (0);

		unsigned int dec = 0, t = 0, n = 0, rem;

		n = atoi(b);
		while (n != 0)
		{

			rem = n % 10;

			n /= 10;

			dec = dec + (rem * (2^t));

			++t;
		}

		return (dec);
	}
}
