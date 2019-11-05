#include "lists.h"

/**
 * _strlen - This is a function prototype
 * @s: This variable recive the value of the function main
 * Description: Function that returns the length of a string
 * section header: Section description
 * Return: Returns the counter value to the main function
 */

int _strlen(const char *s)
{
	int cnt = 0;

	while (s[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}

/**
 * add_nodeint - This is a function prototype
 * @head: Recive pointer to pointer
 * @n: Recive a number from the main function
 * Description: Adds a new node at the beginning of a listint_t list
 * section Header: Section description
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
