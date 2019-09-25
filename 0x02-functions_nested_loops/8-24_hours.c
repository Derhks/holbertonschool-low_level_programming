#include "holberton.h"

/**
 *jack_bauer - This is a function prototype
 *Description: Display every minute of the day
 *section header: Section description
 *Return: end of the function main
 */

void jack_bauer(void)
{
	int x;
	int y;

	for (x = 0; x <= 24; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}
	}
}
