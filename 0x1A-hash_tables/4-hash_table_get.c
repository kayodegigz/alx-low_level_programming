#include "hash_tables.h"

/**
 * hash_table_get - gets the value at a given key
 *
 * @ht: pointer to the hash table
 *
 * @key: the key to be looked up
 *
 * Return: returns the associated value if successful, NULL if not
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *temp = ht->array[index];

	if (ht->array[index] == NULL)
		return NULL;

	while (temp != NULL)
	{
		if (strcmp(temp->key, key))
		{
			return temp->value;
		}
		temp = temp->next;
	}
	return NULL;
}
