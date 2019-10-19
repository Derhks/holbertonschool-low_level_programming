#include <stdio.h>

/**
 *main - This is a main function
 *Description: Prints all possible different combinations of three digits
 *section header: Section description
 *Return: Always 0
 */

int main(void)
{
	int cnt1, cnt2, cnt3;

	for (cnt1 = '0'; cnt1 <= '9'; cnt1++)
	{
		for (cnt2 = '0'; cnt2 <= '9'; cnt2++)
		{
			for (cnt3 = '0'; cnt3 <= '9'; cnt3++)
			{
				if ((cnt1 != cnt2) && (cnt1 != cnt3) && (cnt2 != cnt3))
				{
					if ((cnt1 < cnt2) && (cnt2 < cnt3))
					{
						putchar(cnt1);
						putchar(cnt2);
						putchar(cnt3);
					if (!(cnt1 == '7' && cnt2 == '8' && cnt3 == '9'))
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
