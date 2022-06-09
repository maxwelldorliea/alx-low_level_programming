#include "main.h"

/**
 * print_diagonal - prints a diagonal
 *
 * @n: int
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i, s;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
				_putchar(' ');
			_putchar('\\');

			if (i == n - 1)
				continue;
			_putchar('\n');

		}
	}

	_putchar('\n');
}
