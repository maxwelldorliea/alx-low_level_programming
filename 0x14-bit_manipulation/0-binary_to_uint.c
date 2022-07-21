#include "main.h"

/**
 * sum_exp - return sum of exponent
 * @exp: exponent
 *
 * Return: sum of exponent
 */

unsigned int sum_exp(unsigned int exp)
{
	unsigned int sm_exp = 1;

	while (--exp > 0)
	{
		sm_exp *= 2;
	}

	return (sm_exp);
}

/**
 * binary_to_uint - return the unsigned int representation of a binary
 * @b: binary to be convert
 *
 * Return: return unaigned int representation of a binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, exp;

	if (b == NULL)
		return (num);

	exp = strlen(b);

	while (*b)
	{
		unsigned int sm_exp;

		if (*b != '0' && *b != '1')
			return (0);

		sm_exp = sum_exp(exp);

		num += (*b - '0') * sm_exp;

		exp--;
		b++;
	}


	return (num);
}
