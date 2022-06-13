#include "lists.h"

/**
 * free_dlistint - frees memory allocated for all the nodes
 *
 * @head: the address of the head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
