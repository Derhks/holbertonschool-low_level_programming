#include "holberton.h"

/**
 * *_strstr - This is a function prototype
 * @haystack: This variable recive the first value of the function main
 * @needle: This variable recive the second value of the function main
 * Description: Function that locates a substring
 * section header: Section description
 * Return: The result of the prototype function to the main function
 */

char *_strstr(char *haystack, char *needle)
{
	int count1;
	int count2;

	for (count1 = 0; haystack[count1] != '\0'; count1++)
	{
		for (count2 = 0; needle[count2] != '\0'; count2++)
		{
			if (haystack[count1] == needle[count2])
			{
				if (haystack[count1 + 1] == needle[count2 + 1])
				{
					return (haystack + count1);
				}
			}
		}
	}
	return ('\0');
}
