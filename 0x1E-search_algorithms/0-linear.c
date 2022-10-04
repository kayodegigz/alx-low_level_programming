#include "search_algos.h"

/**
 * linear_search - searches an array using a linear search algo
 *
 * @array: pointer to d first element of the array
 *
 * @size: size of the array
 *
 * @value: value to be searched
 *
 * Return: index of d matched value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
