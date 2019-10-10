 #include "holberton.h"

/**
 * sqrt_aux - This is a auxiliary function
 * @n: This variable recive the first value of the function prototipe
 * @x: This variable recive the second value of the function prototipe
 * Description: This function calculates the natural square root of a number
 * section header: Section description
 * Return: The natural square root of the number
 */

int sqrt_aux(int n, int x)
{
	if ((x * x) == n)
	{
		return (x);
	}
	if ((x * x) > n)
	{
		return (-1);
	}
	return (sqrt_aux(n, (x + 1)));
}

/**
 * _sqrt_recursion - This is a function prototype
 * @n: This variable recive the first value of the function main
 * Description: Function that returns the output of the function sqrt_aux
 * section header: Section description
 * Return: The natural square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	sqrt_aux(n, 1);
	return (sqrt_aux(n, 1));
}
