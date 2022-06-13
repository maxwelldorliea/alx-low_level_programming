#include "main.h"

/**
 * rev_string - print the reverse version of a string
 *
 * @s: char pointer
 *
 * Return: Nothing
 */


void rev_string(char *s)
{
	char *c = s;

	int _len, _size = 0;

	while (*s != '\0')
	{
		_size++;
		s++;
	}

	_len = _size - 1;

	while (_len >= 0)
	{
		_putchar(*(c + _len));

		_len--;
	}

	_putchar('\n');
}
