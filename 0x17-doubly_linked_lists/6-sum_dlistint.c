#include "lists.h"

/**
 * sum_dlistint - This is a function prototype
 * @head: Recive a pointer, the address of a node
 * Description: function that returns the sum of all the data of a linked list
 * section Header: Section description
 * Return: The sum of all the nodes, otherwise 0.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int cnt = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		cnt += tmp->n;
	}
	return (cnt);
}
