#include "lists.h"

/**
 * print_dlistint - This is a function prototype
 * @h: Recive a pointer from the main function
 * Description: Function that prints all the elements of a dlistint list
 * Section header: Section description
 * Return: Number of nodes, otherwise 0.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int cnt = 0;

	while (h != NULL)
	{
		cnt++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cnt);
}
