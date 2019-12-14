#include "lists.h"

/**
 * dlistint_len - This is a function prototype
 * @h: Recive a string from the main function
 * Description: Function that counts the number of lists there are
 * section Header: Section description
 * Return: Number of nodes, otherwise 0.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
