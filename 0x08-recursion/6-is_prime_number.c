#include "main.h"
/**
 * is_prime_number - check if a number is prime
 *
 * @n: int
 *
 * Return: int
 */


int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 1));
}


/**
 * prime - check if a number is a prime.
 *
 * @n: int
 * @cv: int
 *
 * Return: int
 */

int prime(int n, int cv)
{
	if (cv < n && n % cv == 0)
		return (0);
	if (cv == n)
		return (1);
	return (prime(n, cv + 1));
}

