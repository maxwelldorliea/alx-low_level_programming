#include "main.h"
#include <stdlib.h>


/**
 * reverse_array - reverses an integer array
 *
 * @a: int pointer
 * @n: int
 *
 * Return: Nothing
 */


void reverse_array(int *a, int n)
{
	int *narr = (int *)malloc(n * sizeof(int));
	int i = 0, j = 0, l = n - 1;

	while (i < n)
	{
		narr[i] = a[i];

		i++;
	}

	while (j < n)
	{
		a[j] = narr[l];

		j++;
		l--;
	}

	free(narr);
	narr = NULL;
}
