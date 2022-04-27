#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of the list
 *
 * @head: address of the first node
 *
 * @n: the value to be added to the node
 *
 * Return: returns an address to the final node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last = *head;

	new_node = malloc(sizeof(listint_t));


	if (new_node == NULL)
	{
		return (NULL);
	}


	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL) /*If the node is empty*/
	{
		*head = new_node;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}

		last->next = new_node;
	}
	return (*head);
	free(new_node);
}
