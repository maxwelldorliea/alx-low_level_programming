#include <stdio.h>

/**
 * main - print the first 98 fibo starting with 1,2
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long c = 98, n1 = 1, n2 = 2, prevS = 0;
	unsigned long prevSh1, prevvSh2, prevSh3, prevSh4, half, half2;
	int i;

	for (i = 0; i < 92; i++)
	{
		prevS = n1 + n2;

		printf("%lu, ", prevS);

		n1 = n2;
		n2 = prevS;
	}

	prevSh1 = n1 / 1000000000;
	prevSh3 = n2 / 1000000000;
	prevSh2 = n1 % 1000000000;
	prevSh4 = n2 % 100000000;

	for (count = 93; count < 99; count++)
	{
		half1 = presSh1 + prevSh;
		half2 = fib1_half2 + prevSh1;
		if (prevSh2 + prevSh4 > 9999999999)
		{
			half += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half, half2);
		if (count != 98)
			printf(", ");

		prevSh1 = prevSh3;
		prevSh2 = prevSh4;
		prevSh2 = half;
		prevSh = half2;
	}
	printf("\n");
	return (0);
}
