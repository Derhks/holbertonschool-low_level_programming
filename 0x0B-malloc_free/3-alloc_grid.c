#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - This is a function prototype
 * @width: This variable recive the first value of the function main
 * @height: This variable recive the second value of the function main
 * Description: Returns a pointer to a 2 dimensional array of integers
 * section header: Section description
 * Return: Return a pointer
 */

int **alloc_grid(int width, int height)
{
	int cnt1;
	int cnt2;
	int **array2d;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	array2d = malloc(sizeof(int *) * width);

	if (array2d == NULL)
	{
		return (NULL);
	}
	for (cnt1 = 0; cnt1 < width; cnt1++)
	{
		array2d[cnt1] = malloc(sizeof(int) * height);
	}
	for (cnt1 = 0; cnt1 < width; cnt1++)
	{
		for (cnt2 = 0; cnt2 < height; cnt2++)
		{
			array2d[cnt1][cnt2] = 0;
		}
	}
	return (array2d);
}