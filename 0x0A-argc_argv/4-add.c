#include <stdio.h>

/**
 *_isdigit - This is a function prototype
 *@c:  This variable recive the value of the function main
 *Description: Checks for a digit (0 through 9)
 *section header: Section description
 *Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _atoi - This is a function prototype
 * @s: This variable recive the value of the function main
 * Description: Function that convert a string to an integer
 * section header: Section description
 * Return: Returns the counter value to the main function
 */

int _atoi(char *s)
{
	int count1;
	int count2 = 0;
	unsigned int numbers = 0;

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		if (s[count1] == '-')
		{
			count2++;
		}
		if ((s[count1] >= '0') && (s[count1] <= '9'))
		{
			numbers = ((10 * numbers) + (s[count1] - 48));

			if (s[count1 + 1] < '0' || s[count1 + 1] > '9')
			{
				break;
			}
		}
	}
	if (count2 % 2 == 0)
	{
		return (numbers);
	}
	else
	{
		return (-numbers);
	}
}

/**
 * main - This is the main function
 * @argc: The number of command line arguments
 * @argv: Containing the program command line arguments
 * Description: This function prints the result of adds positive numbers
 * section header: Section description
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int cnt1;
	int cnt2;
	int sm = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
		for (cnt1 = 1; cnt1 < argc; cnt1++)
		{
			for (cnt2 = 0; argv[cnt1][cnt2] != '\0'; cnt2++)
			{
				if (!(_isdigit(argv[cnt1][cnt2])))
				{
					printf("Error\n");
					return (1);
				}
				else
				{
					sm += _atoi(argv[cnt1]);
				}
			}
		}
	printf("%d\n", sm);
	return (0);
}
