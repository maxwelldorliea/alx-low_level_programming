#include "search_algos.h"

/**
 * linear_search - search for a target in an array
 * @array: array to be searched
 * @size: size of the array
 * @value: target to search for
 * Return: index of the first occurrance of the target or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
