#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to be read and printed
 * @letters: the of the file
 *
 * Return: length of char printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, rfd;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(*buf) * letters + 1);

	if (!buf)
	{
		free(buf);
		buf = NULL;
		return (0);
	}
	rfd = read(fd, buf, letters);

	if (rfd < 0)
	{
		free(buf);
		buf = NULL;
		return (0);
	}
	buf[letters + 1] = '\0';
	close(fd);
	n = write(STDOUT_FILENO, buf, rfd);

	if (n < 0)
	{
		free(buf);
		buf = NULL;
		return (0);
	}

	free(buf);
	buf = NULL;
	return (n);
}
