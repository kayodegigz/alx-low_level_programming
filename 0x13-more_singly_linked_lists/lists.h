#ifndef _list_
#define _list_

#include <stdio.h>

/**
 * struct listint_s - a node that contains an int and a pointer
 *
 * @n: value in struct
 *
 * @next: pointer to the next value
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif

