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
	int j, k, i = 0;

        char tmp, *ptr;
	ptr = s;

        while (s[i] != '\0')
        {
                i++;
        }

	for (j = 1; j < i; j++)
	{
		ptr++;
	}

        while (k < (i / 2))
        {
		tmp = s[k];
		s[k] = *ptr;
                *ptr = tmp;

                k++;
                ptr--;
        }
	
}
