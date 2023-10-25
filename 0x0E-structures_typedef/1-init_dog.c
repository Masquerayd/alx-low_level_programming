#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize's the varibles of dog
 * @d: pointer to the dog struct
 * @name: name of dog
 * @owner: name of owner
 * @age: the age of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
