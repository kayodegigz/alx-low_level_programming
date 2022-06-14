#include "lists.h"

/**
 * sum_dlistint - function sums up all the elements of a linked list
 *
 * @head: the pointer to the head node of the list
 *
 * Return: returns the sum of all elements
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return sum;
}
