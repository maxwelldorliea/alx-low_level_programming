#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: int
 *
 * Return: int
 */


int _sqrt_recursion(int n)
{
	if (n == 0)
		return (-1);

	if (n * n == n)
		return (n);
	return (_sqrt_recursion(n - 1));
}
