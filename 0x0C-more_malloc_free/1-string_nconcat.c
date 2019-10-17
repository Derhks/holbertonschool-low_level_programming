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

	cnt1 = _strlen(s1);
	cnt2 = _strlen(s2);

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


/**
 * _strlen - This is a function prototype
 * @s: This variable recive the value of the function main
 * Description: Function that returns the length of a string
 * section header: Section description
 * Return: Returns the counter value to the main function
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
