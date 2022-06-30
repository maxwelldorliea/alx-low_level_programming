#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory in the heap and return pointer to it
 *
 * @b: unsigned int
 *
 * Return: void pointer
 */


void *malloc_checked(unsigned int b)
{
	void *ans =  malloc(b);

	if (ans == NULL)
		exit(98);
	return (ans);
}
