#include <stdio.h>

/**
 * main - This is the main function
 * Description: Prints the name of the file it was compiled from
 * section header: Section description
 * Return: Always 0
 */

int main(void)
{

	printf("%s\n", __FILE__);
	return (0);
}
