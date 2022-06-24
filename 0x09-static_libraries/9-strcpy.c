#include "main.h"

/**
 * _strcpy - copy src to dest
 *
 * @dest: char pointer
 * @src: char pointer
 *
 * Return: char pointer
 */


char *_strcpy(char *dest, char *src)
{
	char *ptr = src;
	int i = 0;

	while (*ptr != '\0')
	{
		dest[i] = *ptr;
		i++;
		ptr++;
	}

	dest[i] = *ptr;

	return (dest);
}
