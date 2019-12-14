#include "lists.h"

/**
 * insert_dnodeint_at_index - This is a function prototype
 * @h: Recive a double pointer, the address of a list
 * @idx: Recive the index
 * @n: Receive a const type integer
 * Description: Function that adds a node at the end of the list
 * section Header: Section description
 * Return: A pointer, the address of the new node, otherwise NULL.
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cnt = 0;
	dlistint_t *tmp;
	dlistint_t *new_node;

	if (h == NULL)
	{
		return (NULL);
	}

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	tmp = *h;

	while (tmp != NULL)
	{
		if (cnt == idx)
		{
			new_node->n = n;
			new_node->next = tmp->next;
			tmp->next->prev = new_node;
			tmp->prev->next = new_node;
			new_node->prev = tmp->prev;
			break;
		}
		else
		{
			cnt++;
			tmp = tmp->next;
		}
	}
	return (new_node);
}
