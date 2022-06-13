#include "lists.h"


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t* moving_node; /*this node will traverse thru the list 4rm d head*/
	listint_t* prev; /*the node that follows moving node*/
	unsigned int node_counter;

	moving_node = *head;
	node_counter = 0;

	if ((*head) == NULL)
	{
		return (-1);
	}

	if ((*head) != NULL && node_counter == index) 
	/**check if the head node should be removed*/
	{
		*head = moving_node->next;
		free(moving_node);
		return (1);
	}


	while (moving_node->next != NULL && node_counter < index)
	/**move through the list to check for the node before index */
	{
		prev = moving_node;
		moving_node = moving_node->next;
		node_counter++;
	}

	if (moving_node->next == NULL && index > node_counter)
	{
		return (-1); 
	/**means the index is out of range cos if it wasn't it'd not reach the NULL address*/
	}

	prev->next = moving_node->next;
	free(moving_node);
	return (1);
}
