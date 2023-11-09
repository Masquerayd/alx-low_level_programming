#include "variadic_functions.h"

/**
 * print_strings - prints string in args
 * @separator: separator
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *temp;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, char *);
		if (temp == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", temp);
		}
		if (i + 1 < n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
