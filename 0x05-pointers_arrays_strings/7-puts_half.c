#include "holberton.h"

/**
 * puts_half - This is a function prototype
 * @str: This variable recive the value of the function main
 * Description: Function that prints half of a string
 * section header: Section description
 */

void puts_half(char *str)
{
	int count1 = 0;
	int count2;

	while (str[count1] != '\0')
	{
		count1++;
	}
	if (count1 % 2 != 0)
	{
		count1++;
	}
	count2 = count1 / 2;
	while (count2 < count1)
	{
		_putchar(str[count2]);
		count2++;
	}
	_putchar('\n');
}
