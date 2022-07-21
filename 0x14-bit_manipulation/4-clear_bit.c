#include "main.h"


/**
 * clear_bit - clear the nth bit of a number
 * @n: number who bit is to be set
 * @index: index to be set
 *
 * Return: the modified number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_len = sizeof(unsigned long int) * 8;


	if (index >= bit_len)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}


