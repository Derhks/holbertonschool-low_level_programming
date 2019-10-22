#include "dog.h"
#include <stdio.h>

/**
 * print_dog - This is the function prototype
 * @d: This variable recive the first value of the function main
 * Description: Function that prints a struct dog
 * section header: Section description
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}

	if (d->name == NULL || d->owner == NULL)
	{
		printf("(nil)");
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
