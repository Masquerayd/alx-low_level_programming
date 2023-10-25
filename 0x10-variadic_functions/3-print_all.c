#include "variadic_functions.h"
/**
 * printstr - prints string
 * @str: string to check
 * Return: nothing
 */
void printstr(char *str)
{
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}


/**
 * print_all - prints indefinte amount of sting , char or number
 * @format: indicates if its a string , char or number
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int count = 0, flag1 = 0;
	char *str;

	va_start(arg, format);

	while (*(format + count) != '\0')
	{
		flag1 = 0;
		switch (*(format + count))
		{
			case 'i':
				printf("%d", va_arg(arg, int));
				flag1 = 1;
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				flag1 = 1;
				break;
			case 'c':
				printf("%c", va_arg(arg, int));
				flag1 = 1;
				break;
			case 's':
				str = va_arg(arg, char *);
				printstr(str);
				flag1 = 1;
				break;
		}
		if (format[count + 1] != '\0' && flag1 == 1)
		{
			printf(", ");
		}
		count++;
	}
	printf("\n");
	va_end(arg);
}
