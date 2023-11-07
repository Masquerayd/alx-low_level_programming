#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data
 * @name: the name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
 */
struct dog
{
	char *name, *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
