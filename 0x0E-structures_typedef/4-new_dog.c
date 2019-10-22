#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - This is the function prototype
 * @d: This variable recive the first value of the function main
 * Description: Function that prints a struct dog
 * section header: Section description
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_prr;

	new_prr = malloc(sizeof(dog_t));
	if (new_prr == NULL)
	{
		return (NULL);
	}
	new_prr->name = name;
	new_prr->age = age;
	new_prr->owner = owner;
	return (new_prr);
}
