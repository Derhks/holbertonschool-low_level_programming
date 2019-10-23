#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - This is the function prototype
 * @array: This variable recive the first value of the function main
 * @size: This variable is the size of the array
 * @action: This is a pointer to the function
 * Description: Function that executes a function
 * section header: Section description
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int cnt1;

	if (array != NULL && action != NULL)
	{
		for (cnt1 = 0; cnt1 < size; cnt1++)
		{
			action(array[cnt1]);
		}
	}
}
