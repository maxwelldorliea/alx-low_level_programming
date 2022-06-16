#include "main.h"

/**
 * string_toupper - convert string to all uppercase
 *
 * @str: char pointer
 *
 * Return: char pointer
 */


char *string_toupper(char *str)
{
	char l;

	int i = 0;

	while (str[i] != '\0')
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			if (str[i] == l)
			{
				int num = ((int)str[i]) - 32;

				s[i] = (char)num;
				break;
			}
		}

		i++;
	}

	return (s);
}
