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
	int i;
	long int sum = 0, len;
	len = size * size;

	for (i = 0; i < len; i += size + 1)
		sum += a[i];
	printf("%li, ", sum);

	for (i = len - 1; i <= len - size + 1; i += size - 1)
		sum += a[i];
	printf("%li\n", sum);

}
