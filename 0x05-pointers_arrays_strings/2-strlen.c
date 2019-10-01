#include "holberton.h"

/**
 * _strlen - This is a function prototype
 * @s: This variable recive the value of the function main
 * Description: Function that returns the length of a string
 * section header: Section description
 * Return: Returns the counter value to the main function
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
