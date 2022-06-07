#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0
 */


int main(void)
{
	char word[9] = "_putchar";

	for (int i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
