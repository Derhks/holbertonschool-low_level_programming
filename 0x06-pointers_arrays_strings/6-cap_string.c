#include "holberton.h"

/**
 * *cap_string - This is a function prototype
 * @s: This variable recive the value of the function main
 * Description: Function that capitalizes all words of a string
 * section header: Section description
 * Return: Returns the result of the prototype function to the main function
 */

char *cap_string(char *s)
{
	int count1;
	int count2;
	char c[] = {32, '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		for (count2 = 0; c[count2] != '\0'; count2++)
		{
			if (c[count2] == s[count1 - 1])
			{
				if (s[count1] >= 97 && s[count1] <= 122)
				{
					s[count1] = s[count1] - 32;
				}
			}
		}
	}
	return (s);
}
