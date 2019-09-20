#include <stdio.h>

/**
 *main - Main function
 *putchar - write a character, of unsigned char type, to stdout
 *Description: Display the alphabet in lowercase except the letters q and e
 *section header: Section description
 *Return: ends the code block
 */

int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		if (letter !=  'e' && letter != 'q')
		{
			putchar (letter);
		}
	}
	putchar ('\n');
	return (0);

}
