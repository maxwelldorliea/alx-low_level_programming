#include "main.h"

/**
 * get_len - returns the length of a string
 *
 * @str: char pointer
 *
 * Return: int
 */

int get_len(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * _strncpy - Copy n bites of src to dest
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 *
 * Return: char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = get_len(dest);

	while (*src != '\0' && i < n)
	{
		dest[len] = *src;

		i++;
		len++;
		src++;
	}

	dest[len] = '\0';

	return (dest);
}
