#include "lists.h"

/**
 * free_dlistint - This is a function prototype
 * @head: Recive a double pointer, the address of a list
 * Description: Function that frees each of the nodes in the list
 * section Header: Section description
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	else
	{
		while (head != NULL)
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
	}
}
