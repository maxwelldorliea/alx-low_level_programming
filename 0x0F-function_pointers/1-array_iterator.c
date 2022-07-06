#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as
 *  a parameter on each element of an array
 *  @array: int pointer
 *  @size: size_t
 *  @action: function pointer
 *  Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || size == 0 || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
