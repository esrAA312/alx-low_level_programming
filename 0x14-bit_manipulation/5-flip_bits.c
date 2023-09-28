#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int Result = n ^ m;

	return (countSetBits(Result));
}

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @num: num
 *
 * Return: count
 */

int countSetBits(int num)
{
	int count = 0;

	while (num)
	{
		count += num & 1;
		num >>= 1;
	}
	return (count);
}
