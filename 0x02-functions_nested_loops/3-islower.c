#include "main.h"

/**
 * _islower - check if a character is a lowercase
 *
 * @c: the character to be check
 *
 * Return: int
 */


int _islower(int c)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == c)
			return (1);
	}

	return (0);
}
