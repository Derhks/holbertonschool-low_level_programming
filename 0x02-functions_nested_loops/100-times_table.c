#include "holberton.h"

/**
 * print_times_table - This is a function prototype
 * @n: This variable recive the value of the function main
 * Description: Function that prints the n times table
 * section header: Section description
 */

void print_times_table(int n)
{
	int cnt1, cnt2, tbl;

	if (n > 0 && n <= 15)
	{
		for (cnt1 = 0; cnt1 <= n; cnt1++)
		{
			for (cnt2 = 0; cnt2 <= n; cnt2++)
			{
				tbl = cnt1 * cnt2;

				if (tbl <= 9)
				{
					if (cnt2 > 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(tbl + '0');
				}
				else if (tbl >= 10 && tbl < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(tbl / 10 + '0');
					_putchar(tbl % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(tbl / 100 + '0');
					_putchar((tbl % 100) / 10 + '0');
					_putchar(tbl % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
