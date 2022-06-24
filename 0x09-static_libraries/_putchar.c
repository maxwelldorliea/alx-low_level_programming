#include "main.h"

/**
 * _putchar - prints char to the standard output
 *
 * @ch: char
 *
 * Return: int
 */

int _putchar(char ch)
{
	extern long write(int, const char *, unsigned long);

	return (write(1, &ch, 1));

}
