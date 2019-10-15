#include <stdio.h>

/**
 *times_table - This is a function prototype
 *Description: Display the 9 times table
 *section header: Section description
 *Return: end of the function main
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
