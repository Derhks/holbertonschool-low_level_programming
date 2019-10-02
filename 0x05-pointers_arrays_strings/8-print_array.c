#include "holberton.h"
#include <stdio.h>

/**
 * print_array - This is a function prototype
 * @a: This variable recive the value of the function main
 * @n: This variable recive the value of the function main
 * Description: Function that prints n elements of an array of integers
 * section header: Section description
 */

void print_array(int *a, int n)
{
	int count;

	while(count < n)
	{
		if (n - 1 == count)
		{
			printf("%d", a[count]);
		}
		else
		{
			printf("%d, ", a[count]);
		}
		count++;
	}
	putchar('\n');
}
