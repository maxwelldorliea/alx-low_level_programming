#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: char pointer
 * @accept: char
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int c = 0;
	int i, l = strlen(accept);

	while (*s && *s != ' ')
	{
		for (i = 0; i < l; i++)
		{
			if (*s == accept[i])
				c += 1;
		}

		s++;
	}

	return (c);
}

