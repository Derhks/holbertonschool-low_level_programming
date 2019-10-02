#include "holberton.h"

/**
 * *_strcpy - This is a function prototype
 * @dest: This variable recive the value of the function main
 * @src: This variable recive the value of the function main
 * Description: Function that copies the string pointed to by src
 * section header: Section description
 * Return: Returns the counter value to the main function
 */

char *_strcpy(char *dest, char *src)
{
	int count1 = 0;
	int count2;

	while (src[count1] != '\0')
	{
		count1++;
	}
	for (count2 = 0; count2 <= count1; count2++)
	{
		dest[count2] = src[count2];
	}
	return (dest);
}
