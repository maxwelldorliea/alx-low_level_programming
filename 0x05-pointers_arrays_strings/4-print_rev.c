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
	char c[100];

	int n, i = 0;

	while (*s != '\0')
	{
		c[i] = *s;

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
