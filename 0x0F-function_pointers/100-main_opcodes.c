#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - prints the opcodes of its own main function
 * @argc: int
 * @argv: char pointer of pointer
 * Return: 0 always
 */


int main(int argc, char **argv)
{
	int num, k = 0, (*code)(int, char **) = main;

	unsigned char opcode;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		puts("Error");
		exit(2);
	}

	while (k < num)
	{
		opcode = *(unsigned char *)code;
		printf("%.2x", opcode);
		if (k < (num - 1))
		{
			printf(" ");
		}

		code++;
		k++;
	}

	printf("\n");

	return (0);
}


