#include "lists.h"

/**
 * add_nodeint - adding a node to the beginning of the node
 *
 * @head: pointer to the first node
 * @n: the number to be added
 * Return: returns the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}

	return (NULL);
	free(new);
}
