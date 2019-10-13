#include <stdio.h>

/**
 * main - This is the main function
 * @argc: The number of command line arguments
 * @argv: Containing the program command line arguments
 * Description: This function display the name of the program
 * section header: Section description
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
