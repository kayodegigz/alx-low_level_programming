#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *temp;
	char *value_dup;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	hash_node_t *new_h_node = malloc(sizeof(hash_node_t));
	if (new_h_node == NULL)
		return (0);
	value_dup = strdup(value);
	if (value_dup == NULL)
		return (1);
	new_h_node->key = key;
	new_h_node->value = value_dup;
	index = key_index(key);
	temp = ht->array[index];

	if (ht->array[index] == NULL) /*if there's no l_list at index*/
	{
		ht->array[index] = new_h_node;
		new_h_node->next = NULL;
		return (1);
	}
	else
	{
		while (temp->next != NULL)
		{
			if (strcmp(new_h_node->key, temp->key) == 0)
			{
				free(temp->value);
				temp->value = new_h_node->value;
				return (1);
			}
			temp = temp->next;
		}
		new_h_node->next = ht->array[index]->next;
		ht->array[index] = new_h_node;
	}
}
