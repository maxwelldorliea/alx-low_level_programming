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
	if (*s)
		return (0 + _strlen_recursion(s + 1));
}
