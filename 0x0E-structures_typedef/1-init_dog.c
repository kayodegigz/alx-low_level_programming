#include "dog.h"

/**
 * init_dog - function that contains arguments
 * struct dog - contains details of the dog
 *
 * @d: the name of the struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Description: contains the details of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
