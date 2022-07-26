#include "main.h"


/**
 * main - copies the content of a file to another file.
 * @argc: number of parameter passed
 * @argv: array of parameters
 *
 * Return: 0 on Success
 */


int main(int argc, char **argv)
{
	char buf[1024];
	int fd_fr, fd_to, x, fr_c, to_c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_fr = open(argv[1], O_RDONLY);
	if (fd_fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(fd_fr, buf, 1024)) > 0)
	{
		if (fd_to < 0 || write(fd_to, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_fr);
			exit(99);
		}
	}
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fr_c = close(fd_fr);
	to_c = close(fd_to);
	if (fr_c < 0 || to_c < 0)
	{
		if (fr_c < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_fr);
		if (to_c < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
