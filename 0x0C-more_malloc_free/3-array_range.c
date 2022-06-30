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
	int len, *nwarr = NULL, i = 0;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	nwarr = malloc(sizeof(*nwarr) * len);

	if (nwarr == NULL)
		return (NULL);

	while (min <= max)
	{
		nwarr[i] = min;
		min++;
		i++;
	}

	return (nwarr);
}
