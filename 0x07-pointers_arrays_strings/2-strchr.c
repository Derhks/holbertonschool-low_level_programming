#include "holberton.h"

/**
 * *_strchr - This is a function prototype
 * @s: This variable recive the first value of the function main
 * @c: This variable recive the second value of the function main
 * Description: Function that locates a character in a string
 * section header: Section description
 * Return: Returns the result of the prototype function to the main function
 */

char *_strchr(char *s, char c)
{
	int count1;
	int count2;

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
	}
	count1++;
	for (count2 = 0; count2 <= count1; count2++)
	{
		if (s[count2] == c)
		{
			return (s + count2);
		}
	}
	return (0);
}
