#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: char pointet
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	int len = strlen(s) - 1;

	if (len < 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(s[len]);
	len--;

	_print_rev_recursion(s);
}
