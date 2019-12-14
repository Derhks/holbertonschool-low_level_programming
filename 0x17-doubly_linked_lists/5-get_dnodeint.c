#include "lists.h"

/**
 * get_dnodeint_at_index - This is a function prototype
 * @head: Recive a double pointer, the address of a list
 * @index: Recive the index of the node
 * Description: Function that returns the nth node of linked list
 * section Header: Section description
 * Return: The address of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int cnt = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	tmp = head;

	while (tmp != NULL)
	{
		if (cnt == index)
		{
			break;
		}
		else
		{
			cnt++;
			tmp = tmp->next;
		}
	}
	return (tmp);
}
