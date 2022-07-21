#include "main.h"


/**
 * get_bit_len - return the number bit in a number
 * @n: number to be check
 *
 * Return: number of bits
 */

unsigned int get_bit_len(unsigned long int n)
{
	int len = 0;

	while (n >> 1)
	{
		len++;
		n >>= 1;
	}

	return (len);
}

/**
 * get_bit - returns a bit at nth index
 * @n: number to be check
 * @index: index to check for
 *
 * Return: index or -1 if not exist
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idx = get_bit_len(n);
	int bit;

	if (index >= idx)
		return (-1);

	bit = (n & (1 << index)) >> index;

	return (bit);
}
