#include "holberton.h"

/**
 * *_strncat - This is a function prototype
 * @dest: This variable recive the value of the function main
 * @src: This variable recive the value of the function main
 * @n: This variable recive the value of the function main
 * Description: Function that concatenates two strings
 * section header: Section description
 * Return: Returns the counter value to the main function
 */

char *_strncat(char *dest, char *src, int n)
{
	int count1 = 0;
	int count2 = 0;

	while (dest[count1] != '\0')
	{
		count1++;
	}
	while (count2 < n && src[count2] != '\0')
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	return (dest);
}
