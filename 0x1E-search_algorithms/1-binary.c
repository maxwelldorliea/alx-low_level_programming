#include "search_algos.h"

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
 * binary_search - search for a target in an array
 * @array: array to be searched
 * @size: size of the array
 * @value: target to search for
 * Return: index of the first occurrance of the target or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

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
