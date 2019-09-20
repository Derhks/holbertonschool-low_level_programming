#include <stdio.h>

/**
 *main - Main function
 *printf - write output to stdout
 *putchar - write a character, of unsigned char type, to stdout
 *Description: Display the numbers in base 10 using putchar
 *section header: Section description
 *Return: ends the code block
 */

int main(void)
{
	int numb;

	for (numb = 48; numb <= 57; numb++)
	{
		if (numb <= 57)
			putchar(numb);
	}
	putchar('\n');
	return (0);
}
