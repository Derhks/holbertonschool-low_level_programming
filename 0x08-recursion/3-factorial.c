#include "holberton.h"

/**
 * factorial - This is a function prototype
 * @n: This variable recive the first value of the function main
 * Description: Function that returns the factorial of a given number
 * section header: Section description
 * Return: Always 0
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
