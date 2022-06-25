#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


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
	int i, k, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		exit(EXIT_SUCCESS);
	}



	for (i = 1; i < argc; i++)
	{
		int currv = strtol(argv[i], NULL, 10);
		int len = strlen(argv[i]);

		for (k = 0; k < len; k++)
		{

			if (!isdigit(argv[i][k]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += currv;
	}

	printf("%d\n", sum);

	exit(EXIT_SUCCESS);
}
