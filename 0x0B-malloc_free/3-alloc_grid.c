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
	int i = 0, j = 0,  **ans = NULL;
	int prod = width * height;

	if (width <= 0 || height <= 0)
		return (NULL);

	ans = malloc(sizeof(int) * prod);

	if (ans == NULL)
		return (NULL);

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

