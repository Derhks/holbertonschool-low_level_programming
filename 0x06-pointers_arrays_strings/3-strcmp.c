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
	int count1;
	int numb1 = 0;
	int numb2 = 0;
	int numb3;

	for (count1 = 0; s1[count1] != '\0'; count1++)
	{
		if (s2[count1] != s1[count1])
		{
		numb1 = s1[count1];
		numb2 = s2[count1];
		}
		numb3 = numb1 - numb2;
		break;
	}
	return (numb3);
}
