#include <stdio.h>

/**
 *main - Main function
 *putchar - write a character, of unsigned char type, to stdout
 *Description: Display the alphabet in lower case and capital case
 *section header: Section description
 *Return: ends the code block
 */

int main(void)
{
	char lwcs = 'a';
	char cpcs = 'A';

	for (lwcs = 'a'; lwcs <= 'z'; lwcs++)
		putchar(lwcs);
	{
		for (cpcs = 'A'; cpcs <= 'Z'; cpcs++)
		putchar(cpcs);
		putchar('\n');
	}
	return (0);
}
