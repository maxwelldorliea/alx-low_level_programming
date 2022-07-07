#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: char pointer
 * @f: function pointer
 * Return: Nothing
 */


void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
