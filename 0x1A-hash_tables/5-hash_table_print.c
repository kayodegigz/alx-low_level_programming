#include "hash_tables.h"
/**
 * hash_table_print - prints the contents of the hash table
 *
 * @ht: the pointer to the hash table
 *
 * Return: returns nothing
 *
 * With the while(j < ht->size) loop here I'm trying to get the index of the
 * last non-NULL value cos array index pointing to NULL means there's
 * no L_list there, so I store each valid node index in k and skip d rest
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0, k;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	while (j < ht->size)
	{
		if (ht->array[j] != NULL)
			k = j;
		j++;
	}
	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		if (i == k)
		{
			while (tmp != NULL)
			{
				printf("\'%s\': \'%s\'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp)
					printf(", ");
			}
		}
		else
		{
			while (tmp != NULL)
			{
				printf("\'%s\': \'%s\', ", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}
		i++;
	}
	printf("}\n");
}
