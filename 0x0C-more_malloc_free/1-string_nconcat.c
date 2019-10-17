#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - This is a function prototype
 * @s1: This variable recive the first value of the function main
 * @s2: This variable recive the second value of the function main
 * @n: This variable recive the third value of the function main
 * Description: Function that concatenates two strings
 * section header: Section description
 * Return: Return a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int cnt1;
	unsigned int cnt2;
	char *strcat;

	for (cnt1 = 0; s1[cnt1] != '\0'; cnt1++)
	{
	}

	for (cnt2 = 0; s2[cnt2] != '\0'; cnt2++)
	{
	}

	strcat = malloc((sizeof(char) * (cnt1 + n)) + 1);

	if (strcat == NULL)
	{
		return (NULL);
	}

	for (cnt1 = 0; s1[cnt1] != '\0'; cnt1++)
	{
		strcat[cnt1] = s1[cnt1];
	}
	if (n > cnt2)
	{
		for (cnt2 = 0; s2[cnt2] != '\0'; cnt2++)
		{
			strcat[cnt1 + cnt2] = s2[cnt2];
		}
	}
	if (n < cnt2)
	{
		for (cnt2 = 0; cnt2 <= n; cnt2++)
		{
			strcat[cnt1 + cnt2] = s2[cnt2];
		}
	}
	return (strcat);
}
