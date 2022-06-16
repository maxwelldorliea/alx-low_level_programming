#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: char pointer
 *
 * Return: char pointer
 */

char *leet(char *s)
{
	char *key = "ol!ea!!t";
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (key[j] != '\0')
		{
			if (s[i] == key[j] ||
			    (s[i] + 32) == key[j])
				s[i] = j + '0';
			j++;
		}

		i++;
	}
}
