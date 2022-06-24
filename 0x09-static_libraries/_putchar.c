#include "main.h"


int _putchar(char ch)
{
	extern long write(int, const char *, unsigned long);

	return write(1, &ch, 1);

}
