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
	return (new_hash_t);
}
