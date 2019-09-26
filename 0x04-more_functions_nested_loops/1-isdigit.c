#include "holberton.h"

/**
 *_isdigit - This is a function prototype
 *@c:  This variable recive the value of the function main
 *Description: Checks for a digit (0 through 9)
 *section header: Section description
 *Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
