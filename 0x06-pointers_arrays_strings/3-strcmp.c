#include "main.h"

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
