#include "main.h"

/**
 * _abs - calculate the absoluten of a number
 *
 * @n: value to be calculated
 *
 * Return: int
 */


int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}

