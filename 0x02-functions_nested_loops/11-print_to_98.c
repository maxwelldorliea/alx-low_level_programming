#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - print all natural from 8 to 98
 *
 * @n: value to serve as range
 *
 * Return: Nothing
 */


void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");

		_putchar('\n');
	}

	else
	{
		for (; n <= 98; n++)
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		_putchar('\n');
	}
}
