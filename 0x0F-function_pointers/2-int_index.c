#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: int pointer
 * @size: int
 * @cmp: function pointer
 * Return: int
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
	       i++;
	}

	return (-1);
}
