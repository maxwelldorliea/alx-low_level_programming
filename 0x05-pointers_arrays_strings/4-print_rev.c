#include "main.h"

/**
 * print_rev - prints the reverse of a string
 *
 * @s: char pointer
 *
 * Return: Nothing
 */


void print_rev(char *s)
{
	char *c = s;

	int n, i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	n = i - 1;

	while (n >= 0)
	{
		_putchar(c[n]);

		n--;
	}

	_putchar('\n');
}
