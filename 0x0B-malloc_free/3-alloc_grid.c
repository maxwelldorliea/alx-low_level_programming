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
	int i = 0, j = 0, k = 0, **ans = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	ans = (int **)malloc(sizeof(int *) * height);

	if (ans == NULL)
		return (NULL);

	while (k < height)
	{
		ans[k] = (int *)malloc(sizeof(int) * width);
		if (ans[k] == NULL)
		{
			while (k >= 0)
			{
				free(ans[k]);
				k--;
			}

			free(ans);
			return (NULL);
		}

		k++;
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

