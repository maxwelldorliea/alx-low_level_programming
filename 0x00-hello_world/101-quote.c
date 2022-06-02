#include <unistd.h>
/**
 * main - Entry Point
 *
 * Description: prints a string to the standard error
 *
 * Return: Always 1(Error)
 */

int main(void)
{
char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-199\n";
write(STDOUT_FILENO,  err, 59);
return (1);
}
