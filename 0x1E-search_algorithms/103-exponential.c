#include "search_algos.h"
#include <stddef.h>

/**
 * print_array - print an array
 * @array: array to be printed
 * @low: the start index of the array
 * @high: the end index of the array
 * Return: Nothing
 */

void print_array(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	while (low <= high)
	{
		printf("%d", array[low]);

		if (low != high)
			printf(", ");
		low++;
	}

	printf("\n");
}

/**
 * bs_search - search for a target in an array
 * @array: array to be searched
 * @low: start index of the array
 * @high: end index of the array
 * @value: target to search for
 * Return: index of the first occurrance of the target or -1 if not found
 */

int bs_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (!array)
		return (-1);

	while (low <= high)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
/**
 * min - return the minimum value of two values
 * @val1: one of the values to be compared
 * @val2: one of the values to be compared
 * Return: Nothing
 */

size_t min(size_t val1, size_t val2)
{
	if (val1 < val2)
		return (val1);
	return (val2);
}

/**
 * exponential_search - search for a target in an array
 * @array: array to be searched
 * @size: size of the array
 * @value: target to search for
 * Return: index of the first occurrance of the target or -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t key, low, high;

	if (!array)
		return (-1);

	key = 1;

	while (key < size && array[key] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", key, array[key]);
		key *= 2;
	}

	low = key / 2;
	high = min(size, key + 1) - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	return (bs_search(array, low, high, value));
}
