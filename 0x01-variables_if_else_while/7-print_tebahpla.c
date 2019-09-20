#include <stdio.h>

/**
 *main - Main function
 *printf - write output to stdout
 *putchar - write a character, of unsigned char type, to stdout
 *Description: Display the alphabet in reverse using putchar
 *section header: Section description
 *Return: ends the code block
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
