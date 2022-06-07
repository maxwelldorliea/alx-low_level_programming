#include <stdio.h>

/**
 * natural_num - print the sum of natural number below 1024, multiple of 3, 5
 *
 * Return: Nothing
 */


void natural_num(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);
}
