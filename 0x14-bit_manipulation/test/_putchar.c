
#include <unistd.h>


int _putchar(int ch)
{
	return (write(1, &ch, 1));
}
