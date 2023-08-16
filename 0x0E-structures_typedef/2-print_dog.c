#include "dog.h"
#include <stdio.h>

/**
 *print_dog - prints dog info
 *@d: struct d
 */
void print_dog(struct dog *d)
{
	struct dog *dog;

	if (d == NULL)
	{
		return;
	}
	dog = d;

	if (dog->name == NULL || dog->owner == NULL)
	{
		printf("nil");
	}

	printf("Name: %s\n", dog->name);
	printf("Age: %.6f\n", dog->age);
	printf("Owner: %s\n", dog->owner);
}
