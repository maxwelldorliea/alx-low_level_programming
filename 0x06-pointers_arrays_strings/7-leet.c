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
	char key[8] = {'o', 'l', '?', 'e', 'a', '?', '?', 't'};
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; j < 8; j++)
		{
			if (s[i] == key[j] ||
			    s[i] + 32 == key[j])
				s[i] = j + '0';
		}

		i++;
	}

	return (s);
}
