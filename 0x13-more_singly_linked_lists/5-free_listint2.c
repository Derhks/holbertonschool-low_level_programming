#include "lists.h"

/**
 * free_listint2 - This is a function prototype
 * @head: Recive the value of the main function
 * Description: Function that frees a listint_t list
 * section Header: Section description
 */

void free_listint2(listint_t **head)
{
	listint_t *temporal = *head;
	listint_t *next;

	while (temporal != NULL)
	{
		next = temporal->next;
		free(temporal);
		temporal = next;
	}
	*head = NULL;
}
