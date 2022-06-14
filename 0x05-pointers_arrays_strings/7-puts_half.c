#include "main.h"


/**
 * puts_half - prints half of a string
 *
 * @str: char pointer
 *
 * Return: Nothing
 */


void puts_half(char *str)
{
	int j, l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
		j = l / 2;
	else
		j = (l + 1) / 2;

	while (str[j] != '\0')
	{
		_putchar(str[j]);

		j++;
	}

	_putchar('\n');
}
