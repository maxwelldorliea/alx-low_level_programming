#include "main.h"
#include <string.h>


/**
 * is_palindrome - check if a string is palindrome
 *
 * @s: char pointer
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	if (!*s)
		return (0);
	return (ch_palind(0, s));
}
/**
 * palindrome - check if a number is a palindrome
 *
 * @curri: int
 * @s: char pointer
 *
 * Return: int
 */

int ch_palind(int curri, char *s)
{
	int l = strlen(s)  - curri;
	int i = curri - 1;

	if (s[i] != s[l])
		return (0);
	if (l == 0 && s[i] == s[l])
		return (1);
	return (ch_palind(curri + 1, s));
}
