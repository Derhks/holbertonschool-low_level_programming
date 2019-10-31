#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - This is a function prototype
 * @h: Recive a string from the main function
 * Description: Function that prints all the elements of a list_t list
 * section Header: Section description
 * Return: Number of nodes, otherwise 0.
 */

size_t print_list(const list_t *h)
{
	int cnt1 = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		cnt1++;
	}
	return (cnt1);
}
