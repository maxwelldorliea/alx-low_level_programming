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
	int s1_len = strlen(s1), s2_len = strlen(s2), t_len = s1_len + s2_len, i = 0;
	char *ans = malloc(sizeof(*ans) * t_len + 1);;

	if (s1 == NULL && s2 != NULL)
		return (s2);
	if (s2 == NULL && s1 != NULL)
		return (s1);
	if (s1 == NULL && s2 == NULL)
		return (ans);

	while (i < t_len)
	{
		if (s1_len > i)
			ans[i] = s1[i];
		else
			ans[i] = s2[i];

		i++;
	}

	ans[i] = '\0';

	return (ans);

}
