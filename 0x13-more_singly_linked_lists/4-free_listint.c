#include "lists.h"

/**
 * free_listint - This is a function prototype
 * @head: Recive the value of the main function
 * Description: Function that frees a listint_t list
 * section Header: Section description
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
	}
	free(head);
}
