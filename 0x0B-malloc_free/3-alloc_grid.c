#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns apointer to a 2 dimensional array of integers
 *
 * @width: int
 * @height: int
 *
 * Return: int pointer to pointer
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, k = 0, f = 0,  **ans = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	ans = (int **)malloc(sizeof(int *) * height);

	if (ans == NULL)
		return (NULL);

	while (k < height)
	{
		ans[k] = (int *)malloc(sizeof(int) * width);
		k++;
	}

	while (f < height)
	{
		if (ans[f] == NULL)
			return NULL;

		f++;
	}

	while (i < height)
	{
		for (; j < width; j++)
		{
			ans[i][j] = 0;
		}

		i++;
	}

	return (ans);
}

