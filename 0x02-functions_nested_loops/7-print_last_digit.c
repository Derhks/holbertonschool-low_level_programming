#include "holberton.h"

/**
 *print_last_digit - This is a function prototype
 *@r: it recive the results from function main
 *Description: Display the last digit of a number
 *section header: Section description
 *Return: end of the function print_last_digit
 */

int print_last_digit(int r)
{
	int last_digit;

	last_digit = r % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
