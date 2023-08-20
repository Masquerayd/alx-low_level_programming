#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints indefinite strings passed as arguments
 * @separator: The separator that will be used to separate the numbers
 * @n: The number of integers that will be passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int count = 0;
	char *string;


	va_start(list, n);
	while (count < n)
	{
		string = va_arg(list, char *);
		if ((count > 0 && count <= (n - 1)) && separator != NULL)
		{
			printf("%s", separator);
		}

		if (string != NULL)
		{
			printf("%s", string);
		}
		if (string == NULL)
		{
			printf("(nil)");


		}
		count++;
	}
	va_end(list);
	printf("\n");
}

