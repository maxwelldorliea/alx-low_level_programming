#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints from 0 to 9
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}

	printf("\n");

	return (0);
}
