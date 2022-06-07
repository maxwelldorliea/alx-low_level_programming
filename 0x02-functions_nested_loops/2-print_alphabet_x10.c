#include "main.h"


/**
 * print_alphabet_x10 - prints all characters 10 times
 *
 * Return: Nothing
 */


void print_alphabet_x10(void)
{
	int i;

	char l;

	for (i = 0; i < 3; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
	}

	_putchar('\n');
	return;

}
