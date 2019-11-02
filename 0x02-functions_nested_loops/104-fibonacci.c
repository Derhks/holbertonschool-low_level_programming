#include <stdio.h>

/**
 * main - This is a main function
 * Description: Prints the first 98 Fibonacci numbers, starting with 1 and 2
 * section header: Section description
 * Return: Always 0
 */

int main(void)
{
	long double cnt1, strd1, strd2, fbnc;

	for (cnt1 = 1; cnt1 <= 98; cnt1++)
	{
		if (cnt1 == 1)
		{
			strd1 = 1;
			printf("%.0Lf ", strd1);
		}
		else if (cnt1 == 2)
		{
			strd2 = 2;
			printf("%.0Lf", strd2);
		}
		else
		{
			fbnc = strd1 + strd2;
			printf(", %.0Lf", fbnc);
			strd1 = strd2;
			strd2 = fbnc;
		}
	}
	putchar('\n');
	return (0);
}
