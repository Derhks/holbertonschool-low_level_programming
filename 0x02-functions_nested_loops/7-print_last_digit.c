#include "holberton.h"

/**
 *print_last_digit - This is a function prototype
 *@r: is a parameter, it recive the results from function main
 *Description: Display the last digit of a number
 *section header: Section description
 *Return: end of the function print_last_digit
 */

int print_last_digit(int r)
{
	int last;

	if (r >= 0)
	{
		last = r % 10;
	}
	else if (r < 0)
	{
		last = -r % 10;
	}
	_putchar(last + '0');
	return (last);
}
