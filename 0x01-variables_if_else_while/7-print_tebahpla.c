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
	/* char alph[27] = "abcdefghijklmnopqrstuvwxyz";*/

	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
