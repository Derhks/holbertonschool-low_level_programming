#include "holberton.h"

/**
 *print_alphabet - This is a function prototype
 *_putchar - write a character, of unsigned char type, to stdout
 *Description: Display the alphabet in lowercase
 *section header: Section description
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
