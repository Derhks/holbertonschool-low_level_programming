#include "holberton.h"

/**
 * *_memset - This is a function prototype
 * @s: This variable recive the first value of the function main
 * @b: This variable recive the second value of the function main
 * @n: This variable recive the thirth value of the function main
 * Description: Function that fills memory with a constant byte
 * section header: Section description
 * Return: Returns the result of the prototype function to the main function
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count1;

	for (count1 = 0; count1 < n; count1++)
	{
		s[count1] = b;
	}
	return (s);
}
