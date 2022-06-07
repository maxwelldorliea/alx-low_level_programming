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
			_putchar('0' + (i * j));
		}

		if (i == 9)
			break;

		_putchar(',');
		_putchar(' ');
	}

	_putchar('\n');
}
