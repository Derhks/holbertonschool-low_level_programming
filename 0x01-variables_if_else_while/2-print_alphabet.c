#include <stdio.h>
/**
 *main - Main function
 *putchar - write a character, of unsigned char type to stdout
 *Description: Display the alphabet in lower case
 *section header: Section description
 *Return: ends the code block
 */

int main(void)
{
	char lower = 'a';
		for (lower = 'a'; lower <= 'z'; lower++)
			putchar(lower);
		putchar('\n');
	return (0);
}
