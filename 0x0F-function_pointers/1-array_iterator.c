#include "function_pointers.h"

/**
 * array_iterator - a function thatiterates through a given array
 *
 * @array: the address of the array to be passed
 * @size: size of the array
 * @action: the function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
