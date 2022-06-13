#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a linked list
 *
 * @head: address of the pointer to the first node
 *
 * @n: int value of the node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = NULL;
	return (new_node);
}
