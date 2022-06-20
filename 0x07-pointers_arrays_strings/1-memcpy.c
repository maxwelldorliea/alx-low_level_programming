#include "main.h"

/**
 * _memcpy - copy n bytes from memoy area src to dest
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 *
 * Return: char pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*int len = get_len(dest);*/
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];

		len++;
		i++;
	}

	return (dest);
}
