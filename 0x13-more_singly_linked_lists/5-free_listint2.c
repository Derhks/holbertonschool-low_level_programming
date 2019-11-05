#include "lists.h"

/**
 * free_listint2 - This is a function prototype
 * @head: Recive the value of the main function
 * Description: Function that frees a listint_t list
 * section Header: Section description
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (*head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
