#include "holberton.h"

/**
 * print_rev - This is a function prototype
 * @s: This variable recive the value of the function main
 * Description: Function that prints a string
 * section header: Section description
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	count--;
	while (s[count] != '\0')
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
