#include "search_algos.h"

/**
 * linear_search - Function that performs a linear search
 * to find the target value
 * @array: The passed in array
 * @size: The size of the given array
 * @value: The target value to be searched for
 * Return: The index of the target value, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int es = 0;

	if (!array)
		return (-1);

	while (es < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", es, array[es]);
		if (array[es] == value)
			return (es);

		es++;
	}
	return (-1);
}
