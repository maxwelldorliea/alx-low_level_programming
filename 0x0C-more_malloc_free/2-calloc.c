#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * and set each btye with 0
 *
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int prod = nmemb * size, i = 0;
	void *ptr = NULL;

	if (prod == 0)
		return (NULL);

	ptr = malloc(prod);

	if (ptr == NULL)
		return (NULL);

	while (i < prod)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}

