#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - prints the sum of two digonal
 *
 * @a: int pointer
 * @size: int
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j, k = 0, m1 = 0, m2 = 0;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j <= size; j++)
	{
		(i == j) ? d1 += a[k] : 0;
		(i + j == size - 1) ? d2 += a[k] : 0;
								k++;
	}

	printf("%d, %d\n", m1, m2);
	}

}
