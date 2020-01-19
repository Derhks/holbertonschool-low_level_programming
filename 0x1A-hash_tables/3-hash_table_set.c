#include "hash_tables.h"

/**
 * hash_table_set - This is a function prototype
 * @ht: Pointer to the hash table
 * @key: Is a string
 * @value: Is a string
 * Description: Function that adds an element to the hash table
 * section Header: Section description
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node_beg = NULL, *tmp = NULL;
	unsigned long int itr = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	new_node_beg = malloc(sizeof(hash_node_t));
	if (new_node_beg == NULL)
		return (0);
	new_node_beg->key = (char *)key;
	new_node_beg->value = strdup(value);
	tmp = ht->array[itr];
	if (ht->array != NULL)
	{
		tmp = ht->array[itr];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, new_node_beg->key) == 0)
				break;
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			new_node_beg->next = ht->array[itr];
			ht->array[itr] = new_node_beg;
		}
		free(tmp->value);
		tmp->value = strdup(new_node_beg->value);
		free(new_node_beg->value);
		free(new_node_beg->key);
		free(new_node_beg);
	}
	new_node_beg->next = NULL;
	ht->array[itr] = new_node_beg;
	return (1);
}
