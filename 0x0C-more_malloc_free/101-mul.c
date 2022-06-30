#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints the product of two positive number
 *
 * @argc: int
 * @argv: char pointer
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	unsigned int j = 0, prod = 1, len, n;
	int i = 1;

	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}

	while (i < argc)
	{
		len = strlen(argv[i]);

		for (; j < len; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				puts("Error");
				exit(98);
			}
		}

		n = strtol(argv[i], NULL, 10);

		prod *= n;

		i++;
	}

	printf("%ul\n", prod);

	return (0);
}
