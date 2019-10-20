#include <stdio.h>

/**
 * main - This is a main function
 * Description: Prints the first 50 Fibonacci numbers, starting with 1 and 2
 * section header: Section description
 * Return: Always 0
 */

int main(void)
{
	long int cnt1, strd1, strd2, fbnc;

	for (cnt1 = 1; cnt1 <= 50; cnt1++)
	{
		if (cnt1 == 1)
		{
			strd1 = 1;
			printf("%d, ", strd1);
		}
		else if (cnt1 == 2)
		{
			strd2 = 2;
			printf("%d", strd2);
		}
		else
		{
			fbnc = strd1 + strd2;
			printf(", %d", fbnc);
			strd1 = strd2;
			strd2 = fbnc;
		}
	}
	putchar('\n');
	return (0);
}
