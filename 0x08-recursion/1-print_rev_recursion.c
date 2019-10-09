#include "holberton.h"

/**
 * _print_rev_recursion - This is a function prototype
 * @s: This variable recive the first value of the function main
 * Description: Function that prints a string in reverse
 * section header: Section description
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
