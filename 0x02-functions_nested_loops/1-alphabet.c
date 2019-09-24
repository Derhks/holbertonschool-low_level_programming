#include "holberton.h"

/**
 *main - Main function
 *_putchar - write a character, of unsigned char type, to stdout
 *Description: Display Holberton
 *section header: Section description
 *Return: ends the code block
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
