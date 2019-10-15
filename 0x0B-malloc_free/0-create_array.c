#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - This is a function prototype
 * @size: This variable recive the first value of the main function
 * @c: This variable recive the second value of the main function
 * Description: Function that creates an array of chars
 * section header: Section description
 * Return: Array s
 */

char *create_array(unsigned int size, char c)
{
	unsigned int cnt1;
	char *s;

	s = (char *)malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (0);
	}
	for (cnt1 = 0; cnt1 <= size; cnt1++)
	{
		s[cnt1] = c;
	}
	return (s);
}
