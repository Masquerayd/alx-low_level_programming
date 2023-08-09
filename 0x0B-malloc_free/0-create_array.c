#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes them
 * @size: the size of the array
 * @c: the char to initialiaze the array
 * Return: a pointer , or null char
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int count = 0;

/*
 * creates a dynamics memory of size size
 */
	array = malloc(sizeof(char) * size);
/*
 * appends char c to array size times
 */
	for (count = 0; count <= size; count++)
	{
		array[count] = c;

	}

/*
 * checks if they was an error allocating memory
 */
	if (c != '\0')
	{

		if (array == NULL || size == 0)
		{
			return ('\0');
		}
		else
		{
			return (array);
		}
	}
	return (array);
}

