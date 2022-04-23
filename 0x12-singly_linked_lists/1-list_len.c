#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t num_elements;

	num_elements = 0;
	while (h)
	{
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}
