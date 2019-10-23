#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - This is the function prototype
 * @name: This variable recive the first value of the function main
 * @f: This is a pointer to the function
 * Description: Function that prints a name
 * section header: Section description
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
