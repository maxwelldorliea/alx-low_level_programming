#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <udis86.h>


/**
 * main - prints the opcodes of its own main function
 * @argc: int
 * @argv: char pointer of pointer
 * Return: 0 always
 */


int main(int argc, char **argv)
{
	ud_t ud_obj;
	int num;

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

	ud_init(&ud_obj);
	ud_set_input_buffer(&ud_obj, argv[1], num);
	ud_set_mode(&ud_obj, 64);
	ud_set_syntax(&ud_obj, UD_SYN_INTEL);

	while (ud_disassemble(&ud_obj))
	{
		printf("\t%s\n", ud_insn_asm(&ud_obj));
	}

	return (0);
}


