#include "function_pointers.h"

/**
 * array_iterator - executes the given function on each of the elements
 * @array: the Array
 * @size: the size of the array
 * @action: function to excute
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t count = 0;

	if (action == NULL || array == NULL)
	{
		return;
	}

	for (count = 0; count < size; count++)
	{
		(action)(array[count]);
	}
}
