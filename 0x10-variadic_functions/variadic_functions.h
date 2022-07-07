#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct prv - struct prv
 * @id: char
 * @f: function pointer
 * Description: ...
 */

typedef struct prv
{
	char id;
	void (*f)(va_list args);
} prv_t;

void pr_ch(va_list args);
void pr_int(va_list args);
void pr_str(va_list args);
void pr_flt(va_list args);


int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
