#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: format string
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	char *token = "cifs";
	va_list args;
	int i = 0, len;

	if (format == NULL)
		return;
	len = strlen(format) - 1;
	va_start(args, format);

	while (format[i])
	{
		if (strchr(token, format[i]) == NULL)
		{
			i++;
			continue;
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 's':
				printf("%s", va_arg(args, char *));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
		}

		if (i != len)
			printf(", ");
		i++;
	}

	va_end(args);
	printf("\n");
}
