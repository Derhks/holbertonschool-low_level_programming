#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * list_len - This is a function prototype
 * @h: Recive a string from the main function
 * Description: Function that prints all the elements of a list_t list
 * section Header: Section description
 * Return: Number of nodes, otherwise 0.
 */

size_t list_len(const list_t *h)
{
	int cnt1 = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt1++;
	}
	return (cnt1);
}
