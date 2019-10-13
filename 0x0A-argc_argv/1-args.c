#include <stdio.h>

/**
 * main - This is the main function
 * @argc: The number of command line arguments
 * @argv: Containing the program command line arguments
 * Description: This function prints the number of arguments passed into it
 * section header: Section description
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
