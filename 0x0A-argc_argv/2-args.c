#include <stdio.h>

/**
 * main - This is the main function
 * @argc: The number of command line arguments
 * @argv: Containing the program command line arguments
 * Description: This function display all arguments it receives
 * section header: Section description
 * Return: Always 0
 */

int  main(int argc, char *argv[])
{
	int cnt1;

	for (cnt1 = 0; cnt1 < argc; cnt1++)
	{
		printf("%s\n", argv[cnt1]);
	}
	return (0);
}
