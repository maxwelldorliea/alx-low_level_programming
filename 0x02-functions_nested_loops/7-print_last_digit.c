#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: the number whose last digit is to be printed
 *
 * Return: int
 */


int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
	{
		_putchar('0' + (num * -1) % 10);
		return (num * -1);
	}

	_putchar('0' + num % 10);

	return (num);
}
