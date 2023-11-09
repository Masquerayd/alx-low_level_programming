#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the args
 * @n: the number of args
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i, sum = 0;

	va_start(add, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(add, int);
	}
	va_end(add);
	return (sum);
}
