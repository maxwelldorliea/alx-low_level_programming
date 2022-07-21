#include "main.h"

/**
 * get_endianness - return 1 if LE or 0 BE
 * Return: 1 if LE or 0 BE
 */

int get_endianness(void)
{
	int num = 1;

	if (*(char *)&num == 1)
		return (1);
	return (0);
}
