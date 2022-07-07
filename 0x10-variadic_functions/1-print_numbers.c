#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separate each integer
 * @n: number of variable integer
 * Return: Nothing
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		printf("%d", va_arg(args, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}

	va_end(args);
	printf("\n");
}
