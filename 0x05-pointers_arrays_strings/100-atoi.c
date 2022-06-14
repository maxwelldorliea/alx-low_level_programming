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
	int i = 0, sum = 0;

	while (s[i] != '\0')
	{
		if (s[i] < 48 || s[i] > 57)
			return (0);
		else if (s[i] >= 48 || s[i] <= 57)
			sum = sum * 10 + (str[i] - 48);
		i++;
	}

	return (sum);
}
