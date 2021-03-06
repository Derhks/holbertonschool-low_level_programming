#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - This is a function prototype
 * @separator: Recive a string from the main function
 * @n: Recive the numbers of arguments from the main function
 * Description: Function that prints numbers
 * section Header: Section description
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int cnt1;

	va_list imprimir;

	va_start(imprimir, n);
	for (cnt1 = 0; cnt1 < n; cnt1++)
	{
		if (cnt1 > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(imprimir, int));
	}
	va_end(imprimir);
	putchar('\n');
}
