#include "main.h"

/**
 * print_number - prints integer values using _putchar
 *
 * @n: int
 * Return: Nothing
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}

	else if (n == 0)
		_putchar('0');
	else if (n / 10)
		print_number(n / 10);
	_putchar('0' + n % 10);
}
