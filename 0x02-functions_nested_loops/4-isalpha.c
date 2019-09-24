#include "holberton.h"

/**
 *_isalpha - This is a function prototype
 *@c: is a parameter, it recive the results from function main
 *Description: Display 1 if the letter is lowercase or uppercase and 0 if don't
 *section header: Section description
 *Return: 1 if the letter is lowercase and 0 if don't
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
