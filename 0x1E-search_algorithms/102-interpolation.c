#include "search_algos.h"


/**
 * interpolation_search - search for a target in an array
 * @array: array to be searched
 * @size: size of the array
 * @value: target to search for
 * Return: index of the first occurrance of the target or -1 if not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		pos = low + (((double)(high
						- low) / (array[high] - array[low])) * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
