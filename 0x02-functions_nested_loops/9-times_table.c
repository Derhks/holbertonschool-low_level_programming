#include "holberton.h"

/**
 *times_table - This is a function prototype
 *Description: Display the 9 times table
 *section header: Section description
 *Return: end of the function main
 */

void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int z = x * y;

			if (z > 0 && z <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else
			{
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
