#include "lists.h"

/**
 * add_nodeint_end - This is a function prototype
 * @head: Recive pointer to pointer
 * @n: Recive a number from the main function
 * Description: Function that adds a new node at the end of a listint_t list
 * section Header: Section description
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}
