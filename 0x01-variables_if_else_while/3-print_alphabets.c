#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print the alphabets in both cases using the putchar function
 *
 * Return: Always 0(Success)
 */


int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

	for (i = 0; i < 52; i++)
		putchar(alpha[i]);
	putchar('\n');
	return (0);
}
