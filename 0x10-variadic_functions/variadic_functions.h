#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct all - Short description
 * @letra: First member
 * @f: Second member
 *
 * Description: Longer description
 */

typedef struct all
{
	char letra;
	void (*f)(va_list todo);
} strc;

#endif
