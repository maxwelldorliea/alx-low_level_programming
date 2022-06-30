#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	unsigned int i = 1, j = 0, prod = 1, len;

	if (argc > 3)
	{
		puts("Error");
		exit(98);
	}

	while (i < argc)
	{
		len = strlen(argv[i]);

		for (; j < len; j++)
		{
			if (!isdigit(s[i][j]))
			{
				puts("Error");
				exit(98);
			}
		}

		int n = strtol(s[i]);

		prod *= n;

		i++;
	}

	printf("%ul\n", prod);

	return (0);
}
