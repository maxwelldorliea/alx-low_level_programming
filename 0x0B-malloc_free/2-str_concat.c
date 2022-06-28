#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two string
 *
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: char pointer
 */


char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, t_len, i = 0;
	char *ans = NULL;

	if (*s1 == '\0')
		return (s2);
	if (*s2 == '\0')
		return (s1);

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	t_len = s1_len + s2_len;
	ans = malloc(sizeof(*ans) * t_len + 1);

	while (i < t_len)
	{
		if (i > s1_len)
			ans[i] = s2[i];
		ans[i] = s1[i];

		i++;
	}

	ans[i] = '\0';

	return (ans);

}
