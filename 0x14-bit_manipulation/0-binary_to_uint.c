#include "main.h"

/**
 * binary_to_uint - converts a binary string to a decimal number
 *
 * @b: the string of binary ints
 *
 * Return: returns an unsigned int value
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int len = 0; /*going to store the len of the string*/
	int raised_to_power = 1;
	unsigned int dec_value = 0;

    if(!b)
    {
        return (0);
    }

	while (b[i] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			dec_value += raised_to_power;
		}
		raised_to_power *= 2;
	}
	return (dec_value);
}
