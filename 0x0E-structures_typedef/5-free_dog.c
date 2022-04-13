#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory space for dog
 *
 * @d: the pointer to a memory space
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
