#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - struct for dog info
 * @d: stuct dog address
 * @name: nsame of dog
 * @age: age of dog
 * @owner: owner of do
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dog_info;

	if (d == NULL)
	{
		return;
	}
	dog_info = d;
	dog_info->name = name;
	dog_info->age = age;
	dog_info->owner = owner;
}


