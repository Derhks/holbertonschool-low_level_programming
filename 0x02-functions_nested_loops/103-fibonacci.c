#include <stdio.h>

/**
 * main - This is a main function
 * Description: Prints the sequence without exceed the value of 4,000,000
 * section header: Section description
 * Return: Always 0
 */

int main(void)
{
	unsigned long int cnt1;
	unsigned long int strd1, strd2, fbnc;

	for (cnt1 = 1; cnt1 <= 100; cnt1++)
	{
		if (cnt1 == 1)
		{
			strd1 = 1;
		}
		else if (cnt1 == 2)
		{
			strd2 = 2;
			printf("%lu", strd2);
		}
		else
		{
			fbnc = strd1 + strd2;
			if (fbnc % 2 == 0 && fbnc < 4000000)
			{
				printf(", %lu", fbnc);
			}
			strd1 = strd2;
			strd2 = fbnc;
		}
	}
	putchar('\n');
	return (0);
}
