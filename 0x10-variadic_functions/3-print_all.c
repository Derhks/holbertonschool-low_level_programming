#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printf_char - This is a auxiliary function
 * @todo: Recive the value of the main function
 *
 * section Header: Section description
 */

void printf_char(va_list todo)
{
	printf("%c", va_arg(todo, int));
}

/**
 * printf_integer - This is a auxiliary function
 * @todo: Recive the value of the main function
 *
 * section Header: Section description
 */

void printf_integer(va_list todo)
{
	printf("%d", va_arg(todo, int));
}

/**
 * printf_float - This is a auxiliary function
 * @todo: Recive the value of the main function
 *
 * section Header: Section description
 */

void printf_float(va_list todo)
{
	printf("%f", va_arg(todo, double));
}

/**
 * printf_string - This is a auxiliary function
 * @todo: Recive the value of the main function
 *
 * section Header: Section description
 */

void printf_string(va_list todo)
{
	char *cpr = va_arg(todo, char *);

	if (cpr == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", va_arg(todo, char *));
}

/**
 * print_all - This is a function prototype
 * @format: Recive anything from the main function
 * Description: Function that prints anything
 * section Header: Section description
 */

void print_all(const char * const format, ...)
{
	va_list todo;
	char *sep = "";
	int cnt1 = 0, cnt2;
	strc all[] = {
		{'c', printf_char},
		{'i', printf_integer},
		{'f', printf_float},
		{'s', printf_string}
	};

	va_start(todo, format);
	while (format && format[cnt1])
	{
		cnt2 = 0;
		while (all[cnt2].letra)
		{
			if (format[cnt1] == all[cnt2].letra)
			{
				printf("%s", sep);
				all[cnt2].f(todo);
				sep = ", ";
			}
			cnt2++;
		}
		cnt1++;
	}
	va_end(todo);
	putchar('\n');
}
