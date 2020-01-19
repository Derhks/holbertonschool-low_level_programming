#include "hash_tables.h"

/**
 * hash_table_t *hash_table_create - This is a function prototype
 * @size: Is the size of the array
 * Description: Function that creates a hash table
 * section Header: Section description
 * Return: A pointer, the address of the new hash table, otherwise NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;
	unsigned long int itr = 0;

	if (size == 0)
		return (NULL);
	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}
	new_hash_table->size = size;
	for (itr = 0; itr < size; itr++)
		new_hash_table->array[itr] = NULL;
	return (new_hash_table);
}
