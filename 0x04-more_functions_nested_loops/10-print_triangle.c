#include "holberton.h"

/**
 *print_triangle - This is a function prototype
 *@size: This variable recive the value of the function main
 *Description: Prints a triangle
 *section header: Section description
 */

void print_triangle(int size)
{
	int trg1;
	int trg2;

	if (size > 0)
	{
		for (trg1 = 0; trg1 < size; trg1++)
		{
			for (trg2 = 0; trg2 < size; trg2++)
			{
				if ((trg1 + trg2) < (size - 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
