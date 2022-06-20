#include "main.h"

/**
 * get_len - return the length of a string
 *
 * @src: char pointer
 *
 * Return: int
 */

int get_len(char *src)
{
	int len = 0;

	while (*src)
	{
		len++;
		src++;
	}

	return (len);
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
	int len = get_len(dest);
	unsigned int i = 0;

	while (i < n)
	{
		dest[len] = src[i];

		len++;
		i++;
	}

	return (dest);
}
