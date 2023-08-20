#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all the indefinite arg that are supplied
 * @n: int arg to add
 * Return: returns the sum of all the arg
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int count = 0;
	unsigned int value;

	va_start(list, n);
	while (count < n)
	{
		value = va_arg(list, unsigned int);
		sum = sum + value;
		count++;
	}
	va_end(list);
	return (sum);
}

