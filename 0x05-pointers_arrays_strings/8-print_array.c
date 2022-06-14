#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elementa of an array
 *
 * @a: int pointer
 * @n: int
 * x
 * Return: Nothing
 */



void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			break;
		printf(", ");

		i++;
	}

	printf("\n");
}
