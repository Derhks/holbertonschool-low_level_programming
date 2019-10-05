#include "holberton.h"

/**
 * *leet - This is a function prototype
 * @s: This variable recive the value of the function main
 * Description: Function that encodes a string into 1337
 * section header: Section description
 * Return: Returns the result of the prototype function to the main function
 */

char *leet(char *s)
{
	char lwr_lttr[] = "aeotl";
	char ppr_lttr[] = "AEOTL";
	char numbs[5] = {'4', '3', '0', '7', '1'};
	int count1;
	int count2;

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		for (count2 = 0; lwr_lttr[count2] != '\0'; count2++)
		{
			if ((s[count1] == lwr_lttr[count2]) || (s[count1] == ppr_lttr[count2]))
			{
				s[count1] = numbs[count2];
			}
		}
	}
	return (s);
}
