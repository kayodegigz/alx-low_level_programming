#include "lists.h"
/**
 * print_list - prints all the elements of a list list_t.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */


size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (!h->str)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
