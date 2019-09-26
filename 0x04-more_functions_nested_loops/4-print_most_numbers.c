#include "holberton.h"

/**
 *print_most_numbers - This is a function prototype
 *Description: Print the numbers , from 0 to 9 without 2 and 4
 *section header: Section description
 *Return: The result of the block code
 */

void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if ((num < '2' || num > '2') && (num < '4' || num > '4'))
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
