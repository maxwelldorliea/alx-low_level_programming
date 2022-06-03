#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				for (l = k + 1; l < 10; l++)
				{
					putchar('0' + i % 10);
					putchar('0' + j % 10);
					putchar(',');
					putchar(' ');
					if (k == 9 && l == 9)
						break;
					putchar('0' + k % 10);
					putchar('0' + l % 10);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
