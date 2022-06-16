#include "main.h"

/**
 * get_len - Returns len of a string
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
 * _strcat - Appends str to dest
 *
 * @dest: char pointer
 * @src: char pointer
 *
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	int len = get_len(dest);


	while (*src != '\0')
	{
		dest[len] = *src;

		len++;
		src++;
	}

	dest[len] = '\0';

	return (dest);
}

