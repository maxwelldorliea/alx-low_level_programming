#include "main"

/**
 * _strchr - locates a character in a string
 *
 * @s: char pointer
 * @c: char
 *
 * Return: char pointer
 */


char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}

