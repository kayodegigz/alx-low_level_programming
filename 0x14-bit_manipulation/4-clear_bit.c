#include "main.h"

/**
 * clear_bit - sets the bit value at a particular index to 0
 *
 * @n: an unsigned long int
 * @index: the index whose bit value will be changed
 * Return: returns an int value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_checker;

	if (index > 64)
	{
		return (-1);
	}

	bit_checker = 1 << index;

	if (*n & bit_checker)
	{
		*n = *n ^ bit_checker;
	}
	return (1);
}
