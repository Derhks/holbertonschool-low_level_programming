#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - This is a function prototype
 * @array: It's a pointer to an array of integers
 * @size: It's the size of the array
 * @value: It's the target to search
 * Description: Function that search a value into an array
 * section Header: Section description
 * Return: -1 if the array is empty or NULL, otherwise the index of the target.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left_array = 0, right_array = size - 1;
	size_t mid_array = (left_array + right_array) / 2;
	size_t left, right;

	if (array != NULL)
	{
		while (left_array <= right_array)
		{
			left = left_array;
			right = right_array;
			printf("Searching in array: ");
			for (; left <= right; left++)
			{
				if (left < right)
					printf("%d, ", array[left]);
				else
					printf("%d\n", array[left]);
			}
			if (array[mid_array] < value)
				left_array = mid_array + 1;
			else if (array[mid_array] == value)
				return (mid_array);
			else if (array[mid_array] > value)
				right_array = mid_array - 1;
			mid_array = (left_array + right_array) / 2;
		}
	}
	return (-1);
}
