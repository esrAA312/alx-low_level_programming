#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump search
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left_index = 0, right_index = 0, step_size = 0;

	if (array == NULL || size == 0)
		return (-1);

	step_size = sqrt(size);

	while (right_index < size && array[right_index] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", right_index, array[right_index]);
		left_index = right_index;
		right_index += step_size;
	}

	printf("Value found between indexes [%ld] and [%ld]\n"
			, left_index, right_index);

	right_index = right_index < size ? right_index : size - 1;

	while (left_index <= right_index)
	{
		printf("Value checked array[%ld] = [%d]\n", left_index, array[left_index]);
		if (array[left_index] == value)
			return (left_index);
		left_index++;
	}

	return (-1);
}
