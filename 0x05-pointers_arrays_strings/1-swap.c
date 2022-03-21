#include "main.h"
/**
 * swap_int - swaps two integers
 *
 * @a: the first integer to be swapped
 * @b: the 2nd integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
