#include "lists.h"

/**
 * listint_len - This is a function prototype
 * @h: Recive a string from the main function
 * Description: Function that returns the number of elements in a linked
 * section Header: Section description
 * Return: Number of nodes, otherwise 0.
 */

size_t listint_len(const listint_t *h)
{
	int cnt1 = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt1++;
	}
	return (cnt1);
}
