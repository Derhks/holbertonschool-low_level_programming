#include "holberton.h"

/**
 * _strcmp - This is a function prototype
 * @s1: This variable recive the value of the function main
 * @s2: This variable recive the value of the function main
 * Description: Function that compares two strings
 * section header: Section description
 * Return: Returns the counter value to the main function
 */

int _strcmp(char *s1, char *s2)
{
	int count1 = 0;

	while (s1[count1] == s2[count1] && s1[count1] != '\0')
	{
		count1++;
	}
	return (s1[count1] - s2[count1]);
}
