#include "main.h"


/**
 * _atoi - convert char to integer
 *
 * @s: char pointer
 *
 * Return: int
 */

int _atoi(char *s)
{
	int i;
	int res = 0;
	int sig = -1;
	int brk = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sig = sig * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10;
			res -= (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	res = sig * res;
	return (res);
}


/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: char pointer
 *
 * Return: Nothing
 */


void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar((*str));

		str++;
	}

	_putchar('\n');

}


/**
 * _strlen - returns the length if a string
 *
 * @s: char
 *
 * Return: int
 */

int _strlen(char *s)
{
	int _len = 0;

	while (*s != '\0')
	{
		_len++;
		s++;
	}

	return (_len);
}


/**
 * _strcpy - copy src to dest
 *
 * @dest: char pointer
 * @src: char pointer
 *
 * Return: char pointer
 */


char *_strcpy(char *dest, char *src)
{
	char *ptr = src;
	int i = 0;

	while (*ptr != '\0')
	{
		dest[i] = *ptr;
		i++;
		ptr++;
	}

	dest[i] = *ptr;

	return (dest);
}

/**
 * _putchar - print a character to the stdout
 * @c: character to be printed
 * Return: 1 on success
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
