#include <stdio.h>

/**
 * main - print the sum of all even number in the first 10 fibo start at 1,2
 *
 * Return: Always 0
 */

int main(void)
{
	int c = 10, n1 = 1, n2 = 2, prevS = 0, sum = 0, i;

	for (i = 1; i <= c; i++)
	{
		if (n1 % 2 == 0)
			sum += n1;
		prevS = n1 + n2;
		n1 = n2;
		n2 = prevS;
	}

	printf("%d\n", sum);
	return (0);
}
