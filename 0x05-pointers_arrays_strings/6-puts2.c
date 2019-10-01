#include "holberton.h"

/**
 * puts2 - This is a function prototype
 * @str: This variable recive the value of the function main
 * Description: Function that prints every other character of a string
 * section header: Section description
 */

void puts2(char *str)
{
	int count1 = 0;
	int count2 = 0;

	while (str[count1] != '\0')
	{
		count1++;
	}
	count1--;
	while (count2 <= count1)
	{
		_putchar(str[count2]);
		count2++;
		count2++;
	}
	_putchar('\n');
}
