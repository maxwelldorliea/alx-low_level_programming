#include "main.h"
#include <stdlib.h>

/**
 * free_grid - deallocate 2d array
 *
 * @grid: int pointer to pointer
 * @height: int
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);

		i++;
	}

	free(grid);
}
