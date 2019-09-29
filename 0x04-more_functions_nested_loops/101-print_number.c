#include "holberton.h"

/**
 *print_number - This is a function prototype
 *@n: This variable recive the value of the function main
 *Description: Prints a square
 *section header: Section description
 */

void print_number(int n)
{
	int y;
	int z = 45;

	y = ((n % 1000) % 100);

	if (n < 0 && n > -100)
	{
		_putchar(z);
		_putchar(-n / 10 + '0');
		_putchar(-n % 10 + '0');
	}
	else if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else if (n >= 10 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar(n / 100 + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 1000 && n < 10000)
	{
		_putchar((n / 1000) + '0');
		_putchar(n = ((n % 1000) / 100) + '0');
		_putchar((y / 10) + '0');
		_putchar((y % 10) + '0');
	}
}
