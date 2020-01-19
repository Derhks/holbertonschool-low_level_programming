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

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_table->array == NULL)
		return (NULL);
	new_hash_table->size = size;

	return (new_hash_table);
}
