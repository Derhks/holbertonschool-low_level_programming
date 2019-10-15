#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - This is a function prototype
 * @str: This variable recive the first value of the function main
 * Description: Returns a pointer to a newly allocated space in memory
 * section header: Section description
 * Return: Return a pointer
 */

char *_strdup(char *str)
{
	int cnt1;
	char *strng;

	for (cnt1 = 0; str[cnt1] != '\0'; cnt1++)
	{
	}

	strng = malloc(sizeof(char) * cnt1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (strng == NULL)
	{
		return (NULL);
	}
	for (cnt1 = 0; str[cnt1] != '\0'; cnt1++)
	{
		strng[cnt1] = str[cnt1];
	}
	return (strng);
}
