#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - return the sum of two numbers
 * @a: int
 * @b: int
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the different of two numbers
 * @a: int
 * @b: int
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of two numbers
 * @a: int
 * @b: int
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the result of a division of two numbers
 * @a: int
 * @b: int
 * Return: int
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - return the reminder of two numbers
 * @a: int
 * @b: int
 * Return: int
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}

	return (a % b);
}
