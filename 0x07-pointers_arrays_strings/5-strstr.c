#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * check - check if two string are equal
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: int
 */

int check(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}

	return (*s2 == '\0');
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
	while (*haystack)
	{
		if ((*haystack == *needle) && check(haystack, needle))
			return (haystack);
		haystack++;
	}

	return (NULL);
}
