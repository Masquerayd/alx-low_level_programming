#include "function_pointers.h"

/**
 * int_index - searches for an integer in the array
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: the function that will be used to search for the array
 * Return: -1 if not element or the index number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0, value = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);

	}
	else if (size <= 0)
	{
		return (-1);
	}

	while (count != size && value == 0)
	{
		value = cmp(array[count]);

		if (value != 0)
		{
			return (count);
		}
		count++;
	}
	return (-1);
}

