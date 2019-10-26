#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - This is a function prototype
 * @n: Recive the value of the main function
 * Description: Function that returns the sum of all its parameters
 * section Header: Section description
 * Return: The sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int cnt1;
	int sm = 0;
	va_list suma;

	if (n == 0)
	{
		return (0);
	}
	va_start(suma, n);
	for (cnt1 = 0; cnt1 < n; cnt1++)
	{
		sm += va_arg(suma, int);
	}
	va_end(suma);
	return (sm);
}
