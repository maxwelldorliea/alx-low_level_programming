#include <stdio.h>

/**
 * main - print from 1 to 10, multiply of 3, Fizz, 5, Buzz, both FizzBuzz
 *
 * Return: 0
 */


int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");

		else if (i % 3 == 0)
			printf("Fizz");

		else if (i % 5 == 0)
			printf("Buzz");

		else
			printf("%d", i);
		if (i == 100)
			break;
		printf(" ");
	}

	printf("\n");

	return (0);
}
