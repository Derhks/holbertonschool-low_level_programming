#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - This is a function prototype
 * @d: This variable recive the first value of the function main
 * Description: Function that frees dogs
 * section header: Section description
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
