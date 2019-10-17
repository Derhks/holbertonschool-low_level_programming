#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - This is a function prototype
 * @b: This variable recive the first value of the function main
 * Description: Function that allocates memory using malloc
 * section header: Section description
 * Return: Returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *mmry;

	mmry = malloc(b);

	if (mmry == NULL)
	{
		exit(98);
	}

	return (mmry);
}
