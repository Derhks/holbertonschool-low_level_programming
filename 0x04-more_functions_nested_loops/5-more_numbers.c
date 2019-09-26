#include "holberton.h"

/**
 *more_numbers - This is a function prototype
 *Description: Display 10 times the numbers, from 0 to 14
 *section header: Section description
 */

void more_numbers(void)
{
	int num;
	int num2;

	for (num = 0; num <= 10; num++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			if (num2 <= 14)
			{
				if (num2 >= 10)
				{
					_putchar(num2 / 10 + '0');
				}
				_putchar(num2 % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
