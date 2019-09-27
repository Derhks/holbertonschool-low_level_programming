#include "holberton.h"
/**
 *print_square - This is a function prototype
 *@size: This variable recive the value of the function main
 *Description: Prints a square
 *section header: Section description
 */

void print_square(int size)
{
	int square = size;
	int sqr1;
	int sqr2;

	for (sqr1 = 0; sqr1 < square; sqr1++)
	{
		for (sqr2 = 0; sqr2 < square; sqr2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
