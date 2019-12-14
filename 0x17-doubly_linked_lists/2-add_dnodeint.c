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
		return (0);
	}

	dlistint_t *new_node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}
}
