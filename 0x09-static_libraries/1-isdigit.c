#include "main.h"

/**
 * _isdigit - check if a character is a digit
 *
 * @c: int
 *
 * Return: 1 for True or 0 for False
 */

int _isdigit(int c)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (c == n)
			return (1);
	}

	return (0);
}
