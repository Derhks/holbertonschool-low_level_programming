#include "holberton.h"

/**
 * *_strcat - This is a function prototype
 * @dest: This variable recive the value of the function main
 * @src: This variable recive the value of the function main
 * Description: Function that concatenates two strings
 * section header: Section description
 * Return: Returns the counter value to the main function
 */

char *_strcat(char *dest, char *src)
{
	int count1 = 0;
	int count2 = 0;

	while (dest[count1] != '\0')
	{
		count1++;
	}
	while (src[count2] != '\0')
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
		dest[count1 + 1] = '\0';
	}
	return (dest);
}
