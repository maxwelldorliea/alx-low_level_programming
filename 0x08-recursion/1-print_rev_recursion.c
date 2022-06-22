#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: char pointet
 *
 * Return: Nothing
 */

int i = 0;

void _print_rev_recursion(char *s)
{
	int len = strlen(s) - 1 - i;

	if (*s == '\0')
		return;

	if (len < 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(s[len]);
	len--;
	i++;

	_print_rev_recursion(s);
}
