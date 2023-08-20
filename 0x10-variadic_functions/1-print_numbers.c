#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints indefinite numbers followed by a newline
 * @separator: The separator that will be use to seperate the numbers
 * @n: The number of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int count = 0;
	int value;

	va_start(list, n);
	while (count < n)
	{
		value = va_arg(list, int);
		printf("%d", value);
		if ((count == 1 || count < (n - 1)) && separator != NULL)
		{
			printf("%s", separator);
		}
		count++;
	}
	va_end(list);
	printf("\n");
}
