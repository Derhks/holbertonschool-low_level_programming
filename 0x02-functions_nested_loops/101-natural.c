#include <stdio.h>

/**
 * main - This is a main function
 * Description: Prints the sum of all the multiples of 3 or 5 below 1024
 * section header: Section description
 * Return: Always 0
 */

int main(void)
{
	int cnt1, sm;

	for (cnt1 = 0; cnt1 < 1024; cnt1++)
	{
		if ((cnt1 % 3) == 0 || (cnt1 % 5) == 0)
		{
			sm += cnt1;
		}
	}
	printf("%d\n", sm);
	return (0);
}
