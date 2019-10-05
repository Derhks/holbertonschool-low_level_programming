#include "holberton.h"
#include <stdio.h>
/**
 * *string_toupper - This is a function prototype
 * @s: This variable recive the value of the function main
 * Description: Function that changes all lowercase letters of a string to uppercase
 * section header: Section description
 * Return: Returns the result of the prototype function to the main function
 */

char *string_toupper(char *s)
{
	int count1 = 0;

	while (s[count1] != '\0')
	{
		if (s[count1] >= 97 && s[count1] <= 122)
		{
			s[count1] = s[count1] - 32;
		}
		count1++;
	}
	return (s);
}
