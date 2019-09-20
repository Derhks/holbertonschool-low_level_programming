#include <stdio.h>

/**
 *main - Main function
 *putchar - write a character, of unsigned char type, to stdout
 *Description: Display the numbers from 0 to 9
 *section header: Section description
 *Return: ends the code block
 */

int main(void)
{

	int numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb);
		if (!(numb == '9'))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
