#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 *
 * @argc: int
 * @argv: char pointer to pointwr
*/



int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	exit(EXIT_SUCCESS);
}
