#include "holberton.h"

/**
 *print_numbers - This is a function prototype
 *Description: Display 1 if the letter is lowercase and 0 if don't
 *section header: Section description
 *Return: 1 if the letter is lowercase and 0 if don't
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
