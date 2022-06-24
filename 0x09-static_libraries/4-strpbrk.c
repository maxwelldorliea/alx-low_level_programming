#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: char pointer
 * @accept: char
 *
 * Return: char pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i, l = strlen(accept);

	while (*s)
	{
		for (i = 0; i < l; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return (NULL);
}

