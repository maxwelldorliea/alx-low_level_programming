#include "main.h"

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
	int i = 0;

	while (*src != '\0' && i < n)
	{
		dest[i] = *src;

		i++;
		src++;
	}

	while (i < n)
	{

	dest[i] = '\0';
	i++;

	}
	return (dest);
}
