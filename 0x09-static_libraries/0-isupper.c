#include "main.h"

/**
 * _isupper - check if a character is a upper case
 *
 * @c: char
 *
 * Return: 1 for True or 0 for False
 */

int _isupper(int c)
{
	char l;

	for (l = 'A'; l <= 'Z'; l++)
	{
		if (c == l)
			return (1);
	}

	return (0);
}
