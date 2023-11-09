#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: the array that will be executed by the function
 * @size: the size of the array
 * @action: the function that will executed
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t count = 0;
/*
 * checks for NUll pointers
 */
	if (array == NULL || action == NULL)
	{
		return;
	}
/*
 * applies all the array elements to the function
 */
	while (count != size)
	{
		action(array[count]);
		count++;
	}
}
