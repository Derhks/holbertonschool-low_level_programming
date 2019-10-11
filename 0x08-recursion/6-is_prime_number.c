#include "holberton.h"

/**
 * is_prime_aux - This is a auxiliary function
 * @n: This variable recive the first value of the function prototype
 * @x: This variable recive the second value of the function prototype
 * Description: Function that returns 1 if n is a prime number
 * section header: Section description
 * Return: 1 if n is a prime number or 0 otherwise
 */

int is_prime_aux(int n, int x)
{
	if ((n == x) && ((n % x) == 0))
	{
		return (1);
	}
	if ((n % x) == 0)
	{
		return (0);
	}
	return (is_prime_aux(n, (x + 1)));
}

/**
 * is_prime_number - This is a function prototype
 * @n: This variable recive the first value of the function main
 * Description: Returns the result of the auxiliary function
 * section header: Section description
 * Return: The result of the auxiliary function
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	is_prime_aux(n, 2);
	return (is_prime_aux(n, 2));
}
