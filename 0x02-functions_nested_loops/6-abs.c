#include "holberton.h"

/**
 *_abs - This is a function prototype
 *@r: is a parameter, it recive the results from function main
 *mul: is a parameter, receive multiplication
 *Description: Display 1 if the letter is lowercase or uppercase and 0 if don't
 *section header: Section description
 *Return: end of the function main
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
