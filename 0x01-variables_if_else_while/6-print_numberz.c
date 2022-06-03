#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints from 0 to 9 using only putchar function
 *
 * Return: Always 0(Success)
 */


int main(void)
{
	int n[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + n[i] % 10);
	putchar('\n');
	return (0);
}
