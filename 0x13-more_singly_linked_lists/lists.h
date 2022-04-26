#ifndef _list_
#define _list_

/**
 * struct listint_t - a node that contains an int and a pointer
 *
 */

typedef struct listint_s
{
    int n;
    struct listint_s *next;
}listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif