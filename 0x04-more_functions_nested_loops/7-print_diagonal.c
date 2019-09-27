#include "holberton.h"

/**
 *print_diagonal - This is a function prototype
 *@n: This variable recive the value of the function main
 *Description: Draws a diagonal line on the terminal
 *section header: Section description
 */

void print_diagonal(int n)
{
	int m = n;
	int l;
	int k;

	if (m > 0)
	{
		for (l = 0; l < m; l++)
		{
			for (k = 0; k <= l; k++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
