#include "holberton.h"

/**
 *print_numbers - This is a function prototype
 *Description: Display the numbers, from 0 to 9
 *section header: Section description
 *Return: The result of the block of code
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
