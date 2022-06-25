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
	int ch = 0;

	int myn;

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
		if (myn >= 25)
		{
			ch++;
			myn -= 25;
		}

		else if (myn >= 10)
		{
			ch++;
			myn -= 10;
		}

		else if (myn >= 5)
		{
			ch++;

			myn -= 5;
		}

		else if (myn >= 2)
		{
			ch++;
			myn -= 2;
		}

		else if (myn >= 1)
		{
			ch++;
			myn -= 1;
		}

	}

	printf("%d\n", ch);

	return (0);

}
	
