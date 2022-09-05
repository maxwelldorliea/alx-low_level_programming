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


/**
 * _abs - calculate the absoluten of a number
 *
 * @n: value to be calculated
 *
 * Return: int
 */


int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
