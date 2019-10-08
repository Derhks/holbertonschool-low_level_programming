#include "holberton.h"

/**
 * int _strspn - This is a function prototype
 * @s: This variable recive the first value of the function main
 * @accept: This variable recive the second value of the function main
 * Description: Function that gets the length of a prefix substring
 * section header: Section description
 * Return: Returns the result of the prototype function to the main function
 */

unsigned int _strspn(char *s, char *accept)
{
	int count1;
	int count2;
	int sum1;
	int sum2;

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		for (count2 = 0; accept[count2] != '\0'; count2++)
		{
			if (s[count1] == accept[count2])
			{
				sum1++;
				break;
			}
			else
			{
				sum1 = 0;
			}
		}
		if (sum1 == 0)
		{
			break;
		}
		for (count2 = 0; accept[count2] != '\0'; count2++)
		{
			if (s[count1] == accept[count2])
			{
				sum2++;
				break;
			}
		}
	}
       return (sum2);
}
