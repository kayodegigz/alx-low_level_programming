#include "lists.h"

/**
 * get_dnodeint_at_index - returns address of the node at given index
 *
 * @head: address of the head node
 *
 * @index: index of the node to be returned
 *
 * Return: returns the address of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_count = 0;
	dlistint_t *temp = head;

	if (head == NULL)
	{
		return (NULL);
	}

	if (temp->next == NULL && node_count == index)
	{
		return (temp);
	}

	while (temp->next != NULL && node_count < index)
	{
		temp = temp->next;
		node_count++;
	}

	if (temp->next == NULL && index > node_count)
	{
		return (NULL);
	}

	return (temp);
}
