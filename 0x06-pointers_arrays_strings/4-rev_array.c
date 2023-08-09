#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverse the content of an array of integers
 *
 * @a: int a is a array of integers
 * @n: int n is the number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp;
	int initial = 0;

	while (initial < n / 2)
	{
		temp = a[initial];

		a[initial] = a[n - initial - 1];
		a[n - initial - 1] = temp;
		initial++;
	}
}
