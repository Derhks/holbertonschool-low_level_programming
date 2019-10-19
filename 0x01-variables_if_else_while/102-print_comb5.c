#include <stdio.h>

/**
 * main - This is a main function
 * Description: Prints all possible combinations of two two-digit numbers
 * section header: Section description
 * Return: Always 0
 */

int main(void)
{
	int cnt1, cnt2;

	for (cnt1 = 0; cnt1 <= 99; cnt1++)
	{
		for (cnt2 = 0; cnt2 <= 99; cnt2++)
		{
			if (cnt1 < cnt2)
			{
				putchar((cnt1 / 10) + '0');
				putchar((cnt1 % 10) + '0');
				putchar(32);
				putchar((cnt2 / 10) + '0');
				putchar((cnt2 % 10) + '0');
				if (!(cnt1 == 98 && cnt2 == 99))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
