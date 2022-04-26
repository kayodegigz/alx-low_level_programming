#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 *
 * @h: pointer to the first node
 *
 * Return: returns a size_t data type
 */

size_t listint_len(const listint_t *h)
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
