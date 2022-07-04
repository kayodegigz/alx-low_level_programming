#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;

	if (ht)
	{
		while (i < ht->size)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = tmp->next;
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
