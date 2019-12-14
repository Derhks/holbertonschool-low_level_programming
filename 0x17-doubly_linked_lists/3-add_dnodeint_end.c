#include "lists.h"

/**
 * add_dnodeint_end - This is a function prototype
 * @head: Recive a double pointer, the address of a list
 * @n: Receive a const type integer
 * Description: Function that adds a node at the end of the list
 * section Header: Section description
 * Return: A pointer, the address of the new node, otherwise 0.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
		new_node->prev = tmp;
	}
	return (new_node);
}
