#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog data
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a new dog data
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(*new));

	if (new == NULL)
	{
		return (NULL);
	}

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
