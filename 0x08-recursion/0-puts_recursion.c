#include "holberton.h"

/**
 * _puts_recursion - This is a function prototype
 * @s: This variable recive the first value of the function main
 * Description: Function that prints a string
 * section header: Section description
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
