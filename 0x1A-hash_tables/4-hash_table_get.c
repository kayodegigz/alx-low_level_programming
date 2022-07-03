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

	/**
	* first cond is for if there's no node at the index
	* second cond is for if the hash table is NULL
	* third is for if key is NULL
	* fourth is for when key is an empty string
	*/
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	while (temp != NULL)
	{
		/*check if key is a match*/
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
