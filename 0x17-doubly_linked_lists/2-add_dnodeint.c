#include "lists.h"
/**
 * dlistint_t - adds a node to the beginning of a linked list
 *
 * @head: the address of the pointer to the first node
 *
 * @n: the int value of the added node
 *
 * Return: returns the address of the new_node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
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

	temp = *head;
	new_node->prev = NULL;
	temp->prev = new_node;
	new_node->next = temp;
	*head = new_node;

	return (new_node);
}
