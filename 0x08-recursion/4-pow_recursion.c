#include "holberton.h"

/**
 * _pow_recursion - This is a function prototype
 * @x: This variable recive the first value of the function main
 * @y: This variable recive the second value of the function main
 * Description: Function that returns the value of x raised to the power of y
 * section header: Section description
 * Return: Pending
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
