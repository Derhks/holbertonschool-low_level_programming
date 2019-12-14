#include "lists.h"

/**
 * add_dnodeint - This is a function prototype
 * @head: Recive a double pointer, the address of a list
 * @n: Receive a const type integer
 * Description: Function that adds a node at the beginning of the list
 * section Header: Section description
 * Return: A pointer, the address of the new node, otherwise 0.
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (head == NULL)
	{
		return (NULL);
	}

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		new_node->next = (*head);
		new_node->prev = NULL;
		(*head)->prev = new_node;
	}
	(*head) = new_node;
	return (new_node);
}
