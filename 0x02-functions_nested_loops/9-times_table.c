#include "main.h"

/**
 * times_table - print from 0 to 9 times table
 *
 * Return: Nothing
 */


void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int b = i * j;

			if (b > 9)
			{
				int f = (int) b / 10;
				int s = b % 10;

				_putchar('0' + f % 10);
				_putchar('0' + s % 10);
			}
			_putchar('0' + b % 10);
		}

		if (i == 9)
			break;

		_putchar(',');
		_putchar(' ');
	}

	_putchar('\n');
}
