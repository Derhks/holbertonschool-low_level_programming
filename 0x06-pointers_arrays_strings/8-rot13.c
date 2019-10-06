#include "holberton.h"

/**
 * *rot13 - This is a function prototype
 * @s: This variable recive the value of the function main
 * Description: Function that encodes a string using rot13
 * section header: Section description
 * Return: Returns the result of the prototype function to the main function
 */

char *rot13(char *s)
{
	char npt[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char tpt[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int count1;
	int count2;

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		for (count2 = 0; npt[count2] != '\0'; count2++)
		{
			if (s[count1] == npt[count2])
			{
				s[count1] = tpt[count2];
				break;
			}
		}
	}
	return (s);
}
