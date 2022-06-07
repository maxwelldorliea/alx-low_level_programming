#include "main.h"

/**
 * print_sign - print + for positive, - for negative 0 for zero
 *
 * @n: value for checking
 *
 * Return: int
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	return (1);
}
