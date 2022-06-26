#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a char.
 *
 * @size: unsigned int
 * @c: char
 *
 * Return: char
 */


char *create_array(unsigned int size, char c)
{
	int i = 0, j = size;
	char *s = malloc(sizeof(*s) * size);

	if (size == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	while (i < j)
	{
		s[i] = c;
		i++;
	}

	return (s);

}
