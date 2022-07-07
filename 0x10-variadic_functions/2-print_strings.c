#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: will separate each string
 * @n: number of variable string
 * Return: Nothing
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *s;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		s = va_arg(args, char *);

		if (s == NULL)
			s = "(nil)";
		printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}

	va_end(args);
	printf("\n");
}
