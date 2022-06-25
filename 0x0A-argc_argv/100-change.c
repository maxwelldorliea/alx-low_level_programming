#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to get a change
 *
 * @argc: int
 * @argv: char pointer to pointer
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int myn, i, ch = 0;
	int chg[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	myn = strtol(argv[1], NULL, 10);

	if (myn < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (myn > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (myn >= chg[i])
			{
				ch++;
				myn -= chg[i];
				break;
			}
		}
	}
	printf("%d\n", ch);
	return (0);
}

