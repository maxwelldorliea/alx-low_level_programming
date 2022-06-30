#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * wrds_cnt - return the number of word in a string
 *
 * @s: char pointer
 *
 * Return: int
 */

int wrds_cnt(char *s)
{

	int c = 0, i = 0;

	while (s[i])
	{
		if (s[i] != ' ' &&
		    (s[i + 1] == ' ' ||
		    s[i + 1] == '\0'))
			c++;
		i++;
	}

	return (c);
}
	
/**
 * strtow - splits a string into words.
 *
 * @str: char pointer
 *
 * Return: char pointer to pointer
 */

char **strtow(char *str)
{
	int r, c = 0, k = 0, f = 0;
	char **split = NULL;
	char *w, *wrd, *cpystr = strdup(str);

	if (str == NULL)
		return (NULL);
	r = wrds_cnt(str);
	split = malloc(sizeof(*split) * r + 1);

	if (split == NULL)
		return (NULL);

	while ((w = strtok_r(cpystr, " ",&cpystr)) != NULL)
	{
		int l = strlen(w);
		split[c] = malloc(sizeof(char) * l);
		if (split == NULL)
		{
			while (c >= 0)
			{
				free(split[c]);
				c--;
			}

			free(split);
			return (NULL);
		}
	}

	while ((wrd = strtok_r(cpystr, " ",&cpystr)) != NULL)
	{
		*split[k] = wrd;
		f++;
		k++;
	}

	return (split);



	
}
