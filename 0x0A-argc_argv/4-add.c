#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the sum of int command line argument pass
 *
 * @argc: int
 * @argv: char pointef to pointer
 *
 * Return: int
 */


int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		exit(EXIT_SUCCESS);
	}



	for (i = 1; i < argc; i++)
	{
		int currv = strtol(argv[i], NULL, 10);

		char *ch = "0";

		if (currv == 0 && *argv[i] != *ch)
		{
			printf("Error\n");
			return (1);
		}

		sum += currv;
	}

	printf("%d\n", sum);

	exit(EXIT_SUCCESS);
}
