#include "main.h"

/**
 *get_bit - returns the bit value at a particular index
 *
 * @n: the number to be checked in decimal value
 *
 * @index: the index of the binary number
 *
 * Return: returns the bit value at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_at_index;

	if (index < 64)
	{
		bit_at_index = (n >> index) & 1;
		return (bit_at_index);
	}
	return (-1);
}
