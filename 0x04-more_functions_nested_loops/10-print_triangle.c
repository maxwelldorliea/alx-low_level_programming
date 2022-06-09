#include "main.h"


/**
 * print_triangle - print a triangle
 *
 * @size: int
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i, j,  s;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (s = size - 1; s > 0; s++)
			{
				printf(" ");

				for (j = 0; j < size; j++)
				{
					printf("#);
					if (i == size -1)
						printf("\n");
				}
			}
		}
	}

	printf("\n");

}

