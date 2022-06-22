#include "main.h"

/**
 * _strlen_recursion - return the length of a string recursively
 *
 * @s: char pointer
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (l);
}
