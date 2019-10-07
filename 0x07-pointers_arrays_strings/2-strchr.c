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

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		if (s[count1] == c && s[count1] != '\0')
		{
			return (s + count1);
		}
	}
	return (0);
}
