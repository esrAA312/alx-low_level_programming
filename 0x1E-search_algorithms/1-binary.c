#include "search_algos.h"

/**
 * binary_search - Function that performs a binary search
 * to find the target value
 * @array: The passed in array
 * @size: The size of the given array
 * @value: The target value to be searched for
 * Return: The index of the target value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int mid = get_mid(left, right);

		printf("Searching in array: ");
		print_array(array, left, right);
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * get_mid - Function that calculates the midpoint between two indices
 * @left: The left index
 * @right: The right index
 * Return: The calculated mid value
 */
int get_mid(int left, int right)
{
	return left + (right - left) / 2;
}

/**
 * print_array - Function that prints the elements of the array within a range
 * @array: The array to be printed
 * @start: The starting index
 * @end: The ending index
 */
void print_array(int *array, int start, int end)
{
	for (int i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
}
