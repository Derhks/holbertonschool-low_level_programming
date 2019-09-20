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
	int numb1;
	int numb2;
	int numb3;

	for (numb1 = '0'; numb1 <= '9'; numb1++)
	{
		for (numb2 = '0'; numb2 <= '9'; numb2++)
		{
			for (numb3 = '0'; numb3 <= '9'; numb3++)
			{
				if ((numb1 != numb2) && (numb1 != numb3) && (numb2 != numb3))
				{
					if ((numb1 < numb2) && (numb2 < numb3))
					{
						putchar(numb1);
						putchar(numb2);
						putchar(numb3);
						if (!(numb1 == '7' && numb2 == '8' && numb3 == '9'))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
