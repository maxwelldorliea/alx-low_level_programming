#include "main.h"

/**
 * factorial - prints the factorial of a number
 *
 * @n: int
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
