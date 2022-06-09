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
			_putchar('\n');
		}
	}
}
