#include "main.h"


/**
 * rot13 - rotate every character 13 times
 *
 * @s: char pointer
 *
 * Return: char pointer
 */

char *rot13(char *s)
{
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; j < 26; j++)
		{

			if (s[i] + 13 >= 'a' &&
			    s[i] + 13 <= 'z')
				s[i] += 32;
			s[i] -= 13;
		}

		i++;
	}

	return (s);
}

