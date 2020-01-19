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
	hash_node_t *new_node_beg = NULL;

	if (ht == NULL || key == NULL)
		return (0);
	new_node_beg = malloc(sizeof(hash_node_t));
	if (new_node_beg == NULL)
		return (0);
	new_node_beg->key = (char *)key;
	new_node_beg->value = strdup(value);
	node_handler(ht, new_node_beg);
	return (1);
}

/**
 * node_handler - This is a function prototype
 * @ht: Pointer to the hash table
 * @node: Pointer to the new node
 * Description: Function that adds an element to the hash table
 * section Header: Section description
 *
 */

void node_handler(hash_table_t *ht, hash_node_t *node)
{
	unsigned long int itr = 0;
	hash_node_t *tmp = NULL;

	itr = key_index((const unsigned char *)node->key, ht->size);
	if (ht->array[itr] != NULL)
	{
		tmp = ht->array[itr];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, node->key) == 0)
				break;
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			node->next = ht->array[itr];
			ht->array[itr] = node;
		}
		free(tmp->value);
		tmp->value = strdup(node->value);
		free(node->value);
		free(node->key);
		free(node);
	}
	node->next = NULL;
	ht->array[itr] = node;
}
