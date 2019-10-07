#include "holberton.h"

/**
 * *_memcpy - This is a function prototype
 * @dest: This variable recive the first value of the function main
 * @src: This variable recive the second value of the function main
 * @n: This variable recive the thirth value of the function main
 * Description: Function that copies memory area
 * section header: Section description
 * Return: Returns the result of the prototype function to the main function
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count1;

	for (count1 = 0; count1 < n; count1++)
	{
		dest[count1] = src[count1];
	}
	return (dest);
}
