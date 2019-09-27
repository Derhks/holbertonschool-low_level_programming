#include <stdio.h>

/**
 *main - This is the main function
 *Description: Prints the numbers from 1 to 100
 *section header: Section description
 *Return: End of the block of code
 */

int main(void)
{
	int tst;

	for (tst = 1; tst <= 100; tst++)
	{
		if (((tst % 3) == 0) && ((tst % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else if ((tst % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((tst % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", tst);
		}
		if(tst < 100)
		{
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
