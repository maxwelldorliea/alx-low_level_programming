#include "main.h"


/**
 * set_bit - set the nth bit of a number
 * @n: number who bit is to be set
 * @index: index to be set
 *
 * Return: the modified number
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_len = sizeof(unsigned long int) * 8;


	if (index >= bit_len)
		return (-1);

	*n |= (unsigned long int) (1 << index);

	return ((int)*n);
}


