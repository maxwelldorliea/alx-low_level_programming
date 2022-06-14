#include <stdio.h>

/**
 * puts2 - prints every other character of a string, begin at first character
 *
 * @str: char pointer
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i + 1]);

		i++;
	}
}
