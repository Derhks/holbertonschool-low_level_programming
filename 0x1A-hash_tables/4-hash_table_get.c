#include "hash_tables.h"

/**
 * *hash_table_get - This is a function prototype
 * @ht: It's a pointer to the memory address of the hash table
 * @key: This is a string
 * Description: Function that retrieves a value associated with a key
 * section Header: Section description
 * Return: The value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int hash_idx = key_index((unsigned char *)key, ht->size);

	if (ht != NULL)
	{
		if (key == NULL || *key == '\0')
			return (NULL);
		tmp = ht->array[hash_idx];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
				break;
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return (NULL);
		return (tmp->value);
	}
	return (NULL);
}
