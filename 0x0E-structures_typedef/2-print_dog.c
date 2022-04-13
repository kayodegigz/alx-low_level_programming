#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints out a structure
 *
 * @d: the struct name
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name == NULL)
		{
			(*d).name = "nill";
		}
		/**
		 * else if ((char)((*d).age) == NULL)
		 * {
		 * char)((*d).age) = "(nill)";
		 * }
		 */
		else if ((*d).owner == NULL)
		{
			(*d).owner = "(nill)";
		}
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
