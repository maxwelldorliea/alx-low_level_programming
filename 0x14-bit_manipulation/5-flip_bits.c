#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number to be check
 * @m: number to be check
 *
 * Return: number of bits
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, flip = n ^ m;

	while (flip > 0)
	{
		bits += (flip & 1);
		flip >>= 1;
	}

	return (bits);
}
