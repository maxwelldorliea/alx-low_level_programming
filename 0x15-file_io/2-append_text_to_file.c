#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append to
 * @text_content: content to be appended
 *
 * Return: 1 on Success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
