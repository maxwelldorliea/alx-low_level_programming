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
	int len = _strlen(dest);


	while (*src != '\0')
	{
		dest[len] = *src;

		len++;
		src++;
	}

	dest[len] = '\0';

	return (dest);
}


/**
 * _strncat - Append at most n bites of src to dest
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 *
 * Return: char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = _strlen(dest);

	while (*src != '\0' && i < n)
	{
		dest[len] = *src;

		len++;
		src++;
		i++;
	}

	dest[len] = '\0';

	return (dest);
}

/**
 * _strcmp - compare two string, return 1 if s1 > s2, 0 when s1 =s2, -1 s1 < s2
 *
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: int
 */


int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}


/**
 * _strstr - locates a substring
 *
 * @haystack: char pointer
 * @needle: char pointer
 *
 * Return: char pointer
 */


char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		if ((*haystack == *needle) && _strcmp(haystack, needle) == 0)
			return (haystack);
		haystack++;
	}

	return (NULL);
}
