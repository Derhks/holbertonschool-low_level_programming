#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - This is a function prototype
 * @array: It's a pointer to an array of integers
 * @size: It's the size of the array
 * @value: It's the target to search
 * Description: Function that search a value into an array
 * section Header: Section description
 * Return: -1 if the array is empty or NULL, otherwise the index of the target.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t itr = 0;

	if (array != NULL)
	{
		for (itr = 0; itr < size; itr++)
		{
			printf("Value checked array[%lu] = [%d]\n", itr, array[itr]);
			if (array[itr] == value)
				return (itr);
		}
	}
	return (-1);
}
