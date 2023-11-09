#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers passed as arguments
 * @separator: the separator between the numbers
 * @n: the number of integers passed into the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i + 1 < n && separator != NULL)
		{
			printf("%s ", separator);
		}
	}
	va_end(args);
	printf("\n");

}

