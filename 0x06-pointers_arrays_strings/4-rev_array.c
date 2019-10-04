#include "holberton.h"

/**
 * reverse_array - This is a function prototype
 * @a: This variable recive the value of the function main
 * @n: This variable recive the value of the function main
 * Description: Function that reverses the content of an array of integers
 * section header: Section description
 */

void reverse_array(int *a, int n)
{
	{
		int count1 = 0;
		unsigned int numb;

		n -= 1;

		while (count1 < n)
		{
			numb = a[count1];
			a[count1] = a[n];
			a[n] = numb;
			count1++;
			n--;
		}
	}
}
