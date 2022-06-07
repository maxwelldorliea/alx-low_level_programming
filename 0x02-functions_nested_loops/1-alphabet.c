#include "main.h"


/**
 * main - prints alphabet in lowercase
 *
 * Return: Always 0
 */


int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
		_putchar(alpha[i]);
	_putchar('\n');
	return (0);
}
