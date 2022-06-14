#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 *
 * @h: the address of the pointer to the head node
 *
 * @idx: the index to be inserted
 *
 * @n: the int value in the new node
 *
 * Return: returns the address of the new_node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int node_count = 0;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (node_count == idx)
	{/*add node at index 0 to an empty list*/
		if (temp == NULL)
		{
			new_node->prev = NULL;
			new_node->next = temp;
			*h = new_node;
			return (new_node);
		}
		else /*if temp is not NULL and element added to add to front*/
		{
			new_node->prev = NULL;
			new_node->next = temp;
			temp->prev = new_node;
			*h = new_node;
			return (new_node);
		}
	}
	while (temp->next != NULL && node_count < idx)
	{
		temp = temp->next;
		node_count++;
	}
	if (temp->next == NULL && idx > node_count)
		return (NULL);
	new_node->prev = temp->prev;
	new_node->next = temp;
	(temp->prev)->next = new_node;
	temp->prev = new_node;
	return (new_node);
}
