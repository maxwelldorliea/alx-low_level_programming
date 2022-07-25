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
	int fd, n;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(*buf) * letters + 1);

	if (buf == NULL)
		return (0);

	read(fd, buf, letters);
	buf[letters + 1] = '\0';
	close(fd);

	n = write(1, buf, strlen(buf));

	if (n == -1 || n == str(buf))
		return (0);

	return (n);
}
