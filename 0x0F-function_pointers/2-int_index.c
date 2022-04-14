#include "function_pointers.h"

/**
 * int_index - a function that returns an index
 *
 * @array: the array of ints to be checked
 * @size: the size of the array
 * @cmp: a pointer to the array
 * Return: returns -1 if the function is unsuccessful
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
