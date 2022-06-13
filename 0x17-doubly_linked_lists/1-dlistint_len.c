#include "lists.h"

/**
 * dlistint_len - function returns the num of nodes in a linked list
 *
 * @h: the pointer to the head of the linked list
 *
 * Return: returns an unsigned int number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
