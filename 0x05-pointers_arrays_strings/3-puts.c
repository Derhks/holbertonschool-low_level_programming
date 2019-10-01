#include "holberton.h"

/**
 * _puts - This is a function prototype
 * @str: This variable recive the value of the function main
 * Description: Function that prints a string
 * section header: Section description
 */

void _puts(char *str)
{
	int phrase = 0;

	while (str[phrase] != '\0')
	{
		_putchar(str[phrase]);
		phrase++;
	}
	_putchar('\n');
}
