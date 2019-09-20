#include <stdio.h>

/**
 *main - Main function
 *putchar - write a character, of unsigned char type, to stdout
 *Description: Display teh numbers from 00 to 99
 *section header: Section description
 *Return: ends the code block
 */

int main(void)
{
	int numb1;
	int numb2;

	for (numb1 = 48; numb1 <= 57; numb1++)
	{
		for (numb2 = 48; numb2 <= 57; numb2++)
		{
			putchar(numb1);
			putchar(numb2);
			if (!(numb1 == 57 && numb2 == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
