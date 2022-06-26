#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: char pointer
 *
 * Return: char pointer
 */

char *_strdup(char *str)
{
	int len;
	char *s = NULL;

	if (str == NULL)
		return (NULL);


	len = strlen(str);
	s = malloc(sizeof(*s) * len + 1);

	if (s == NULL)
		return (NULL);

	while (*str)
	{
		*s = *str;

		str++;
		s++;
	}

	return (s);
}

