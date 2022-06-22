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
	static int i = 0;
	int len = strlen(s) - 1 - i;

	if (*s == '\0')
		return;

	if (len < 0)
		return;

	_putchar(s[len]);
	len--;
	i++;

	_print_rev_recursion(s);
}
