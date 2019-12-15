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
	unsigned int cnt, cnt1 = 0;
	dlistint_t *tmp, *tmp1, *new_node;

	if (h == NULL)
		return (NULL);
	tmp = *h;
	tmp1 = *h;
	for (cnt = 0; tmp != NULL; cnt++)
		tmp = tmp->next;
	if (idx > cnt)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (tmp1 != NULL)
	{
		if (cnt1 == idx)
		{
			new_node->next = tmp1->next;
			new_node->prev = tmp1;
			if (tmp1->next != NULL)
				tmp1->next->prev = new_node;
			tmp1->next = new_node;
			break;
		}
		cnt1++;
		tmp1 = tmp1->next;
	}
	return (new_node);
}
