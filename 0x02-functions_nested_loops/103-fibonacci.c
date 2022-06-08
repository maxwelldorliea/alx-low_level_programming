#include <stdio.h>

/**
 * main - print the sum of all even number in the first 10 fibo start at 1,2
 *
 * Return: Always 0
 */

int main(void)
{
	long int n1 = 0, n2 = 1, prevS = 0, sum = 0;

	while (1)
	{
		prevS = n1 + n2;
		if (prevS > 4000000)
			break;
		if (prevS % 2 == 0)
			sum += prevS;
		n1 = n2;
		n2 = prevS;
	}

	printf("%ld\n", sum);
	return (0);
}
