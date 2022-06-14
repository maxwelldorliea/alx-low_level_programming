#include "main.h"
#include <stdio.h>


/**
 * rev_string - print the reverse version of a string
 *
 * @s: char pointer
 *
 * Return: Nothing
 */


void rev_string(char *s)
{
	int c = 0, i = 0;

	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}


	while (c < (i / 2))
	{
		tmp = s[c];
		s[c] = s[i - c - 1];
		s[i - c - 1] = tmp;
		c++;
	}


}
