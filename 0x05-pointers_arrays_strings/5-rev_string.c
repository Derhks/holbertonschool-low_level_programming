#include "holberton.h"

/**
 * rev_string - This is a function prototype
 * @s: This variable recive the value of the function main
 * Description: Function that reverses a string
 * section header: Section description
 */

void rev_string(char *s)
{
	int count1 = 0;
	int count2 = 0;
	char letter;

	while (s[count1] != '\0')
	{
		count1++;
	}
	count1--;
	while (count1 > count2)
	{
		letter = s[count2];
		s[count2] = s[count1];
		s[count1] = letter;
		count1--;
		count2++;
	}
}
