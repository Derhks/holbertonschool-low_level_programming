#include "holberton.h"

/**
 *print_sign - This is a function prototype
 *@n: is a parameter, it recive the results from function main
 *Description: Display 1 if the letter is lowercase or uppercase and 0 if don't
 *section header: Section description
 *Return: 1, 0 or -1 if n is greater than 0, iqual to zero and less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
