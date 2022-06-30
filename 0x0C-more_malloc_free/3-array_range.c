#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 *
 * @min: int
 * @max: int
 *
 * Return: int pointer
 */

int *array_range(int min, int max)
{
	int len, *nwarr = NULL;

	if (min > max)
		return (NULL);

	if (min > 0)
		len = min + max;
	else
		len = max + 1;

	nwarr = malloc(sizeof(*nwarr) * len);

	if (nwarr == NULL)
		return (NULL);

	while (min <= max)
	{
		nwarr[min] = min;
		min++;
	}

	return (nwarr);
}
