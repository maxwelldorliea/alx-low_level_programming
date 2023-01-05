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
 * @index: the  index to be returned
 * @value: target to search for
 * Return: index of the first occurrance of the target or -1 if not found
 */

int bs_search(int *array, size_t low, size_t high, int index, int value)
{
	size_t mid;

	if (low > high)
		return (index);

	mid = low + (high - low) / 2;
	if ((int)mid == index && mid == high && mid == low)
		return (index);
	print_array(array, low, high);

	if (array[mid] == value && (int)mid != index)
	{
		index = mid;
		high = mid;
	}
	else if (array[mid] < value)
		low = mid + 1;
	else
		high = mid - 1;

	return (bs_search(array, low, high, index, value));
}


/**
 * advanced_binary - search for a target in an array
 * @array: array to be searched
 * @size: size of the array
 * @value: target to search for
 * Return: index of the first occurrance of the target or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low, high;
	int index;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;

	index = bs_search(array, low, high, -1, value);

	if (index >= 0 && array[index] != value)
		return (-1);
	return (index);
}
