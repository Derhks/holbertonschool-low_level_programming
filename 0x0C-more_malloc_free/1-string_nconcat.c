#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - This is a function prototype
 * @s1: This variable recive the first value of the function main
 * @s2: This variable recive the second value of the function main
 * @n: This variable recive the third value of the function main
 * Description: Function that concatenates two strings
 * section header: Section description
 * Return: Return a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int cnt1, cnt2;
	char *strncat;

	(s1 == NULL) ? s1 = "" : s1;
	(s2 == NULL) ? s2 = "" : s2;

	for (cnt1 = 0; s1[cnt1] != '\0'; cnt1++)
	{
	}
	for (cnt2 = 0; s2[cnt2] != '\0'; cnt2++)
	{
	}

	if (n >= cnt2)
	{
		strncat = malloc(sizeof(char) * (cnt1 + cnt2) + 1);
	}
	else
	{
		strncat = malloc(sizeof(char) * (cnt1 + n) + 1);
	}

	if (strncat == NULL)
	{
		return (NULL);
	}
	for (cnt1 = 0; s1[cnt1] != '\0'; cnt1++)
	{
		strncat[cnt1] = s1[cnt1];
	}

	for (cnt2 = 0; (s2[cnt2] != '\0') && (cnt2 < n); cnt2++)
	{
		strncat[cnt1 + cnt2] = s2[cnt2];
	}
	strncat[cnt1 + cnt2] = '\0';
	return (strncat);
}
