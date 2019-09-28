#include <stdio.h>
/**
 *main - This is the main function
 *Description: Prints the largest prime factor of the number 612852475143
 *section header: Section description
 *Return: End of the block of code
 */

int main(void)
{
	long number = 612852475143;
	int max_prime;

	for (max_prime = 2; max_prime <= number; max_prime++)
	{
		if ((number % max_prime) == 0)
		{
			number = number / max_prime;
			printf("%d\n", max_prime);
			max_prime--;
		}
	}
	return (0);
}
