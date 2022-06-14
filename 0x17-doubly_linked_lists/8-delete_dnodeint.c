#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 *
 * @head: address of the pointer to the head
 *
 * @index: index of node to be deleted
 *
 * Return: returns 1 if successful, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int node_counter = 0;

	if (temp == NULL)
		return (-1);

	if (node_counter == index)
	{
		if (temp->next == NULL)
		{
			*head = NULL;
			free(temp);
			return (1);
		}
		else
		{
			temp->next->prev = NULL;
			*head = temp->next;
			free(temp);
			return (1);
		}
	}
	while (temp->next != NULL && node_counter < index)
	{
		temp = temp->next;
		node_counter++;
	}
	if (temp->next == NULL && index > node_counter)
		return (-1);
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
