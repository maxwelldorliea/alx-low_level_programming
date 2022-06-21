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
		if (i == j)
			m1 += a[k];
		m1 = 0;

		else if (i + y == size - 1)
			m2 += a[k];
		m2 = 0;

		k++;
	}

	printf("%i, %i", m1, m2);

}
