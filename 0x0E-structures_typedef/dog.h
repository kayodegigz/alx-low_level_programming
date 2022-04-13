#ifndef _dog_
#define _dog_
/**
 * struct dog - contains the details of the dog
 * @name: name of the dog
 *
 * @age: the age of the dog
 *
 * @owner: owner of te dog
 *
 * Description: the structure contains details of the dog
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
