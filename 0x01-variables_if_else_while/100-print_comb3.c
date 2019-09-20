#include <stdio.h>

/**
 *main - Main function
 *putchar - write a character, of unsigned char type, to stdout
 *Description: Display the numbers from 00 to 99, less the same numbers
 *section header: Section description
 *Return: ends the code block
 */

int main(void)
{
	int numb1;
	int numb2;

	for (numb1 = '0'; numb1 <= '9'; numb1++)
	{
		for (numb2 = '0'; numb2 <= '9'; numb2++)
		{
			if ((numb1 != numb2) && (numb1 < numb2))
			{
				putchar(numb1);
				putchar(numb2);
				if (!((numb1 == '8') && (numb2 == '9')))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
