#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints a all the items in the list
 *
 * @h: address of the first node
 *
 * Return: returns an int of size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
