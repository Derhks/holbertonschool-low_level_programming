#include "lists.h"

/**
 * print_listint - This is a function prototype
 * @h: Recive a number from the main function
 * Description: Function that prints all the elements of a listint_t list
 * section Header: Section description
 * Return: Number of nodes, otherwise 0.
 */

size_t print_listint(const listint_t *h)
{
	int cnt1 = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt1++;
	}
	return (cnt1);
}
