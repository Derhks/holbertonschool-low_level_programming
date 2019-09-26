#include "holberton.h"
/**
 *_isupper - This is a function prototype
 *@c: This variable recive the values
 *Description: Checks for uppercase character
 *section header: Section description
 *Return: end of the function main
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
