#include "hash_tables.h"

/**
 * hash_table_print - This is a function prototype
 * @ht: Pointer to the hash table
 * Description: Function that prints a hash table
 * section Header: Section description
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int itr = 0;
	hash_node_t *tmp = NULL;
	int cnt = 0;

	printf("{");
	if (ht != NULL)
	{
		for (itr = 0; itr < ht->size; itr++)
		{
			tmp = ht->array[itr];
			while (tmp != NULL)
			{
				if (cnt)
					printf(", ");
				printf("\'%s\': \'%s\'", tmp->key, tmp->value);
				tmp = tmp->next;
				cnt++;
			}
		}
	}
	printf("}\n");
}
