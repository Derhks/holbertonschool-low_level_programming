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
	unsigned long int hash_index = 0;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	new_node_beg = malloc(sizeof(hash_node_t));
	if (new_node_beg == NULL)
		return (0);
	new_node_beg->key = strdup(key);
	new_node_beg->value = strdup(value);
	hash_index = key_index((unsigned char *)key, ht->size);
	if (ht->array[hash_index] == NULL)
	{
		new_node_beg->next = NULL;
		ht->array[hash_index] = new_node_beg;
		return (1);
	}
	if (ht->array[hash_index] != NULL)
	{
		tmp = ht->array[hash_index];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, new_node_beg->key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(new_node_beg->value);
				free(new_node_beg->key);
				free(new_node_beg->value);
				free(new_node_beg);
				return (1);
			}
			tmp = tmp->next;
		}
		new_node_beg->next = ht->array[hash_index];
		ht->array[hash_index] = new_node_beg;
		return (1);
	}
	return (0);
}
