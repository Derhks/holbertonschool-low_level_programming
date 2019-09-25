#include "holberton.h"

/**
 *times_table - This is a function prototype
 *Description: Display the 9 times table
 *section header: Section description
 *Return: end of the function main
 */

void times_table(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			int res = num1 * num2;

			if (res <= 9)
			{
				if (num2 > 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
				_putchar(res + '0');
			}
			else if (res >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
