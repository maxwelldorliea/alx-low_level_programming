#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print the result of a operation
 * @argc: int
 * @argv: char pointer of pointer
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	int (*func)(int, int), ans, v1, v2;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		puts("Error");
		exit(99);
	}

	v1 = atoi(argv[1]);
	v2 = atoi(argv[3]);

	ans = func(v1, v2);

	printf("%d\n", ans);

	return (0);
}
