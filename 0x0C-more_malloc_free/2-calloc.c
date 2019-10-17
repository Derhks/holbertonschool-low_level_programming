#include "holberton.h"
#include <stdlib.h>

/**
 * *_calloc - This is a function prototype
 * @nmemb: This variable recive the first value of the function main
 * @size: This variable recive the second value of the function main
 * Description: Function that allocates memory for an array
 * section header: Section description
 * Return: Return a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int cnt1;
	char *array2d;

	if (nmemb < 1 || size < 1)
	{
		return (NULL);
	}

	array2d = malloc(nmemb * size);

	if (array2d == NULL)
	{
		return (NULL);
	}

	for (cnt1 = 0; cnt1 < (nmemb * size); cnt1++)
	{
		array2d[cnt1] = 0;
	}
	return (array2d);
}
