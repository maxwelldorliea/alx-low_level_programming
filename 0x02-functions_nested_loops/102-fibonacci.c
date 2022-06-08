#include <stdio.h>

/**
 * main - print the first 50 fibo atarting with 1,2
 *
 * Return: Always 0
 */

int main(void)
{
	long int c = 50, n1 = 1, n2 = 2, prevS = 0, i;

	for (i = 1; i <= c; i++)
	{
		printf("%ld", n1);
		if (i == 50)
		{
			printf("\n");
			break;
		}
		printf(", ");

		prevS = n1 + n2;
		n1 = n2;
		n2 = prevS;
	}

	return (0);
}
