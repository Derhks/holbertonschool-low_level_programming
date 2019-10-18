#include "holberton.h"
#include <stdlib.h>

/**
 * *_realloc - This is a function prototype
 * @ptr: This variable recive the first value of the function main
 * @old_size: This variable recive the second value of the function main
 * @new_size: This variable recive the third value of the function main
 * Description: Function that reallocates a memory block using malloc and free
 * section header: Section description
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *array;

	if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size < old_size)
	{
		array = malloc(new_size);
	}
}
