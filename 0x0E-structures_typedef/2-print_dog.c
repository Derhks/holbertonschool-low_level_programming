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
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
