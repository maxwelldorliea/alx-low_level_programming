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
	int i, j,  m1 = 0, m2 = 0;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j <= size; j++)
	{
		if (i == j)
			m1 += a[j];
		if (i + j == size + 1)
			m2 += a[j];
	}

	printf("%d, %d\n", m1, m2);
	}

}
