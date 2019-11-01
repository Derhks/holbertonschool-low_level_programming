#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - This is a function prototype
 * @head: Recive the value of the main function
 * Description: Function that frees a list_t list
 * section Header: Section description
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free_list(head->next);
	}
	free(head);
}
