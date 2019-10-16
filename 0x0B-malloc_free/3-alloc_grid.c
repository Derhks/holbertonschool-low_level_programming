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
	int **array2d;

	array2d = malloc(sizeof(int *) * width);

	for (cnt1 = 0; cnt1 < width; cnt1++)
	{
		array2d[cnt1] = malloc(sizeof(int) * height);
	}
	return (array2d);
}
