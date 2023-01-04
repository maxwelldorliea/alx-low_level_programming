#include "search_algos.h"
#include <math.h>


/**
 * jump_search - search for a target in an array
 * @array: array to be searched
 * @size: size of the array
 * @value: target to search for
 * Return: index of the first occurrance of the target or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low, high, prevH;

	if (!array)
		return (-1);

	low = 0;
	high = sqrt(size);
	prevH = high;

	while (high < size)
	{
		if (array[low] < value)
		{
			if (prevH != low)
				printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		}
		else
			break;
		if (array[high] < value)
			printf("Value checked array[%ld] = [%d]\n", high, array[high]);
		else
			break;
		low = high;
		prevH = high;
		high += sqrt(size);

	}

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	for (; low < size; low++)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
