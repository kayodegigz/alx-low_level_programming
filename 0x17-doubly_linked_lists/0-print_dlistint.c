#include "lists.h"

/**
 * print_dlistint - prints elements of a linked list
 *
 * @h: the pointer to the head node of the list
 *
 * Return: returns the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return num_nodes;
}
