#include "holberton.h"

/**
 *print_alphabet_x10 - This is a function prototype
 *_putchar - write a character, of unsigned char type, to stdout
 *Description: Display the alphabet in lowercase ten times
 *section header: Section description
 */

void print_alphabet_x10(void)
{
	char alpha;
	int times;

	for (times = '0'; times <= '9'; times++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
