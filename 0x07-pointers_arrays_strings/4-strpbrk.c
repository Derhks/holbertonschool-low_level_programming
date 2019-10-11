#include "holberton.h"

/**
 * *_strpbrk - This is a function prototype
 * @s: This variable recive the first value of the function main
 * @accept: This variable recive the second value of the function main
 * Description: Function that searches a string for any of a set of bytes
 * section header: Section description
 * Return: The result of the prototype function to the main function
 */

char *_strpbrk(char *s, char *accept)
{
	int count1;
	int count2;

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		for (count2 = 0; accept[count2] != '\0'; count2++)
		{
			if (s[count1] == accept[count2])
			{
				return (s + count1);
			}
			if (s[count1] != accept[count2] && s[count1 + 1] == '\0')
			{
				return ('\0');
			}
		}
	}
	return (0);
}
