#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry Point
 *
 * Description: check whether a random number is positive, negative or zero.
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("%d  is greater than 5\n", n % 10);
	else if (n % 10 < 6 && n % 10 != 0)
		printf("%d  is less than 6 and not 0\n", n % 10);
	else
		printf("%d is 0\n", n % 10);
	return (0);
}


