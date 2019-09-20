#include <stdio.h>

/**
 *main - Main function
 *putchar - write a character, of unsigned char type, to stdout
 *Description: Display all the numbers of base 16 in lowercase
 *section header: Section description
 *Return: ends the code block
 */

int main(void)
{
	int numb;
	char letter;

	for (numb = 48; numb <= 57; numb++)
	{
		putchar(numb);
		if (numb == 57)
		{
			for (letter = 'a'; letter <= 'f'; letter++)
			{
				putchar(letter);
			}
		}
	}
	putchar('\n');
	return (0);
}
