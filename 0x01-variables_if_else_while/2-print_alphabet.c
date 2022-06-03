#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints of alphabets in lowercase with putschar function
 *
 * Return: Always 0(Success)
 */


int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
		putchar(alpha[i]);
	putchar('\n');
	return (0);
}

