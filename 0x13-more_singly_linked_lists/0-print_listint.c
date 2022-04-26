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
	while (h)
	{
		printf("%d\n", h->num);
		h = h->next;
	}
}
