#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - This is a function prototype
 * @str: This variable recive the first value of the function main
 * Description: Returns a pointer to a newly allocated space in memory
 * section header: Section description
 * Return: Return a pointer
 */

char *_strdup(char *str)
{
	int cnt1;
	char *strng;

	if (str == NULL)
	{
		return (NULL);
	}
	for (cnt1 = 0; str[cnt1] != '\0'; cnt1++)
	{
	}
	strng = (char *)malloc((sizeof(char) * cnt1) + 1);
	if (strng == NULL)
	{
		free(strng);
		return (NULL);
	}
	for (cnt1 = 0; str[cnt1] != '\0'; cnt1++)
	{
		strng[cnt1] = str[cnt1];
	}
	strng[cnt1] = '\0';
	return (strng);
}

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
	char *p, *r;

	new_prr = malloc(sizeof(dog_t));
	if (new_prr == NULL)
	{
		free(new_prr);
		return (NULL);
	}
	p = _strdup(name);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	r = _strdup(owner);
	if (r == NULL)
	{
		free(r);
		return (NULL);
	}
	new_prr->name = name;
	new_prr->age = age;
	new_prr->owner = owner;
	return (new_prr);
}
