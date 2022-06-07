#include "main.h"

/**
 * print_times_table - print from 0 to times table
 *
 * @n: Value to be serve as range
 *
 * Return: Nothing
 */


void print_times_table(int n)
{
	int i, j, b;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			b = i * j;

			if (b > 9)
				_putchar('0' + b / 10);
			else
				_putchar(' ');

			_putchar('0' + b % 10);
		}
		_putchar('\n');
	}
}
