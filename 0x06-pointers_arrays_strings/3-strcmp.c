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
 * _strcmp - compare two string, return 1 if s1 > s2, 0 when s1 =s2, -1 s1 < s2
 *
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: int
 */


int _strcmp(char *s1, char *s2)
{
	int len1 = get_len(s1);
	int len2 = get_len(s2);
	int i = 0;

	#define TRUE 1
	#define FALSE -1
	#define EQ 0
	#define LNE 32

	if (len1 != len2)
		return (LNE);
	while (s1[i] != '\0' && i < len1)
	{
		if (s1[i] > s2[i])
			return (TRUE);
		else if (s1[i] < s2[i])
			return (FALSE);
		i++;
	}

	return (-EQ);
}
