#include "main.h"

/**
 * _memset - set the first n bytes of s with const bytes b
 *
 * @s: char pointer
 * @b: char
 * @n: int
 *
 * Return: char pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;

		i++;
	}

	return (s);
}
