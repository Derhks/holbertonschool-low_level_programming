#include "holberton.h"
#include <stdlib.h>

/**
 * *argstostr - This is a function prototype
 * @ac: This variable recive the first value of the function main
 * @av: This variable recive the second value of the function main
 * Description: Function that frees a 2 dimensional grid
 * section header: Section description
 * Return: Returns a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *strcat;
	int cnt1;
	int cnt2;
	int cnt3 = 0;
	int cnt4 = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (cnt1 = 0; cnt1 < ac; cnt1++)
	{
		for (cnt2 = 0; av[cnt1][cnt2] != '\0'; cnt2++)
		{
			cnt3++;
		}
	}

	strcat = (char *) malloc((sizeof(char) * cnt3) + 1);

	if (strcat == NULL)
	{
		return (NULL);
	}

	for (cnt1 = 0; cnt1 < ac; cnt1++)
	{
		for (cnt2 = 0; av[cnt1][cnt2] != '\0'; cnt2++)
		{
			strcat[cnt4] = av[cnt1][cnt2];
			cnt4++;
		}
		strcat[cnt4] = '\n';
		cnt4++;
	}
	return (strcat);
}
