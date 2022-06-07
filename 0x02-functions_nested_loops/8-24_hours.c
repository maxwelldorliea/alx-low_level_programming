#include "main.h"

/**
 * jack_bauer - print all every second starting from 00:00 to 23:59
 *
 * Return: Nothing
 */


void jack_bauer(void)
{
	int i, k;

	for (i = 0; i <= 23; i++)
	{
		for (k = 0; k <= 59; k++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + k / 10);
			_putchar('0' + k % 10);
			_putchar('\n');
		}
	}
}
