#include "main.h"

/**
 * print_square - prints square
 *
 * @size: int
 *
 * Return: Nothing
 */


void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			if (i == n - 1)
				break;
			_putchar('\n');

		}
	}
	_putchar('\n');
}
