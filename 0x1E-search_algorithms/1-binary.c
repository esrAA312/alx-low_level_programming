#include "search_algos.h"

/**
 * midpoint - Function that calculates the midpoint
 * @staes: The starting index of the array segment
 * @enes: The ending index of the array segment
 * Return: The calculated midpoint
 */
int midpoint(int staes, int enes)
{
	return (staes + (enes - staes) / 2);
}

/**
 * binary_search - Function that performs a binary search
 * to find the target value
 * @array: The passed in array
 * @size: The size of the given array
 * @value The target value to be searched for
 * Return: The index of the target value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value);
{
	int begines = 0, lastes = (int)size - 1;
	int m = 0, tmpes = 0;

	if (!array)
		return (-1);

	while (begines <= lastes)
	{
		tmpes = begines;
		printf("Searching in array: ");
		while (tmpes <= lastes)
		{
			printf("%d", arr[tmpes]);
			if (tmpes != lastes)
				printf(", ");
			tmpes++;
		}
		printf("\n");

		m = midpoint(begines, lastes);
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			begines = m + 1;
		else
			lastes = m - 1;
	}

	return (-1);
}
