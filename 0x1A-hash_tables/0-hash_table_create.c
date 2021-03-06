#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 *
 * @size: The size of the hash table
 *
 * Return: returns the pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_t = malloc(sizeof(hash_table_t));

	if (new_hash_t == NULL)
	{
		return (NULL);
	}

	new_hash_t->size = size;
	new_hash_t->array = calloc(size, sizeof(hash_node_t *));

	if (new_hash_t->array == NULL)
	{
		return (NULL);
	}

	return (new_hash_t);
}
