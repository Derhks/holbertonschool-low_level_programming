#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - This is a function prototype
 * @min: This variable recive the first value of the function main
 * @max: This variable recive the second value of the function main
 * Description: Function that creates an array of integers
 * section header: Section description
 * Return: Return a pointer
 */

int *array_range(int min, int max)
{
	int cnt1;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * ((max - min) + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	for (cnt1 = min; cnt1 <= (max - min); cnt1++)
	{
		array[cnt1] = cnt1;
	}

	return (array);
}
