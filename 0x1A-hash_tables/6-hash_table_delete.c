#include "hash_tables.h"

/**
 * hash_table_delete - This is a function prototype
 * @ht: Pointer to the hash table
 * Description: Function that deletes a hash table
 * section Header: Section description
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int itr = 0;
	hash_node_t *tmp = NULL, *tmp_2 = NULL;

	if (ht != NULL)
	{
		for (itr = 0; itr <= ht->size; itr++)
		{
			tmp = ht->array[itr];
			while (tmp != NULL)
			{
				tmp_2 = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = tmp_2;
			}
		}
		free(ht->array);
		free(ht);
	}
}
