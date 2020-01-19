#include "hash_tables.h"

/**
 * key_index - This is a function prototype
 * @size: Is the size of the array
 * @key: Is a string
 * Description: Function that gives you the index of a key
 * section Header: Section description
 * Return: The index at which the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2((unsigned char *)key);
	return (hash % size);
}
