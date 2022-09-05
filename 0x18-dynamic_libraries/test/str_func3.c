#include "main.h"

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

	if (c == '\0')
		return (s);

	return (NULL);
}


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
	int i, l = _strlen(accept);

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


/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: char pointer
 * @accept: char
 *
 * Return: char pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i, l = _strlen(accept);

	while (*s)
	{
		for (i = 0; i < l; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return (NULL);
}

/**
 * _memset - set the first n bytes of s with const bytes b
 *
 * @s: char pointer
 * @b: char
 * @n: int
 *
 * Return: char pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;

		i++;
	}

	return (s);
}


/**
 * _memcpy - copy n bytes from memoy area src to dest
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 *
 * Return: char pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*int len = get_len(dest);*/
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
