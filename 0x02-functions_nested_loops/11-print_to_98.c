#include <stdio.h>

/**
 *print_to_98 - This is a function prototype
 *@n: This variable recive the value of the function main
 *Description: Prints all natural numbers from n to 98
 *section header: Section description
 */

void print_to_98(int n)
{
	int cnt1;

	if (n <= 98)
	{
		for (cnt1 = n; cnt1 <= 98; cnt1++)
		{
			if (cnt1 == 98)
			{
				printf("%d", cnt1);
			}
			else
			{
				printf("%d, ", cnt1);
			}
		}
	}
	if (n > 98)
	{
		for (cnt1 = n; cnt1 >= 98; cnt1--)
		{
			if (cnt1 == 98)
			{
				printf("%d", cnt1);
			}
			else
			{
				printf("%d, ", cnt1);
			}
		}
	}
	printf("\n");
}
