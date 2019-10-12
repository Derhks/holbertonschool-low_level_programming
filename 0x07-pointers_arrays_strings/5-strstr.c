#include "holberton.h"

/**
 * *_strstr - This is a function prototype
 * @f: This variable recive the first value of the function main
 * @s: This variable recive the second value of the function main
 * Description: Function that locates a substring
 * section header: Section description
 * Return: The result of the prototype function to the main function
 */

char *_strstr(char *f, char *s)
{
	int cnt1;
	int cnt2;
	int cnt3;
	int pt = 0;

	for (cnt1 = 0; s[cnt1] != '\0'; cnt1++)
	{
	}
	for (cnt2 = 0; f[cnt2] != '\0'; cnt2++)
	{
		for (cnt3 = 0; s[cnt3] != '\0'; cnt3++)
		{
			if (f[cnt2] == s[cnt3] && f[cnt2 + 1] == s[cnt3 + 1])
			{
				pt = cnt2;
				cnt2++;
				if (f[pt] == s[0] && f[pt + (cnt1 - 1)] == s[cnt1 - 1])
				{
					return (f + pt);
				}
			}
		}
	}
	return ('\0');
}
