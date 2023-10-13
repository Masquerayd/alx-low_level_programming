#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function returns the sum of all its parameters
 * @n: first int
 * Return: Returns the sum of all the arg
 */

int sum_them_all(const unsigned int n, ...)
{
/*
 * creating a variable function list called numbers
 */
	va_list numbers;
	unsigned int i;
	int sum = 0;
	int temp;

	if (n == 0)
	{
		return (0);
	}


/*
 * start the iteration process of numbers
 */
	va_start(numbers, n);

/*
 * The for loops is used to sum up all the values
 * every time numbers is accessed it iterates the the next argument
 */
	for (i = 0; i < n; i++)
	{
		temp = va_arg(numbers, int);
		sum = sum + temp;
	}
/*
 * We are now freeing va_list
 */
	va_end(numbers);
	_putchar('\n');

	return (sum);
}
