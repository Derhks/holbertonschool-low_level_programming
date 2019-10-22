#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - This is the function prototype
 * @name: This variable recive the first value of the function main
 * @age: This variable recive the second value of the function main
 * @owner: This variable recive the thirth value of the function main
 * Description: Function that creates a new dog
 * section header: Section description
 * Return: Return a pointer
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
