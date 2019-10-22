#include "dog.h"
#include <stdio.h>

/**
 * init_dog - This is the function prototype
 * @d: This variable recive the first value of the function main
 * @name: This variable recive the second value of the function main
 * @age: This variable recive the third value of the function main
 * @owner: This variable recive the fouth value of the function main
 * Description: Function that initialize a variable of type struct dog
 * section header: Section description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
