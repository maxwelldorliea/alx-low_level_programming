#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_2d_len - get the len of a 2d array
 *
 * @s: char pointer to pointer
 *
 * Return: int
 */

int get_2d_len(char **s)
{
	int i = 0, len = 0;

	while (s[i])
	{
		int curr_len = strlen(s[i]);

		len += curr_len;

		i++;
	}

	return (len);
}

/**
 * argstostr - prints args to the stdout followed by new line
 *
 * @ac: int
 * @av: char pointer to pointer
 *
 * Return: char pointer
 */

char *argstostr(int ac, char **av)
{
	int size, i = 0, j, k = 0;
	char *s = NULL;

	if (ac == 0 || *av == NULL)
		return (NULL);

	size = get_2d_len(av);

	s = malloc(sizeof(*s) * (size + ac) + 1);

	if (s == NULL)
		return (NULL);
	while (av[i])
	{
		int curl = strlen(av[i]);

		for (j = 0; j < curl; j++)
		{
			s[k] = av[i][j];
			if (j + 1 == curl)
			{
				k++;
				s[k] = '\n';
			}
			k++;
		}


		i++;
	}

	return (s);
}

