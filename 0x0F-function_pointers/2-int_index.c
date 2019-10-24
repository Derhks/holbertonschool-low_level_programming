#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - This is the function prototype
 * @array: This is a pointer and is the first parameter
 * @size: This is the size of the pointer
 * @cmp: This is a pointer to a function
 * Description: Function that searche for an integer
 * section header: Section description
 * Return: Return the index there is a match, otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int cnt1, match;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (cnt1 = 0; cnt1 < size; cnt1++)
		{
			match = cmp(array[cnt1]);

			if (match != 0)
			{
				return (cnt1);
			}
		}
	}
	return (-1);
}
