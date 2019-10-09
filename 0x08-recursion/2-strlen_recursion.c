#include "holberton.h"

/**
 * _strlen_recursion - This is a function prototype
 * @s: This variable recive the first value of the function main
 * Description: Function that returns the length of a string
 * section header: Section description
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
