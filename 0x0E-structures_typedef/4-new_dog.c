#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - store dog info in a new struct
 * @name: dog name
 * @owner: owners name
 * @age: dogs age
 * Return: copy of name and age
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
