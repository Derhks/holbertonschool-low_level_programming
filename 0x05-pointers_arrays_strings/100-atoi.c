#include "holberton.h"

/**
 * _atoi - This is a function prototype
 * @s: This variable recive the value of the function main
 * Description: Function that convert a string to an integer
 * section header: Section description
 * Return: Returns the counter value to the main function
 */

int _atoi(char *s)
{
	int count1;
	int count2 = 0;
	unsigned int numbers = 0;

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		if (s[count1] == '-')
		{
			count2++;
		}
		if ((s[count1] >= '0') && (s[count1] <= '9'))
		{
			numbers = ((10 * numbers) + (s[count1] - 48));

			if (s[count1 + 1] < '0' || s[count1 + 1] > '9')
			{
				break;
			}
		}
	}
	if (count2 % 2 == 0)
	{
		return (numbers);
	}
	else
	{
		return (-numbers);
	}
}
