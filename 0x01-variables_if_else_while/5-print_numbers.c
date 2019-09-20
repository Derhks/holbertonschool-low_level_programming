#include <stdio.h>

/**
 *main - Main function
 *printf - write output to stdout
 *putchar - write a character, of unsigned char type, to stdout
 *Description: Display the number in base 10
 *section header: Section description
 *Return: ends the code block
 */

int main(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		if (numb <= 9)
		printf("%d", numb);
	}
	putchar('\n');
	return (0);
}
