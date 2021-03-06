#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a linked list
 *
 * @head: address of the pointer to the first node
 *
 * @n: int value of the node
 *
 * Return: returns the address of the new  node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

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
