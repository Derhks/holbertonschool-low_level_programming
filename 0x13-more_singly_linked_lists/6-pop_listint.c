#include "lists.h"

/**
 * pop_listint - This is a function prototype
 * @head: Recive the value of the main function
 * Description: Function that deletes the head node of a listint_t linked list
 * section Header: Section description
 * Return: The head node’s data (n), otherwise 0
 */

int pop_listint(listint_t **head)
{
	int vartemp = 0;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	vartemp = (temp)->n;
	*head = temp->next;
	free(temp);
	return (vartemp);
}
