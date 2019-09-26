#include "holberton.h"

/**
 *print_line - This is a function prototype
 *@n: This variable recive the value of the function main
 *Description: Draws a straight line in the terminal
 *section header: Section description
 */

void print_line(int n)
{
	int m = n;
	int l;

	for (l = 0; l <= m; l++)
	{
		if (m > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
