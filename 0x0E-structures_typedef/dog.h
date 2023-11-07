#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data
 * @name: the name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
 */
typedef struct dog
{
	char *name, *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
