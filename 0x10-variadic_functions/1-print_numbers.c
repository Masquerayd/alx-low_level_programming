#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints and indefinite amount of numbers given
 * @separator: the symbol that will be used to separate the numbers
 * @n: The number
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i = 0;
	unsigned int num;

	va_start(numbers, n);


	while(i < n)
	{
		
		num = va_arg(numbers, unsigned int);
		printf("%d", num);
		if ((i + 1) < n && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(numbers);
}
