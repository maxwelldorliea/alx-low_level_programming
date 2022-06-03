#include <stdio.h>

/**
 * main -Entry Point
 *
 * Description: print all combinations of single digit
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i % 10);
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
