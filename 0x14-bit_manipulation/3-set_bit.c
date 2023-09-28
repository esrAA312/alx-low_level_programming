#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	int i, a[100];

	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
		if (i == index)
			a[i] = 1;
	}

	return (1);
