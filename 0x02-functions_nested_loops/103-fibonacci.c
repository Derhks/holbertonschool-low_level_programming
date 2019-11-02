#include <stdio.h>

/**
 * main - This is a main function
 * Description: Prints the sum of the even-valued terms (sequence of fibonacci)
 * section header: Section description
 * Return: Always 0
 */

int main(void)
{
	unsigned long int cnt1;
	unsigned long int strd1 = 1, strd2 = 2, fbnc, smfbnc = 2;

	for (cnt1 = 1; cnt1 <= 30; cnt1++)
	{
		fbnc = strd1 + strd2;

		if (fbnc % 2 == 0 && fbnc <= 4000000)
		{
			smfbnc += fbnc;
		}
		strd1 = strd2;
		strd2 = fbnc;
	}
	printf("%lu", smfbnc);
	putchar('\n');
	return (0);
}
