#include "main.h"



/**
 * print_number - prints integer values using _putchar
 *
 * @n: int
 * Return: Nothing
 */

void print_number(int n)
{

	unsigned int n2 = n;

	if (n < 0)
	{
		_putchar('-');
		n2 = -n2;
	}

	if ((n2 / 10) > 0)
		print_number(n2 / 10);
	_putchar('0' + (n2 % 10));
}
