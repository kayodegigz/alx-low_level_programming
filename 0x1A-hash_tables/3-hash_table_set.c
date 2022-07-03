#include "hash_tables.h"

/**
 * hash_table_set - sets key values for an item
 *
 * @ht: pointer to hash tanle
 *
 * @key: key of the node
 *
 * @value: value accociated with key
 *
 * Return: 1 if successful, 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *temp;
	char *value_dup;
        hash_node_t *new_h_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
        index = key_index((const unsigned char *)key, ht->size);

	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);
	temp = ht->array[index];
	while (temp != NULL) /*go thru d whole l_list to see if the key exists*/
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = value_dup;
			return (1);
		}
		temp = temp->next;
	}

	new_h_node = malloc(sizeof(hash_node_t));
	if (new_h_node == NULL)
		return (0);
	new_h_node->key = strdup(key);
	if (new_h_node->key == NULL)
		return (0);
        new_h_node->value = value_dup;
	/*if (ht->array[index] == NULL) if there's no l_list at index*/
	/*{
		ht->array[index] = new_h_node;
		new_h_node->next = NULL;
		return (1);
	}*/
	new_h_node->next = ht->array[index]->next;
	ht->array[index] = new_h_node;
	return (1);

	/*else
	{
		new_h_node->next = ht->array[index]->next;
		ht->array[index] = new_h_node;
		return (1);
	}*/
}
