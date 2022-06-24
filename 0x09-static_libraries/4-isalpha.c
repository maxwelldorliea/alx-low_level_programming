#include "main.h"

/**
 * _isalpha - check if a character is an alpha
 *
 * @c: character to be check
 *
 * Return: int
 */


int _isalpha(int c)
{
	char l, k;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (c == l)
			return (1);
	}

	for (k = 'A'; k <= 'Z'; k++)
	{
		if (c == k)
			return (1);
	}

	return (0);
}
