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

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			if (i == size - 1)
				break;
			_putchar('\n');

		}
	}
	_putchar('\n');
}
