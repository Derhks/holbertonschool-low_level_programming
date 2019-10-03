#include "holberton.h"

/**
 * *_strncpy - This is a function prototype
 * @dest: This variable recive the value of the function main
 * @src: This variable recive the value of the function main
 * @n: This variable recive the value of the function main
 * Description: Function that copies a string
 * section header: Section description
 * Return: Returns the counter value to the main function
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count2 = 0;

	for ( ; count2 < n && src[count2] != '\0'; count2++)
	{
		dest[count2] = src[count2];
	}
	while (count2 < n)
	{
		dest[count2] = '\0';
		count2++;
	}
	return (dest);
}
