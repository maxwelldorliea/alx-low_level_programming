#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print all alpha in reverse order
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 26; i > 0; i--)
		putchar(alph[i]);
	putchar('\n');
	return (0);
}
