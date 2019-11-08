#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - This is a function prototype
 * @s: This variable recive the value of the function main
 * Description: Function that returns the length of a string
 * section header: Section description
 * Return: Returns the counter value to the main function
 */

int _strlen(const char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * binary_to_uint - This is a function prototype
 * @b: This variable recive the string of the function main
 * Description: Function that converts a binary number to an unsigned int
 * section header: Section description
 * Return: Returns the decimal value
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}

	unsigned int decimal = 0;
	int cnt1, binario = 0, largo = _strlen(b) - 1;

	for (cnt1 = 0; b[cnt1] != '\0'; cnt1++)
	{
		if (b[cnt1] == '0' || b[cnt1] == '1')
		{
			continue;
		}
		else
		{
			return (0);
		}
	}

	for (cnt1 = 0; largo >= 0; cnt1++, largo--)
	{
		if (b[largo] == '0')
		{
			binario = 0;
		}
		if (b[largo] == '1')
		{
			binario = 1;
		}

		binario = binario << cnt1;
		decimal = decimal | binario;
	}
	return (decimal);
}
