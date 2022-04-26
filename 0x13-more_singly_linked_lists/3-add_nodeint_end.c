#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node;
    new_node = malloc(sizeof(listint_t));

    listint_t *last = *head;
    if (new_node)
        new_node->n = n;
        new_node->next = NULL;

        if (*head == NULL) /*If the node is empty*/
        {
            *head = new_node;
            return (new_node);
        }

        while (last->next != NULL)
        {
            last = last->next;
        }
        
        last->next = new_node;
        return(new_node);
        
    return (NULL);
}