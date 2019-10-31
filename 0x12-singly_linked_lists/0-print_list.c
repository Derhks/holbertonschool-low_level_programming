#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * _strlen - This is a function prototype
 * @s: This variable recive the value of the function main
 * Description: Function that returns the length of a string
 * section header: Section description
 * Return: Returns the counter value to the main function
 */

int _strlen(char *s)
{
	int cnt = 0;

	while (s[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}

/**
 * print_list - This is a function prototype
 * @h: Recive a string from the main function
 * Description: Function that prints all the elements of a list_t list
 * section Header: Section description
 * Return: h
 */

size_t print_list(const list_t *h)
{
	int cnt1 = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		while (h != NULL)
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
			h = h->next;
			cnt1++;
		}
	}
	return (cnt1);
}
