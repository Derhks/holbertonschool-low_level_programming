#include <stdio.h>

/**
 * *main - This is a main function
 * Description: Prints exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * section header: Section description
 * Return: Returns always 1
 */

int main (void)
{
	char charts[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int count1;

	for (count1 = 0; charts[count1] != '\0'; count1++)
	{
		putchar(charts[count1]);
	}
	putchar('\n');
	return (1);
}
