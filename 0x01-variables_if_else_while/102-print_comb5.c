#include <stdio.h>

/**
 * main - This is a main function
 * Description: Prints all possible combinations of two two-digit numbers
 * section header: Section description
 * Return: Always 0
 */

int main(void)
{
	int cnt1, cnt2, cnt3, cnt4;

	for (cnt1 = 0; cnt1 <= 9; cnt1++)
	{
		for (cnt2 = 0; cnt2 <= 9; cnt2++)
		{
			for (cnt3 = 0; cnt3 <= 9; cnt3++)
			{
				for (cnt4 = 0; cnt4 <= 9; cnt4++)
				{
					if (((cnt1 + cnt2) < (cnt3 + cnt4)) && (cnt2 < cnt4))
					{
						if ((cnt1 + cnt2 + cnt3 + cnt4) > 1)
						{
							putchar(44);
							putchar(32);
						}
						putchar(cnt1 + '0');
						putchar(cnt2 + '0');
						putchar(32);
						putchar(cnt3 + '0');
						putchar(cnt4 + '0');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
