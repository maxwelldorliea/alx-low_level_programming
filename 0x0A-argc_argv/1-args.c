#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the number of argument pass to the program
 *
 * @argc: int
 * @argv: char pointer to pointer
 *
 * Return: int
 */


int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
