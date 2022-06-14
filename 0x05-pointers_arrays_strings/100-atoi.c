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
			continue;
		else if (s[i] >= 48 || s[i] <= 57)
			sum = sum * 10 + (s[i] - 48);
		i++;
	}

	if (s[0] == '-')
		return (-1 * sum);

	return (sum);
}
