#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * add_node - This is a function prototype
 * @head: Recive pointer to pointer
 * @str: Recive a string from the main function
 * Description: Function that adds a new node at the beginning of a list_t list
 * section Header: Section description
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
