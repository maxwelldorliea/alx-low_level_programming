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
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('#');

			if (i  == n - 1)
				break;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
