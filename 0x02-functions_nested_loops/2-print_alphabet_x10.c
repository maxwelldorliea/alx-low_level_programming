#include "main.h"


/**
 * print_alphabet_x10 - prints all characters 10 times
 *
 * Return: Nothing
 */


void print_alphabet_x10(void)
{
	int i, j;

	char l[] = "abcdefghijklmnopqrstuvwxyz\n";
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 26; j++)
			_putchar(l[j]);
	}

	_putchar('\n');
	return;

}
