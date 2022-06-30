#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: char pointer
 * @s2: char pointet
 * @n: unsigned int
 *
 * Return: char pointer
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, s1_len, s2_len, i = 0, j = 0, sum;
	char *nwstr = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	sum = s1_len + s2_len;
	nwstr = malloc(sizeof(*nwstr) * (sum) + 1);

	if (nwstr == NULL)
		return (NULL);
	if (n >= s2_len)
		len = s2_len;
	else
		len = n;

	while (i < s1_len)
	{
		nwstr[i] = s1[i];
		i++;
	}

	while (j < len)
	{
		nwstr[i] = s2[j];
		i++;
		j++;
	}

	nwstr[i] = '\0';

	return (nwstr);
}
