#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two int command line arguments
 *
 * @argc: int
 * @argv: char pointer to pointer
 *
 * Return: int
 */


int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		int currv = strtol(argv[i], NULL, 10);

		sum *= currv;
	}

	printf("%d\n", sum);

	exit(EXIT_SUCCESS);

}
