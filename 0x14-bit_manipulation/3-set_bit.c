#include "main.h"

/**
 * set_bit - sets the bit value at a particular index to 1
 *
 * @n: an unsigned long int
 * @index: the index whose bit value will be changed
 * Return: returns an int value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_or_checker;

	if (index > 64)
	{
		return (-1);
	}

	bit_or_checker = 1 << index;
	*n = (*n | bit_or_checker);
	return (1);
}
