#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defing a struct for dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name, *owner;
	float age;
} dog;
#endif

